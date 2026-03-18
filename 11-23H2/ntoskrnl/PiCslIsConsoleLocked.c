/*
 * XREFs of PiCslIsConsoleLocked @ 0x14096C56C
 * Callers:
 *     PipDmgEnforceEnumerationPolicy @ 0x14096B274 (PipDmgEnforceEnumerationPolicy.c)
 *     PipDmgReevaluateQueue @ 0x14096B43C (PipDmgReevaluateQueue.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x14096B9B0 (PnpSurpriseFailUnsafeDmaDevices.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

char PiCslIsConsoleLocked()
{
  char v0; // dl

  v0 = 0;
  if ( !PipCslInitialized )
    KeBugCheckEx(0xCAu, 0x10uLL, 0LL, 0LL, 0LL);
  if ( !PipCslConsoleLockState )
    return 1;
  if ( PipCslConsoleLockState != 1 )
  {
    if ( PipCslConsoleLockState != 2 )
      __fastfail(5u);
    return 1;
  }
  return v0;
}
