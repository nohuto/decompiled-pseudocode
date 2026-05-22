/*
 * XREFs of memcpy_s_2 @ 0x1800FCC00
 * Callers:
 *     ?BeginStroke@CSynchronousSuperWetInk@DirectComposition@@QEAAJPEBEIIHI@Z @ 0x1800FC2B8 (-BeginStroke@CSynchronousSuperWetInk@DirectComposition@@QEAAJPEBEIIHI@Z.c)
 *     ?SetPropertiesForId@CSynchronousSuperWetInk@DirectComposition@@QEAAJIIHPEBEI@Z @ 0x1800FCAF8 (-SetPropertiesForId@CSynchronousSuperWetInk@DirectComposition@@QEAAJIIHPEBEI@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x18009690A (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 */

errno_t __cdecl memcpy_s_2(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  int v4; // eax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0

  if ( Destination )
  {
    if ( Source )
    {
      v4 = *((_DWORD *)Source + 20);
      v5 = *((_OWORD *)Source + 1);
      *(_OWORD *)Destination = *(_OWORD *)Source;
      v6 = *((_OWORD *)Source + 2);
      *((_OWORD *)Destination + 1) = v5;
      v7 = *((_OWORD *)Source + 3);
      *((_OWORD *)Destination + 2) = v6;
      v8 = *((_OWORD *)Source + 4);
      *((_OWORD *)Destination + 3) = v7;
      *((_OWORD *)Destination + 4) = v8;
      *((_DWORD *)Destination + 20) = v4;
      return 0;
    }
    memset_0(Destination, 0, 0x54uLL);
  }
  *(_DWORD *)_o__errno(Destination, DestinationSize, Source, SourceSize) = 22;
  invalid_parameter_noinfo();
  return 22;
}
