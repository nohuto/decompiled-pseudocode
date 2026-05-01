/*
 * XREFs of ?OnShowWindowPolicy@CShellSnapComponent@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x180131000
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?IsVisible@SnapFlyoutHost@@QEAA_NXZ @ 0x180035E28 (-IsVisible@SnapFlyoutHost@@QEAA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180061644 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ?DismissForTargetWindow@SnapFlyoutHost@@QEAAXPEAUHWND__@@@Z @ 0x1805AF134 (-DismissForTargetWindow@SnapFlyoutHost@@QEAAXPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CShellSnapComponent::OnShowWindowPolicy(
        CShellSnapComponent *this,
        HWND a2,
        int a3,
        unsigned int *a4,
        struct tagRECT *a5)
{
  __int64 v9; // r9
  __int64 v10; // rcx
  SnapFlyoutHost *v12; // rcx
  __int64 v13; // rdx
  void (*v14)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v15; // [rsp+30h] [rbp-A8h] BYREF
  WINBOOL fPending; // [rsp+34h] [rbp-A4h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-98h] BYREF
  unsigned int v19; // [rsp+50h] [rbp-88h]
  HWND v20; // [rsp+58h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-78h] BYREF
  void *v22; // [rsp+70h] [rbp-68h]
  int v23; // [rsp+78h] [rbp-60h]
  int v24; // [rsp+7Ch] [rbp-5Ch]
  HWND *v25; // [rsp+80h] [rbp-58h]
  int v26; // [rsp+88h] [rbp-50h]
  int v27; // [rsp+8Ch] [rbp-4Ch]
  int *v28; // [rsp+90h] [rbp-48h]
  int v29; // [rsp+98h] [rbp-40h]
  int v30; // [rsp+9Ch] [rbp-3Ch]

  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    *(_QWORD *)&EventDescriptor.Id = &`WindowManagementLogging::Instance'::`2'::wrapper;
    Context = qword_1807B3E60;
    qword_1807B3E60[0] = &WindowManagementLogging::`vftable';
    qword_1807B3E78 = (__int64)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    LODWORD(EventDescriptor.Keyword) = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer((LPINIT_ONCE *)&EventDescriptor, v13, v14);
  }
  v10 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v10 > 5u )
  {
    v15 = a3;
    v20 = a2;
    v28 = &v15;
    v29 = 4;
    v30 = 0;
    v25 = &v20;
    v26 = 8;
    v27 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 5;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = *(_QWORD *)(v10 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v22 = &unk_1806C8CF3;
    v23 = 43;
    v24 = 1;
    v19 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v10 + 32), &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  *a4 = 0;
  *a5 = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SNTest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SNTest>::GetImpl'::`2'::impl,
    1u,
    3u,
    v9);
  if ( a3 == 9 || a3 == 3 )
  {
    v12 = (SnapFlyoutHost *)*((_QWORD *)this + 100);
    if ( v12 && SnapFlyoutHost::IsVisible(v12) )
      SnapFlyoutHost::DismissForTargetWindow(*((SnapFlyoutHost **)this + 100), a2);
  }
  return 0LL;
}
