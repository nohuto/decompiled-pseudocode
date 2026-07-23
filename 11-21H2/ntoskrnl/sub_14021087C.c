/*
 * XREFs of sub_14021087C @ 0x14021087C
 * Callers:
 *     sub_140210224 @ 0x140210224 (sub_140210224.c)
 *     sub_1402B3140 @ 0x1402B3140 (sub_1402B3140.c)
 *     sub_140343DC0 @ 0x140343DC0 (sub_140343DC0.c)
 *     sub_14034412C @ 0x14034412C (sub_14034412C.c)
 *     sub_14057A898 @ 0x14057A898 (sub_14057A898.c)
 * Callees:
 *     sub_1402108CC @ 0x1402108CC (sub_1402108CC.c)
 */

__int64 __fastcall sub_14021087C(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  unsigned int v4; // eax
  unsigned int v5; // r9d
  __int64 v6; // r9

  v3 = 0LL;
  v4 = *(unsigned __int16 *)(a2 + 114) >> a3;
  if ( v4 )
  {
    _BitScanReverse(&v5, v4);
    v6 = a3 + v5;
    v3 = *(_QWORD *)(a2 + 16LL * (unsigned int)v6 + 136) - 216LL;
    sub_1402108CC(a1, a2, v3, v6);
  }
  return v3;
}
