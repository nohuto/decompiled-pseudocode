/*
 * XREFs of wil_details_GetCurrentFeatureEnabledState @ 0x1800D7E78
 * Callers:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1800D7D68 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 * Callees:
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1800D7D44 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x18012E3E8 (wil_RtlStagingConfig_QueryFeatureState.c)
 */

__int64 __fastcall wil_details_GetCurrentFeatureEnabledState(__int64 a1, _DWORD *a2)
{
  unsigned __int8 v2; // al
  __int64 v3; // rdx
  int v5; // eax
  int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // ebx
  __int64 *v9; // rdi
  __int64 v10; // rax
  char CachedFeatureEnabledState; // al
  bool v12; // zf
  int v13; // eax
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]
  __int64 v17; // [rsp+50h] [rbp+8h]

  v2 = *(_BYTE *)(a1 + 20) - 2;
  *a2 = 1;
  v3 = *(unsigned int *)(a1 + 16);
  v16 = 0LL;
  v15 = 0LL;
  HIDWORD(v17) = 0;
  v5 = -(int)wil_RtlStagingConfig_QueryFeatureState(&v15, v3, v2 <= 1u);
  if ( ((32 * ((unsigned __int8)v15 & (unsigned __int8)-(v5 != 0) & 3)) & 0x60) != 0 )
  {
    v6 = 0;
    if ( (_DWORD)v15 == 2 )
      v6 = 16;
  }
  else
  {
    v6 = *(_BYTE *)(a1 + 23) != 0 ? 0x10 : 0;
  }
  v7 = v6 | ((_DWORD)v16 != 0 ? 0x100 : 0) | (HIDWORD(v16) != 0 ? 0x200 : 0) | (32
                                                                              * ((unsigned __int8)v15 & (unsigned __int8)-(v5 != 0) & 3));
  v8 = v7 | (v7 >> 1) & 8;
  LODWORD(v17) = v8;
  if ( v7 & 8 | (v7 >> 1) & 8 )
  {
    v9 = *(__int64 **)(a1 + 24);
    if ( v9 )
    {
      do
      {
        v10 = *v9;
        if ( !*v9 )
          return v17;
        if ( *(_BYTE *)(v10 + 22) || *(_BYTE *)(v10 + 21) )
        {
          if ( (v8 & 8) == 0 )
            goto LABEL_16;
          v12 = *(_BYTE *)(v10 + 23) == 0;
        }
        else
        {
          CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(*(_DWORD **)v10, *v9);
          if ( (v8 & 8) == 0 )
            goto LABEL_16;
          v12 = (CachedFeatureEnabledState & 8) == 0;
        }
        if ( v12 )
        {
LABEL_16:
          v13 = 0;
          goto LABEL_17;
        }
        v13 = 8;
LABEL_17:
        ++v9;
        v8 = v13 | v8 & 0xFFFFFFF7;
        LODWORD(v17) = v8;
      }
      while ( (v8 & 8) != 0 );
    }
  }
  return v17;
}
