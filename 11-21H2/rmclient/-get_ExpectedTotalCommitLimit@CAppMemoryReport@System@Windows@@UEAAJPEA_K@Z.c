/*
 * XREFs of ?get_ExpectedTotalCommitLimit@CAppMemoryReport@System@Windows@@UEAAJPEA_K@Z @ 0x180009D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CAppMemoryReport::get_ExpectedTotalCommitLimit(
        Windows::System::CAppMemoryReport *this,
        unsigned __int64 *a2)
{
  *a2 = *((_QWORD *)this + 8);
  return 0LL;
}
