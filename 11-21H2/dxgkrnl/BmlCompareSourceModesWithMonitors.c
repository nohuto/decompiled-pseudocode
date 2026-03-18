/*
 * XREFs of BmlCompareSourceModesWithMonitors @ 0x1C01B2074
 * Callers:
 *     BmlCompareSourceModes @ 0x1C01B26E0 (BmlCompareSourceModes.c)
 * Callees:
 *     ??$DIFF@H@@YAHHH@Z @ 0x1C0011F28 (--$DIFF@H@@YAHHH@Z.c)
 *     BmlGetModeCategoryForRegion @ 0x1C01B2204 (BmlGetModeCategoryForRegion.c)
 *     ?BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z @ 0x1C01B2AD0 (-BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z.c)
 *     ??$BmlCompareValues@H@@YA?AW4BML_COMPARISON_RESULT@@HH@Z @ 0x1C01B2B78 (--$BmlCompareValues@H@@YA-AW4BML_COMPARISON_RESULT@@HH@Z.c)
 *     ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1C01B2BD8 (--$BmlCompareValues@I@@YA-AW4BML_COMPARISON_RESULT@@II@Z.c)
 */

__int64 __fastcall BmlCompareSourceModesWithMonitors(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  bool v6; // r12
  __int64 v7; // r8
  char v8; // bp
  __int64 v10; // rdi
  int v11; // ecx
  int v12; // eax
  __int64 v13; // rsi
  const struct _D3DKMDT_2DREGION *v14; // r13
  unsigned int ModeCategoryForRegion; // eax
  const struct _D3DKMDT_2DREGION *v16; // r15
  __int64 v17; // r8
  unsigned int v18; // ebx
  unsigned int v19; // eax
  __int64 result; // rax
  __int64 v21; // r8
  unsigned int v22; // eax
  __int64 v23; // r8
  unsigned int v24; // ebx
  unsigned int v25; // eax
  int v26; // edi
  int ScaledAspectRatio; // eax
  unsigned int v28; // ebx
  int v29; // eax
  unsigned int v30; // eax
  __int64 v31; // [rsp+70h] [rbp+8h]
  __int64 v32; // [rsp+80h] [rbp+18h]

  v6 = 0;
  v7 = 120LL * a2;
  v8 = 0;
  v31 = a2;
  v32 = v7;
  v10 = v7 + a1;
  v11 = *(_DWORD *)(v7 + a1 + 52);
  if ( v11 )
  {
    v12 = *(_DWORD *)(v10 + 56);
    if ( v12 )
    {
      v8 = 1;
      if ( *(_DWORD *)(a4 + 76) == v11 )
        v6 = *(_DWORD *)(a4 + 80) == v12;
      if ( *(_DWORD *)(a5 + 76) != v11 || *(_DWORD *)(a5 + 80) != v12 )
        v8 = 0;
    }
  }
  v13 = v7 + a1;
  if ( *(_DWORD *)(v7 + a1 + 36) && *(_DWORD *)(v13 + 40) )
  {
    v14 = (const struct _D3DKMDT_2DREGION *)(a5 + 76);
    LOBYTE(v7) = v8;
    ModeCategoryForRegion = BmlGetModeCategoryForRegion(a5 + 76, v13 + 36, v7);
    v16 = (const struct _D3DKMDT_2DREGION *)(a4 + 76);
    LOBYTE(v17) = v6;
    v18 = ModeCategoryForRegion;
    v19 = BmlGetModeCategoryForRegion(v16, v13 + 36, v17);
    result = BmlCompareValues<unsigned int>(v19, v18);
    if ( (_DWORD)result )
      return result;
  }
  else
  {
    WdLogSingleEntry4(3LL, a1, a2, *(unsigned int *)(v7 + a1 + 36), *(unsigned int *)(v13 + 40));
    v16 = (const struct _D3DKMDT_2DREGION *)(a4 + 76);
    v14 = (const struct _D3DKMDT_2DREGION *)(a5 + 76);
  }
  if ( !*(_DWORD *)(v10 + 52) || !*(_DWORD *)(v10 + 56) )
  {
    WdLogSingleEntry4(3LL, a1, v31, *(unsigned int *)(v10 + 52), *(unsigned int *)(v10 + 56));
    return 0LL;
  }
  LOBYTE(v21) = v6;
  v22 = BmlGetModeCategoryForRegion(v16, v10 + 52, v21);
  LOBYTE(v23) = v8;
  v24 = v22;
  v25 = BmlGetModeCategoryForRegion(v14, v10 + 52, v23);
  result = BmlCompareValues<unsigned int>(v24, v25);
  if ( !(_DWORD)result )
  {
    if ( v24 == 3 )
    {
      v26 = *(_DWORD *)(v32 + a1 + 60);
      ScaledAspectRatio = BmlGetScaledAspectRatio(v16);
      v28 = DIFF<int>(ScaledAspectRatio, v26);
      v29 = BmlGetScaledAspectRatio(v14);
      v30 = DIFF<int>(v29, v26);
      return BmlCompareValues<int>(v30, v28);
    }
    return 0LL;
  }
  return result;
}
