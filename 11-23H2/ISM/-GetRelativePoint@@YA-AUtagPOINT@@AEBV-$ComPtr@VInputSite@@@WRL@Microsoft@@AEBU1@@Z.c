/*
 * XREFs of ?GetRelativePoint@@YA?AUtagPOINT@@AEBV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBU1@@Z @ 0x180157480
 * Callers:
 *     ?GetRelativePoints@GestureHandler@@AEAA?AV?$tuple@UtagPOINT@@U1@U1@@std@@AEBUGestureClient@1@UtagPOINTF@@@Z @ 0x1801574BC (-GetRelativePoints@GestureHandler@@AEAA-AV-$tuple@UtagPOINT@@U1@U1@@std@@AEBUGestureClient@1@Uta.c)
 * Callees:
 *     ?GetRelativePoint@InputSite@@QEAA?AV?$tuple@UPoint@Foundation@Windows@@_N@std@@AEBUtagPOINT@@@Z @ 0x18013EE9C (-GetRelativePoint@InputSite@@QEAA-AV-$tuple@UPoint@Foundation@Windows@@_N@std@@AEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall GetRelativePoint(__int64 *a1, int *a2)
{
  __int64 RelativePoint; // rax
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+40h] [rbp+8h]

  RelativePoint = InputSite::GetRelativePoint(*a1, (__int64)v4, a2);
  LODWORD(v5) = (int)*(float *)(RelativePoint + 4);
  HIDWORD(v5) = (int)*(float *)(RelativePoint + 8);
  return v5;
}
