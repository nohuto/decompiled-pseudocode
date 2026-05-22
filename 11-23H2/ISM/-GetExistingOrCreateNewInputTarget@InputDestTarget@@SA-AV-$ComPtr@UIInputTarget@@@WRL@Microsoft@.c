/*
 * XREFs of ?GetExistingOrCreateNewInputTarget@InputDestTarget@@SA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBUtagINPUTDEST@@PEAUIInputTarget@@@Z @ 0x18005BAFC
 * Callers:
 *     ?ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x180022450 (-ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification@@_N@Z @ 0x1800FA1AC (-ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180002D48 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ??$Make@VInputDestTarget@@AEBUtagINPUTDEST@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VInputDestTarget@@@12@AEBUtagINPUTDEST@@@Z @ 0x180040958 (--$Make@VInputDestTarget@@AEBUtagINPUTDEST@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VInputDestTarg.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall InputDestTarget::GetExistingOrCreateNewInputTarget(
        __int64 *a1,
        const struct tagINPUTDEST *a2,
        int (__fastcall ***a3)(_QWORD, GUID *, InputDestTarget **))
{
  int (__fastcall *v6)(_QWORD, GUID *, InputDestTarget **); // rbx
  InputDestTarget **v7; // rax
  InputDestTarget *v8; // rcx
  InputDestTarget *v10; // [rsp+50h] [rbp+18h] BYREF

  if ( a3 )
  {
    v10 = 0LL;
    v6 = **a3;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v10);
    if ( v6(a3, &GUID_245edb10_c010_455c_a24c_6780cdaecce8, &v10) >= 0
      && (*(unsigned __int8 (__fastcall **)(InputDestTarget *, const struct tagINPUTDEST *))(*(_QWORD *)v10 + 24LL))(
           v10,
           a2) )
    {
      *a1 = (__int64)a3;
      Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(a1);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v10);
      return a1;
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v10);
  }
  v7 = Microsoft::WRL::Details::Make<InputDestTarget,tagINPUTDEST const &>(&v10, a2);
  *a1 = (__int64)*v7;
  *v7 = 0LL;
  v8 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(InputDestTarget *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return a1;
}
