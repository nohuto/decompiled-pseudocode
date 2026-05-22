/*
 * XREFs of ??1CompositionAnchor@Composition@UI@Windows@@UEAA@XZ @ 0x18000F604
 * Callers:
 *     ??_GCompositionAnchor@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18000F5C0 (--_GCompositionAnchor@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1ContextLatchedInvoke@WRL2@Microsoft@@QEAA@XZ @ 0x18000F68C (--1ContextLatchedInvoke@WRL2@Microsoft@@QEAA@XZ.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::CompositionAnchor::~CompositionAnchor(
        Windows::UI::Composition::CompositionAnchor *this)
{
  __int64 v2; // rcx

  Microsoft::WRL2::ContextLatchedInvoke::~ContextLatchedInvoke((Windows::UI::Composition::CompositionAnchor *)((char *)this + 216));
  v2 = *((_QWORD *)this + 24);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, 8 * ((*((_QWORD *)this + 26) - v2) >> 3));
    *((_QWORD *)this + 24) = 0LL;
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock((char *)this + 144);
  CSparseStorage::~CSparseStorage((Windows::UI::Composition::CompositionAnchor *)((char *)this + 112));
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this);
}
