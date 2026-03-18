/*
 * XREFs of BvgaBitBlt @ 0x14054F270
 * Callers:
 *     <none>
 * Callees:
 *     BvgaAcquireLock @ 0x14054F1D0 (BvgaAcquireLock.c)
 *     BvgaReleaseLock @ 0x14054F4D0 (BvgaReleaseLock.c)
 */

__int64 __fastcall BvgaBitBlt(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax

  if ( BvgaBootDriverInstalled )
  {
    if ( !BvgaDisplayState )
    {
      BvgaAcquireLock();
      VidBitBlt(a1, a2, a3);
      return BvgaReleaseLock();
    }
  }
  return result;
}
