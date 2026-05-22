/*
 * XREFs of ?ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJPEAULampAttributesResponseDeviceReport@@@Z @ 0x1800D82C4
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800D743C (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 *     ?CreateAndInitializeInputBuffer@HidLampAttributesResponseReportParser@@QEAAJAEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x1800DAD08 (-CreateAndInitializeInputBuffer@HidLampAttributesResponseReportParser@@QEAAJAEAV-$unique_ptr@$$B.c)
 *     ?ParseInputBufferForReport@HidLampAttributesResponseReportParser@@QEAAJPEBEIPEAULampAttributesResponseDeviceReport@@@Z @ 0x1800DAE7C (-ParseInputBufferForReport@HidLampAttributesResponseReportParser@@QEAAJPEBEIPEAULampAttributesRe.c)
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
  unsigned int v12; // esi
  int v13; // eax
  __int128 v14; // xmm1
  __int128 v15; // [rsp+20h] [rbp-30h] BYREF
  __int128 v16; // [rsp+30h] [rbp-20h]
  int v17; // [rsp+40h] [rbp-10h]
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
  if ( v4 >= 0 )
  {
    v7 = (unsigned __int8 *)ReportBuffer;
    if ( HidD_GetFeature(*(HANDLE *)(*((_QWORD *)this + 2) + 40LL), ReportBuffer, ReportBufferLength) )
    {
      v10 = (HidLampAttributesResponseReportParser *)*((_QWORD *)this + 75);
      v15 = 0LL;
      v17 = 0;
      v16 = 0LL;
      v11 = HidLampAttributesResponseReportParser::ParseInputBufferForReport(
              v10,
              v7,
              ReportBufferLength,
              (struct LampAttributesResponseDeviceReport *)&v15);
      v12 = v11;
      if ( v11 >= 0 )
      {
        v13 = v17;
        v14 = v16;
        *(_OWORD *)a2 = v15;
        *((_OWORD *)a2 + 1) = v14;
        *((_DWORD *)a2 + 8) = v13;
        if ( v7 )
          operator delete[](v7);
        return 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x11D,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
          (const char *)(unsigned int)v11);
        if ( v7 )
          operator delete[](v7);
        return v12;
      }
    }
    else
    {
      LastError = GetLastError();
      v9 = LastError;
      if ( LastError > 0 )
        v9 = (unsigned __int16)LastError | 0x80070000;
      if ( v7 )
        operator delete[](v7);
      return v9;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x115,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v4);
    if ( ReportBuffer )
      operator delete[](ReportBuffer);
    return v5;
  }
}
