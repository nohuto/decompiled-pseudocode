/*
 * XREFs of ?UpdateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x1805457FC
 * Callers:
 *     ?VirtualDesktopCreated@VirtualDesktop@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180545920 (-VirtualDesktopCreated@VirtualDesktop@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?VirtualDesktopDestroyed@VirtualDesktop@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180545940 (-VirtualDesktopDestroyed@VirtualDesktop@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?VirtualDesktopMoved@VirtualDesktop@@UEAAJPEAUIVirtualDesktop@@II@Z @ 0x180545960 (-VirtualDesktopMoved@VirtualDesktop@@UEAAJPEAUIVirtualDesktop@@II@Z.c)
 * Callees:
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18009A320 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CalculateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x18013B5B0 (-CalculateDesktopIndex@VirtualDesktop@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$InvokeAll@PEAVVirtualDesktop@@W4VirtualDesktopProperty@Multitasking@ComposableShell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVVirtualDesktop@@W4VirtualDesktopProperty@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1802DEF0A (--$InvokeAll@PEAVVirtualDesktop@@W4VirtualDesktopProperty@Multitasking@ComposableShell@Internal@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktop::UpdateDesktopIndex(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rbx
  PVOID Ptr; // rbp
  __int64 result; // rax
  PVOID v5; // rdi
  __int64 (__fastcall *v6)(PVOID, HSTRING *); // rbx
  int v7; // eax
  HSTRING v8; // r8
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING string; // [rsp+30h] [rbp+8h] BYREF

  v2 = this + 35;
  AcquireSRWLockShared(this + 35);
  Ptr = this[18].Ptr;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  result = VirtualDesktop::CalculateDesktopIndex((VirtualDesktop *)this);
  if ( (int)result >= 0 )
  {
    string = 0LL;
    v5 = this[14].Ptr;
    v6 = *(__int64 (__fastcall **)(PVOID, HSTRING *))(*(_QWORD *)v5 + 40LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v7 = v6(v5, &string);
    v9 = v7;
    if ( v7 >= 0 )
    {
      if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                            (Microsoft::WRL::Wrappers::Details *)string,
                            0LL,
                            v8)
        && this[18].Ptr != Ptr )
      {
        Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<VirtualDesktop *,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty>(
          this + 11,
          (__int64)this,
          1);
      }
      v9 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x165,
        (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
        (const char *)(unsigned int)v7);
    }
    WindowsDeleteString(string);
    return v9;
  }
  return result;
}
