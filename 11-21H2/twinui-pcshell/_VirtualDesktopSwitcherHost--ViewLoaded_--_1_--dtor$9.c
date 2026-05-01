/*
 * XREFs of _VirtualDesktopSwitcherHost::ViewLoaded_::_1_::dtor$9 @ 0x18060C6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x180166278 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 __fastcall VirtualDesktopSwitcherHost::ViewLoaded_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 112) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 112) &= ~1u;
    return __abi_winrt_ptr_dtor(*(_QWORD *)(a2 + 32));
  }
  return result;
}
