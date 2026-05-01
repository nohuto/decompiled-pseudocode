/*
 * XREFs of _WindowDragInputProvider::WindowDragInputProvider_::_1_::dtor$40 @ 0x1802BDE52
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x180234F54 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall WindowDragInputProvider::WindowDragInputProvider_::_1_::dtor_40(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 168) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 168) &= ~2u;
    return winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)(a2 + 184));
  }
  return result;
}
