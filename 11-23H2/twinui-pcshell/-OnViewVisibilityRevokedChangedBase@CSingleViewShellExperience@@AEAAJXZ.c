/*
 * XREFs of ?OnViewVisibilityRevokedChangedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x1807479CC
 * Callers:
 *     ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1800DECE8 (-OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B9714 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800BA8D0 (--0-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1OnViewVisibilityRevokedChangedBase@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1802EBC1C (--1OnViewVisibilityRevokedChangedBase@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@OnViewVisibilityRevokedChangedBase@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x180747CFC (-StartActivity@OnViewVisibilityRevokedChangedBase@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSingleViewShellExperience::OnViewVisibilityRevokedChangedBase(HSTRING *this)
{
  const unsigned __int16 *StringRawBuffer; // rdi
  const unsigned __int16 *v3; // rbx
  int v4; // eax
  int v5; // edx
  unsigned int v6; // ebx
  int v8[2]; // [rsp+20h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  StringRawBuffer = WindowsGetStringRawBuffer(this[2], 0LL);
  v3 = WindowsGetStringRawBuffer(this[1], 0LL);
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v8,
    (__int64)"OnViewVisibilityRevokedChangedBase");
  *(_QWORD *)v8 = &SingleViewExperienceTelemetry::OnViewVisibilityRevokedChangedBase::`vftable';
  SingleViewExperienceTelemetry::OnViewVisibilityRevokedChangedBase::StartActivity(
    (SingleViewExperienceTelemetry::OnViewVisibilityRevokedChangedBase *)v8,
    v3,
    StringRawBuffer);
  v4 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)this[11] + 64LL))(this[11], this);
  v6 = v4;
  if ( v4 >= 0 )
  {
    wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64 *)v8,
      v5);
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x238,
      (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v4);
  }
  SingleViewExperienceTelemetry::OnViewVisibilityRevokedChangedBase::~OnViewVisibilityRevokedChangedBase((SingleViewExperienceTelemetry::OnViewVisibilityRevokedChangedBase *)v8);
  return v6;
}
