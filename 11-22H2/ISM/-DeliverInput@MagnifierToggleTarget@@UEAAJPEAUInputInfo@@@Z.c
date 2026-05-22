/*
 * XREFs of ?DeliverInput@MagnifierToggleTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1801DC820
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180003198 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?ToggleDetected@BamoMagnifierControllerProxy@@UEAAJAEBUPoint@Foundation@Windows@@@Z @ 0x18017AB10 (-ToggleDetected@BamoMagnifierControllerProxy@@UEAAJAEBUPoint@Foundation@Windows@@@Z.c)
 *     ?AveragePoint@@YA?AUPoint@Foundation@Windows@@PEBUInputInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@Z @ 0x1801DC548 (-AveragePoint@@YA-AUPoint@Foundation@Windows@@PEBUInputInfo@@V-$ComPtr@VInputSite@@@WRL@Microsof.c)
 *     ?SendToggle@Magnifier@InputTraceLogging@@SAXAEBUPoint@Foundation@Windows@@@Z @ 0x1801DCB18 (-SendToggle@Magnifier@InputTraceLogging@@SAXAEBUPoint@Foundation@Windows@@@Z.c)
 */

__int64 __fastcall MagnifierToggleTarget::DeliverInput(MagnifierToggleTarget *this, struct InputInfo *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  BamoMagnifierControllerProxy *v6; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 32) && *((_DWORD *)a2 + 79) == 2 )
  {
    v8 = *((_QWORD *)this + 3);
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(&v8);
    v8 = AveragePoint((__int64)a2, &v8, v4, v5);
    InputTraceLogging::Magnifier::SendToggle((const struct Windows::Foundation::Point *)&v8);
    v6 = (BamoMagnifierControllerProxy *)(*((_QWORD *)this + 2) + 8LL);
    *((_BYTE *)this + 32) = 1;
    BamoMagnifierControllerProxy::ToggleDetected(v6, (const struct Windows::Foundation::Point *)&v8);
  }
  return 0LL;
}
