/*
 * XREFs of ?ReleaseResources@CText@@AEAAXXZ @ 0x180047128
 * Callers:
 *     ??1CText@@EEAA@XZ @ 0x180046F6C (--1CText@@EEAA@XZ.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002730C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CText::ReleaseResources(CBaseObject **this)
{
  CBaseObject *v2; // rcx

  CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
  v2 = this[50];
  if ( v2 )
  {
    CBaseObject::Release(v2);
    this[50] = 0LL;
  }
}
