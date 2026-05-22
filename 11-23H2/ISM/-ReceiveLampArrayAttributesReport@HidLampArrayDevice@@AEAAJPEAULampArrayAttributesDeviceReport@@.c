/*
 * XREFs of ?ReceiveLampArrayAttributesReport@HidLampArrayDevice@@AEAAJPEAULampArrayAttributesDeviceReport@@@Z @ 0x1800F1C30
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800F0E84 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x180056D48 (--_V@YAXPEAX@Z.c)
 *     ?CreateAndInitializeInputBuffer@HidLampArrayAttributesReportParser@@QEAAJAEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x1800F3CD8 (-CreateAndInitializeInputBuffer@HidLampArrayAttributesReportParser@@QEAAJAEAV-$unique_ptr@$$BY0A.c)
 *     ?ParseInputBufferForReport@HidLampArrayAttributesReportParser@@QEAAJPEBEIPEAULampArrayAttributesDeviceReport@@@Z @ 0x1800F3D84 (-ParseInputBufferForReport@HidLampArrayAttributesReportParser@@QEAAJPEBEIPEAULampArrayAttributes.c)
 */

__int64 __fastcall HidLampArrayDevice::ReceiveLampArrayAttributesReport(
        HidLampArrayDevice *this,
        struct LampArrayAttributesDeviceReport *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned __int8 *v7; // rbx
  signed int LastError; // eax
  unsigned int v9; // edi
  HidLampArrayAttributesReportParser *v10; // rcx
  int v11; // eax
  __int64 v12; // xmm1_8
  __int128 v13; // [rsp+20h] [rbp-20h] BYREF
  __int64 v14; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  ULONG ReportBufferLength; // [rsp+60h] [rbp+20h] BYREF
  PVOID ReportBuffer; // [rsp+70h] [rbp+30h] BYREF

  ReportBufferLength = 0;
  ReportBuffer = 0LL;
  v4 = HidLampArrayAttributesReportParser::CreateAndInitializeInputBuffer(
         *((_QWORD *)this + 72),
         &ReportBuffer,
         &ReportBufferLength);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEE,
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
  v10 = (HidLampArrayAttributesReportParser *)*((_QWORD *)this + 72);
  v13 = 0LL;
  v14 = 0LL;
  v11 = HidLampArrayAttributesReportParser::ParseInputBufferForReport(
          v10,
          v7,
          ReportBufferLength,
          (struct LampArrayAttributesDeviceReport *)&v13);
  v9 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v11);
LABEL_8:
    if ( v7 )
      operator delete[](v7);
    return v9;
  }
  v12 = v14;
  *(_OWORD *)a2 = v13;
  *((_QWORD *)a2 + 2) = v12;
  if ( v7 )
    operator delete[](v7);
  return 0LL;
}
