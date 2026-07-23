/*
 * XREFs of sub_1409477A4 @ 0x1409477A4
 * Callers:
 *     sub_1402DD320 @ 0x1402DD320 (sub_1402DD320.c)
 * Callees:
 *     sub_140747740 @ 0x140747740 (sub_140747740.c)
 *     DoScreenSave @ 0x14094EA0C (DoScreenSave.c)
 *     sub_14094ED84 @ 0x14094ED84 (sub_14094ED84.c)
 *     sub_14094F4CC @ 0x14094F4CC (sub_14094F4CC.c)
 */

__int64 __fastcall sub_1409477A4(__int64 a1)
{
  __int64 v1; // r9
  int v2; // edx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  v1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 312LL) + 40LL);
  v2 = *(_DWORD *)(v1 + 300);
  if ( (unsigned int)(v2 - 789) <= 1 )
    return 3221225558LL;
  if ( v2 == 768 || v2 > 783 && (v2 <= 787 || v2 > 788 && v2 <= 790) )
    return 3221225473LL;
  v3 = *(_DWORD *)(a1 + 24) - 21;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( !v4 )
      return DoScreenSave(v1);
    v5 = v4 - 1;
    if ( !v5 )
      return sub_14094ED84(v1);
    if ( v5 == 1 )
      return sub_14094F4CC(v1);
    return 3221225473LL;
  }
  if ( dword_140D3B050 )
    return sub_140747740(v1, 0LL, 0);
  else
    return 3221225659LL;
}
