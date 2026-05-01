/*
 * XREFs of _lambda_e93b07e05eb73953e8a67c4fda015070_::operator() @ 0x180136F40
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e93b07e05eb73953e8a67c4fda015070___::Run @ 0x180136F30 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e93b07e05eb73953e8a67c4fda015070___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@AEAVWeakRef@23@@Z @ 0x1800743DC (--$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA-AV-$ComPtr@UIInspectable@@@WRL@Microsoft@.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180075EA0 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflector.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z @ 0x180137074 (-LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18013751C (-ContinueOnCurrentThread@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAA.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x1801414A0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_e93b07e05eb73953e8a67c4fda015070_::operator()(__int64 a1)
{
  int v2; // ebx
  const unsigned __int16 *StringRawBuffer; // rax
  const unsigned __int16 *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rcx
  DWORD v7; // edx
  _BYTE v9[32]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v10[24]; // [rsp+40h] [rbp-38h] BYREF
  int v11; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v13; // [rsp+80h] [rbp+8h] BYREF

  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    a1 + 32,
    v9);
  v2 = *(_DWORD *)(a1 + 24);
  if ( v2 >= 0 )
  {
    ExperienceManagerUtils::AsStrong<IInspectable>(&v13, (Microsoft::WRL::WeakRef *)a1);
    if ( v13 )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 16), 0LL);
      v4 = StringRawBuffer;
      v5 = *(_QWORD *)(a1 + 8);
      if ( !*(_QWORD *)(v5 + 168)
        || (v2 = CSingleViewShellExperience::LaunchCore(
                   (CSingleViewShellExperience *)v5,
                   (const struct Microsoft::WRL::Wrappers::HString *)(v5 + 168),
                   StringRawBuffer),
            v2 < 0) )
      {
        v6 = *(_QWORD *)(a1 + 8);
        if ( !*(_QWORD *)(v6 + 184)
          || (v2 = CSingleViewShellExperience::LaunchCore(
                     (CSingleViewShellExperience *)v6,
                     (const struct Microsoft::WRL::Wrappers::HString *)(v6 + 184),
                     v4),
              v2 < 0) )
        {
          v2 = CSingleViewShellExperience::LaunchCore(
                 *(CSingleViewShellExperience **)(a1 + 8),
                 (const struct Microsoft::WRL::Wrappers::HString *)(*(_QWORD *)(a1 + 8) + 8LL),
                 v4);
        }
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 88LL) + 104LL))(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL),
        *(_QWORD *)(a1 + 8),
        (unsigned int)v2);
      if ( v2 < 0 )
        goto LABEL_9;
      wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
        a1 + 32,
        v7);
    }
    v2 = 0;
LABEL_9:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x11F,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)(unsigned int)v2);
LABEL_10:
  if ( v11 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v10);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v9);
  return (unsigned int)v2;
}
