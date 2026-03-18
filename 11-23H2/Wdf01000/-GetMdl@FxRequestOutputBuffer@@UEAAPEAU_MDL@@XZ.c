/*
 * XREFs of ?GetMdl@FxRequestOutputBuffer@@UEAAPEAU_MDL@@XZ @ 0x1C000E340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_MDL *__fastcall FxRequestOutputBuffer::GetMdl(FxRequestOutputBuffer *this)
{
  if ( (*(_DWORD *)(*((_QWORD *)this[-8].m_Buffer + 23) + 24LL) & 3) == 1
    || (*(_DWORD *)(*((_QWORD *)this[-8].m_Buffer + 23) + 24LL) & 3) == 2 )
  {
    return this->m_Mdl;
  }
  else
  {
    return 0LL;
  }
}
