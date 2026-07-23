/*
 * XREFs of sub_140A8B104 @ 0x140A8B104
 * Callers:
 *     sub_1402D8104 @ 0x1402D8104 (sub_1402D8104.c)
 *     sub_140A8AB50 @ 0x140A8AB50 (sub_140A8AB50.c)
 * Callees:
 *     InitializeSListHead @ 0x1402A05A0 (InitializeSListHead.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

_SLIST_HEADER *__fastcall sub_140A8B104(ULONGLONG a1)
{
  _SLIST_HEADER *Pool2; // rax
  _SLIST_HEADER *v3; // rbx

  Pool2 = (_SLIST_HEADER *)ExAllocatePool2(64LL, 0x130uLL, 0x44566656u);
  v3 = Pool2;
  if ( Pool2 )
  {
    Pool2->Alignment = a1;
    Pool2[2].Region = 2557876544LL;
    Pool2[1].Region = (ULONGLONG)&Pool2[1];
    Pool2[1].Alignment = (ULONGLONG)&Pool2[1];
    Pool2[6].Region = (ULONGLONG)&Pool2[6];
    Pool2[6].Alignment = (ULONGLONG)&Pool2[6];
    InitializeSListHead(Pool2 + 4);
    InitializeSListHead(v3 + 5);
    v3[17].Alignment = (ULONGLONG)&v3[16].Region;
    v3[16].Region = (ULONGLONG)&v3[16].Region;
  }
  else
  {
    _InterlockedExchange(&dword_140C1B260, 1);
  }
  return v3;
}
