/*
 * XREFs of ?SetCallback@XamlSnapAssistViewHost@@UEAAJPEAUISnapAssistCallback@@@Z @ 0x18076D860
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlSnapAssistViewHost::SetCallback(XamlSnapAssistViewHost *this, struct ISnapAssistCallback *a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *((struct ISnapAssistCallback **)this + 33) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct ISnapAssistCallback *))(*(_QWORD *)a2 + 8LL))(a2);
    v5 = *((_QWORD *)this + 33);
    *((_QWORD *)this + 33) = a2;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
  }
  return 0LL;
}
