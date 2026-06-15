/*
 * XREFs of ?MME_ServiceStart@@YAJXZ @ 0x180058EF0
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x180058230 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ?InitializePnpInfo@@YAHXZ @ 0x180056F04 (-InitializePnpInfo@@YAHXZ.c)
 *     WPP_SF_ @ 0x1800DDCA8 (WPP_SF_.c)
 */

__int64 MME_ServiceStart(void)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 31LL, &WPP_ea4dc79131a5388790567eb319c308bd_Traceguids);
  }
  if ( !ConvertStringSidToSidW(L"S-1-5-80-2676549577-1911656217-2625096541-4178041876-1366760775", &AudiosrvSid) )
    goto LABEL_11;
  if ( !ConvertStringSidToSidW(
          L"S-1-5-80-1580948945-3239616721-2529237571-3761093093-1214243633",
          &AudioEndpointBuilderSid) )
  {
    LocalFree(AudiosrvSid);
LABEL_11:
    AudiosrvSid = 0LL;
    AudioEndpointBuilderSid = 0LL;
    return 0LL;
  }
  if ( (unsigned int)InitializePnpInfo() )
  {
    RtlAcquireResourceExclusive(&PnpInfoResource, 1u);
    _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoShared + 1);
    _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoActual + 1);
    RtlReleaseResource(&PnpInfoResource);
  }
  return 0LL;
}
