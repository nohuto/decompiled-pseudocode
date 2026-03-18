/*
 * XREFs of _NtGdiBitBltInternal_::_2_::ScreenAccessState::_ScreenAccessState @ 0x1C013F348
 * Callers:
 *     NtGdiBitBltInternal @ 0x1C01042C0 (NtGdiBitBltInternal.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 */

void __fastcall NtGdiBitBltInternal_::_2_::ScreenAccessState::_ScreenAccessState(_BYTE *a1)
{
  __int64 ThreadWin32Thread; // rax

  if ( *a1 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_DWORD *)(ThreadWin32Thread + 328) &= ~8u;
  }
}
