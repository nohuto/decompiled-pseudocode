/*
 * XREFs of ?set@ShyTaskbarMargin@__ITaskViewTimelinePublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXVThickness@Xaml@UI@Windows@@@Z @ 0x180072370
 * Callers:
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x18007B938 (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1804FDE00 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::__ITaskViewTimelinePublicNonVirtuals::ShyTaskbarMargin::set(
        __int64 *a1,
        _OWORD *a2)
{
  __int64 v2; // rax
  __int128 v3; // xmm1
  __int64 result; // rax
  _OWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *a1;
  v3 = a2[1];
  v5[0] = *a2;
  v5[1] = v3;
  result = (*(__int64 (__fastcall **)(__int64 *, _OWORD *))(v2 + 128))(a1, v5);
  if ( (int)result < 0 )
  {
    __abi_WinRTraiseException(result);
    JUMPOUT(0x1800723B5LL);
  }
  return result;
}
