/*
 * XREFs of sub_14097D244 @ 0x14097D244
 * Callers:
 *     sub_1402E67E8 @ 0x1402E67E8 (sub_1402E67E8.c)
 *     sub_14030DA10 @ 0x14030DA10 (sub_14030DA10.c)
 *     sub_1407BA750 @ 0x1407BA750 (sub_1407BA750.c)
 * Callees:
 *     sub_1402EE0C8 @ 0x1402EE0C8 (sub_1402EE0C8.c)
 *     sub_1405AAF90 @ 0x1405AAF90 (sub_1405AAF90.c)
 *     sub_1405AB030 @ 0x1405AB030 (sub_1405AB030.c)
 */

__int64 __fastcall sub_14097D244(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rax
  __int64 v3; // r9
  __int64 v4; // rcx

  v1 = 1LL;
  if ( (*(_DWORD *)(a1 + 48) & 0x6200000) != 0x4200000 )
  {
    v2 = sub_1402EE0C8(a1, 256LL);
    v1 = sub_1405AB030(v2 + 8);
    if ( !v1 )
    {
      v4 = *(_QWORD *)(v3 + 40);
      if ( (*(_DWORD *)(v4 + 8) & 1) == 0 )
        return sub_1405AAF90(v4);
    }
  }
  return v1;
}
