/*
 * XREFs of ??_G?$CAsyncCallbackWithLambda@V_lambda_70db04ee97ce611edc9e35899f670330_@@@@UEAAPEAXI@Z @ 0x18048B340
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall CAsyncCallbackWithLambda<_lambda_70db04ee97ce611edc9e35899f670330_>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  std::_Ref_count_base *v4; // rcx

  v4 = (std::_Ref_count_base *)a1[8];
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  *((_DWORD *)a1 + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a1 + 4);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
