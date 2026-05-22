/*
 * XREFs of ?CheckAndGetCompositionSurfaceNoRef@CCompositionSurface@DirectComposition@@SAJPEAUIDCompositionSurface@@PEAPEAV12@@Z @ 0x1800EDD94
 * Callers:
 *     ?ValidatePrimitiveParameters@CDevice@DirectComposition@@AEAAJPEAUIDCompositionSurface@@PEAUIDCompositionColorPartner@@0PEAPEAUIDCompositionPrimitivePartner@@PEAPEAVCBitmapInfoFront@2@3PEAPEAVCVirtualSurface@2@@Z @ 0x1800F6A60 (-ValidatePrimitiveParameters@CDevice@DirectComposition@@AEAAJPEAUIDCompositionSurface@@PEAUIDCom.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CCompositionSurface::CheckAndGetCompositionSurfaceNoRef(
        struct IDCompositionSurface *a1,
        struct DirectComposition::CCompositionSurface **a2)
{
  int v2; // ebx
  struct DirectComposition::CCompositionSurface *v3; // rdi
  struct DirectComposition::CCompositionSurface *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 0LL;
  if ( !a1 )
    goto LABEL_7;
  v6 = 0LL;
  v2 = (**(__int64 (__fastcall ***)(struct IDCompositionSurface *, GUID *, struct DirectComposition::CCompositionSurface **))a1)(
         a1,
         &GUID_c9f54a6b_06fb_4465_9edc_590cacccb47a,
         &v6);
  if ( v2 >= 0 )
    v3 = v6;
  if ( v6 )
    (*(void (__fastcall **)(struct DirectComposition::CCompositionSurface *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v2 >= 0 )
LABEL_7:
    *a2 = v3;
  return (unsigned int)v2;
}
