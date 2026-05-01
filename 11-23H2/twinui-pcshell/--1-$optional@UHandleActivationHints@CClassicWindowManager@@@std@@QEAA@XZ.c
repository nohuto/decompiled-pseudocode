/*
 * XREFs of ??1?$optional@UHandleActivationHints@CClassicWindowManager@@@std@@QEAA@XZ @ 0x1803A8848
 * Callers:
 *     _CClassicWindowManager::_HandleActivation_::_1_::dtor$0 @ 0x1802BA634 (_CClassicWindowManager--_HandleActivation_--_1_--dtor$0.c)
 *     _CClassicWindowManager::HandleActivation_::_1_::dtor$1 @ 0x1802BA762 (_CClassicWindowManager--HandleActivation_--_1_--dtor$1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::optional<CClassicWindowManager::HandleActivationHints>::~optional<CClassicWindowManager::HandleActivationHints>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)a1);
  return result;
}
