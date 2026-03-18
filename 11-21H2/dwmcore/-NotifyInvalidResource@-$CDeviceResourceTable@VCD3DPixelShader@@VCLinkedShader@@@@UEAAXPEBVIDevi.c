/*
 * XREFs of ?NotifyInvalidResource@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@UEAAXPEBVIDeviceResource@@@Z @ 0x1800FF010
 * Callers:
 *     <none>
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@IEAAXXZ @ 0x1800FF044 (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@IEAAXXZ.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::NotifyInvalidResource(
        struct IDeviceResourceNotify *a1)
{
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(*((_QWORD *)a1 + 1) + 8LL));
  CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::ReleaseResourcesNoAddRef(a1);
  return CMILRefCountBaseT<IMILRefCount>::InternalRelease(*((volatile signed __int32 **)a1 + 1));
}
