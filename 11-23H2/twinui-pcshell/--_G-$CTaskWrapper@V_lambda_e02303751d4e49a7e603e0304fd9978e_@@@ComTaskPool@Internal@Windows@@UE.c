/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_e02303751d4e49a7e603e0304fd9978e_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1800682E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_e02303751d4e49a7e603e0304fd9978e_>::`scalar deleting destructor'(
        __int64 *a1,
        char a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 4);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a1 + 3);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x28uLL);
  return a1;
}
