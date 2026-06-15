/*
 * XREFs of ?GetStreamIdentifier@CStreamInstanceProxy@@UEAA_KXZ @ 0x180073810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CStreamInstanceProxy::GetStreamIdentifier(CStreamInstanceProxy *this)
{
  return *((_QWORD *)this - 1);
}
