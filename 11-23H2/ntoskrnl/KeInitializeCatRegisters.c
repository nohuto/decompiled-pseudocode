/*
 * XREFs of KeInitializeCatRegisters @ 0x1403837AC
 * Callers:
 *     KiRestoreFeatureBits @ 0x140576690 (KiRestoreFeatureBits.c)
 *     KeInitSystem @ 0x140B4DED4 (KeInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 KeInitializeCatRegisters()
{
  __int64 result; // rax

  if ( KiCacheIsoBitmap )
  {
    if ( _bittest64(&KeFeatureBits, 0x2Cu) )
    {
      result = (unsigned int)KiCacheIsoBitmap;
      __writemsr(0xC91u, (unsigned int)KiCacheIsoBitmap);
    }
  }
  return result;
}
