/*
 * XREFs of sub_140842A24 @ 0x140842A24
 * Callers:
 *     sub_14075B48C @ 0x14075B48C (sub_14075B48C.c)
 *     sub_14075BB10 @ 0x14075BB10 (sub_14075BB10.c)
 *     sub_1408411FC @ 0x1408411FC (sub_1408411FC.c)
 *     sub_140841428 @ 0x140841428 (sub_140841428.c)
 *     sub_1408414E0 @ 0x1408414E0 (sub_1408414E0.c)
 *     sub_140841610 @ 0x140841610 (sub_140841610.c)
 *     sub_140842864 @ 0x140842864 (sub_140842864.c)
 *     sub_140842978 @ 0x140842978 (sub_140842978.c)
 *     sub_1408434E0 @ 0x1408434E0 (sub_1408434E0.c)
 *     sub_140963878 @ 0x140963878 (sub_140963878.c)
 *     sub_140963CD0 @ 0x140963CD0 (sub_140963CD0.c)
 *     sub_140A10C20 @ 0x140A10C20 (sub_140A10C20.c)
 *     sub_140A10CF0 @ 0x140A10CF0 (sub_140A10CF0.c)
 *     sub_140A11A00 @ 0x140A11A00 (sub_140A11A00.c)
 *     sub_140A11F60 @ 0x140A11F60 (sub_140A11F60.c)
 *     sub_140A122E0 @ 0x140A122E0 (sub_140A122E0.c)
 *     sub_140A124A4 @ 0x140A124A4 (sub_140A124A4.c)
 *     sub_140A126D0 @ 0x140A126D0 (sub_140A126D0.c)
 *     sub_140A12C84 @ 0x140A12C84 (sub_140A12C84.c)
 *     sub_140A1311C @ 0x140A1311C (sub_140A1311C.c)
 *     sub_140A146FC @ 0x140A146FC (sub_140A146FC.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_14075B988 @ 0x14075B988 (sub_14075B988.c)
 *     sub_14079499C @ 0x14079499C (sub_14079499C.c)
 *     sub_140842AA4 @ 0x140842AA4 (sub_140842AA4.c)
 *     sub_140842BCC @ 0x140842BCC (sub_140842BCC.c)
 */

__int64 __fastcall sub_140842A24(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // esi
  __int16 v5; // ax
  unsigned int v6; // eax

  v2 = 0LL;
  v3 = a2;
  if ( a1 )
  {
    v5 = sub_14079499C(a1, a2) & 0xF000;
    if ( v5 == (__int16)0x8000 )
      return sub_14075B988(a1, v3);
    if ( v5 != 24576 )
      return v2;
    v6 = sub_140842BCC(a1, v3);
    if ( v6 )
      return sub_140842AA4(a1, v6);
  }
  sub_1406E0C3C(1LL, (__int64)"SdbGetStringTagPtr");
  return 0LL;
}
