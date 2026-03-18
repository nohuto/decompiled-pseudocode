/*
 * XREFs of HvResetLogFileStatusAll @ 0x1407E7B1C
 * Callers:
 *     CmpFlushHive @ 0x140752E88 (CmpFlushHive.c)
 *     HvpPerformLogFileRecovery @ 0x14080028C (HvpPerformLogFileRecovery.c)
 * Callees:
 *     <none>
 */

void __fastcall HvResetLogFileStatusAll(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 168) == 1 )
    *(_BYTE *)(a1 + 192) = 0;
  else
    *(_WORD *)(a1 + 192) = 0;
}
