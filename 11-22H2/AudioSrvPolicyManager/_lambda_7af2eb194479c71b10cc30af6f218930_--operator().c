/*
 * XREFs of _lambda_7af2eb194479c71b10cc30af6f218930_::operator() @ 0x18003473C
 * Callers:
 *     wil::init_once_nothrow__lambda_7af2eb194479c71b10cc30af6f218930___ @ 0x180033760 (wil--init_once_nothrow__lambda_7af2eb194479c71b10cc30af6f218930___.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180001D6C (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x180001DD0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x1800111BC (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18002FD44 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@$$BY0A@U_WTS_SESSION_INFOW@@U?$function_deleter@P6AXPEAX@Z$1?WTSFreeMemory@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x180033FEC (--1-$out_param_t@V-$unique_ptr@$$BY0A@U_WTS_SESSION_INFOW@@U-$function_deleter@P6AXPEAX@Z$1-WTSF.c)
 *     ?QueueVolumeRefreshForAllTsSessions@@YAXXZ @ 0x180036774 (-QueueVolumeRefreshForAllTsSessions@@YAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_MutedListenTo@@@details@wil@@QEAA_NXZ @ 0x18003B254 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_MutedListenTo@@@details.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_7af2eb194479c71b10cc30af6f218930_::operator()(__int64 a1)
{
  char IsEnabled; // al
  BOOL v2; // ebx
  unsigned int v3; // ebx
  BOOL v4; // esi
  const char *v5; // r9
  __int64 v6; // rcx
  int v7; // esi
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  PVOID v12; // rcx
  const struct _tlgProvider_t *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  PVOID v16; // rcx
  unsigned int v17; // ebx
  PVOID v18; // rcx
  BOOL v20; // ebx
  DWORD i; // esi
  BOOL v22; // ebx
  __int64 v23; // rcx
  int v24; // ebx
  const struct _tlgProvider_t *v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  const struct _tlgProvider_t *v28; // rbx
  signed int LastError; // eax
  __int64 v30; // r8
  __int64 v31; // r9
  PVOID v32; // rcx
  PVOID v33; // rcx
  PVOID v34; // rcx
  PVOID v35; // rcx
  PVOID v36; // [rsp+40h] [rbp-40h] BYREF
  PVOID pMemory; // [rsp+48h] [rbp-38h] BYREF
  int v38; // [rsp+50h] [rbp-30h] BYREF
  PVOID v39; // [rsp+58h] [rbp-28h] BYREF
  PVOID *p_pMemory; // [rsp+60h] [rbp-20h] BYREF
  PWTS_SESSION_INFOW ppSessionInfo; // [rsp+68h] [rbp-18h] BYREF
  char v42; // [rsp+70h] [rbp-10h]
  signed int v43; // [rsp+78h] [rbp-8h] BYREF
  int v44; // [rsp+7Ch] [rbp-4h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  DWORD pCount; // [rsp+B0h] [rbp+30h] BYREF
  int v47; // [rsp+B4h] [rbp+34h]
  DWORD pBytesReturned; // [rsp+B8h] [rbp+38h] BYREF
  int v49; // [rsp+C0h] [rbp+40h] BYREF
  int v50; // [rsp+C8h] [rbp+48h] BYREF

  v47 = HIDWORD(a1);
  v36 = 0LL;
  pCount = 0;
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_MutedListenTo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_MutedListenTo>::GetImpl'::`2'::impl);
  ppSessionInfo = 0LL;
  v42 = 1;
  p_pMemory = &v36;
  if ( IsEnabled )
  {
    v2 = WTSEnumerateSessionsW(0LL, 0, 1u, &ppSessionInfo, &pCount);
    wil::details::out_param_t<wistd::unique_ptr<_WTS_SESSION_INFOW [0],wil::function_deleter<void (*)(void *),&void WTSFreeMemory(void *)>>>::~out_param_t<wistd::unique_ptr<_WTS_SESSION_INFOW [0],wil::function_deleter<void (*)(void *),&void WTSFreeMemory(void *)>>>((__int64)&p_pMemory);
    if ( v2 )
    {
      v3 = 0;
      if ( pCount )
      {
        while ( 1 )
        {
          pMemory = 0LL;
          pBytesReturned = 0;
          p_pMemory = &pMemory;
          ppSessionInfo = 0LL;
          v42 = 1;
          v4 = WTSQuerySessionInformationW(
                 0LL,
                 *((_DWORD *)v36 + 6 * v3),
                 WTSSessionInfoEx,
                 (LPWSTR *)&ppSessionInfo,
                 &pBytesReturned);
          if ( !v4 )
            wil::details::in1diag3::_Log_GetLastError(
              retaddr,
              (void *)0x702,
              (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
              v5);
          wil::details::out_param_t<wistd::unique_ptr<_WTS_SESSION_INFOW [0],wil::function_deleter<void (*)(void *),&void WTSFreeMemory(void *)>>>::~out_param_t<wistd::unique_ptr<_WTS_SESSION_INFOW [0],wil::function_deleter<void (*)(void *),&void WTSFreeMemory(void *)>>>((__int64)&p_pMemory);
          if ( v4 )
          {
            v7 = *((_DWORD *)pMemory + 4);
            v8 = AudioSrvPolicyManagerTelemetryProvider::Provider(v6);
            if ( *(_DWORD *)v8 > 4u )
            {
              v49 = v7;
              v50 = g_GlobalUserPresent;
              v38 = *((_DWORD *)v36 + 6 * v3);
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                (__int64)v8,
                byte_180056CD4,
                v10,
                v11,
                (__int64)&v38,
                (__int64)&v50,
                (__int64)&v49);
            }
            if ( v7 == 1 )
              break;
          }
          v12 = pMemory;
          pMemory = 0LL;
          if ( v12 )
            WTSFreeMemory(v12);
          if ( ++v3 >= pCount )
            goto LABEL_18;
        }
        g_GlobalUserPresent = 1;
        v13 = AudioSrvPolicyManagerTelemetryProvider::Provider(v9);
        if ( *(_DWORD *)v13 > 4u )
        {
          v49 = *((_DWORD *)v36 + 6 * v3);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
            (__int64)v13,
            byte_180056C9F,
            v14,
            v15,
            (__int64)&v49);
        }
        QueueVolumeRefreshForAllTsSessions();
        v16 = pMemory;
        pMemory = 0LL;
        if ( v16 )
          WTSFreeMemory(v16);
      }
    }
LABEL_18:
    v17 = g_GlobalUserPresent == 0 ? 0x80004004 : 0;
    v18 = v36;
    v36 = 0LL;
    if ( v18 )
      WTSFreeMemory(v18);
    return v17;
  }
  v20 = WTSEnumerateSessionsW(0LL, 0, 1u, &ppSessionInfo, &pCount);
  wil::details::out_param_t<wistd::unique_ptr<_WTS_SESSION_INFOW [0],wil::function_deleter<void (*)(void *),&void WTSFreeMemory(void *)>>>::~out_param_t<wistd::unique_ptr<_WTS_SESSION_INFOW [0],wil::function_deleter<void (*)(void *),&void WTSFreeMemory(void *)>>>((__int64)&p_pMemory);
  if ( v20 )
  {
    for ( i = 0; i < pCount; ++i )
    {
      v39 = 0LL;
      pBytesReturned = 0;
      p_pMemory = &v39;
      ppSessionInfo = 0LL;
      v42 = 1;
      v22 = WTSQuerySessionInformationW(
              0LL,
              *((_DWORD *)v36 + 6 * i),
              WTSSessionInfoEx,
              (LPWSTR *)&ppSessionInfo,
              &pBytesReturned);
      wil::details::out_param_t<wistd::unique_ptr<_WTS_SESSION_INFOW [0],wil::function_deleter<void (*)(void *),&void WTSFreeMemory(void *)>>>::~out_param_t<wistd::unique_ptr<_WTS_SESSION_INFOW [0],wil::function_deleter<void (*)(void *),&void WTSFreeMemory(void *)>>>((__int64)&p_pMemory);
      if ( v22 )
      {
        v24 = *((_DWORD *)v39 + 4);
        v25 = AudioSrvPolicyManagerTelemetryProvider::Provider(v23);
        if ( *(_DWORD *)v25 > 4u )
        {
          v49 = v24;
          v50 = g_GlobalUserPresent;
          v38 = *((_DWORD *)v36 + 6 * i);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (__int64)v25,
            byte_180056C3C,
            v26,
            v27,
            (__int64)&v38,
            (__int64)&v50,
            (__int64)&v49);
        }
        if ( v24 == 1 )
        {
          g_GlobalUserPresent = 1;
          v33 = v39;
          v39 = 0LL;
          if ( v33 )
          {
            WTSFreeMemory(v33);
            break;
          }
LABEL_43:
          v35 = v36;
          v36 = 0LL;
          if ( v35 )
            WTSFreeMemory(v35);
          return 0LL;
        }
        if ( !v24 )
          g_GlobalUserPresent = 0;
      }
      else
      {
        v28 = AudioSrvPolicyManagerTelemetryProvider::Provider(v23);
        if ( *(_DWORD *)v28 > 4u )
        {
          LastError = GetLastError();
          if ( LastError > 0 )
            LastError = (unsigned __int16)LastError | 0x80070000;
          v43 = LastError;
          v44 = g_GlobalUserPresent;
          LODWORD(pMemory) = *((_DWORD *)v36 + 6 * i);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (__int64)v28,
            byte_180056BE0,
            v30,
            v31,
            (__int64)&pMemory,
            (__int64)&v44,
            (__int64)&v43);
        }
      }
      v32 = v39;
      v39 = 0LL;
      if ( v32 )
        WTSFreeMemory(v32);
    }
  }
  if ( g_GlobalUserPresent )
    goto LABEL_43;
  v34 = v36;
  v36 = 0LL;
  if ( v34 )
    WTSFreeMemory(v34);
  return 2147500036LL;
}
