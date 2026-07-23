/*
 * XREFs of RtlSetSystemGlobalData @ 0x14035C1C0
 * Callers:
 *     HalpTimerPropagateQpcBiasUpdate @ 0x14037A8C0 (HalpTimerPropagateQpcBiasUpdate.c)
 *     HalpTimerConfigureQpcBypass @ 0x1403B32E4 (HalpTimerConfigureQpcBypass.c)
 *     HalpTscFallback @ 0x14050ABF0 (HalpTscFallback.c)
 *     ExpRefreshTimeZoneInformation @ 0x14083EE98 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140287700 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSilo @ 0x14028A220 (PsGetCurrentServerSilo.c)
 */

DWORD __cdecl RtlSetSystemGlobalData(RTL_SYSTEM_GLOBAL_DATA_ID DataId, PVOID Buffer, DWORD Size)
{
  __int32 v4; // ecx
  __int32 v5; // ecx
  __int32 v6; // ecx
  __int32 v7; // ecx
  int v8; // ecx
  __int32 v10; // ecx
  __int32 v11; // ecx
  __int32 v12; // ecx
  __int32 v13; // ecx
  __int64 CurrentServerSilo; // rax
  _QWORD *v15; // rcx
  int v16; // ecx

  if ( DataId > GlobalDataIdConsoleSharedDataFlags )
  {
    v10 = DataId - 15;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            if ( v13 != 1 )
              return -1073741811;
            if ( Size == 8 )
            {
              *(_QWORD *)(MmWriteableSharedUserData + 952) = *(_QWORD *)Buffer;
              return 0;
            }
          }
          else if ( Size == 2 )
          {
            *(_WORD *)(MmWriteableSharedUserData + 966) = *(_WORD *)Buffer;
            return 0;
          }
        }
        else if ( Size == 1 )
        {
          *(_BYTE *)(MmWriteableSharedUserData + 966) = *(_BYTE *)Buffer;
          return 0;
        }
      }
      else if ( Size == 1 )
      {
        *(_BYTE *)(MmWriteableSharedUserData + 967) = *(_BYTE *)Buffer;
        return 0;
      }
    }
    else if ( Size == 2 )
    {
      *(_WORD *)(MmWriteableSharedUserData + 48) = *(_WORD *)Buffer;
      return 0;
    }
    return -1073741306;
  }
  if ( DataId == GlobalDataIdConsoleSharedDataFlags )
  {
    if ( Size == 4 )
    {
      v16 = *(_DWORD *)Buffer;
      if ( (*(_DWORD *)Buffer & 0x40000000) != 0 )
      {
        _interlockedbittestandset((volatile signed __int32 *)(MmWriteableSharedUserData + 752), v16 & 0xBFFFFFFF);
        return 0;
      }
      if ( v16 < 0 )
      {
        _interlockedbittestandreset((volatile signed __int32 *)(MmWriteableSharedUserData + 752), v16 & 0x7FFFFFFF);
        return 0;
      }
    }
    return -1073741306;
  }
  v4 = DataId - 1;
  if ( !v4 )
  {
    if ( Size == 8 )
    {
      *(_QWORD *)(MmWriteableSharedUserData + 592) = *(_QWORD *)Buffer;
      return 0;
    }
    return -1073741306;
  }
  v5 = v4 - 3;
  if ( !v5 )
  {
    if ( Size == 2 )
    {
      *(_WORD *)(MmWriteableSharedUserData + 44) = *(_WORD *)Buffer;
      return 0;
    }
    return -1073741306;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    if ( Size == 2 )
    {
      *(_WORD *)(MmWriteableSharedUserData + 46) = *(_WORD *)Buffer;
      return 0;
    }
    return -1073741306;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( Size == 4 )
    {
      if ( PsIsCurrentThreadInServerSilo() )
      {
        CurrentServerSilo = PsGetCurrentServerSilo();
        v15 = &PspHostSiloGlobals;
        if ( CurrentServerSilo )
          v15 = *(_QWORD **)(CurrentServerSilo + 1488);
        *(_DWORD *)(v15[165] + 584LL) = *(_DWORD *)Buffer;
      }
      else
      {
        *(_DWORD *)(MmWriteableSharedUserData + 576) = *(_DWORD *)Buffer;
      }
      return 0;
    }
    return -1073741306;
  }
  v8 = v7 - 4;
  if ( !v8 )
  {
    if ( Size == 1 )
    {
      *(_BYTE *)(MmWriteableSharedUserData + 724) = *(_BYTE *)Buffer;
      return 0;
    }
    return -1073741306;
  }
  if ( v8 == 3 )
  {
    if ( Size == 4 )
    {
      *(_DWORD *)(MmWriteableSharedUserData + 740) = *(_DWORD *)Buffer;
      return 0;
    }
    return -1073741306;
  }
  return -1073741811;
}
