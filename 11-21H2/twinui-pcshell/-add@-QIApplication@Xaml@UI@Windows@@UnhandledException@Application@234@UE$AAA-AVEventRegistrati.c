/*
 * XREFs of ?add@?QIApplication@Xaml@UI@Windows@@UnhandledException@Application@234@UE$AAA?AVEventRegistrationToken@Foundation@4@PE$AAVUnhandledExceptionEventHandler@234@@Z @ 0x1804276F0
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1800F65E4 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

_QWORD *__fastcall _add__QIApplication_Xaml_UI_Windows__UnhandledException_Application_234_UE_AAA_AVEventRegistrationToken_Foundation_4_PE_AAVUnhandledExceptionEventHandler_234__Z(
        __int64 (__fastcall ***a1)(_QWORD, __int64, __int64 *),
        _QWORD *a2,
        __int64 a3)
{
  int v5; // edi
  __int64 v7; // [rsp+48h] [rbp+20h]

  *a2 = 0LL;
  v7 = __abi_winrt_cast_to(0, a1, (__int64)&_uuidof__AUIApplication_Xaml_UI_Windows__);
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v7 + 88LL))(v7, a3, a2);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v5 < 0 )
  {
    __abi_WinRTraiseException(v5);
    __debugbreak();
  }
  return a2;
}
