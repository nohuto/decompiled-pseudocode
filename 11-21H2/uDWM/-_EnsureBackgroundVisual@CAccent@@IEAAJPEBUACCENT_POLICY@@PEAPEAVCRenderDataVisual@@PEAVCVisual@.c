/*
 * XREFs of ?_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@@@Z @ 0x180047BA8
 * Callers:
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x1800477C0 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x180046D3C (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x180047C2C (-s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z.c)
 */

__int64 __fastcall CAccent::_EnsureBackgroundVisual(
        CAccent *this,
        const struct ACCENT_POLICY *a2,
        struct CRenderDataVisual **a3,
        struct CVisual *a4)
{
  int inserted; // ebx
  _QWORD *v8; // r8
  unsigned int v10; // eax

  inserted = 0;
  if ( CAccent::s_IsPolicyActive(a2) && !*v8 )
  {
    inserted = CRenderDataVisual::Create(a3);
    if ( inserted < 0 )
    {
      v10 = 653;
    }
    else
    {
      inserted = VisualCollection::InsertRelative((CAccent *)((char *)this + 32), *a3, a4, 1u, 1);
      if ( inserted >= 0 )
        return (unsigned int)inserted;
      v10 = 654;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, v10);
    if ( *a3 )
    {
      CBaseObject::Release(*a3);
      *a3 = 0LL;
    }
  }
  return (unsigned int)inserted;
}
