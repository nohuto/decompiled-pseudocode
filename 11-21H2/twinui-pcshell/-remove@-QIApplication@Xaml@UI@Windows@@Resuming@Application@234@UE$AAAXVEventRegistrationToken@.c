/*
 * XREFs of ?remove@?QIApplication@Xaml@UI@Windows@@Resuming@Application@234@UE$AAAXVEventRegistrationToken@Foundation@4@@Z @ 0x180427CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1800F65E4 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall _remove__QIApplication_Xaml_UI_Windows__Resuming_Application_234_UE_AAAXVEventRegistrationToken_Foundation_4__Z(
        __int64 (__fastcall ***a1)(_QWORD, __int64, __int64 *),
        __int64 a2)
{
  int v3; // ebx
  __int64 result; // rax
  __int64 v5; // [rsp+40h] [rbp+18h]

  v5 = __abi_winrt_cast_to(0, a1, (__int64)&_uuidof__AUIApplication_Xaml_UI_Windows__);
  v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 128LL))(v5, a2);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v3 < 0 )
  {
    __abi_WinRTraiseException(v3);
    __debugbreak();
  }
  return result;
}
