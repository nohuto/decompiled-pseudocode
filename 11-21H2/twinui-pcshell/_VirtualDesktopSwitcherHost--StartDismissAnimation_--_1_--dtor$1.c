/*
 * XREFs of _VirtualDesktopSwitcherHost::StartDismissAnimation_::_1_::dtor$1 @ 0x18060BD92
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x180166278 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 __fastcall VirtualDesktopSwitcherHost::StartDismissAnimation_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 176) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 176) &= ~1u;
    return __abi_winrt_ptr_dtor(*(_QWORD *)(a2 + 192));
  }
  return result;
}
