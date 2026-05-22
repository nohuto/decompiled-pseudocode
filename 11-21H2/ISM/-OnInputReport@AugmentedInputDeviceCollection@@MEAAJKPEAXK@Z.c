/*
 * XREFs of ?OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800BB480
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800B4708 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAULegacyInputInfo@@@Z @ 0x1800B4DE8 (-PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAULegacyIn.c)
 *     ?GetAugmentedInputCacheEntry@AugmentedInputDeviceCollection@@AEAAJKPEAUAugmentedInputCacheState@@@Z @ 0x1800BAFF4 (-GetAugmentedInputCacheEntry@AugmentedInputDeviceCollection@@AEAAJKPEAUAugmentedInputCacheState@.c)
 *     ?UpdateCacheForDevice@AugmentedInputDeviceCollection@@AEAAJKUAugmentedInputCacheState@@@Z @ 0x1800BB844 (-UpdateCacheForDevice@AugmentedInputDeviceCollection@@AEAAJKUAugmentedInputCacheState@@@Z.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x1800BBFE0 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x1800CC26C (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 */

__int64 __fastcall AugmentedInputDeviceCollection::OnInputReport(
        AugmentedInputDeviceCollection *this,
        unsigned int a2,
        PCHAR Report,
        unsigned int a4)
{
  int Device; // ebx
  __int64 v9; // rdx
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r14
  struct _HIDP_CAPS *v12; // rdi
  unsigned int InputReportByteLength; // ebx
  NTSTATUS Usages; // eax
  USHORT v15; // ax
  USHORT *v16; // rdx
  unsigned int v17; // r14d
  __int64 v18; // rax
  __int64 v19; // rdx
  struct _HIDP_CAPS *v20; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+48h] [rbp-B8h]
  ULONG UsageValue; // [rsp+50h] [rbp-B0h] BYREF
  ULONG UsageLength[2]; // [rsp+58h] [rbp-A8h] BYREF
  struct _HIDP_PREPARSED_DATA *v24; // [rsp+60h] [rbp-A0h]
  struct _HIDP_CAPS *v25; // [rsp+70h] [rbp-90h] BYREF
  int v26; // [rsp+78h] [rbp-88h]
  struct _HIDP_CAPS *v27; // [rsp+80h] [rbp-80h] BYREF
  int v28; // [rsp+88h] [rbp-78h]
  _BYTE v29[24]; // [rsp+90h] [rbp-70h] BYREF
  int v30; // [rsp+A8h] [rbp-58h]
  char v31; // [rsp+960h] [rbp+860h]
  float v32; // [rsp+964h] [rbp+864h]
  float v33; // [rsp+968h] [rbp+868h]
  USHORT UsageList[20]; // [rsp+C50h] [rbp+B50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+CB8h] [rbp+BB8h]

  *(_QWORD *)UsageLength = 0LL;
  v20 = 0LL;
  Device = RIMDeviceCollection::FindDevice(this, a2, 0LL, (struct RIMDevice **)UsageLength, 0LL);
  if ( Device < 0 )
  {
    v9 = 181LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\augmentedinputdevicecollection.cpp",
      (const char *)(unsigned int)Device);
    return (unsigned int)Device;
  }
  PreparsedData = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)UsageLength + 48LL);
  v24 = PreparsedData;
  Device = HIDDevice::GetHIDCapabilities(*(HIDDevice **)UsageLength, &v20);
  if ( Device < 0 )
  {
    v9 = 183LL;
    goto LABEL_3;
  }
  UsageValue = 0;
  v12 = v20;
  InputReportByteLength = v20->InputReportByteLength;
  if ( a4 < InputReportByteLength )
    return 0LL;
  while ( 1 )
  {
    memset_0(v29, 0, 0xBC0uLL);
    v30 = 3008;
    if ( *((_BYTE *)this + 2776) )
    {
      v32 = 0.0;
      v33 = 0.0;
      goto LABEL_12;
    }
    Usages = HidP_GetUsageValue(
               HidP_Input,
               1u,
               0,
               0x33u,
               &UsageValue,
               PreparsedData,
               Report,
               (unsigned __int16)InputReportByteLength);
    if ( Usages < 0 )
      break;
    v32 = (float)(__int16)UsageValue / 10.0;
    Usages = HidP_GetUsageValue(
               HidP_Input,
               1u,
               0,
               0x34u,
               &UsageValue,
               PreparsedData,
               Report,
               v12->InputReportByteLength);
    if ( Usages < 0 )
    {
      v19 = 228LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v19,
               (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\augmentedinputdevicecollection.cpp",
               (const char *)(unsigned int)Usages);
    }
    v33 = (float)(__int16)UsageValue / 10.0;
LABEL_12:
    v31 = 0;
    UsageLength[0] = 20;
    Usages = HidP_GetUsages(
               HidP_Input,
               9u,
               0,
               UsageList,
               UsageLength,
               PreparsedData,
               Report,
               v12->InputReportByteLength);
    if ( Usages < 0 )
    {
      v19 = 248LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v19,
               (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\augmentedinputdevicecollection.cpp",
               (const char *)(unsigned int)Usages);
    }
    v15 = UsageList[0];
    v16 = UsageList;
    while ( v15 )
    {
      if ( v15 == 1 )
        v31 = 1;
      v15 = *++v16;
    }
    v20 = 0LL;
    v21 = 0;
    Device = AugmentedInputDeviceCollection::GetAugmentedInputCacheEntry(
               this,
               a2,
               (struct AugmentedInputCacheState *)&v20);
    if ( Device < 0 )
    {
      v9 = 263LL;
      goto LABEL_3;
    }
    if ( v31 )
    {
      if ( BYTE4(v20) )
      {
        v17 = 3;
      }
      else
      {
        BYTE4(v20) = 1;
        v25 = v20;
        v17 = 2;
        v26 = v21;
        Device = AugmentedInputDeviceCollection::UpdateCacheForDevice(this, a2, &v25);
        if ( Device < 0 )
        {
          v9 = 275LL;
          goto LABEL_3;
        }
      }
    }
    else
    {
      if ( !BYTE4(v20) )
        goto LABEL_28;
      BYTE4(v20) = 0;
      v27 = v20;
      v17 = 4;
      v28 = v21;
      Device = AugmentedInputDeviceCollection::UpdateCacheForDevice(this, a2, &v27);
      if ( Device < 0 )
      {
        v9 = 284LL;
        goto LABEL_3;
      }
    }
    MPCInputInfoHelper::PopulateAugmentedInput(v17, a2, (int)v20, SHIWORD(v20), v21, SHIWORD(v20), (__int64)v29);
    Device = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2), v29);
    if ( Device < 0 )
    {
      v9 = 291LL;
      goto LABEL_3;
    }
    PreparsedData = v24;
LABEL_28:
    v18 = v12->InputReportByteLength;
    a4 -= v18;
    Report += v18;
    LOWORD(InputReportByteLength) = v12->InputReportByteLength;
    if ( a4 < (unsigned __int16)InputReportByteLength )
      return 0LL;
  }
  v19 = 213LL;
  return wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)v19,
           (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\augmentedinputdevicecollection.cpp",
           (const char *)(unsigned int)Usages);
}
