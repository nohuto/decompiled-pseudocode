/*
 * XREFs of ?NotifyInvalidResource@CAtlasTexture@@UEAAXPEBVIDeviceResource@@@Z @ 0x18029C3C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CAtlasTexture::NotifyInvalidResource(CAtlasTexture *this, const struct IDeviceResource *a2)
{
  CAtlasTexture::DestroyResources(this);
}
