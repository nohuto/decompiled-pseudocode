/*
 * XREFs of sub_1406D8814 @ 0x1406D8814
 * Callers:
 *     sub_1406D87C0 @ 0x1406D87C0 (sub_1406D87C0.c)
 *     sub_14075DA88 @ 0x14075DA88 (sub_14075DA88.c)
 *     sub_14080EEFC @ 0x14080EEFC (sub_14080EEFC.c)
 * Callees:
 *     sub_1406D8994 @ 0x1406D8994 (sub_1406D8994.c)
 *     sub_1408119C4 @ 0x1408119C4 (sub_1408119C4.c)
 */

__int64 __fastcall sub_1406D8814(_DWORD *a1, char a2, __int64 a3)
{
  int v3; // ebp
  _DWORD *v5; // rbx
  char v6; // si
  __int64 v7; // r8
  unsigned int v8; // r14d
  __int64 v9; // rcx

  v3 = a3;
  v5 = a1;
  v6 = a2 != 0 ? 5 : 7;
  do
  {
    LOBYTE(a3) = a2;
    LOBYTE(a1) = v6;
    v8 = sub_1406D8994(a1, v5, a3);
    if ( a2 )
      v9 = (unsigned int)v5[22];
    else
      v9 = (unsigned int)v5[23];
    if ( !(_DWORD)v9 )
      break;
    LOBYTE(v7) = a2;
    LOBYTE(v9) = a2 != 0 ? 4 : 6;
    v8 = sub_1406D8994(v9, v5, v7);
  }
  while ( !(a2 ? v5[22] : v5[23]) );
  v5[4] &= ~v3;
  if ( !a2 )
    sub_1408119C4(v5);
  return v8;
}
