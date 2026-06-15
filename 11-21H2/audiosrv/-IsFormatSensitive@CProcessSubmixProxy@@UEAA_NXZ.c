/*
 * XREFs of ?IsFormatSensitive@CProcessSubmixProxy@@UEAA_NXZ @ 0x1800F99C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CProcessSubmixProxy::IsFormatSensitive(CProcessSubmixProxy *this)
{
  return *((_DWORD *)this + 23) != 0;
}
