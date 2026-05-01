/*
 * XREFs of ?CheckValidity@CompatibleDC@Wrappers@WRL@Microsoft@@QEAAJXZ @ 0x18074BED4
 * Callers:
 *     s_OnDrawItemHelper @ 0x18028640C (s_OnDrawItemHelper.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18004EB90 (-ResultFromKnownLastError@@YAJXZ.c)
 */

signed int __fastcall Microsoft::WRL::Wrappers::CompatibleDC::CheckValidity(
        Microsoft::WRL::Wrappers::CompatibleDC *this)
{
  signed int result; // eax

  result = 0;
  if ( !*((_QWORD *)this + 1) )
    return ResultFromKnownLastError();
  return result;
}
