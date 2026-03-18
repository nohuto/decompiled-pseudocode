/*
 * XREFs of ?AddRef@CComposition@@UEAAKXZ @ 0x1800F49E0
 * Callers:
 *     ?AddRef@CWARPDrawListEntry@@WEA@EAAKXZ @ 0x18011D790 (-AddRef@CWARPDrawListEntry@@WEA@EAAKXZ.c)
 *     ?AddRef@CProjectedShadowApproxBlurEffect@@WBA@EAAKXZ @ 0x18011E470 (-AddRef@CProjectedShadowApproxBlurEffect@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CComposition::AddRef(CComposition *this)
{
  return CMILRefCountImpl::AddReference((CComposition *)((char *)this + 8));
}
