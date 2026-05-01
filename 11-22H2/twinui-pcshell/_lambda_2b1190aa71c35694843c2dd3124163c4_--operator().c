/*
 * XREFs of _lambda_2b1190aa71c35694843c2dd3124163c4_::operator() @ 0x1801E90D8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2b1190aa71c35694843c2dd3124163c4___::Run @ 0x1801EF070 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2b1190aa71c35694843c2dd3124163c4___--Run.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800BA4B8 (-Stop@-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsP.c)
 *     ??0UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@AEBV01@@Z @ 0x1800BA978 (--0UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@AEB.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800BAF48 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??1UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x1800BB0EC (--1UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x1800BBDE4 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x180197958 (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803A43A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_2b1190aa71c35694843c2dd3124163c4_::operator()(__int64 a1)
{
  HRGN RectRgnIndirect; // rax
  RECT *i; // rbx
  HRGN v4; // rax
  const char *v5; // r9
  int v6; // edx
  const char *v7; // r9
  HRGN hrgnDst; // [rsp+20h] [rbp-E0h] BYREF
  _OWORD v9[3]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v10; // [rsp+60h] [rbp-A0h]
  int v11; // [rsp+68h] [rbp-98h]
  __int64 v12; // [rsp+70h] [rbp-90h]
  RECT rc; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v14[48]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD *v15; // [rsp+C0h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::UndockedSearchAppExperienceManager_SetWindowRgn(
    (SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn *)v14,
    (const struct SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn *)(a1 + 48));
  if ( *v15 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v9,
      (struct wil::details::IFailureCallback *)v14,
      (const struct wil::details::StoredCallContextInfo *)(v15 + 10));
  }
  else
  {
    memset(v9, 0, sizeof(v9));
    v10 = 0LL;
    v11 = 0;
    v12 = 0LL;
  }
  hrgnDst = 0LL;
  RectRgnIndirect = CreateRectRgnIndirect((const RECT *)(a1 + 8));
  wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
    (void **)&hrgnDst,
    RectRgnIndirect);
  if ( !IsRectEmpty((const RECT *)(a1 + 8)) )
  {
    for ( i = *(RECT **)(a1 + 24); i != *(RECT **)(a1 + 32); ++i )
    {
      rc = *i;
      if ( !IsRectEmpty(&rc) )
      {
        v4 = CreateRectRgnIndirect(&rc);
        if ( !CombineRgn(hrgnDst, hrgnDst, v4, 4) )
          wil::details::in1diag3::_Log_GetLastError(
            retaddr,
            (void *)0x2A4,
            (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
            v5);
      }
    }
  }
  if ( !SetWindowRgn(*(HWND *)a1, hrgnDst, 1) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x2A8,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      v7);
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (__int64)v14,
    v6);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v9);
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::~UndockedSearchAppExperienceManager_SetWindowRgn((SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn *)v14);
}
