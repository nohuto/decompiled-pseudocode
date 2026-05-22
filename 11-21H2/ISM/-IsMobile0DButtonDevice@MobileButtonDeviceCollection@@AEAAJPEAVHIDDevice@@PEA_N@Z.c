/*
 * XREFs of ?IsMobile0DButtonDevice@MobileButtonDeviceCollection@@AEAAJPEAVHIDDevice@@PEA_N@Z @ 0x1800C497C
 * Callers:
 *     ?OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800C4B90 (-OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18004B75C (--_U@YAPEAX_K@Z.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x1800CC26C (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 */

__int64 __fastcall MobileButtonDeviceCollection::IsMobile0DButtonDevice(
        MobileButtonDeviceCollection *this,
        struct HIDDevice *a2,
        bool *a3)
{
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r12
  bool v4; // bl
  unsigned int v5; // esi
  int HIDCapabilities; // eax
  unsigned int v7; // edi
  struct _HIDP_CAPS *v9; // r13
  struct _HIDP_BUTTON_CAPS *ButtonCaps; // r15
  USAGE *v11; // rdi
  __int64 v12; // rbp
  USHORT ButtonCapsLength; // [rsp+40h] [rbp-68h] BYREF
  struct _HIDP_CAPS *v14; // [rsp+48h] [rbp-60h] BYREF
  bool *v15; // [rsp+50h] [rbp-58h]
  __int64 v16; // [rsp+58h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)a2 + 6);
  v14 = 0LL;
  v16 = 0LL;
  v15 = a3;
  v4 = 0;
  v5 = 0;
  HIDCapabilities = HIDDevice::GetHIDCapabilities(a2, &v14);
  v7 = HIDCapabilities;
  if ( HIDCapabilities >= 0 )
  {
    v9 = v14;
    ButtonCaps = (struct _HIDP_BUTTON_CAPS *)operator new[](saturated_mul(v14->NumberInputButtonCaps, 0x48uLL));
    LODWORD(v16) = 3866665;
    v11 = (USAGE *)&v16;
    WORD2(v16) = 60;
    v12 = 3LL;
    do
    {
      ButtonCapsLength = v9->NumberInputButtonCaps;
      memset_0(ButtonCaps, 0, 72LL * ButtonCapsLength);
      if ( HidP_GetSpecificButtonCaps(HidP_Input, 7u, 0, *v11, ButtonCaps, &ButtonCapsLength, PreparsedData) >= 0 )
        ++v5;
      ++v11;
      --v12;
    }
    while ( v12 );
    if ( (unsigned __int16)(v9->NumberInputButtonCaps - 1) <= 3u )
      v4 = v5 >= 2;
    if ( v15 )
      *v15 = v4;
    operator delete[](ButtonCaps);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C5,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\mobilebuttondevicecollection.cpp",
      (const char *)(unsigned int)HIDCapabilities);
    return v7;
  }
}
