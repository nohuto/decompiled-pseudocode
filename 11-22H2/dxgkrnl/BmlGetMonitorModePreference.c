/*
 * XREFs of BmlGetMonitorModePreference @ 0x1C0178408
 * Callers:
 *     BmlFillPreferredMonitorMode @ 0x1C0177F70 (BmlFillPreferredMonitorMode.c)
 *     ?BmlGetTargetModePreferenceOnMonitor@@YA?AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARGETMODE@@EPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0178168 (-BmlGetTargetModePreferenceOnMonitor@@YA-AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARG.c)
 * Callees:
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C000244C (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 *     BmlIsEDIDCapableOutputTechonology @ 0x1C0178524 (BmlIsEDIDCapableOutputTechonology.c)
 *     BmlIsLowResAnalogTvOutput @ 0x1C01EA614 (BmlIsLowResAnalogTvOutput.c)
 *     BmlGetMonitorModeVSyncPreference @ 0x1C03BD410 (BmlGetMonitorModeVSyncPreference.c)
 */

__int64 __fastcall BmlGetMonitorModePreference(__int64 a1, int a2, __int64 a3)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // edx
  int v7; // ecx
  int v8; // ecx
  __int64 v9; // r8
  unsigned int *v10; // r11
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // r10d
  __int64 v14; // r11
  int v15; // edx
  int v16; // edx
  __int64 v17; // r11
  int v18; // edx
  int v19; // edx
  int v20; // edx
  __int64 v21; // r11
  __int64 v22; // r11

  v3 = *(_DWORD *)(a1 + 84) - 1;
  if ( !v3 )
  {
    if ( !(unsigned __int8)BmlIsLowResAnalogTvOutput(a3) )
      return BmlGetMonitorModeVSyncPreference(v21);
    if ( (unsigned int)DMMVIDEOSIGNALMODE::DivideAndRound(*(unsigned int *)(v21 + 28), *(unsigned int *)(v21 + 32)) != 60 )
      return 0LL;
    if ( *(_DWORD *)(v22 + 20) == 800 )
      return 4 - (unsigned int)(*(_DWORD *)(v22 + 24) != 600);
    return 3LL;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v5 = a2 - 1;
    if ( !v5 )
      return 6LL;
    v15 = v5 - 1;
    if ( !v15 )
      return 6LL;
    v16 = v15 - 1;
    if ( !v16 )
      return 6LL;
    if ( v16 == 1 )
      return 8LL;
    return 0xFFFFFFFFLL;
  }
  v7 = v4 - 1;
  if ( !v7 )
  {
    v18 = a2 - 1;
    if ( !v18 )
      return 9LL;
    v19 = v18 - 1;
    if ( !v19 )
      return 9LL;
    v20 = v19 - 1;
    if ( !v20 )
      return 9LL;
    if ( v20 == 1 )
      return 10LL;
    return 0xFFFFFFFFLL;
  }
  v8 = v7 - 1;
  if ( !v8 )
    return 5LL;
  if ( v8 != 1 )
    return 0xFFFFFFFFLL;
  if ( !(unsigned __int8)BmlIsEDIDCapableOutputTechonology(a3) && v10[22] == 1 )
    return 11LL;
  v11 = *(_DWORD *)(v9 + 80);
  if ( v11 == -1 || v11 == 1 || v11 == 2 || v11 == 3 || v11 == 14 )
  {
    if ( (unsigned int)DMMVIDEOSIGNALMODE::DivideAndRound(v10[7], v10[8]) != 60 )
      return 7LL;
    if ( *(_DWORD *)(v17 + 20) == 800 && *(_DWORD *)(v17 + 24) == 600 )
      return 4LL;
    return 3LL;
  }
  v12 = DMMVIDEOSIGNALMODE::DivideAndRound(v10[7], v10[8]);
  if ( v12 - 24 > 0x33 )
  {
    return 0;
  }
  else if ( v12 <= 0x46 && v12 >= 0x32 )
  {
    if ( v12 == 60 )
    {
      if ( *(_DWORD *)(v14 + 20) == 1024 && *(_DWORD *)(v14 + 24) == 768 )
        return 4;
      else
        return 3;
    }
    else
    {
      return 2;
    }
  }
  return v13;
}
