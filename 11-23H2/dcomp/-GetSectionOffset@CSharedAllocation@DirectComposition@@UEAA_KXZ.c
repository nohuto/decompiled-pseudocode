/*
 * XREFs of ?GetSectionOffset@CSharedAllocation@DirectComposition@@UEAA_KXZ @ 0x18008EFA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall DirectComposition::CSharedAllocation::GetSectionOffset(
        DirectComposition::CSharedAllocation *this)
{
  return (unsigned __int64)this - *(_QWORD *)(*((_QWORD *)this + 6) + 56LL) + 56;
}
