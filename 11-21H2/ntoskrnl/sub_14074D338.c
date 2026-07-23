/*
 * XREFs of sub_14074D338 @ 0x14074D338
 * Callers:
 *     sub_1406E60B0 @ 0x1406E60B0 (sub_1406E60B0.c)
 *     sub_140749C4C @ 0x140749C4C (sub_140749C4C.c)
 *     sub_14074B420 @ 0x14074B420 (sub_14074B420.c)
 * Callees:
 *     sub_14074ECA8 @ 0x14074ECA8 (sub_14074ECA8.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14074D338(__int64 a1, int a2, __int64 a3)
{
  __int64 Pool2; // rax
  __int64 v7; // rbx

  Pool2 = ExAllocatePool2(64LL, 72LL, 829451856LL);
  v7 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 36) = 0;
    *(_QWORD *)(Pool2 + 48) = 0LL;
    *(_QWORD *)(Pool2 + 8) = Pool2;
    *(_QWORD *)Pool2 = Pool2;
    *(_DWORD *)(Pool2 + 56) = 1;
    *(_QWORD *)(Pool2 + 24) = a3;
    *(_QWORD *)(Pool2 + 16) = a1;
    *(_DWORD *)(Pool2 + 32) = a2;
    *(_DWORD *)(Pool2 + 40) = -1073741595;
    *(_QWORD *)(Pool2 + 64) = sub_14074ECA8(2LL, Pool2);
  }
  return v7;
}
