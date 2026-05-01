/*
 * XREFs of ?UpdateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x18048FFDC
 * Callers:
 *     ?VirtualDesktopCreated@VirtualDesktop@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@@Z @ 0x180490130 (-VirtualDesktopCreated@VirtualDesktop@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@@Z.c)
 *     ?VirtualDesktopDestroyed@VirtualDesktop@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z @ 0x180490150 (-VirtualDesktopDestroyed@VirtualDesktop@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z.c)
 *     ?VirtualDesktopMoved@VirtualDesktop@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@II@Z @ 0x180490170 (-VirtualDesktopMoved@VirtualDesktop@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@II@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CalculateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x18010EAB8 (-CalculateDesktopIndex@VirtualDesktop@@AEAAJXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18010F8F0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18017C488 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$InvokeAll@PEAVVirtualDesktop@@W4VirtualDesktopProperty@Multitasking@ComposableShell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVVirtualDesktop@@W4VirtualDesktopProperty@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180230606 (--$InvokeAll@PEAVVirtualDesktop@@W4VirtualDesktopProperty@Multitasking@ComposableShell@Internal@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktop::UpdateDesktopIndex(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rbx
  PVOID Ptr; // rbp
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  PVOID v7; // rdi
  __int64 (__fastcall *v8)(PVOID, HSTRING *); // rbx
  int v9; // eax
  HSTRING v10; // r8
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING string; // [rsp+30h] [rbp+8h] BYREF

  v2 = this + 34;
  AcquireSRWLockShared(this + 34);
  Ptr = this[17].Ptr;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  result = VirtualDesktop::CalculateDesktopIndex((VirtualDesktop *)this);
  if ( (int)result >= 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::GetImpl'::`2'::impl,
      1u,
      v5,
      v6);
    string = 0LL;
    v7 = this[13].Ptr;
    v8 = *(__int64 (__fastcall **)(PVOID, HSTRING *))(*(_QWORD *)v7 + 48LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v9 = v8(v7, &string);
    v11 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x17E,
        (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
        (const char *)(unsigned int)v9);
LABEL_8:
      WindowsDeleteString(string);
      return v11;
    }
    if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                         (Microsoft::WRL::Wrappers::Details *)string,
                         0LL,
                         v10) )
    {
      v11 = 0;
      goto LABEL_8;
    }
    WindowsDeleteString(string);
    if ( this[17].Ptr != Ptr )
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<VirtualDesktop *,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty>(
        this + 10,
        (__int64)this,
        1);
    return 0LL;
  }
  return result;
}
