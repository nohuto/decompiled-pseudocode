/*
 * XREFs of ?RemoveKeepAlive@CSingleViewShellExperience@@QEAAJXZ @ 0x1805F17C0
 * Callers:
 *     ?RemoveKeepAlive@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x180391760 (-RemoveKeepAlive@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ.c)
 * Callees:
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180071A38 (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_Tl_ea_180071A38.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180075EA0 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflector.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800C912C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x1800C9254 (-NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewMa.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1RemoveKeepAlive@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1805F1010 (--1RemoveKeepAlive@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@RemoveKeepAlive@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z @ 0x1805F1AA0 (-StartActivity@RemoveKeepAlive@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSingleViewShellExperience::RemoveKeepAlive(
        CSingleViewShellExperience *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  ExperienceManagerUtils *v3; // rcx
  unsigned int v4; // ebx
  void *v5; // rsi
  unsigned int v6; // ebp
  const unsigned __int16 *StringRawBuffer; // rdi
  const unsigned __int16 *v8; // rbx
  int v9; // eax
  DWORD v10; // edx
  __int64 v11; // rdx
  int v12; // eax
  _BYTE v14[16]; // [rsp+30h] [rbp-178h] BYREF
  volatile signed __int32 *v15[40]; // [rsp+40h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  v3 = (ExperienceManagerUtils *)*((_QWORD *)this + 3);
  if ( v3 )
  {
    v5 = (void *)ExperienceManagerUtils::WindowFromViewWrapper(v3, a2);
    v6 = *((_DWORD *)this + 10);
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 2), 0LL);
    v8 = WindowsGetStringRawBuffer(*((HSTRING *)this + 1), 0LL);
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
      (__int64)v15,
      (__int64)"RemoveKeepAlive");
    v15[0] = (volatile signed __int32 *)&SingleViewExperienceTelemetry::RemoveKeepAlive::`vftable';
    SingleViewExperienceTelemetry::RemoveKeepAlive::StartActivity(
      (SingleViewExperienceTelemetry::RemoveKeepAlive *)v15,
      v8,
      StringRawBuffer,
      v6,
      v5);
    v14[0] = 0;
    v9 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 10) + 56LL))(*((_QWORD *)this + 10), v14);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3C1,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v9);
    if ( v14[0] )
    {
      v4 = -2147019873;
      v11 = 962LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)v4);
LABEL_13:
      SingleViewExperienceTelemetry::RemoveKeepAlive::~RemoveKeepAlive(v15);
      return v4;
    }
    if ( *((_DWORD *)this + 18) )
    {
      *((_DWORD *)this + 18) = 1;
    }
    else
    {
      v12 = ShellExperienceHelpers::NavigationLevelOverrideHelper::NavigateView(
              (__int64)this + 72,
              *((ExperienceManagerUtils **)this + 3),
              1u);
      v4 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x80,
          (__int64)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
          (const char *)(unsigned int)v12);
        v11 = 963LL;
        goto LABEL_10;
      }
    }
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)v15,
      v10);
    v4 = 0;
    goto LABEL_13;
  }
  v4 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B8,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)0x8000FFFFLL);
  return v4;
}
