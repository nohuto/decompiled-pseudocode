/*
 * XREFs of MI_TIGHTER_PERMISSIONS @ 0x1402847CC
 * Callers:
 *     MmSetAddressRangeModifiedEx @ 0x14027F1D0 (MmSetAddressRangeModifiedEx.c)
 *     MiSetSystemCodeProtection @ 0x140284310 (MiSetSystemCodeProtection.c)
 *     MmProtectPool @ 0x140296FC0 (MmProtectPool.c)
 *     MiProtectEnclavePages @ 0x140648248 (MiProtectEnclavePages.c)
 * Callees:
 *     <none>
 */

bool __fastcall MI_TIGHTER_PERMISSIONS(__int64 a1, __int64 a2)
{
  bool result; // al

  if ( (a2 & 0x40) == 0 && (a1 & 0x40) != 0 || (a2 & 2) == 0 && (a1 & 2) != 0 )
    return 1;
  result = 0;
  if ( a2 < 0 )
    return a1 >= 0;
  return result;
}
