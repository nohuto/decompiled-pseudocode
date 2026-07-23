/*
 * XREFs of sub_140927394 @ 0x140927394
 * Callers:
 *     sub_140702604 @ 0x140702604 (sub_140702604.c)
 *     sub_140927D44 @ 0x140927D44 (sub_140927D44.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_1402E0978 @ 0x1402E0978 (sub_1402E0978.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     sub_140672A7C @ 0x140672A7C (sub_140672A7C.c)
 *     sub_1406AD624 @ 0x1406AD624 (sub_1406AD624.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     sub_1409283F4 @ 0x1409283F4 (sub_1409283F4.c)
 *     sub_14092A070 @ 0x14092A070 (sub_14092A070.c)
 */

int __fastcall sub_140927394(_QWORD *a1, struct _KEVENT *a2, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v6; // r14
  _DWORD *v7; // rdi
  int i; // esi
  __int64 v9; // r9
  struct _KTHREAD *v10; // r12
  void *v11; // rbx
  PIMAGE_NT_HEADERS v12; // rax
  struct _KTHREAD *v13; // rcx
  _QWORD *v14; // r11
  char v16; // [rsp+30h] [rbp-108h]
  __int64 v17; // [rsp+38h] [rbp-100h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-B8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-88h] BYREF
  _BYTE v21[48]; // [rsp+C0h] [rbp-78h] BYREF

  memset(v21, 0, sizeof(v21));
  IoStatusBlock = 0LL;
  LODWORD(CurrentThread) = 0;
  memset(&ObjectAttributes, 0, 44);
  if ( a1 )
  {
    v6 = (_QWORD *)a1[68];
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v6 = (_QWORD *)*((_QWORD *)CurrentThread + 23);
  }
  v7 = a3 + 12;
  for ( i = 0; i < 6; ++i )
  {
    CurrentThread = (struct _KTHREAD *)sub_1406AD624(i);
    v10 = CurrentThread;
    if ( CurrentThread )
    {
      if ( i <= 0
        || (*(_DWORD *)CurrentThread & 8) != 0
        && v6[176]
        && (LODWORD(CurrentThread) = sub_140672A7C((__int64)v6), i == (_DWORD)CurrentThread) )
      {
        *(_OWORD *)v7 = 0LL;
        *((_OWORD *)v7 + 1) = 0LL;
        v17 = 0LL;
        v11 = (void *)*((_QWORD *)v10 + 3);
        *((_QWORD *)v7 + 1) = v11;
        if ( a1 && i )
        {
          v16 = 1;
          sub_14030D5C0((ULONG_PTR)v6, 0LL, (__int64)v21, v9);
        }
        else
        {
          v16 = 0;
        }
        v12 = RtlImageNtHeader(v11);
        if ( v12 )
        {
          v7[4] = v12->FileHeader.PointerToSymbolTable;
          v7[5] = v12->FileHeader.NumberOfSymbols;
        }
        if ( !a1 )
        {
          v13 = KeGetCurrentThread();
          if ( (*((_DWORD *)v13 + 29) & 0x400) != 0 || *((_BYTE *)v13 + 586) == 1 )
            v17 = 0LL;
          else
            v17 = *((_QWORD *)v13 + 30);
          if ( v17 )
          {
            sub_1402E0978((_WORD *)(v17 + 4712), 0x20AuLL, *((_QWORD *)v10 + 5));
            v14 += 5;
            *v14 = v17 + 4712;
            *((_QWORD *)v7 + 3) = v14;
          }
        }
        if ( v16 )
          sub_1402D0930((__int64)v21, 0LL);
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 1600;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)((char *)v10 + 8);
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenFile((PHANDLE)v7, 0x80100000, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u) < 0 )
          *(_QWORD *)v7 = 0LL;
        *a3 = 5242920;
        a3[1] = 8;
        a3[10] = 5;
        if ( a1 )
        {
          LODWORD(CurrentThread) = sub_1409283F4(v6, a1, a2);
          if ( (int)CurrentThread < 0 && *(_QWORD *)v7 )
            LODWORD(CurrentThread) = ObCloseHandle(*(HANDLE *)v7, 0);
        }
        else
        {
          LODWORD(CurrentThread) = sub_14092A070(v6);
          if ( *(_QWORD *)v7 )
            LODWORD(CurrentThread) = ObCloseHandle(*(HANDLE *)v7, 0);
          if ( v17 )
            *(_QWORD *)(v17 + 40) = 0LL;
        }
      }
    }
  }
  return (int)CurrentThread;
}
