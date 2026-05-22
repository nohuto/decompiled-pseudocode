/*
 * XREFs of ?TryGetDockInputReport@DockDevice@@QEAAJPEAUGetInputReportResult@@@Z @ 0x1800F6204
 * Callers:
 *     ?OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800F12A0 (-OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x18001B9A0 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x180058458 (--_U@YAPEAX_K@Z.c)
 *     ??$?4U?$default_delete@$$BY0A@E@std@@$0A@@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800F0928 (--$-4U-$default_delete@$$BY0A@E@std@@$0A@@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@.c)
 */

__int64 __fastcall DockDevice::TryGetDockInputReport(DockDevice *this, struct GetInputReportResult *a2)
{
  struct _HIDP_PREPARSED_DATA *PreparsedData; // rbx
  NTSTATUS SpecificButtonCaps; // eax
  unsigned int v6; // ebx
  unsigned int v8; // r14d
  _BYTE *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  USHORT ButtonCapsLength[2]; // [rsp+50h] [rbp-88h] BYREF
  int v14; // [rsp+54h] [rbp-84h] BYREF
  void *v15; // [rsp+58h] [rbp-80h] BYREF
  struct _HIDP_BUTTON_CAPS ButtonCaps; // [rsp+60h] [rbp-78h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 6);
  memset_0(&ButtonCaps, 0, sizeof(ButtonCaps));
  ButtonCapsLength[0] = 1;
  SpecificButtonCaps = HidP_GetSpecificButtonCaps(
                         HidP_Input,
                         1u,
                         0,
                         0xD4u,
                         &ButtonCaps,
                         ButtonCapsLength,
                         PreparsedData);
  v6 = SpecificButtonCaps;
  if ( SpecificButtonCaps < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x87,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
      (const char *)(unsigned int)SpecificButtonCaps);
    return v6;
  }
  v8 = *((unsigned __int16 *)this + 32);
  v9 = operator new[](*((unsigned __int16 *)this + 32));
  memset_0(v9, 0, v8);
  *v9 = ButtonCaps.ReportID;
  v10 = *((_QWORD *)this + 2);
  v11 = *((_QWORD *)this + 1);
  v14 = 0;
  v15 = v9;
  v12 = NtRIMDeviceIoControl(v11, v10, 721314LL, 0LL, 0, v9, v8, &v14, 0);
  v6 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x99,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
      (const char *)(unsigned int)v12);
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v15);
    return v6;
  }
  *(_DWORD *)a2 = *((_DWORD *)this + 10);
  *((_DWORD *)a2 + 4) = v8;
  std::unique_ptr<unsigned char [0]>::operator=<std::default_delete<unsigned char [0]>,0>((void **)a2 + 1, &v15);
  if ( v15 )
    operator delete[](v15);
  return 0LL;
}
