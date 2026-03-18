/*
 * XREFs of wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1C0075218
 * Callers:
 *     wil_details_EvaluateFeatureDependencies @ 0x1C0075138 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1C0075218 (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 * Callees:
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1C0075218 (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        __int64 a2)
{
  unsigned int v2; // esi
  volatile unsigned __int32 v3; // ebp
  int v6; // ebx
  _QWORD *v7; // rdi
  bool v8; // zf
  __int64 v9; // rax
  char CachedFeatureEnabledState; // al
  __int64 v11; // [rsp+50h] [rbp+18h]

  v2 = 128;
  v3 = *a1;
  if ( (*a1 & 0x80u) == 0 )
    return *(unsigned int *)a1;
  HIDWORD(v11) = 0;
  v6 = (v3 >> 4) & 1;
  if ( v6 )
  {
    v7 = *(_QWORD **)(a2 + 24);
    v8 = v7 == 0LL;
LABEL_5:
    if ( !v8 )
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( !*v7 )
          break;
        if ( !*(_BYTE *)(v9 + 22) && !*(_BYTE *)(v9 + 21) )
        {
          CachedFeatureEnabledState = wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(
                                        *(_QWORD *)v9,
                                        *v7);
          v6 = v6 && (CachedFeatureEnabledState & 8) != 0;
          ++v7;
          v8 = v6 == 0;
          goto LABEL_5;
        }
        if ( !v6 || !*(_BYTE *)(v9 + 23) )
        {
          v6 = 0;
          break;
        }
        v6 = 1;
        ++v7;
      }
    }
  }
  if ( ((v3 >> 3) & 1) != v6 )
    v2 = 136;
  _InterlockedXor(a1, v2);
  LODWORD(v11) = v3 ^ v2;
  return v11;
}
