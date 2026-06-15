/*
 * XREFs of ?PreADGTermination@CAudioSrv@@EEAAXXZ @ 0x1800C4030
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ?GetAt@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@PEAU__POSITION@@@Z @ 0x1800C3884 (-GetAt@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADS.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x1800C3DB4 (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1800C5118 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18015BDB0 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioSrv::PreADGTermination(CAudioSrv *this)
{
  int v1; // ebx
  _QWORD *v2; // rcx
  _QWORD *v3; // rax
  __int64 v4; // rcx
  size_t cchDest; // [rsp+40h] [rbp-C0h] BYREF
  STRSAFE_LPWSTR v6; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v7; // [rsp+50h] [rbp-B0h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+58h] [rbp-A8h] BYREF
  wchar_t pszDest[1024]; // [rsp+60h] [rbp-A0h] BYREF

  EnterCriticalSection(&g_csVadList);
  v8 = &g_csVadList;
  if ( qword_1801C1A10 )
  {
    v6 = pszDest;
    cchDest = 1024LL;
    v1 = StringCchPrintfExW(
           pszDest,
           0x400uLL,
           &v6,
           &cchDest,
           0x800u,
           L"AudioSrv active Stream on AudioDG terminating: ");
    if ( v1 >= 0 )
    {
      v2 = (_QWORD *)g_VADServerList;
      v7 = (_QWORD *)g_VADServerList;
      if ( !g_VADServerList )
        goto LABEL_9;
      do
      {
        v3 = (_QWORD *)ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetAt((__int64)v2, (__int64)v2);
        v1 = StringCchPrintfExW(v6, cchDest, &v6, &cchDest, 0x800u, L"%p ", *v3);
        if ( v1 )
          break;
        ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext(v4, &v7);
        v2 = v7;
      }
      while ( v7 );
      if ( v1 < 0 )
      {
        if ( v1 == -2147024774 )
          MicrosoftTelemetryAssertTriggeredArgs("AudioSrv.dll", 2147942522LL, 0LL, 1LL);
      }
      else
      {
LABEL_9:
        MicrosoftTelemetryAssertTriggeredArgs("AudioSrv.dll", (unsigned int)v1, 0LL, 1LL);
      }
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v8);
}
