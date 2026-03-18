/*
 * XREFs of ?SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C0346230
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01A8AD0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C01AB2B4 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     NtDxgkRegisterVailProcess @ 0x1C03645B0 (NtDxgkRegisterVailProcess.c)
 * Callees:
 *     ?FlipManagerDwmReleaseFlipManagerObject@@YAXPEAUFlipManagerObject@@@Z @ 0x1C00169D0 (-FlipManagerDwmReleaseFlipManagerObject@@YAXPEAUFlipManagerObject@@@Z.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1C006D690 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 *     ?SetHandleProcess@DXGVAILOBJECT@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0362430 (-SetHandleProcess@DXGVAILOBJECT@@QEAAXPEAU_EPROCESS@@@Z.c)
 */

void __fastcall DXGPROCESS::SetVailObject(DXGPROCESS *this, struct DXGVAILOBJECT *a2)
{
  DXGVAILOBJECT *v4; // rcx

  v4 = (DXGVAILOBJECT *)*((_QWORD *)this + 74);
  if ( a2 != v4 )
  {
    if ( v4 )
    {
      DXGVAILOBJECT::SetHandleProcess(v4, 0LL);
      FlipManagerDwmReleaseFlipManagerObject(*((struct FlipManagerObject **)this + 74));
      *((_QWORD *)this + 74) = 0LL;
    }
    if ( a2 )
    {
      *((_QWORD *)this + 74) = a2;
      DxgkCompositionObject::AddRef(a2);
      DXGVAILOBJECT::SetHandleProcess(*((DXGVAILOBJECT **)this + 74), *((struct _EPROCESS **)this + 7));
    }
  }
}
