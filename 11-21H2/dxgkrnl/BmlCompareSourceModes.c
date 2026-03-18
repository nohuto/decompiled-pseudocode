/*
 * XREFs of BmlCompareSourceModes @ 0x1C01B26E0
 * Callers:
 *     BmlGetNextBestSourceMode @ 0x1C01B2338 (BmlGetNextBestSourceMode.c)
 * Callees:
 *     BmlCompareSourceModesWithMonitors @ 0x1C01B2074 (BmlCompareSourceModesWithMonitors.c)
 *     BmlCompareSourceModesWithContentRes @ 0x1C01B225C (BmlCompareSourceModesWithContentRes.c)
 *     BmlCompareSourceModesWithConstraint @ 0x1C01B281C (BmlCompareSourceModesWithConstraint.c)
 *     BmlGetPixelFormatPreference @ 0x1C01B2AFC (BmlGetPixelFormatPreference.c)
 *     BmlCompareModeRegions @ 0x1C01B2B94 (BmlCompareModeRegions.c)
 */

__int64 __fastcall BmlCompareSourceModes(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r15
  unsigned int v9; // edi
  __int64 v10; // rbx
  __int64 result; // rax
  unsigned int v12; // ebx
  int PixelFormatPreference; // r12d
  int v14; // eax
  __int64 v15; // r8
  unsigned int v16; // eax

  v5 = a3;
  v9 = 1;
  if ( !a1 )
    WdLogSingleEntry0(1LL);
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( a4 == a5 )
    WdLogSingleEntry0(1LL);
  if ( !a4 )
    return 0xFFFFFFFFLL;
  if ( !a5 )
    return v9;
  v10 = 120 * v5;
  if ( *(_BYTE *)(*(_QWORD *)(120 * v5 + a1 + 16) + 129LL) && (*(_DWORD *)(a1 + 8) & 1) != 0
    || (result = BmlCompareSourceModesWithConstraint(a1, (unsigned __int16)v5, a4, a5), !(_DWORD)result) )
  {
    if ( !*(_BYTE *)(*(_QWORD *)(v10 + a1 + 16) + 129LL)
      || (*(_BYTE *)(v10 + a1 + 124) & 1) == 0
      || (result = BmlCompareSourceModesWithContentRes(a1, v5, a4, a5), !(_DWORD)result) )
    {
      v12 = *(_DWORD *)(v10 + a1 + 120);
      PixelFormatPreference = BmlGetPixelFormatPreference(*(unsigned int *)(a5 + 96), v12);
      v14 = BmlGetPixelFormatPreference(*(unsigned int *)(a4 + 96), v12);
      if ( v14 <= PixelFormatPreference )
      {
        if ( v14 >= PixelFormatPreference )
        {
          v9 = BmlCompareModeRegions(a4 + 76, a5 + 76);
          if ( v9 )
          {
            v16 = BmlCompareSourceModesWithMonitors(a1, v5, v15, a4, a5);
            if ( v16 )
              return v16;
          }
        }
        else
        {
          return (unsigned int)-1;
        }
      }
      return v9;
    }
  }
  return result;
}
