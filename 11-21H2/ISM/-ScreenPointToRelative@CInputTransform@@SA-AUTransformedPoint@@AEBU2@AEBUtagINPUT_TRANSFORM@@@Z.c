/*
 * XREFs of ?ScreenPointToRelative@CInputTransform@@SA?AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1800E7A2C
 * Callers:
 *     ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800E71A0 (-DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?GetRelativePoint@InputSite@@QEAA?AV?$tuple@UPoint@Foundation@Windows@@_N@std@@AEBUtagPOINT@@@Z @ 0x180123EBC (-GetRelativePoint@InputSite@@QEAA-AV-$tuple@UPoint@Foundation@Windows@@_N@std@@AEBUtagPOINT@@@Z.c)
 *     ?CancelResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x180144DD4 (-CancelResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 *     ?CreatePointerInfoAndUpdatePositionData@ResizeProcessor@@AEAAXKUtagPOINT@@PEAVInputSite@@PEAU2@2@Z @ 0x1801450C4 (-CreatePointerInfoAndUpdatePositionData@ResizeProcessor@@AEAAXKUtagPOINT@@PEAVInputSite@@PEAU2@2.c)
 *     ?OnInput@ResizeProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180146060 (-OnInput@ResizeProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@.c)
 *     ?StartAnimation@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x180146B18 (-StartAnimation@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 *     ?GetPositionRelativeToSite@PointerManipulationHelper@@SA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x18019D55C (-GetPositionRelativeToSite@PointerManipulationHelper@@SA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 * Callees:
 *     ?ScreenPointToRelative@CInputTransform@@QEBA?AUTransformedPoint@@AEBU2@@Z @ 0x1800E794C (-ScreenPointToRelative@CInputTransform@@QEBA-AUTransformedPoint@@AEBU2@@Z.c)
 */

__int64 __fastcall CInputTransform::ScreenPointToRelative(__int64 a1, float *a2, __int128 *a3)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int64 v7; // rdx
  _OWORD v9[4]; // [rsp+20h] [rbp-58h] BYREF
  char v10; // [rsp+60h] [rbp-18h]

  v3 = *a3;
  v10 = 0;
  v4 = a3[1];
  v9[0] = v3;
  v5 = a3[2];
  v9[1] = v4;
  v6 = a3[3];
  v9[2] = v5;
  v9[3] = v6;
  CInputTransform::ScreenPointToRelative((float *)v9, a1, a2);
  return v7;
}
