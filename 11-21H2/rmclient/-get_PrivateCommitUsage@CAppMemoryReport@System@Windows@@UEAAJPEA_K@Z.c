/*
 * XREFs of ?get_PrivateCommitUsage@CAppMemoryReport@System@Windows@@UEAAJPEA_K@Z @ 0x180009DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CAppMemoryReport::get_PrivateCommitUsage(
        Windows::System::CAppMemoryReport *this,
        unsigned __int64 *a2)
{
  *a2 = *((_QWORD *)this + 6);
  return 0LL;
}
