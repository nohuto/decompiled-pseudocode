/*
 * XREFs of ?UnmanageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z @ 0x1800A1EEC
 * Callers:
 *     ??1CD2DResource@@MEAA@XZ @ 0x1800A1D94 (--1CD2DResource@@MEAA@XZ.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x18010445C (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ?MarkHardwareProtectedResourcesInvalid@CD2DResourceManager@@QEAA_NXZ @ 0x18029C3CC (-MarkHardwareProtectedResourcesInvalid@CD2DResourceManager@@QEAA_NXZ.c)
 * Callees:
 *     ?RemoveHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x1802877A0 (-RemoveHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 */

void __fastcall CD2DResourceManager::UnmanageResource(CD2DContext **this, struct CD2DResource *a2)
{
  if ( *((_BYTE *)a2 + 33) )
  {
    if ( *((_BYTE *)a2 + 34) )
      CD2DContext::RemoveHwProtectedResource(this[3]);
    --*((_DWORD *)this + 4);
  }
  *((_BYTE *)a2 + 32) = 0;
}
