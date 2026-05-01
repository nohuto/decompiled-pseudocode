/*
 * XREFs of _lambda_6e59436657fdc730ce46c13d2be9f9a3_::operator() @ 0x18019C240
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6e59436657fdc730ce46c13d2be9f9a3___::Run @ 0x1801A0AD0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6e59436657fdc730ce46c13d2be9f9a3___--Run.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x1801569AC (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1801569F4 (--1-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integral_.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x18017928C (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18019033C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18019B5FC (--0-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_ea_18019B5FC.c)
 *     ??1UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x18019BEE4 (--1UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18019E800 (-ContinueOnCurrentThread@-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgRef.c)
 *     ?Stop@?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18038F87C (-Stop@-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsP.c)
 */

void __fastcall lambda_6e59436657fdc730ce46c13d2be9f9a3_::operator()(__int64 a1)
{
  HRGN RectRgnIndirect; // rax
  BOOL v3; // eax
  HRGN v4; // rsi
  _OWORD *i; // rbx
  HRGN v6; // rax
  const char *v7; // r9
  HWND v8; // rcx
  const char *v9; // r9
  _BYTE v10[72]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD rc[3]; // [rsp+70h] [rbp-98h] BYREF
  volatile signed __int32 *v12[40]; // [rsp+88h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v12,
    a1 + 48);
  v12[0] = (volatile signed __int32 *)&SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::`vftable';
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)v12,
    (wil::ActivityThreadWatcher *)v10);
  rc[1] = 0LL;
  RectRgnIndirect = CreateRectRgnIndirect((const RECT *)(a1 + 8));
  wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
    (void **)&rc[1],
    RectRgnIndirect);
  v3 = IsRectEmpty((const RECT *)(a1 + 8));
  v4 = (HRGN)rc[1];
  if ( !v3 )
  {
    for ( i = *(_OWORD **)(a1 + 24); i != *(_OWORD **)(a1 + 32); ++i )
    {
      *(_OWORD *)&rc[1] = *i;
      if ( !IsRectEmpty((const RECT *)&rc[1]) )
      {
        v6 = CreateRectRgnIndirect((const RECT *)&rc[1]);
        if ( !CombineRgn(v4, v4, v6, 4) )
          wil::details::in1diag3::_Log_GetLastError(
            retaddr,
            (void *)0x241,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
            v7);
      }
    }
  }
  v8 = *(HWND *)a1;
  rc[1] = 0LL;
  if ( !SetWindowRgn(v8, v4, 1) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x245,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      v9);
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v12);
  wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)&rc[1]);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v10);
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::~UndockedSearchAppExperienceManager_SetWindowRgn(v12);
}
