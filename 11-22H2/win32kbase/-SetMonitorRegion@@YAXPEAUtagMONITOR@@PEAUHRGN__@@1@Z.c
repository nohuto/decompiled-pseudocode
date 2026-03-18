/*
 * XREFs of ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0059C2C
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C004A2E0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GetMonitorDC @ 0x1C005B3E8 (GetMonitorDC.c)
 * Callees:
 *     GreDeleteObject @ 0x1C00472A0 (GreDeleteObject.c)
 *     CreateMonitorRegionForDpi @ 0x1C0059CD0 (CreateMonitorRegionForDpi.c)
 *     GetMonitorRect @ 0x1C005BE7C (GetMonitorRect.c)
 *     GreOffsetRgn @ 0x1C005BF60 (GreOffsetRgn.c)
 *     GreCombineRgn @ 0x1C005C1D0 (GreCombineRgn.c)
 *     GetCurrentThreadCompositedDpi @ 0x1C005C500 (GetCurrentThreadCompositedDpi.c)
 *     GreSetRectRgn @ 0x1C008A530 (GreSetRectRgn.c)
 */

void __fastcall SetMonitorRegion(struct tagMONITOR *a1, HRGN a2, HRGN a3)
{
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  HRGN MonitorRegionForDpi; // rsi
  _BYTE v8[24]; // [rsp+30h] [rbp-18h] BYREF

  CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
  MonitorRegionForDpi = (HRGN)CreateMonitorRegionForDpi(a1, CurrentThreadCompositedDpi);
  if ( (unsigned int)GreCombineRgn(a2, a3, MonitorRegionForDpi, 1) )
  {
    GetMonitorRect(v8, a1);
    GreOffsetRgn(a2);
  }
  else
  {
    GreSetRectRgn(a2, 0);
  }
  GreDeleteObject((HPALETTE)MonitorRegionForDpi);
}
