/*
 * XREFs of IoReuseIrp @ 0x14020BE20
 * Callers:
 *     sub_1403A3F0C @ 0x1403A3F0C (sub_1403A3F0C.c)
 *     sub_140850D98 @ 0x140850D98 (sub_140850D98.c)
 *     sub_1409D57BC @ 0x1409D57BC (sub_1409D57BC.c)
 * Callees:
 *     sub_14020C0F0 @ 0x14020C0F0 (sub_14020C0F0.c)
 *     IoSetActivityIdIrp @ 0x14020C120 (IoSetActivityIdIrp.c)
 *     EtwActivityIdControl @ 0x1402DFD70 (EtwActivityIdControl.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     sub_140386368 @ 0x140386368 (sub_140386368.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1404182AC @ 0x1404182AC (sub_1404182AC.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14065863C @ 0x14065863C (sub_14065863C.c)
 *     sub_140A80FC8 @ 0x140A80FC8 (sub_140A80FC8.c)
 *     sub_140A8D070 @ 0x140A8D070 (sub_140A8D070.c)
 */

void __stdcall IoReuseIrp(PIRP Irp, NTSTATUS Iostatus)
{
  char v2; // bp
  __int64 StackCount; // r15
  UCHAR v6; // r14
  size_t Size; // r12
  __int64 v8; // rax
  signed __int8 AllocationFlags; // cl
  __int64 v10; // rbx
  char v11; // al
  __int64 v12; // rcx
  __int64 v13; // rsi
  USHORT v14; // bx
  CCHAR v15; // cl
  GUID ActivityId; // [rsp+40h] [rbp-48h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]

  v2 = 0;
  ActivityId = 0LL;
  if ( (dword_140C29FC0 & 0x10) != 0 )
  {
    sub_140A8D070(Irp, retaddr, 1);
    sub_140A80FC8(Irp);
  }
  StackCount = Irp->StackCount;
  v6 = Irp->AllocationFlags & 0x6D;
  Size = Irp->Size;
  v8 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
  AllocationFlags = Irp->AllocationFlags;
  if ( AllocationFlags >= 0 && v8 && (*(_BYTE *)(v8 + 2) & 1) != 0 )
  {
    v2 = 1;
    ActivityId = *(GUID *)(*((_QWORD *)&Irp->Tail.CompletionKey + 10) + 24LL);
  }
  if ( dword_140C0959C == 1 )
  {
    v10 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
    goto LABEL_14;
  }
  if ( dword_140C0959C )
  {
    v11 = sub_14065863C();
    AllocationFlags = Irp->AllocationFlags;
    v10 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
    if ( v11 )
    {
LABEL_14:
      if ( AllocationFlags < 0 )
      {
        *((_QWORD *)&Irp->Tail.CompletionKey + 10) = 0LL;
        Irp->AllocationFlags = AllocationFlags & 0x7F;
        goto LABEL_26;
      }
      if ( v10 )
      {
        if ( (unsigned __int8)sub_14020C0F0(Irp, 5LL) )
          *(_QWORD *)(v10 + 40) = 0LL;
        if ( (unsigned __int8)sub_14020C0F0(v12, 9LL) && (Irp->Flags & 0x200) != 0 )
        {
          sub_1404182AC();
          Irp->PendingReturned = 1;
        }
LABEL_25:
        *(_WORD *)(v10 + 2) = 0;
        goto LABEL_26;
      }
      goto LABEL_26;
    }
  }
  else
  {
    v10 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
  }
  if ( AllocationFlags < 0 )
  {
    *((_QWORD *)&Irp->Tail.CompletionKey + 10) = 0LL;
    Irp->AllocationFlags = AllocationFlags & 0x7F;
    goto LABEL_26;
  }
  if ( v10 )
  {
    if ( (unsigned __int8)sub_14020C0F0(Irp, 5LL) )
      *(_QWORD *)(v10 + 40) = 0LL;
    goto LABEL_25;
  }
LABEL_26:
  v13 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
  v14 = *(&Irp->Size + 1);
  memset(Irp, 0, Size);
  Irp->Size = Size;
  Irp->Type = 6;
  Irp->CurrentLocation = StackCount + 1;
  Irp->StackCount = StackCount;
  v15 = *((_BYTE *)KeGetCurrentThread() + 586);
  Irp->ThreadListEntry.Blink = &Irp->ThreadListEntry;
  Irp->ThreadListEntry.Flink = &Irp->ThreadListEntry;
  Irp->ApcEnvironment = v15;
  *(&Irp->Size + 1) = v14;
  Irp->AllocationFlags = v6;
  Irp->IoStatus.Status = Iostatus;
  Irp->Tail.Overlay.CurrentStackLocation = (struct _IO_STACK_LOCATION *)((char *)&Irp[1]
                                                                       + 64 * StackCount
                                                                       + 8 * StackCount);
  if ( v13 )
  {
    *((_QWORD *)&Irp->Tail.CompletionKey + 10) = v13;
    if ( v2 == 1 )
      IoSetActivityIdIrp(Irp, &ActivityId);
    if ( (dword_140D0110C & 4) != 0
      && (dword_140D01110 & 1) != 0
      && (!(unsigned __int8)sub_14020C0F0(Irp, 0LL) || (unsigned __int8)sub_140386368(&stru_140039820)) )
    {
      ActivityId = 0LL;
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned __int8)sub_140386368(&stru_140039820) )
        EtwWriteEx(qword_140C47358, &stru_140039820, 0LL, 0, (LPCGUID)(v13 + 24), &ActivityId, 0, 0LL);
      IoSetActivityIdIrp(Irp, &ActivityId);
    }
  }
}
