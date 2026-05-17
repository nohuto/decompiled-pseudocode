/*
 * XREFs of wil_details_GetCurrentFeatureEnabledState @ 0x1800D7800
 * Callers:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1800D76F0 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1800D76F0 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x180130398 (wil_RtlStagingConfig_QueryFeatureState.c)
 */

__int64 __fastcall wil_details_GetCurrentFeatureEnabledState(__int64 a1, _DWORD *a2)
{
  unsigned __int8 v2; // al
  __int64 v3; // rdx
  int v5; // eax
  int v6; // ecx
  unsigned int v7; // ecx
  int v8; // ebx
  __int64 *v9; // rdi
  __int64 v10; // rcx
  unsigned __int8 v11; // al
  BOOL v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // ebx
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]
  __int64 v18; // [rsp+50h] [rbp+8h]
  __int64 v19; // [rsp+58h] [rbp+10h]

  v2 = *(_BYTE *)(a1 + 28) - 2;
  *a2 = 1;
  v3 = *(unsigned int *)(a1 + 24);
  v17 = 0LL;
  v16 = 0LL;
  v5 = wil_RtlStagingConfig_QueryFeatureState(&v16, v3, v2 <= 1u);
  HIDWORD(v18) = 0;
  if ( ((((unsigned __int8)v16 & (unsigned __int8)-(v5 != 0) & 3) << 7) & 0x180) != 0 )
  {
    v6 = 0;
    if ( (_DWORD)v16 == 2 )
      v6 = 64;
  }
  else
  {
    v6 = *(_BYTE *)(a1 + 31) != 0 ? 0x40 : 0;
  }
  v7 = ((_DWORD)v17 != 0 ? 0x400 : 0) | (HIDWORD(v17) != 0 ? 0x800 : 0) | (((unsigned __int8)v16 & (unsigned __int8)-(v5 != 0) & 3) << 7) | v6;
  v8 = v7 | (v7 >> 6) & 1;
  LODWORD(v18) = v8;
  if ( v7 & 1 | ((v7 & 0x40) != 0) )
  {
    v9 = *(__int64 **)(a1 + 32);
    if ( v9 )
    {
      while ( (v8 & 1) != 0 )
      {
        v10 = *v9;
        if ( !*v9 )
          break;
        if ( *(_BYTE *)(v10 + 30) || *(_BYTE *)(v10 + 29) )
        {
          v13 = (v8 & 1) != 0 && *(_BYTE *)(v10 + 31);
          v14 = v8 & 0xFFFFFFFE;
        }
        else
        {
          LODWORD(v19) = **(_DWORD **)v10;
          if ( (v19 & 2) != 0 )
            v11 = **(_DWORD **)v10;
          else
            v11 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
                    *(volatile signed __int32 **)v10,
                    v19,
                    v10);
          v12 = ((unsigned __int8)v8 & v11 & 1) != 0;
          v13 = v8 & 0xFFFFFFFE;
          v14 = v12;
        }
        v8 = v13 | v14;
        LODWORD(v18) = v8;
        ++v9;
      }
    }
  }
  return v18;
}
