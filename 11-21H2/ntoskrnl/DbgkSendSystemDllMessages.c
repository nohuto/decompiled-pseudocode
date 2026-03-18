/*
 * XREFs of DbgkSendSystemDllMessages @ 0x140927394
 * Callers:
 *     DbgkCreateThread @ 0x140702604 (DbgkCreateThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x140927D44 (DbgkpPostFakeThreadMessages.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     RtlStringCbCopyW @ 0x1402E0978 (RtlStringCbCopyW.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     PsWow64GetProcessNtdllType @ 0x140672A7C (PsWow64GetProcessNtdllType.c)
 *     PsQuerySystemDllInfo @ 0x1406AD624 (PsQuerySystemDllInfo.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     DbgkpQueueMessage @ 0x1409283F4 (DbgkpQueueMessage.c)
 *     DbgkpSendApiMessage @ 0x14092A070 (DbgkpSendApiMessage.c)
 */

int __fastcall DbgkSendSystemDllMessages(_QWORD *a1, struct _KEVENT *a2, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // r14
  _DWORD *v7; // rdi
  int i; // esi
  _DWORD *v9; // r9
  struct _KTHREAD *v10; // r12
  __int64 SListFaultAddress; // rbx
  __int64 v12; // rax
  struct _KTHREAD *v13; // rcx
  _QWORD *v14; // r11
  char v16; // [rsp+30h] [rbp-108h]
  wchar_t *Teb; // [rsp+38h] [rbp-100h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-B8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-88h] BYREF
  _BYTE v21[48]; // [rsp+C0h] [rbp-78h] BYREF

  memset(v21, 0, sizeof(v21));
  IoStatusBlock = 0LL;
  LODWORD(CurrentThread) = 0;
  memset(&ObjectAttributes, 0, 44);
  if ( a1 )
  {
    Process = (_KPROCESS *)a1[68];
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    Process = CurrentThread->ApcState.Process;
  }
  v7 = a3 + 12;
  for ( i = 0; i < 6; ++i )
  {
    CurrentThread = (struct _KTHREAD *)PsQuerySystemDllInfo(i);
    v10 = CurrentThread;
    if ( CurrentThread )
    {
      if ( i <= 0
        || (CurrentThread->Header.LockNV & 8) != 0
        && Process[1].Affinity.StaticBitmap[30]
        && (LODWORD(CurrentThread) = PsWow64GetProcessNtdllType((__int64)Process), i == (_DWORD)CurrentThread) )
      {
        *(_OWORD *)v7 = 0LL;
        *((_OWORD *)v7 + 1) = 0LL;
        Teb = 0LL;
        SListFaultAddress = (__int64)v10->SListFaultAddress;
        *((_QWORD *)v7 + 1) = SListFaultAddress;
        if ( a1 && i )
        {
          v16 = 1;
          KiStackAttachProcess(Process, 0LL, (__int64)v21, v9);
        }
        else
        {
          v16 = 0;
        }
        v12 = RtlImageNtHeader(SListFaultAddress);
        if ( v12 )
        {
          v7[4] = *(_DWORD *)(v12 + 12);
          v7[5] = *(_DWORD *)(v12 + 16);
        }
        if ( !a1 )
        {
          v13 = KeGetCurrentThread();
          if ( (v13->MiscFlags & 0x400) != 0 || v13->ApcStateIndex == 1 )
            Teb = 0LL;
          else
            Teb = (wchar_t *)v13->Teb;
          if ( Teb )
          {
            RtlStringCbCopyW(Teb + 2356, 0x20AuLL, (NTSTRSAFE_PCWSTR)v10->InitialStack);
            v14 += 5;
            *v14 = Teb + 2356;
            *((_QWORD *)v7 + 3) = v14;
          }
        }
        if ( v16 )
          KiUnstackDetachProcess((__int64)v21, 0LL);
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 1600;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&v10->Header.WaitListHead;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenFile((PHANDLE)v7, 0x80100000, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u) < 0 )
          *(_QWORD *)v7 = 0LL;
        *a3 = 5242920;
        a3[1] = 8;
        a3[10] = 5;
        if ( a1 )
        {
          LODWORD(CurrentThread) = DbgkpQueueMessage(Process, a1, a2);
          if ( (int)CurrentThread < 0 && *(_QWORD *)v7 )
            LODWORD(CurrentThread) = ObCloseHandle(*(HANDLE *)v7, 0);
        }
        else
        {
          LODWORD(CurrentThread) = DbgkpSendApiMessage(Process);
          if ( *(_QWORD *)v7 )
            LODWORD(CurrentThread) = ObCloseHandle(*(HANDLE *)v7, 0);
          if ( Teb )
            *((_QWORD *)Teb + 5) = 0LL;
        }
      }
    }
  }
  return (int)CurrentThread;
}
