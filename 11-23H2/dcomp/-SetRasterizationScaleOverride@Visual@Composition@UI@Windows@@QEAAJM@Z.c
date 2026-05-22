/*
 * XREFs of ?SetRasterizationScaleOverride@Visual@Composition@UI@Windows@@QEAAJM@Z @ 0x180072998
 * Callers:
 *     ?put_RasterizationScaleOverride@Partner@Visual@Composition@UI@Windows@@UEAAJM@Z @ 0x180072930 (-put_RasterizationScaleOverride@Partner@Visual@Composition@UI@Windows@@UEAAJM@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18005DC0C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     ?ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z @ 0x1800719B4 (-ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::SetRasterizationScaleOverride(
        Windows::UI::Composition::Visual *this,
        float a2)
{
  CSparseStorage *v3; // rcx
  float v5; // [rsp+48h] [rbp+10h] BYREF

  DirectComposition::CDevice::ResourceSetFloatProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    44,
    a2);
  v5 = a2;
  v3 = (Windows::UI::Composition::Visual *)((char *)this + 112);
  if ( LODWORD(a2) == `Windows::UI::Composition::Visual::SetSparse_RasterizationScaleOverride'::`2'::sc_defaultValue )
    *(_DWORD *)(*(_QWORD *)v3 + 4LL) &= ~0x4000u;
  else
    CSparseStorage::SetData(v3, 18, 4u, &v5);
  return 0LL;
}
