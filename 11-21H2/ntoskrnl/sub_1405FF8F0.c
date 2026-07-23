/*
 * XREFs of sub_1405FF8F0 @ 0x1405FF8F0
 * Callers:
 *     sub_140A90660 @ 0x140A90660 (sub_140A90660.c)
 * Callees:
 *     sub_140424F10 @ 0x140424F10 (sub_140424F10.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

PSLIST_ENTRY __fastcall sub_1405FF8F0(_SLIST_HEADER *a1)
{
  _SLIST_ENTRY *Pool2; // rax
  _SLIST_HEADER *v3; // rdi
  _SLIST_ENTRY *v4; // rbx
  __int64 v6; // rsi

  Pool2 = (_SLIST_ENTRY *)ExAllocatePool2(576LL, 4096LL, 1886414166LL);
  v3 = a1 + 5;
  v4 = Pool2;
  if ( !Pool2 )
    return ExpInterlockedPopEntrySList(a1 + 5);
  sub_140424F10(Pool2);
  *((_QWORD *)&v4->Next + 1) = a1;
  v4[1].Next = (_SLIST_ENTRY *)556929861;
  ExpInterlockedPushEntrySList(a1 + 4, v4);
  v6 = 126LL;
  do
  {
    v4 += 2;
    v4[1].Next = (_SLIST_ENTRY *)1;
    ExpInterlockedPushEntrySList(v3, v4);
    --v6;
  }
  while ( v6 );
  v4[3].Next = (_SLIST_ENTRY *)1;
  return v4 + 2;
}
