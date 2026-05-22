/*
 * XREFs of ?ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJPEAULampAttributesResponseDeviceReport@@@Z @ 0x1800F1D60
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800F0E84 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x180056D48 (--_V@YAXPEAX@Z.c)
 *     ?CreateAndInitializeInputBuffer@HidLampAttributesResponseReportParser@@QEAAJAEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x1800F48C8 (-CreateAndInitializeInputBuffer@HidLampAttributesResponseReportParser@@QEAAJAEAV-$unique_ptr@$$B.c)
 *     ?ParseInputBufferForReport@HidLampAttributesResponseReportParser@@QEAAJPEBEIPEAULampAttributesResponseDeviceReport@@@Z @ 0x1800F4A3C (-ParseInputBufferForReport@HidLampAttributesResponseReportParser@@QEAAJPEBEIPEAULampAttributesRe.c)
 */

__int64 __fastcall HidLampArrayDevice::ReceiveLampAttributesReport(
        HidLampArrayDevice *this,
        struct LampAttributesResponseDeviceReport *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned __int8 *v7; // rbx
  signed int LastError; // eax
  unsigned int v9; // edi
  HidLampAttributesResponseReportParser *v10; // rcx
  int v11; // eax
  int v12; // eax
  __int128 v13; // xmm1
  __int128 v14; // [rsp+20h] [rbp-30h] BYREF
  __int128 v15; // [rsp+30h] [rbp-20h]
  int v16; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  ULONG ReportBufferLength; // [rsp+70h] [rbp+20h] BYREF
  PVOID ReportBuffer; // [rsp+80h] [rbp+30h] BYREF

  ReportBufferLength = 0;
  ReportBuffer = 0LL;
  v4 = HidLampAttributesResponseReportParser::CreateAndInitializeInputBuffer(
         *((_QWORD *)this + 75),
         &ReportBuffer,
         &ReportBufferLength);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x116,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v4);
    if ( ReportBuffer )
      operator delete[](ReportBuffer);
    return v5;
  }
  v7 = (unsigned __int8 *)ReportBuffer;
  if ( !HidD_GetFeature(*(HANDLE *)(*((_QWORD *)this + 2) + 40LL), ReportBuffer, ReportBufferLength) )
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    goto LABEL_8;
  }
  v10 = (HidLampAttributesResponseReportParser *)*((_QWORD *)this + 75);
  v14 = 0LL;
  v16 = 0;
  v15 = 0LL;
  v11 = HidLampAttributesResponseReportParser::ParseInputBufferForReport(
          v10,
          v7,
          ReportBufferLength,
          (struct LampAttributesResponseDeviceReport *)&v14);
  v9 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v11);
LABEL_8:
    if ( v7 )
      operator delete[](v7);
    return v9;
  }
  v12 = v16;
  v13 = v15;
  *(_OWORD *)a2 = v14;
  *((_OWORD *)a2 + 1) = v13;
  *((_DWORD *)a2 + 8) = v12;
  if ( v7 )
    operator delete[](v7);
  return 0LL;
}
