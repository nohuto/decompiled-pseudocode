/*
 * XREFs of ?IsInActiveVoipCall@CApplication@@UEAA_NXZ @ 0x180018420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CApplication::IsInActiveVoipCall(CApplication *this)
{
  return (*((_DWORD *)this + 52) & 0x10) != 0;
}
