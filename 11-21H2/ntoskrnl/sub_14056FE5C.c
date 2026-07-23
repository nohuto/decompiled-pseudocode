/*
 * XREFs of sub_14056FE5C @ 0x14056FE5C
 * Callers:
 *     sub_140299840 @ 0x140299840 (sub_140299840.c)
 * Callees:
 *     sub_1402C1900 @ 0x1402C1900 (sub_1402C1900.c)
 *     sub_1402F4B70 @ 0x1402F4B70 (sub_1402F4B70.c)
 *     sub_140570394 @ 0x140570394 (sub_140570394.c)
 */

__int64 __fastcall sub_14056FE5C(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rbx
  int v7; // esi
  char v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v8 = 0;
  v3 = 0LL;
  if ( (*(_DWORD *)(a1 + 116) & 0x800000) == 0 )
  {
    v3 = sub_1402F4B70(
           0x20u,
           *(unsigned __int16 *)(*(_QWORD *)(qword_140D088C0[*(unsigned int *)(a1 + 588)] + 192) + 138LL),
           a1);
    if ( !v3 )
      return 3221225495LL;
    v2 = v3 - (unsigned int)dword_140D06A0C;
  }
  v7 = sub_140570394(a1, a2, v2, &v8);
  if ( v7 < 0 || !v8 )
  {
    if ( v3 )
      sub_1402C1900(v3, 8u, a1);
  }
  return (unsigned int)v7;
}
