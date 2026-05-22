/*
 * XREFs of ?SetOwnerNoRef@Visual@Composition@UI@Windows@@QEAAXPEAUIVisualOwnerPrivate@Private@234@_N@Z @ 0x180086B60
 * Callers:
 *     ?DestroyContent@VisualIslandSite@Composition@UI@Windows@@MEAAXXZ @ 0x18000F450 (-DestroyContent@VisualIslandSite@Composition@UI@Windows@@MEAAXXZ.c)
 *     ?RuntimeClassInitialize@VisualIslandSite@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180086928 (-RuntimeClassInitialize@VisualIslandSite@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ?SetOwnerNoRef@Partner@Visual@Composition@UI@Windows@@UEAAJPEAUIVisualOwnerPrivate@Private@345@E@Z @ 0x18010BDC0 (-SetOwnerNoRef@Partner@Visual@Composition@UI@Windows@@UEAAJPEAUIVisualOwnerPrivate@Private@345@E.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18005DC0C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall Windows::UI::Composition::Visual::SetOwnerNoRef(
        Windows::UI::Composition::Visual *this,
        struct Windows::UI::Composition::Private::IVisualOwnerPrivate *a2,
        unsigned __int8 a3)
{
  int v4; // esi
  CSparseStorage *v5; // rcx
  int v7; // eax
  unsigned int v8; // ecx
  struct Windows::UI::Composition::Private::IVisualOwnerPrivate *v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = a3;
  v5 = (Windows::UI::Composition::Visual *)((char *)this + 112);
  v9 = a2;
  if ( a2 == (struct Windows::UI::Composition::Private::IVisualOwnerPrivate *)`Windows::UI::Composition::Visual::SetSparse_Owner'::`2'::sc_defaultValue )
    *(_DWORD *)(*(_QWORD *)v5 + 4LL) &= ~0x8000u;
  else
    CSparseStorage::SetData(v5, 17, 8u, &v9);
  v7 = *((_DWORD *)this + 65);
  if ( a2 )
    v8 = v7 & 0xFFFBFFFF | (v4 << 18) | 0x20000;
  else
    v8 = v7 & 0xFFF9FFFF;
  *((_DWORD *)this + 65) = v8;
  *((_DWORD *)this + 8) = *((_DWORD *)this + 8) & 0xFFFFFFBF | ((v8 & 0x20000) >> 11);
}
