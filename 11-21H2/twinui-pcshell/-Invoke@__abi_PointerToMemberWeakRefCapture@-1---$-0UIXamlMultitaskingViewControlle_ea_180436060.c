/*
 * XREFs of ?Invoke@__abi_PointerToMemberWeakRefCapture@?1???$?0UIXamlMultitaskingViewController@@P80@E$AAAXPE$AAVSwitchItemContextMenuArgs@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@2345@@Z@ItemContextMenuRequestedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMultitaskingViewController@@P87@E$AAAXPE$AAVSwitchItemContextMenuArgs@3456@PE$AAUISwitcherViewModel@3456@@ZW4CallbackContext@Platform@@_N@Z@UEAAX12@Z @ 0x180436060
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
__int64 __fastcall `WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuRequestedHandler::ItemContextMenuRequestedHandler'::`2'::__abi_PointerToMemberWeakRefCapture::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rdi
  __int64 (__fastcall ***v7)(_QWORD, __int64, __int64 *); // rbx
  void *Exception; // rax
  __int64 v9; // rdi
  __int64 v11; // [rsp+20h] [rbp-28h]
  __int64 pExceptionObject; // [rsp+50h] [rbp+8h] BYREF
  __int64 (__fastcall ***v13)(_QWORD, __int64, __int64 *); // [rsp+68h] [rbp+20h]

  v6 = Platform::Details::IWeakReference::Resolve(
         *(_QWORD *)(a1 + 8),
         (__int64)&_uuidof__AUIXamlMultitaskingViewController__);
  pExceptionObject = v6;
  v7 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))__abi_winrt_ptr_ctor(v6);
  v13 = v7;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( !v7 )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    v11 = Platform::DisconnectedException::DisconnectedException(Exception);
    pExceptionObject = __abi_winrt_ptr_ctor(v11);
    throw (Platform::DisconnectedException **)&pExceptionObject;
  }
  v9 = __abi_winrt_cast_to(0, v7, (__int64)&_uuidof__AUIXamlMultitaskingViewController__);
  pExceptionObject = v9;
  (*(void (__fastcall **)(__int64, __int64, __int64))(a1 + 16))(v9, a2, a3);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v7)[2])(v7);
}
