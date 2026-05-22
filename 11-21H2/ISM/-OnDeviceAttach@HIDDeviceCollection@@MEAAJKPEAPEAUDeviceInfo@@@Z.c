/*
 * XREFs of ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800CBCE0
 * Callers:
 *     ?OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800BB180 (-OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800C1400 (-OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800C4B90 (-OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800C61C0 (-OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@SystemControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800C6D00 (-OnDeviceAttach@SystemControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800C7560 (-OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800C7C60 (-OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800C8970 (-OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@DockableDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800CA0E0 (-OnDeviceAttach@DockableDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800CB360 (-OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18004B75C (--_U@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?reset@?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAAXPEAULegacyDeviceInfo@@@Z @ 0x1800A1EB0 (-reset@-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAAXPEA.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800B4708 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x1800BBFE0 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?ConvertHIDTLCIdToInputType@HIDDeviceCollection@@AEAAJGGPEAW4InputType@@@Z @ 0x1800CB930 (-ConvertHIDTLCIdToInputType@HIDDeviceCollection@@AEAAJGGPEAW4InputType@@@Z.c)
 *     ?LogRawInputDeviceAttached@RawInputProvidersTelemetry@@SAXIGGG@Z @ 0x1800CBB60 (-LogRawInputDeviceAttached@RawInputProvidersTelemetry@@SAXIGGG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HIDDeviceCollection::OnDeviceAttach(HIDDeviceCollection *this, int a2, struct DeviceInfo **a3)
{
  void *v6; // rbx
  int *v7; // rdi
  void *v8; // rsi
  int Device; // eax
  unsigned int v10; // r14d
  _DWORD *v12; // rbx
  struct RIMDevice *v13; // r14
  _DWORD *v14; // r15
  int v15; // eax
  unsigned int v16; // edi
  void *v17; // r14
  NTSTATUS Caps; // eax
  __int64 v19; // rdx
  HIDDeviceCollection *v20; // rcx
  int v21; // eax
  unsigned int v22; // r15d
  int v23; // eax
  struct RIMDevice *v24; // rcx
  int v25; // [rsp+20h] [rbp-89h]
  size_t Size; // [rsp+30h] [rbp-79h] BYREF
  int v27; // [rsp+38h] [rbp-71h]
  struct RIMDevice *v28; // [rsp+40h] [rbp-69h] BYREF
  unsigned int *v29; // [rsp+48h] [rbp-61h] BYREF
  _DWORD *v30; // [rsp+50h] [rbp-59h]
  _OWORD v31[2]; // [rsp+58h] [rbp-51h] BYREF
  __int64 v32; // [rsp+78h] [rbp-31h]
  _HIDP_CAPS Capabilities; // [rsp+80h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v27 = a2;
  Size = 0LL;
  v6 = 0LL;
  v29 = 0LL;
  memset(v31, 0, sizeof(v31));
  v32 = 0LL;
  if ( !a3 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xD6,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
      (const char *)0x8000FFFFLL,
      v25);
  v7 = (int *)*a3;
  if ( *a3 )
  {
    v8 = 0LL;
  }
  else
  {
    v12 = operator new(0x60CuLL);
    v30 = v12;
    memset_0(v12, 0, 0x60CuLL);
    v12[2] = 1548;
    std::unique_ptr<LegacyDeviceInfo>::reset((void **)&v29, v12);
    v6 = v29;
    v7 = (int *)v29;
    v8 = v29;
    if ( !v29 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF0,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
        (const char *)0x8007000ELL);
      return 2147942414LL;
    }
  }
  v28 = 0LL;
  Device = RIMDeviceCollection::FindDevice(this, a2, 0LL, &v28, 0LL);
  v10 = Device;
  if ( Device < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF5,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
      (const char *)(unsigned int)Device);
    if ( v8 )
      operator delete(v6);
    return v10;
  }
  v13 = v28;
  if ( !(*(unsigned __int8 (__fastcall **)(HIDDeviceCollection *, struct RIMDevice *))(*(_QWORD *)this + 96LL))(
          this,
          v28) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF9,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
      (const char *)0x8000FFFFLL);
    if ( v8 )
      operator delete(v6);
    return 2147549183LL;
  }
  v14 = (_DWORD *)*((_QWORD *)v13 + 2);
  v30 = v14;
  v15 = RIMGetDevicePreparsedData(*((_QWORD *)this + 10), v14, 0LL, &Size);
  if ( v15 < 0 )
  {
    v16 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0x108,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
            (const char *)(unsigned int)v15);
LABEL_17:
    if ( v8 )
      operator delete(v6);
    return v16;
  }
  v17 = operator new[]((unsigned int)Size);
  memset_0(v17, 0, (unsigned int)Size);
  Caps = RIMGetDevicePreparsedData(*((_QWORD *)this + 10), v14, v17, &Size);
  if ( Caps < 0 )
  {
    v19 = 277LL;
LABEL_22:
    v16 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)v19,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
            (const char *)(unsigned int)Caps);
    operator delete[](v17);
    goto LABEL_17;
  }
  memset_0(&Capabilities, 0, sizeof(Capabilities));
  Caps = HidP_GetCaps((PHIDP_PREPARSED_DATA)v17, &Capabilities);
  if ( Caps < 0 )
  {
    v19 = 283LL;
    goto LABEL_22;
  }
  v21 = HIDDeviceCollection::ConvertHIDTLCIdToInputType(
          v20,
          Capabilities.Usage,
          Capabilities.UsagePage,
          (enum InputType *)((char *)&Size + 4));
  v22 = v21;
  if ( v21 >= 0 )
  {
    v23 = Size;
    v24 = v28;
    *((_QWORD *)v28 + 6) = v17;
    *((_DWORD *)v24 + 14) = v23;
    *v7 = v27;
    v7[1] = HIDWORD(Size);
    if ( (int)RIMGetDeviceProperties(*((_QWORD *)this + 10), v30, v31) >= 0 )
    {
      v7[8] = DWORD2(v31[0]);
      *((_WORD *)v7 + 18) = WORD6(v31[0]);
      RawInputProvidersTelemetry::LogRawInputDeviceAttached(
        (unsigned int)v7[1],
        *((_WORD *)v7 + 16),
        *((_WORD *)v7 + 17),
        SWORD6(v31[0]));
    }
    *a3 = (struct DeviceInfo *)v7;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x120,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
      (const char *)(unsigned int)v21);
    operator delete[](v17);
    if ( v8 )
      operator delete(v6);
    return v22;
  }
}
