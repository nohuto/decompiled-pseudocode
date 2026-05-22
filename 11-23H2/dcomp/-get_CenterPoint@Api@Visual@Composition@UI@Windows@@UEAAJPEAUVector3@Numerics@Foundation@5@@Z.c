/*
 * XREFs of ?get_CenterPoint@Api@Visual@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@5@@Z @ 0x18010C8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?GetReference@CSparseStorage@@QEBAPEAXI@Z @ 0x18007CDA8 (-GetReference@CSparseStorage@@QEBAPEAXI@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Api::get_CenterPoint(
        Windows::UI::Composition::Visual::Api *this,
        struct Windows::Foundation::Numerics::Vector3 *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  char *Reference; // rax
  _DWORD *v7; // rax

  *(_QWORD *)a2 = 0LL;
  *((_DWORD *)a2 + 2) = 0;
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 18);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)this - 136) & 2) != 0 )
  {
    Reference = (char *)CSparseStorage::GetReference((Windows::UI::Composition::Visual::Api *)((char *)this - 56), 8);
    v5 = 0;
    if ( Reference )
      v7 = Reference + 216;
    else
      v7 = &Windows::UI::Composition::ComponentTransform3D::sc_defaultCenterPoint;
    *(_QWORD *)a2 = *(_QWORD *)v7;
    *((_DWORD *)a2 + 2) = v7[2];
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
