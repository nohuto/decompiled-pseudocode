/*
 * XREFs of CMultitaskingViewTaskCallback__lambda_3a2de4e4b80ecd8274c796c02122adf2___::_scalar_deleting_destructor_ @ 0x180494FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

__int64 *__fastcall CMultitaskingViewTaskCallback__lambda_3a2de4e4b80ecd8274c796c02122adf2___::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 6);
  *((_DWORD *)a1 + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 3);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
