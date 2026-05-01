/*
 * XREFs of ??4?$ComPtr@UISnapAssistCallback@@@WRL@Microsoft@@QEAAAEAV012@PEAUISnapAssistCallback@@@Z @ 0x1804B3E7C
 * Callers:
 *     ?SetCallback@CSnapAssistViewController@@UEAAXPEAUISnapAssistCallback@@@Z @ 0x1804B46E0 (-SetCallback@CSnapAssistViewController@@UEAAXPEAUISnapAssistCallback@@@Z.c)
 *     ?SetCallback@XamlSnapAssistViewHost@@UEAAJPEAUISnapAssistCallback@@@Z @ 0x1806030C0 (-SetCallback@XamlSnapAssistViewHost@@UEAAJPEAUISnapAssistCallback@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<ISnapAssistCallback>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v4 = *a1;
  if ( *a1 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v4 = *a1;
    }
    v6 = v4;
    *a1 = a2;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
  }
  return a1;
}
