/*
 * XREFs of sub_14099F25C @ 0x14099F25C
 * Callers:
 *     sub_14099F1CC @ 0x14099F1CC (sub_14099F1CC.c)
 * Callees:
 *     sub_140809458 @ 0x140809458 (sub_140809458.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14099F25C(_DWORD *a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  _BYTE *Pool2; // rdi
  int v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v7 = 0;
  Pool2 = (_BYTE *)ExAllocatePool2(256LL, 2LL, 544040269LL);
  if ( Pool2 )
  {
    sub_140809458(&v7, 0LL, 0LL);
    if ( (v7 & 1) != 0 )
      *Pool2 = 1;
    if ( (v7 & 2) != 0 )
      Pool2[1] = 1;
    *a1 = 2;
    *a2 = Pool2;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
