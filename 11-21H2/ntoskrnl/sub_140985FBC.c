/*
 * XREFs of sub_140985FBC @ 0x140985FBC
 * Callers:
 *     sub_140986628 @ 0x140986628 (sub_140986628.c)
 *     sub_140B2CE90 @ 0x140B2CE90 (sub_140B2CE90.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     ExpInterlockedFlushSList @ 0x140429900 (ExpInterlockedFlushSList.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_140985FBC()
{
  __int64 Pool2; // rax
  __int64 v1; // rax
  _WORD *v2; // rcx
  int v3; // ebx
  _SLIST_ENTRY *v4; // rax
  PSLIST_ENTRY v6; // rbx
  PSLIST_ENTRY v7; // rcx
  void *v8; // rcx

  Pool2 = ExAllocatePool2(64LL, 32904LL, 1951556175LL);
  qword_140C252E0 = (PVOID)Pool2;
  if ( Pool2 )
  {
    memset((void *)(Pool2 + 136), 255, 0x7FFAuLL);
    v1 = ExAllocatePool2(64LL, 0x20000LL, 1951556175LL);
    v2 = qword_140C252E0;
    *((_QWORD *)qword_140C252E0 + 1) = v1;
    if ( v1 )
    {
      v2[1] = 1024;
      qword_140C252C8 = (PVOID)ExAllocatePool2(64LL, 3208LL, 1951556175LL);
      if ( !qword_140C252C8 )
      {
LABEL_14:
        v8 = (void *)*((_QWORD *)qword_140C252E0 + 1);
        if ( v8 )
          ExFreePoolWithTag(v8, 0x7452624Fu);
        ExFreePoolWithTag(qword_140C252E0, 0x7452624Fu);
        return 3221225495LL;
      }
      if ( ((unsigned __int8)&stru_140D01990 & 0xF) != 0 )
        RtlRaiseStatus(-2147483646);
      v3 = 0;
      stru_140D01990 = 0LL;
      while ( 1 )
      {
        v4 = (_SLIST_ENTRY *)ExAllocatePool2(64LL, 176LL, 1951556175LL);
        if ( !v4 )
          break;
        ExpInterlockedPushEntrySList(&stru_140D01990, v4);
        if ( (unsigned int)++v3 >= 0x1F4 )
          return 0LL;
      }
      v6 = ExpInterlockedFlushSList(&stru_140D01990);
      while ( v6 )
      {
        v7 = v6;
        v6 = v6->Next;
        ExFreePoolWithTag(v7, 0x7452624Fu);
      }
    }
    if ( qword_140C252C8 )
      ExFreePoolWithTag(qword_140C252C8, 0x7452624Fu);
    goto LABEL_14;
  }
  return 3221225495LL;
}
