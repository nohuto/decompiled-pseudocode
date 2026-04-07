/*
 * XREFs of ??4?$ComPtr@VCSystemBackdropVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCSystemBackdropVisual@@@Z @ 0x1800E4188
 * Callers:
 *     ?InitializeVisualTreeClone@CTopLevelWindow@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18001B9FC (-InitializeVisualTreeClone@CTopLevelWindow@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 */

CBaseObject **__fastcall Microsoft::WRL::ComPtr<CSystemBackdropVisual>::operator=(
        CBaseObject **a1,
        volatile signed __int32 *a2)
{
  CBaseObject *v3; // rcx

  v3 = *a1;
  if ( v3 != (CBaseObject *)a2 )
  {
    if ( a2 )
    {
      _InterlockedIncrement(a2 + 2);
      v3 = *a1;
    }
    *a1 = (CBaseObject *)a2;
    if ( v3 )
      CBaseObject::Release(v3);
  }
  return a1;
}
