/*
 * XREFs of ?wil_details_GetCurrentFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEBUwil_details_FeatureDescriptor@@PEAH@Z @ 0x1C001D060
 * Callers:
 *     ?wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@T1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C001CF68 (-wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YA-ATwil_details_FeatureStat.c)
 * Callees:
 *     ?wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C001CF34 (-wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA-ATwil_details_FeatureStateCache@.c)
 *     ?wil_RtlStagingConfig_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHPEAH@Z @ 0x1C007B008 (-wil_RtlStagingConfig_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHPEAH@Z.c)
 */

__int64 __fastcall wil_details_GetCurrentFeatureEnabledState(__int64 a1, int *a2)
{
  unsigned int v3; // edx
  BOOL v5; // r8d
  int FeatureState; // eax
  int v7; // ecx
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 *v11; // rdi
  __int64 v12; // rax
  char CachedFeatureEnabledState; // al
  bool v14; // zf
  int v15; // eax
  __int128 v17; // [rsp+20h] [rbp-20h] BYREF
  __int64 v18; // [rsp+30h] [rbp-10h]
  __int64 v19; // [rsp+50h] [rbp+10h]

  v3 = *(_DWORD *)(a1 + 16);
  v5 = (unsigned __int8)(*(_BYTE *)(a1 + 20) - 2) <= 1u;
  *a2 = 1;
  v18 = 0LL;
  v17 = 0LL;
  FeatureState = wil_RtlStagingConfig_QueryFeatureState((struct wil_FeatureState *)&v17, v3, v5, a2);
  HIDWORD(v19) = 0;
  v7 = ((HIDWORD(v18) != 0 ? 0x200 : 0) | ((_DWORD)v18 != 0 ? 0x100 : 0)) ^ (32
                                                                           * ((unsigned __int8)v17 & (unsigned __int8)-(FeatureState != 0))) & 0x60;
  if ( ((32 * ((unsigned __int8)v17 & (unsigned __int8)-(FeatureState != 0))) & 0x60) != 0 )
  {
    v9 = 0;
    if ( (_DWORD)v17 == 2 )
      v9 = 16;
    v8 = v9 | v7 & 0xFFFFFFEF;
  }
  else
  {
    v8 = v7 & 0xFFFFFFEF | (*(_BYTE *)(a1 + 23) != 0 ? 0x10 : 0);
  }
  v10 = ((unsigned __int8)v8 ^ (unsigned __int8)(v8 >> 1)) & 8 ^ v8;
  LODWORD(v19) = v10;
  if ( (v10 & 8) != 0 )
  {
    v11 = *(__int64 **)(a1 + 24);
    if ( v11 )
    {
      do
      {
        v12 = *v11;
        if ( !*v11 )
          return v19;
        if ( *(_BYTE *)(v12 + 22) || *(_BYTE *)(v12 + 21) )
        {
          if ( (v10 & 8) == 0 )
            goto LABEL_17;
          v14 = *(_BYTE *)(v12 + 23) == 0;
        }
        else
        {
          CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                        *(unsigned int **)v12,
                                        *v11);
          if ( (v10 & 8) == 0 )
            goto LABEL_17;
          v14 = (CachedFeatureEnabledState & 8) == 0;
        }
        if ( v14 )
        {
LABEL_17:
          v15 = 0;
          goto LABEL_18;
        }
        v15 = 8;
LABEL_18:
        ++v11;
        v10 = v15 | v10 & 0xFFFFFFF7;
        LODWORD(v19) = v10;
      }
      while ( (v10 & 8) != 0 );
    }
  }
  return v19;
}
