/*
 * XREFs of ?OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1800B9E38
 * Callers:
 *     ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1800DECE8 (-OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StartActivity@OnEventQueued@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x1800B930C (-StartActivity@OnEventQueued@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ??$OnEventQueued_EventName@PEBGPEBGPEBG@OnEventQueued@SingleViewExperienceTelemetry@@SAX$$QEAPEBG00@Z @ 0x1800B93C8 (--$OnEventQueued_EventName@PEBGPEBGPEBG@OnEventQueued@SingleViewExperienceTelemetry@@SAX$$QEAPEB.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B9714 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ??1OnEventQueued@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1800B9E0C (--1OnEventQueued@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800BA8D0 (--0-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CSingleViewShellExperience::OnEventQueued(
        HSTRING *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *a2)
{
  const unsigned __int16 *StringRawBuffer; // rdi
  const unsigned __int16 *v5; // rbx
  __int64 (__fastcall *v6)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, HSTRING *); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 (__fastcall *v9)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, __int64 *); // rbx
  int v10; // eax
  int v11; // edx
  __int64 v13; // rdx
  int v14; // [rsp+20h] [rbp-E0h]
  HSTRING string; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+38h] [rbp-C8h] BYREF
  PCWSTR v17; // [rsp+40h] [rbp-C0h] BYREF
  PCWSTR v18; // [rsp+48h] [rbp-B8h] BYREF
  PCWSTR v19[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v20[40]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  StringRawBuffer = WindowsGetStringRawBuffer(this[2], 0LL);
  v5 = WindowsGetStringRawBuffer(this[1], 0LL);
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v20);
  v20[0] = (__int64)&SingleViewExperienceTelemetry::OnEventQueued::`vftable';
  SingleViewExperienceTelemetry::OnEventQueued::StartActivity(
    (SingleViewExperienceTelemetry::OnEventQueued *)v20,
    v5,
    StringRawBuffer);
  string = 0LL;
  v6 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, HSTRING *))(*(_QWORD *)a2 + 64LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v7 = v6(a2, &string);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x296,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v7,
      v14);
    goto LABEL_6;
  }
  v17 = WindowsGetStringRawBuffer(string, 0LL);
  v18 = WindowsGetStringRawBuffer(this[2], 0LL);
  v19[0] = WindowsGetStringRawBuffer(this[1], 0LL);
  SingleViewExperienceTelemetry::OnEventQueued::OnEventQueued_EventName<unsigned short const *,unsigned short const *,unsigned short const *>(
    (__int64 *)v19,
    (__int64 *)&v18,
    (__int64 *)&v17);
  v16 = 0LL;
  v9 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, __int64 *))(*(_QWORD *)a2 + 72LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
  v10 = v9(a2, &v16);
  v8 = v10;
  if ( v10 < 0 )
  {
    v13 = 667LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v10,
      v14);
    goto LABEL_5;
  }
  v10 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *, HSTRING, __int64))(*(_QWORD *)this[11] + 88LL))(
          this[11],
          this,
          string,
          v16);
  v8 = v10;
  if ( v10 < 0 )
  {
    v13 = 668LL;
    goto LABEL_10;
  }
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v20, v11);
  v8 = 0;
LABEL_5:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
LABEL_6:
  WindowsDeleteString(string);
  string = 0LL;
  SingleViewExperienceTelemetry::OnEventQueued::~OnEventQueued((SingleViewExperienceTelemetry::OnEventQueued *)v20);
  return v8;
}
