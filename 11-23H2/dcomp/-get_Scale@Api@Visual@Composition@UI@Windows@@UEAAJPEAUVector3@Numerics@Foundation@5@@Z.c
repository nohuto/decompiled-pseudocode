/*
 * XREFs of ?get_Scale@Api@Visual@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@5@@Z @ 0x180077130
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x18002BD64 (-FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Api::get_Scale(
        Windows::UI::Composition::Visual::Api *this,
        struct Windows::Foundation::Numerics::Vector3 *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  CSparseStorage::AllocatedStorage *v5; // rcx
  _DWORD *v6; // rax
  __int64 v8; // rax

  *(_QWORD *)a2 = 0LL;
  *((_DWORD *)a2 + 2) = 0;
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 18);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)this - 136) & 2) != 0 )
  {
    v5 = (CSparseStorage::AllocatedStorage *)*((_QWORD *)this - 7);
    if ( (*((_DWORD *)v5 + 1) & 0x1000000) != 0
      && (v8 = *(_QWORD *)((char *)CSparseStorage::AllocatedStorage::FindSlot(v5, 8) + 4)) != 0 )
    {
      v6 = (_DWORD *)(v8 + 240);
    }
    else
    {
      v6 = &Windows::UI::Composition::ComponentTransform3D::sc_defaultScale;
    }
    *(_QWORD *)a2 = *(_QWORD *)v6;
    *((_DWORD *)a2 + 2) = v6[2];
    Microsoft::WRL2::ContextSession::EndApiEntry(v4);
    return 0LL;
  }
  else
  {
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    Microsoft::WRL2::ContextSession::EndApiEntry(v4);
    return 2147483667LL;
  }
}
