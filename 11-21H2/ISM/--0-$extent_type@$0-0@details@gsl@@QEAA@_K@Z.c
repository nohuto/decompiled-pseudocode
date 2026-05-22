/*
 * XREFs of ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18004C898
 * Callers:
 *     ?GetInputSiteForEvaluationListFromDITCallbackStruct@InputSiteManager@@QEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEBUtagDITCALLBACKSTRUCT@@@Z @ 0x18004DBD8 (-GetInputSiteForEvaluationListFromDITCallbackStruct@InputSiteManager@@QEAA-AV-$vector@V-$ComPtr@.c)
 *     ?OnInputConfigChanged@SystemContextEndpoint@@UEAAJPEAVBamoSystemContextEndpointStub@@PEBQEAVBamoInputSpacePayloadProxy@@I@Z @ 0x1800880B0 (-OnInputConfigChanged@SystemContextEndpoint@@UEAAJPEAVBamoSystemContextEndpointStub@@PEBQEAVBamo.c)
 *     ?OnDeviceRemoval@MobileButtonDeviceCollection@@MEAAJK@Z @ 0x1800C4C80 (-OnDeviceRemoval@MobileButtonDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInvalidateInput@MobileButtonDeviceCollection@@UEAAJPEAX@Z @ 0x1800C5300 (-OnInvalidateInput@MobileButtonDeviceCollection@@UEAAJPEAX@Z.c)
 *     ??0PointerFrame@PointerInputMediator@@QEAA@PEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x1800E3450 (--0PointerFrame@PointerInputMediator@@QEAA@PEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 *     ?RoutePointer@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z @ 0x1800E3A64 (-RoutePointer@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z.c)
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ @ 0x18012992C (-ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ.c)
 *     ?ProcessInputConfigMessage@SystemContextManager@@AEAAJAEBUInputConfigContextMessage@@PEAVBamoSystemContextEndpointProxy@@@Z @ 0x1801346CC (-ProcessInputConfigMessage@SystemContextManager@@AEAAJAEBUInputConfigContextMessage@@PEAVBamoSys.c)
 *     ?OnInput@CursorSuppressionProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801386A0 (-OnInput@CursorSuppressionProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 *     ?UpdateContactState@ShellGesturesRecognizer@@AEAAXPEBUPointerInputInfo@@@Z @ 0x18014EEC8 (-UpdateContactState@ShellGesturesRecognizer@@AEAAXPEBUPointerInputInfo@@@Z.c)
 *     ?AveragePoint@@YA?AUPoint@Foundation@Windows@@PEBUInputInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@Z @ 0x1801B08A0 (-AveragePoint@@YA-AUPoint@Foundation@Windows@@PEBUInputInfo@@V-$ComPtr@VInputSite@@@WRL@Microsof.c)
 *     ?DeliverInput@MagnifierGestureTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1801B09D0 (-DeliverInput@MagnifierGestureTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall gsl::details::extent_type<-1>::extent_type<-1>(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  *a1 = a2;
  if ( a2 == -1 )
  {
    _o_terminate(a1, -1LL, a3, a4);
    __debugbreak();
    JUMPOUT(0x18004C8BBLL);
  }
  return a1;
}
