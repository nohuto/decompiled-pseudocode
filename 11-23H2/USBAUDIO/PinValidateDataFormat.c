/*
 * XREFs of PinValidateDataFormat @ 0x1C0038DF0
 * Callers:
 *     ?IntersectDataFormatsWithDataRange@CSidebandDevice@@AEAAJPEAPEATKSDATAFORMAT@@KPEAU_KSPIN_DESCRIPTOR_EX@@PEAEPEAK3@Z @ 0x1C000FEB8 (-IntersectDataFormatsWithDataRange@CSidebandDevice@@AEAAJPEAPEATKSDATAFORMAT@@KPEAU_KSPIN_DESCRI.c)
 *     PinMIDIDataFormatIntersection @ 0x1C002C610 (PinMIDIDataFormatIntersection.c)
 *     PinSetDataFormat @ 0x1C0038CE0 (PinSetDataFormat.c)
 *     PinCreate @ 0x1C003DF00 (PinCreate.c)
 * Callees:
 *     IsSampleRateInRange @ 0x1C0038F70 (IsSampleRateInRange.c)
 *     PinMatchChannelConfigToFormat @ 0x1C0038FC8 (PinMatchChannelConfigToFormat.c)
 */

__int64 __fastcall PinValidateDataFormat(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r8d
  unsigned int v6; // edi
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // esi
  unsigned int v12; // ebp
  __int64 v13; // r10

  v4 = *(_DWORD *)a3;
  v6 = -1073741811;
  v7 = *(_QWORD *)(a3 + 48);
  if ( v7 == *(_QWORD *)&KSDATAFORMAT_SPECIFIER_WAVEFORMATEX.Data1
    && *(_QWORD *)(a3 + 56) == *(_QWORD *)KSDATAFORMAT_SPECIFIER_WAVEFORMATEX.Data4 )
  {
    if ( v4 < 0x52 )
      return v6;
    v6 = *(_WORD *)(a3 + 64) == 0xFFFE ? (v4 < 0x68 ? 0xC000000D : 0) : 0;
    if ( (v6 & 0x80000000) != 0 )
      return v6;
  }
  else
  {
    if ( v7 != *(_QWORD *)&KSDATAFORMAT_SPECIFIER_NONE.Data1
      || *(_QWORD *)(a3 + 56) != *(_QWORD *)KSDATAFORMAT_SPECIFIER_NONE.Data4
      || v4 != 64 )
    {
      return v6;
    }
    v6 = 0;
  }
  if ( a2 )
  {
    v6 = -1073741198;
    v8 = *(_QWORD *)(a2 + 16) - *(_QWORD *)(a3 + 16);
    if ( !v8 )
      v8 = *(_QWORD *)(a2 + 24) - *(_QWORD *)(a3 + 24);
    if ( !v8 )
    {
      v9 = *(_QWORD *)(a2 + 32) - *(_QWORD *)(a3 + 32);
      if ( !v9 )
        v9 = *(_QWORD *)(a2 + 40) - *(_QWORD *)(a3 + 40);
      if ( !v9 )
      {
        v10 = *(_QWORD *)(a2 + 48) - v7;
        if ( !v10 )
          v10 = *(_QWORD *)(a2 + 56) - *(_QWORD *)(a3 + 56);
        if ( !v10 )
        {
          if ( v7 != *(_QWORD *)&KSDATAFORMAT_SPECIFIER_WAVEFORMATEX.Data1
            || *(_QWORD *)(a3 + 56) != *(_QWORD *)KSDATAFORMAT_SPECIFIER_WAVEFORMATEX.Data4 )
          {
            return 0;
          }
          v11 = *(unsigned __int16 *)(a3 + 66);
          if ( *(_DWORD *)(a2 + 64) == v11 )
          {
            v12 = *(unsigned __int16 *)(a3 + 78);
            if ( *(_DWORD *)(a2 + 72) == v12 )
            {
              if ( (unsigned __int8)IsSampleRateInRange(a2, *(unsigned int *)(a3 + 68)) )
              {
                if ( *(_WORD *)(a3 + 64) == 0xFFFE )
                {
                  if ( *(unsigned __int16 *)(a3 + 82) == *(_DWORD *)(v13 + 104)
                    && *(_DWORD *)(a3 + 84) == (unsigned int)PinMatchChannelConfigToFormat(
                                                               v11,
                                                               *(unsigned int *)(a1 + 144)) )
                  {
                    return 0;
                  }
                }
                else if ( v11 <= 2 && v12 <= 0x10 )
                {
                  return 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return v6;
}
