/*
 * XREFs of ?RemoveExcludedTargetVisual@CCompositionSpotLight@@UEAAXPEAVCVisual@@@Z @ 0x180119CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@?$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z @ 0x1800F3388 (-Remove@-$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z.c)
 */

void __fastcall CCompositionSpotLight::RemoveExcludedTargetVisual(CCompositionSpotLight *this, struct CVisual *a2)
{
  struct CVisual *v3; // [rsp+30h] [rbp+8h] BYREF
  struct CVisual *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v3 = a2;
  DynArray<CVisual *,0>::Remove((__int64 *)this + 16, &v3);
  DynArray<CVisual *,0>::Remove((__int64 *)this + 33, &v4);
}
