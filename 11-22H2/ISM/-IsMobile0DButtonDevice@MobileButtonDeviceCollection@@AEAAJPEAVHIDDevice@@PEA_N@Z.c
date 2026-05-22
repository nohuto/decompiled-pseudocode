/*
 * XREFs of ?IsMobile0DButtonDevice@MobileButtonDeviceCollection@@AEAAJPEAVHIDDevice@@PEA_N@Z @ 0x1800EC9C4
 * Callers:
 *     ?OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800ECBE0 (-OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x180058458 (--_U@YAPEAX_K@Z.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x1800F47DC (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 */

__int64 __fastcall MobileButtonDeviceCollection::IsMobile0DButtonDevice(
        MobileButtonDeviceCollection *this,
        struct HIDDevice *a2,
        bool *a3)
{
  int v3; // ebx
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r12
  unsigned int v5; // esi
  int HIDCapabilities; // eax
  unsigned int v7; // edi
  struct _HIDP_CAPS *v9; // r13
  struct _HIDP_BUTTON_CAPS *ButtonCaps; // r15
  USAGE *v11; // rdi
  __int64 v12; // rbp
  char v13; // bl
  USHORT ButtonCapsLength[2]; // [rsp+40h] [rbp-68h] BYREF
  int v15; // [rsp+44h] [rbp-64h]
  struct _HIDP_CAPS *v16; // [rsp+48h] [rbp-60h] BYREF
  bool *v17; // [rsp+50h] [rbp-58h]
  __int64 v18; // [rsp+58h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)a2 + 6);
  v17 = a3;
  v18 = 0LL;
  LOBYTE(v3) = 0;
  v16 = 0LL;
  v15 = v3;
  v5 = 0;
  HIDCapabilities = HIDDevice::GetHIDCapabilities(a2, &v16);
  v7 = HIDCapabilities;
  if ( HIDCapabilities >= 0 )
  {
    v9 = v16;
    ButtonCaps = (struct _HIDP_BUTTON_CAPS *)operator new[](saturated_mul(v16->NumberInputButtonCaps, 0x48uLL));
    LODWORD(v18) = 3866665;
    v11 = (USAGE *)&v18;
    WORD2(v18) = 60;
    v12 = 3LL;
    do
    {
      ButtonCapsLength[0] = v9->NumberInputButtonCaps;
      memset_0(ButtonCaps, 0, 72LL * ButtonCapsLength[0]);
      if ( HidP_GetSpecificButtonCaps(HidP_Input, 7u, 0, *v11, ButtonCaps, ButtonCapsLength, PreparsedData) >= 0 )
        ++v5;
      ++v11;
      --v12;
    }
    while ( v12 );
    v13 = v15;
    if ( v9->NumberInputButtonCaps && v9->NumberInputButtonCaps <= 4u && v5 >= 2 )
      v13 = 1;
    if ( v17 )
      *v17 = v13;
    operator delete[](ButtonCaps);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\mobilebuttondevicecollection.cpp",
      (const char *)(unsigned int)HIDCapabilities);
    return v7;
  }
}
