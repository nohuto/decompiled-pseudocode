/*
 * XREFs of ?OnPositionChanged@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAJXZ @ 0x1804105EC
 * Callers:
 *     ?OnPositionChanged@GamingOverlayExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1804030B0 (-OnPositionChanged@GamingOverlayExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::OnPositionChanged(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rbx
  const char *v3; // r9
  PVOID Ptr; // rcx
  int v5; // eax
  unsigned int v6; // edi
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = this + 22;
  AcquireSRWLockExclusive(this + 22);
  try
  {
    Ptr = this[5].Ptr;
    if ( Ptr )
    {
      v5 = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 96LL))(Ptr);
      v6 = v5;
      if ( v5 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x16E,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
          (const char *)(unsigned int)v5);
      if ( v2 )
        ReleaseSRWLockExclusive(v2);
      result = v6;
    }
    else
    {
      if ( v2 )
        ReleaseSRWLockExclusive(v2);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x172,
                           (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
                           v3);
  }
  return result;
}
