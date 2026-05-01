/*
 * XREFs of ?RuntimeClassInitialize@CMultitaskingViewServiceProvider@@QEAAJXZ @ 0x180114850
 * Callers:
 *     ??$MakeAndInitialize@VCMultitaskingViewServiceProvider@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180113DFC (--$MakeAndInitialize@VCMultitaskingViewServiceProvider@@UIUnknown@@$$V@Details@WRL@Microsoft@@YA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800B0B20 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x180103744 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ?_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x180113E9C (-_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 *     ?Initialize@ForegroundStaging@@QEAAJXZ @ 0x1801163F8 (-Initialize@ForegroundStaging@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

__int64 __fastcall CMultitaskingViewServiceProvider::RuntimeClassInitialize(CMultitaskingViewServiceProvider *this)
{
  int inited; // edi
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // rdx
  int v7[4]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v8; // [rsp+30h] [rbp-D0h]
  __int128 v9; // [rsp+40h] [rbp-C0h]
  __int64 v10; // [rsp+50h] [rbp-B0h]
  __int64 v11; // [rsp+58h] [rbp-A8h]
  __int128 v12; // [rsp+60h] [rbp-A0h]
  __int64 v13; // [rsp+70h] [rbp-90h]
  __int64 v14; // [rsp+78h] [rbp-88h]
  __int128 v15; // [rsp+80h] [rbp-80h]
  __int64 v16; // [rsp+90h] [rbp-70h]
  __int64 v17; // [rsp+98h] [rbp-68h]
  __int128 v18; // [rsp+A0h] [rbp-60h]
  __int64 v19; // [rsp+B0h] [rbp-50h]
  __int64 v20; // [rsp+B8h] [rbp-48h]
  __int128 v21; // [rsp+C0h] [rbp-40h]
  __int64 v22; // [rsp+D0h] [rbp-30h]
  __int64 v23; // [rsp+D8h] [rbp-28h]
  __int128 v24; // [rsp+E0h] [rbp-20h]
  __int64 v25; // [rsp+F0h] [rbp-10h]
  __int64 v26; // [rsp+F8h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+18h]

  inited = CObjectWithThreadUseDetection::InitApartmentId((CMultitaskingViewServiceProvider *)((char *)this + 112));
  if ( inited < 0 )
  {
    v6 = 107LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)inited);
    return (unsigned int)inited;
  }
  inited = CMultitaskingViewServiceProvider::_InitChildServices(this);
  if ( inited < 0 )
  {
    v6 = 109LL;
    goto LABEL_8;
  }
  v10 = *((_QWORD *)this + 23);
  v11 = 0LL;
  v13 = *((_QWORD *)this + 24);
  v14 = 0LL;
  v16 = *((_QWORD *)this + 22);
  *(_OWORD *)v7 = *(_OWORD *)&SID_MultitaskingViewServiceProvider.Revision;
  v17 = 0LL;
  v19 = *((_QWORD *)this + 25);
  v9 = *(_OWORD *)&SID_AllUpView.Revision;
  v20 = 0LL;
  v22 = *((_QWORD *)this + 27);
  v12 = *(_OWORD *)&SID_PPIAllUpView.Revision;
  v23 = 0LL;
  v25 = *((_QWORD *)this + 29);
  v15 = *(_OWORD *)&SID_MultitaskingViewGestureHandler.Revision;
  v26 = 0LL;
  v8 = 0LL;
  v18 = *(_OWORD *)&SID_MultitaskingViewVisibilityService.Revision;
  v21 = *(_OWORD *)&SID_ApplicationViewIconLoaderService.Revision;
  v24 = *(_OWORD *)&SID_VirtualDesktopSwitcher.Revision;
  inited = CImmersiveShellComponent::RegisterServiceInformation(
             (CMultitaskingViewServiceProvider *)((char *)this + 24),
             (const struct CImmersiveShellComponent::ISC_SERVICE *)v7,
             7uLL);
  if ( inited < 0 )
  {
    v6 = 125LL;
    goto LABEL_8;
  }
  v3 = ForegroundStaging::Initialize((CMultitaskingViewServiceProvider *)((char *)this + 248));
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x80,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
