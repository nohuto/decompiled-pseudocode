/*
 * XREFs of MiInitializeColors @ 0x140B6FF04
 * Callers:
 *     MiCreatePfnDatabase @ 0x140B487C8 (MiCreatePfnDatabase.c)
 * Callees:
 *     MiInitializeCacheSizes @ 0x140B6FF88 (MiInitializeCacheSizes.c)
 */

__int64 MiInitializeColors()
{
  unsigned int v0; // ecx
  unsigned int v1; // eax
  unsigned __int8 v2; // dl
  unsigned int v3; // ecx
  __int64 result; // rax

  MiInitializeCacheSizes();
  _BitScanReverse(&v0, dword_140C65BFC);
  MiChannelMaximumPowerOf2 = 1;
  LOBYTE(v1) = 1;
  byte_140C65B8E = v0;
  v2 = 1;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    do
    {
      v1 = (unsigned __int8)(2 * v1);
      MiChannelMaximumPowerOf2 = v1;
    }
    while ( v1 < MmNumberOfChannels );
    v2 = v1;
  }
  MiChannelMaximumPowerOf2Mask = v1 - 1;
  _BitScanReverse(&v3, v2);
  byte_140C65B8D = byte_140C65B8E + v3;
  dword_140C65B80 = (1 << (byte_140C65B8E + v3)) - 1;
  result = (unsigned int)dword_140C65BF8;
  KeGetCurrentPrcb()->SecondaryColorMask = dword_140C65BF8;
  return result;
}
