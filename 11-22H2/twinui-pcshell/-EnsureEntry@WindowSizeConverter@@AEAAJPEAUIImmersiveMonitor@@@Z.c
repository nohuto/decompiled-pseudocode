/*
 * XREFs of ?EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180074498
 * Callers:
 *     ?DisplaySettingsChange@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18002FF20 (-DisplaySettingsChange@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISP.c)
 *     ?ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z @ 0x180074160 (-ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z.c)
 *     _lambda_be0384f6ee63f5b395346d60b9e3dbc6_::operator() @ 0x180074404 (_lambda_be0384f6ee63f5b395346d60b9e3dbc6_--operator().c)
 *     ?GetPhysicalChromeOffsets@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@PEAUtagRECT@@@Z @ 0x1805A1AC0 (-GetPhysicalChromeOffsets@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     wil::ResultFromException__lambda_fd32c1b568db692c2b9aba787b88bf18___ @ 0x1800744D4 (wil--ResultFromException__lambda_fd32c1b568db692c2b9aba787b88bf18___.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowSizeConverter::EnsureEntry(WindowSizeConverter *this, struct IImmersiveMonitor *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IImmersiveMonitor *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v5[1] = this;
  v5[0] = &v7;
  v2 = wil::ResultFromException__lambda_fd32c1b568db692c2b9aba787b88bf18___(v5);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1FF,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
    (const char *)(unsigned int)v2,
    v5[0]);
  return v3;
}
