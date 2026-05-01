/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6c2381c8148a5bf607d7998e82322cb8___::_scalar_deleting_destructor_ @ 0x1803A7410
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6c2381c8148a5bf607d7998e82322cb8___::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 3);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
