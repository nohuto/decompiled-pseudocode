/*
 * XREFs of ?get_RasterizationScaleOverride@Partner@Visual@Composition@UI@Windows@@UEAAJPEAM@Z @ 0x18010CEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x18002BD64 (-FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Partner::get_RasterizationScaleOverride(
        Windows::UI::Composition::Visual::Partner *this,
        float *a2)
{
  unsigned int v3; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  CSparseStorage::AllocatedStorage *v6; // rcx
  int v7; // xmm0_4

  v3 = 0;
  *a2 = 0.0;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 25);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)this - 192) & 2) != 0 )
  {
    v6 = (CSparseStorage::AllocatedStorage *)*((_QWORD *)this - 14);
    if ( (*((_DWORD *)v6 + 1) & 0x4000) != 0 )
      v7 = *((_DWORD *)CSparseStorage::AllocatedStorage::FindSlot(v6, 18) + 1);
    else
      v7 = 0;
    *(_DWORD *)a2 = v7;
  }
  else
  {
    v3 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v3;
}
