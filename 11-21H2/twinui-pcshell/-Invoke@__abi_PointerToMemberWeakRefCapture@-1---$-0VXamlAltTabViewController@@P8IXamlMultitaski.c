/*
 * XREFs of ?Invoke@__abi_PointerToMemberWeakRefCapture@?1???$?0VXamlAltTabViewController@@P8IXamlMultitaskingViewController@@E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVXamlAltTabViewController@@P8IXamlMultitaskingViewController@@E$AAAXPE$AAUISwitchItem@Multitasking@5Internal@Windows@@@ZW4CallbackContext@Platform@@_N@Z@UEAAX1@Z @ 0x18060EAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Resolve@IWeakReference@Details@Platform@@UE$AAAPE$AAVObject@3@PEAVGuid@3@@Z @ 0x180012F74 (-Resolve@IWeakReference@Details@Platform@@UE$AAAPE$AAVObject@3@PEAVGuid@3@@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1800F65E4 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall `WindowsInternal::ComposableShell::Experiences::Switcher::ItemInvokedEventHandler::ItemInvokedEventHandler'::`2'::__abi_PointerToMemberWeakRefCapture::Invoke(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall ***v5)(_QWORD, __int64, __int64 *); // rbx
  __int64 v6; // rdi
  __int64 pExceptionObject; // [rsp+40h] [rbp+8h] BYREF
  __int64 (__fastcall ***v9)(_QWORD, __int64, __int64 *); // [rsp+50h] [rbp+18h]
  void *Exception; // [rsp+58h] [rbp+20h]

  v4 = Platform::Details::IWeakReference::Resolve(*(_QWORD *)(a1 + 8), (__int64)&_uuidof__AVXamlAltTabViewController__);
  pExceptionObject = v4;
  v5 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))__abi_winrt_ptr_ctor(v4);
  v9 = v5;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( !v5 )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    Exception = (void *)Platform::DisconnectedException::DisconnectedException(Exception);
    pExceptionObject = __abi_winrt_ptr_ctor((__int64)Exception);
    throw (Platform::DisconnectedException **)&pExceptionObject;
  }
  v6 = __abi_winrt_cast_to(0, v5, (__int64)&_uuidof__AVXamlAltTabViewController__);
  pExceptionObject = v6;
  (*(void (__fastcall **)(__int64, __int64))(a1 + 16))(v6 + *(int *)(a1 + 24), a2);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v5)[2])(v5);
}
