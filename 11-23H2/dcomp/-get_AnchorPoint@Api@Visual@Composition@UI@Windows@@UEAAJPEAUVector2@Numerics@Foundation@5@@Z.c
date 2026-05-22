/*
 * XREFs of ?get_AnchorPoint@Api@Visual@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z @ 0x18010C6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?GetReference@CSparseStorage@@QEBAPEAXI@Z @ 0x18007CDA8 (-GetReference@CSparseStorage@@QEBAPEAXI@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Api::get_AnchorPoint(
        Windows::UI::Composition::Visual::Api *this,
        struct Windows::Foundation::Numerics::Vector2 *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  char *Reference; // rax
  _QWORD *v7; // rax

  *(_QWORD *)a2 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 18);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)this - 136) & 2) != 0 )
  {
    Reference = (char *)CSparseStorage::GetReference((Windows::UI::Composition::Visual::Api *)((char *)this - 56), 8);
    v5 = 0;
    if ( Reference )
      v7 = Reference + 264;
    else
      v7 = &Windows::UI::Composition::ComponentTransform3D::sc_defaultAnchorPoint;
    *(_QWORD *)a2 = *v7;
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
