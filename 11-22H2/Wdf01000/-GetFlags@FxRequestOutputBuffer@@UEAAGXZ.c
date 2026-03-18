/*
 * XREFs of ?GetFlags@FxRequestOutputBuffer@@UEAAGXZ @ 0x1C000E310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall FxRequestOutputBuffer::GetFlags(FxRequestOutputBuffer *this)
{
  return (*(_DWORD *)(*((_QWORD *)this[-8].m_Buffer + 23) + 24LL) & 3) == 1;
}
