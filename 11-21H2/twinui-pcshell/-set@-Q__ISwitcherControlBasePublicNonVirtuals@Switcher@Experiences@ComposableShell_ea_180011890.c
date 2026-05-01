/*
 * XREFs of ?set@?Q__ISwitcherControlBasePublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@DismissAnimationTelemetryId@SwitcherControlBase@2345@UE$AAAXVGuid@Platform@@@Z @ 0x180011890
 * Callers:
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x1800135A8 (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1800F65E4 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _set__Q__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__DismissAnimationTelemetryId_SwitcherControlBase_2345_UE_AAAXVGuid_Platform___Z(
        __int64 a1,
        __int128 *a2)
{
  __int64 (__fastcall *v3)(__int64, __int128 *); // rax
  int v4; // ebx
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h]

  v7 = __abi_winrt_cast_to(
         0LL,
         a1,
         &_uuidof__AU__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__);
  v3 = *(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v7 + 312LL);
  v6 = *a2;
  v4 = v3(v7, &v6);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v4 < 0 )
  {
    __abi_WinRTraiseException(v4);
    JUMPOUT(0x180011914LL);
  }
  return result;
}
