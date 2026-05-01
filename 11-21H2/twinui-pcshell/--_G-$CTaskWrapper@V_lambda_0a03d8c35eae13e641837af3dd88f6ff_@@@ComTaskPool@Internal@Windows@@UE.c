/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_0a03d8c35eae13e641837af3dd88f6ff_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18053F430
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_0a03d8c35eae13e641837af3dd88f6ff_>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)a1 + 5);
  WindowsDeleteString(*((HSTRING *)a1 + 4));
  *((_QWORD *)a1 + 4) = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)a1 + 3);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
