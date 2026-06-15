/*
 * XREFs of ?MarkAsInactive@CStreamInstance@@UEAAXXZ @ 0x1400264C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CStreamInstance::MarkAsInactive(CStreamInstance *this)
{
  *((_BYTE *)this + 96) = 0;
}
