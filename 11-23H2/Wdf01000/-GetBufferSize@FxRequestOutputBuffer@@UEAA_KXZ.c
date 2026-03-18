/*
 * XREFs of ?GetBufferSize@FxRequestOutputBuffer@@UEAA_KXZ @ 0x1C0009600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall FxRequestOutputBuffer::GetBufferSize(FxRequestOutputBuffer *this)
{
  return *(unsigned int *)(*((_QWORD *)this[-8].m_Buffer + 23) + 8LL);
}
