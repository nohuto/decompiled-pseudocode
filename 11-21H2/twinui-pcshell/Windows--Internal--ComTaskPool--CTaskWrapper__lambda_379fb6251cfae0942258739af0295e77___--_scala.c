/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77___::_scalar_deleting_destructor_ @ 0x180099EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77___::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  std::_Ref_count_base *v4; // rcx

  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 5);
  v4 = (std::_Ref_count_base *)a1[4];
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x30uLL);
  return a1;
}
