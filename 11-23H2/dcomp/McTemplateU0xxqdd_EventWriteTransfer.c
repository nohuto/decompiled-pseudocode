/*
 * XREFs of McTemplateU0xxqdd_EventWriteTransfer @ 0x1800EA928
 * Callers:
 *     ?Resize@CBitmapInfoFront@DirectComposition@@QEAAJII@Z @ 0x18000CB34 (-Resize@CBitmapInfoFront@DirectComposition@@QEAAJII@Z.c)
 *     ?CreateSurface@CSurfaceFactory@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@_NPEAPEAUIDCompositionSurface@@@Z @ 0x18002A850 (-CreateSurface@CSurfaceFactory@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@_NPEA.c)
 *     ?BeginDrawHelper@CCompositionSurface@DirectComposition@@QEAAJPEBUtagRECT@@AEBU_GUID@@_NPEAPEAXPEAUtagPOINT@@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x18002E990 (-BeginDrawHelper@CCompositionSurface@DirectComposition@@QEAAJPEBUtagRECT@@AEBU_GUID@@_NPEAPEAXPE.c)
 *     ?CreateFlipUpdate@CBitmapInfoFront@DirectComposition@@QEAAJPEAUIDCompositionSurface@@AEBUtagRECT@@PEAPEAVCBitmapInfoBack@2@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x18002FFB8 (-CreateFlipUpdate@CBitmapInfoFront@DirectComposition@@QEAAJPEAUIDCompositionSurface@@AEBUtagRECT.c)
 *     ?AllocateDynamicPool@CDynamicPoolSet@DirectComposition@@QEAAJPEAPEAVCDynamicPool@2@AEBVSizeU@2@W4DXGI_FORMAT@@_N3@Z @ 0x180035E60 (-AllocateDynamicPool@CDynamicPoolSet@DirectComposition@@QEAAJPEAPEAVCDynamicPool@2@AEBVSizeU@2@W.c)
 *     ?CreateInPlaceUpdate@CBitmapInfoFront@DirectComposition@@QEAAJAEBUtagRECT@@W4AtlasUseType@2@PEAUIDCompositionSurface@@PEAPEAVCBitmapInfoBack@2@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x180037708 (-CreateInPlaceUpdate@CBitmapInfoFront@DirectComposition@@QEAAJAEBUtagRECT@@W4AtlasUseType@2@PEAU.c)
 *     ?Initialize@CBitmapInfoFront@DirectComposition@@AEAAJPEAUIDCompositionSurface@@@Z @ 0x180037B0C (-Initialize@CBitmapInfoFront@DirectComposition@@AEAAJPEAUIDCompositionSurface@@@Z.c)
 *     ?Create@CScratchSurface@DirectComposition@@SAJPEAVCScratchSurfaceManager@2@AEBVSizeU@2@W4DXGI_FORMAT@@PEAPEAV12@@Z @ 0x1800FADCC (-Create@CScratchSurface@DirectComposition@@SAJPEAVCScratchSurfaceManager@2@AEBVSizeU@2@W4DXGI_FO.c)
 * Callees:
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800E5E3C (McGenEventWrite_EventWriteTransfer.c)
 */

ULONG McTemplateU0xxqdd_EventWriteTransfer(__int64 a1, __int64 a2, ...)
{
  int v3; // [rsp+30h] [rbp-41h] BYREF
  int v4; // [rsp+38h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-31h] BYREF
  va_list v6; // [rsp+50h] [rbp-21h]
  __int64 v7; // [rsp+58h] [rbp-19h]
  va_list v8; // [rsp+60h] [rbp-11h]
  __int64 v9; // [rsp+68h] [rbp-9h]
  va_list v10; // [rsp+70h] [rbp-1h]
  __int64 v11; // [rsp+78h] [rbp+7h]
  int *v12; // [rsp+80h] [rbp+Fh]
  __int64 v13; // [rsp+88h] [rbp+17h]
  int *v14; // [rsp+90h] [rbp+1Fh]
  __int64 v15; // [rsp+98h] [rbp+27h]
  va_list va; // [rsp+D0h] [rbp+5Fh]
  __int64 v17; // [rsp+D0h] [rbp+5Fh] BYREF
  __int64 v18; // [rsp+D8h] [rbp+67h] BYREF
  va_list va1; // [rsp+D8h] [rbp+67h]
  va_list va2; // [rsp+E0h] [rbp+6Fh] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v17 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v18 = va_arg(va2, _QWORD);
  v7 = 8LL;
  v4 = 0;
  va_copy(v6, va);
  va_copy(v8, va1);
  va_copy(v10, va2);
  v3 = 0;
  v12 = &v3;
  v9 = 8LL;
  v14 = &v4;
  v11 = 4LL;
  v13 = 4LL;
  v15 = 4LL;
  return McGenEventWrite_EventWriteTransfer(a1, &DCOMPEVENT_ATLAS_USE_INFO, v17, 6u, &v5);
}
