/*
 * XREFs of ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800F4250
 * Callers:
 *     ?OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800E3160 (-OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800E9320 (-OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800ECBE0 (-OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800EE380 (-OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@SystemControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800EEEE0 (-OnDeviceAttach@SystemControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@CallControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800EF6D0 (-OnDeviceAttach@CallControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800EFE60 (-OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800F0550 (-OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800F12A0 (-OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@DockableDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800F26D0 (-OnDeviceAttach@DockableDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800F3990 (-OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x180058458 (--_U@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?reset@?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAAXPEAULegacyDeviceInfo@@@Z @ 0x1800CA6AC (-reset@-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAAXPEA.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800DCA78 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x1800E3F9C (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?ConvertHIDTLCIdToInputType@HIDDeviceCollection@@AEAAJGGPEAW4InputType@@@Z @ 0x1800F3EA0 (-ConvertHIDTLCIdToInputType@HIDDeviceCollection@@AEAAJGGPEAW4InputType@@@Z.c)
 *     ?LogRawInputDeviceAttached@RawInputProvidersTelemetry@@SAXIGGG@Z @ 0x1800F40D0 (-LogRawInputDeviceAttached@RawInputProvidersTelemetry@@SAXIGGG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HIDDeviceCollection::OnDeviceAttach(HIDDeviceCollection *this, int a2, struct DeviceInfo **a3)
{
  void *v6; // rbx
  int *v7; // rdi
  void *v8; // r14
  void *v9; // r13
  int Device; // eax
  unsigned int v11; // esi
  struct RIMDevice *v13; // rbx
  struct RIMDevice *v14; // r13
  struct RIMDevice *v15; // r14
  int v16; // eax
  unsigned int v17; // edi
  void *v18; // rsi
  NTSTATUS Caps; // eax
  __int64 v20; // rdx
  HIDDeviceCollection *v21; // rcx
  int v22; // eax
  unsigned int v23; // r14d
  int v24; // eax
  __int16 v25; // dx
  __int16 v26; // r8
  int v27; // [rsp+20h] [rbp-89h]
  size_t Size; // [rsp+30h] [rbp-79h] BYREF
  struct RIMDevice *v29; // [rsp+38h] [rbp-71h] BYREF
  unsigned int v30; // [rsp+40h] [rbp-69h] BYREF
  int v31; // [rsp+44h] [rbp-65h]
  unsigned int *v32; // [rsp+48h] [rbp-61h] BYREF
  _OWORD v33[2]; // [rsp+50h] [rbp-59h] BYREF
  __int64 v34; // [rsp+70h] [rbp-39h]
  _HIDP_CAPS Capabilities; // [rsp+80h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v31 = a2;
  v30 = 0;
  LODWORD(Size) = 0;
  v6 = 0LL;
  v32 = 0LL;
  memset(v33, 0, sizeof(v33));
  v34 = 0LL;
  if ( !a3 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xDA,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
      (const char *)0x8000FFFFLL,
      v27);
  v7 = (int *)*a3;
  if ( *a3 )
  {
    v8 = 0LL;
    v9 = 0LL;
  }
  else
  {
    v13 = (struct RIMDevice *)operator new(0x60CuLL);
    v29 = v13;
    memset_0(v13, 0, 0x60CuLL);
    *((_DWORD *)v13 + 2) = 1548;
    std::unique_ptr<LegacyDeviceInfo>::reset((void **)&v32, v13);
    v6 = v32;
    v7 = (int *)v32;
    v8 = v32;
    v9 = v32;
    if ( !v32 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF4,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
        (const char *)0x8007000ELL);
      return 2147942414LL;
    }
  }
  v29 = 0LL;
  Device = RIMDeviceCollection::FindDevice(this, a2, 0LL, &v29, 0LL);
  v11 = Device;
  if ( Device < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
      (const char *)(unsigned int)Device);
    if ( v8 )
      operator delete(v6);
    return v11;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(HIDDeviceCollection *, struct RIMDevice *))(*(_QWORD *)this + 96LL))(
          this,
          v29) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFD,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
      (const char *)0x8000FFFFLL);
    if ( v9 )
      operator delete(v6);
    return 2147549183LL;
  }
  v14 = v29;
  v15 = (struct RIMDevice *)*((_QWORD *)v29 + 2);
  v29 = v15;
  v16 = RIMGetDevicePreparsedData(*((_QWORD *)this + 10), v15, 0LL, &Size);
  if ( v16 < 0 )
  {
    v17 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0x10C,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
            (const char *)(unsigned int)v16);
LABEL_17:
    if ( v6 )
      operator delete(v6);
    return v17;
  }
  v18 = operator new[]((unsigned int)Size);
  memset_0(v18, 0, (unsigned int)Size);
  Caps = RIMGetDevicePreparsedData(*((_QWORD *)this + 10), v15, v18, &Size);
  if ( Caps < 0 )
  {
    v20 = 281LL;
LABEL_22:
    v17 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)v20,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
            (const char *)(unsigned int)Caps);
    operator delete[](v18);
    goto LABEL_17;
  }
  memset_0(&Capabilities, 0, sizeof(Capabilities));
  Caps = HidP_GetCaps((PHIDP_PREPARSED_DATA)v18, &Capabilities);
  if ( Caps < 0 )
  {
    v20 = 287LL;
    goto LABEL_22;
  }
  v22 = HIDDeviceCollection::ConvertHIDTLCIdToInputType(
          v21,
          Capabilities.Usage,
          Capabilities.UsagePage,
          (enum InputType *)&v30);
  v23 = v22;
  if ( v22 >= 0 )
  {
    v24 = Size;
    *((_QWORD *)v14 + 6) = v18;
    *((_DWORD *)v14 + 14) = v24;
    *v7 = v31;
    v7[1] = v30;
    if ( (int)RIMGetDeviceProperties(*((_QWORD *)this + 10), v29, v33) >= 0 )
    {
      *((_WORD *)v7 + 16) = WORD4(v33[0]);
      v25 = WORD4(v33[0]);
      *((_WORD *)v7 + 17) = WORD5(v33[0]);
      v26 = WORD5(v33[0]);
      *((_WORD *)v7 + 18) = WORD6(v33[0]);
      RawInputProvidersTelemetry::LogRawInputDeviceAttached((unsigned int)v7[1], v25, v26, SWORD6(v33[0]));
    }
    *a3 = (struct DeviceInfo *)v7;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x124,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
      (const char *)(unsigned int)v22);
    operator delete[](v18);
    if ( v6 )
      operator delete(v6);
    return v23;
  }
}
