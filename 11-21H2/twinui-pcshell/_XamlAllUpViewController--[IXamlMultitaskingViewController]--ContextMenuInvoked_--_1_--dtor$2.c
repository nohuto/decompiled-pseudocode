/*
 * XREFs of _XamlAllUpViewController::[IXamlMultitaskingViewController]::ContextMenuInvoked_::_1_::dtor$2 @ 0x180441EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x180166278 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 __fastcall XamlAllUpViewController::_IXamlMultitaskingViewController_::ContextMenuInvoked_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 136) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 136) &= ~2u;
    return __abi_winrt_ptr_dtor(*(_QWORD *)(a2 + 32));
  }
  return result;
}
