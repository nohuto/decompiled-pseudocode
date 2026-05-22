/*
 * XREFs of ?get_UpVectorOverride@Partner@Visual@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@5@@Z @ 0x18010D3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x18002BD64 (-FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Partner::get_UpVectorOverride(
        Windows::UI::Composition::Visual::Partner *this,
        struct Windows::Foundation::Numerics::Vector3 *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  CSparseStorage::AllocatedStorage *v6; // rcx
  int v7; // eax
  __int64 v8; // xmm0_8
  struct CSparseStorage::DataInfo *Slot; // rax

  *(_QWORD *)a2 = 0LL;
  *((_DWORD *)a2 + 2) = 0;
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 26);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)this - 200) & 2) != 0 )
  {
    v6 = (CSparseStorage::AllocatedStorage *)*((_QWORD *)this - 15);
    if ( (*((_DWORD *)v6 + 1) & 0x2000) != 0 )
    {
      Slot = CSparseStorage::AllocatedStorage::FindSlot(v6, 19);
      v8 = *(_QWORD *)((char *)Slot + 4);
      v7 = *((_DWORD *)Slot + 3);
    }
    else
    {
      v7 = 0;
      v8 = 0LL;
    }
    *(_QWORD *)a2 = v8;
    *((_DWORD *)a2 + 2) = v7;
    v5 = 0;
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}
