/*
 * XREFs of LdrpSetModuleSigningLevel @ 0x1800E0C90
 * Callers:
 *     LdrpValidateIntegrityContinuity @ 0x18000247C (LdrpValidateIntegrityContinuity.c)
 *     LdrpMapDllNtFileName @ 0x18004FDE4 (LdrpMapDllNtFileName.c)
 * Callees:
 *     NtCompareSigningLevels @ 0x1800A5420 (NtCompareSigningLevels.c)
 *     NtGetCachedSigningLevel @ 0x1800A5F20 (NtGetCachedSigningLevel.c)
 *     ZwSetCachedSigningLevel @ 0x1800A72C0 (ZwSetCachedSigningLevel.c)
 */

__int64 __fastcall LdrpSetModuleSigningLevel(__int64 a1, __int64 a2, __int64 a3, char a4, _BYTE *a5)
{
  _BYTE *v5; // rsi
  int CachedSigningLevel; // ebx

  v5 = (_BYTE *)(a2 + 284);
  *a5 = 0;
  CachedSigningLevel = NtGetCachedSigningLevel();
  if ( CachedSigningLevel < 0 || (int)NtCompareSigningLevels() < 0 )
  {
    CachedSigningLevel = ZwSetCachedSigningLevel();
    if ( CachedSigningLevel < 0 )
      *a5 = 1;
    else
      *v5 = a4;
  }
  return (unsigned int)CachedSigningLevel;
}
