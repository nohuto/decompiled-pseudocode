/*
 * XREFs of wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState @ 0x1C0022D84
 * Callers:
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1C0022D50 (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 * Callees:
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1C0022D50 (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        unsigned int a2,
        __int64 a3)
{
  int v5; // edi
  __int64 *v6; // rsi
  __int64 v7; // rax
  unsigned int v8; // ecx
  __int64 v10; // [rsp+30h] [rbp+8h]

  HIDWORD(v10) = 0;
  v5 = (a2 >> 4) & 1;
  if ( v5 )
  {
    v6 = *(__int64 **)(a3 + 24);
    if ( v6 )
    {
      while ( 1 )
      {
        v7 = *v6;
        if ( !*v6 )
          goto LABEL_13;
        if ( *(_BYTE *)(v7 + 22) || *(_BYTE *)(v7 + 21) )
          break;
        if ( (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(*(unsigned int **)v7, *v6) & 8) != 0 )
          goto LABEL_9;
        v5 = 0;
LABEL_10:
        ++v6;
        if ( !v5 )
          goto LABEL_13;
      }
      if ( !*(_BYTE *)(v7 + 23) )
      {
        v5 = 0;
        goto LABEL_13;
      }
LABEL_9:
      v5 = 1;
      goto LABEL_10;
    }
  }
LABEL_13:
  v8 = 128;
  if ( ((a2 >> 3) & 1) != v5 )
    v8 = 136;
  _InterlockedXor(a1, v8);
  LODWORD(v10) = a2 ^ v8;
  return v10;
}
