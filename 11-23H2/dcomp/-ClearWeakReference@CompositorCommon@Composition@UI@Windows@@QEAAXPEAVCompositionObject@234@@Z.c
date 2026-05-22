/*
 * XREFs of ?ClearWeakReference@CompositorCommon@Composition@UI@Windows@@QEAAXPEAVCompositionObject@234@@Z @ 0x18008C0BC
 * Callers:
 *     ?Destroy@Visual@Composition@UI@Windows@@UEAAXXZ @ 0x180028340 (-Destroy@Visual@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@CompositionObject@Composition@UI@Windows@@UEAAXXZ @ 0x180028EA0 (-Destroy@CompositionObject@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@KeyFrameAnimation@Composition@UI@Windows@@UEAAXXZ @ 0x18003E270 (-Destroy@KeyFrameAnimation@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@CompositionSurfaceWrapper@Composition@UI@Windows@@UEAAXXZ @ 0x18007E120 (-Destroy@CompositionSurfaceWrapper@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x18008C060 (-Release@CWeakReferenceBase@@QEAAKXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::UI::Composition::CompositorCommon::ClearWeakReference(
        Windows::UI::Composition::CompositorCommon *this,
        struct Windows::UI::Composition::CompositionObject *a2)
{
  struct _RTL_GENERIC_TABLE *v2; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // rdx
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[0] = 0LL;
  v2 = (struct _RTL_GENERIC_TABLE *)((char *)this + 536);
  Buffer[1] = a2;
  v3 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 536), Buffer);
  v4 = (_QWORD *)*v3;
  *v4 = 0LL;
  v4[1] = 0LL;
  v4[2] = 0LL;
  if ( !RtlDeleteElementGenericTable(v2, v3) )
    RaiseFailFastException(0LL, 0LL, 1u);
}
