/*
 * XREFs of ?SendLampAttributesRequest@HidLampArrayDevice@@AEAAJH@Z @ 0x1800D8754
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800D743C (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 *     ?CreateAndInitializeOutputBuffer@HidLampAttributesRequestReportParser@@QEAAJPEBULampAttributesRequestDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x1800DA6E8 (-CreateAndInitializeOutputBuffer@HidLampAttributesRequestReportParser@@QEAAJPEBULampAttributesRe.c)
 */

__int64 __fastcall HidLampArrayDevice::SendLampAttributesRequest(HidLampArrayDevice *this, int a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  PVOID v6; // rbx
  signed int LastError; // eax
  unsigned int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+30h] [rbp+8h] BYREF
  ULONG ReportBufferLength; // [rsp+38h] [rbp+10h] BYREF
  PVOID ReportBuffer; // [rsp+40h] [rbp+18h] BYREF

  ReportBufferLength = 0;
  ReportBuffer = 0LL;
  v10 = a2;
  v3 = HidLampAttributesRequestReportParser::CreateAndInitializeOutputBuffer(
         *((_QWORD *)this + 74),
         &v10,
         &ReportBuffer,
         &ReportBufferLength);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v6 = ReportBuffer;
    if ( HidD_SetFeature(*(HANDLE *)(*((_QWORD *)this + 2) + 40LL), ReportBuffer, ReportBufferLength) )
    {
      if ( v6 )
        operator delete[](v6);
      return 0LL;
    }
    else
    {
      LastError = GetLastError();
      v8 = LastError;
      if ( LastError > 0 )
        v8 = (unsigned __int16)LastError | 0x80070000;
      if ( v6 )
        operator delete[](v6);
      return v8;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x105,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v3);
    if ( ReportBuffer )
      operator delete[](ReportBuffer);
    return v4;
  }
}
