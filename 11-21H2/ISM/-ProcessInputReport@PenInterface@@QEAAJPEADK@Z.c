/*
 * XREFs of ?ProcessInputReport@PenInterface@@QEAAJPEADK@Z @ 0x1801890D0
 * Callers:
 *     ?HandleRIMDeviceInput@PenDeviceManager@@QEAAXPEAX0K@Z @ 0x180186AB0 (-HandleRIMDeviceInput@PenDeviceManager@@QEAAXPEAX0K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?ParseTransducerPropertiesReport@PenInterface@@AEAAJW4_HIDP_REPORT_TYPE@@PEADKPEAUTransducerPropertiesReport@1@@Z @ 0x180188EE4 (-ParseTransducerPropertiesReport@PenInterface@@AEAAJW4_HIDP_REPORT_TYPE@@PEADKPEAUTransducerProp.c)
 *     ?UpdateTransducerProperties@PenInterface@@AEAAXAEBUTransducerPropertiesReport@1@@Z @ 0x1801892D8 (-UpdateTransducerProperties@PenInterface@@AEAAXAEBUTransducerPropertiesReport@1@@Z.c)
 */

__int64 __fastcall PenInterface::ProcessInputReport(PenInterface *this, char *a2, ULONG a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v7[4]; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v8 = 0;
  *(_OWORD *)v7 = 0LL;
  v4 = PenInterface::ParseTransducerPropertiesReport(
         this,
         HidP_Input,
         a2,
         a3,
         (struct PenInterface::TransducerPropertiesReport *)v7);
  v5 = v4;
  if ( v4 >= 0 )
  {
    PenInterface::UpdateTransducerProperties(this, (const struct PenInterface::TransducerPropertiesReport *)v7);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x148,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\peninterface.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
