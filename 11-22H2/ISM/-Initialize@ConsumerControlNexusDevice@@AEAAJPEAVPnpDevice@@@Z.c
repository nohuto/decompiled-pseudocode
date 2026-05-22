/*
 * XREFs of ?Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800FC580
 * Callers:
 *     ?TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUIMessageSession@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x1800FD3D0 (-TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058434 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058470 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800A7C6C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800DCA78 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@VPnpDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVPnpDevice@@@Z @ 0x1800F9068 (--4-$ComPtr@VPnpDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVPnpDevice@@@Z.c)
 *     ?GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x1800F9BEC (-GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?OpenInterface@PnpDevice@@QEAAJKK@Z @ 0x1800F9C34 (-OpenInterface@PnpDevice@@QEAAJKK@Z.c)
 *     ?OutputIoctl@PnpDevice@@QEAAJK_KPEAXPEA_K@Z @ 0x1800F9DE0 (-OutputIoctl@PnpDevice@@QEAAJK_KPEAXPEA_K@Z.c)
 *     ?QueueInputBuffers@ConsumerControlNexusDevice@@AEAAJXZ @ 0x1800FD288 (-QueueInputBuffers@ConsumerControlNexusDevice@@AEAAJXZ.c)
 */

__int64 __fastcall ConsumerControlNexusDevice::Initialize(ConsumerControlNexusDevice *this, struct PnpDevice *a2)
{
  PnpDevice **v2; // r14
  PnpDevice *v4; // rdi
  unsigned int v5; // esi
  int InterfacePath; // ebx
  __int64 v7; // rdx
  __int64 result; // rax
  PHIDP_PREPARSED_DATA *v9; // rbx
  const char *v10; // r9
  PHIDP_PREPARSED_DATA v11; // rax
  struct _HIDP_CAPS *v12; // rax
  unsigned __int16 *p_Usage; // r15
  NTSTATUS Caps; // eax
  unsigned __int64 v15; // rcx
  size_t v16; // rax
  struct _HIDP_BUTTON_CAPS *ButtonCaps; // rdi
  NTSTATUS SpecificButtonCaps; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned __int64 v21; // rax
  __int64 v22; // rbx
  char *v23; // rax
  ConsumerControlNexusDevice **v24; // rdx
  int v25; // eax
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  USHORT ButtonCapsLength; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v28; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int64 v29; // [rsp+98h] [rbp+20h] BYREF

  v2 = (PnpDevice **)((char *)this + 16);
  Microsoft::WRL::ComPtr<PnpDevice>::operator=((RefCountedObject **)this + 2, (volatile signed __int32 *)a2);
  v4 = *v2;
  WindowsDeleteString(*((HSTRING *)this + 3));
  v5 = 0;
  *((_QWORD *)this + 3) = 0LL;
  InterfacePath = PnpDevice::GetInterfacePath((HSTRING *)v4, (HSTRING *)this + 3);
  if ( InterfacePath < 0 )
  {
    v7 = 72LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)(unsigned int)InterfacePath);
    return (unsigned int)InterfacePath;
  }
  InterfacePath = PnpDevice::OpenInterface(*v2, 0x80000000, 3u);
  if ( InterfacePath < 0 )
  {
    v7 = 74LL;
    goto LABEL_3;
  }
  v9 = (PHIDP_PREPARSED_DATA *)((char *)this + 32);
  if ( !HidD_GetPreparsedData(*((HANDLE *)*v2 + 5), (PHIDP_PREPARSED_DATA *)this + 4) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x4E,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
             v10);
  v11 = *v9;
  if ( *((_WORD *)*v9 + 5) != 12 )
  {
    InterfacePath = -2147418113;
    v7 = 81LL;
    goto LABEL_3;
  }
  if ( *((_WORD *)v11 + 4) != 1 )
  {
    InterfacePath = -2147418113;
    v7 = 82LL;
    goto LABEL_3;
  }
  *((_QWORD *)this + 12) = *((unsigned __int16 *)v11 + 11);
  v12 = (struct _HIDP_CAPS *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  p_Usage = &v12->Usage;
  if ( !v12 )
  {
    InterfacePath = -2147024882;
    v7 = 87LL;
    goto LABEL_3;
  }
  Caps = HidP_GetCaps(*v9, v12);
  if ( Caps < 0 )
  {
    InterfacePath = wil::details::in1diag3::Return_NtStatus(
                      retaddr,
                      (void *)0x58,
                      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercont"
                               "rolnexusdevice.cpp",
                      (const char *)(unsigned int)Caps);
LABEL_25:
    operator delete(p_Usage);
    return (unsigned int)InterfacePath;
  }
  v15 = p_Usage[23];
  *((_WORD *)this + 20) = v15;
  ButtonCapsLength = v15;
  v16 = 72 * v15;
  if ( !is_mul_ok(v15, 0x48uLL) )
    v16 = -1LL;
  ButtonCaps = (struct _HIDP_BUTTON_CAPS *)operator new[](v16, (const struct std::nothrow_t *)&std::nothrow);
  if ( !ButtonCaps )
  {
    InterfacePath = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x61,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_25;
  }
  SpecificButtonCaps = HidP_GetSpecificButtonCaps(HidP_Input, 0xCu, 0, 0xD0u, ButtonCaps, &ButtonCapsLength, *v9);
  if ( SpecificButtonCaps < 0 )
  {
    InterfacePath = wil::details::in1diag3::Return_NtStatus(
                      retaddr,
                      (void *)0x69,
                      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercont"
                               "rolnexusdevice.cpp",
                      (const char *)(unsigned int)SpecificButtonCaps);
    operator delete[](ButtonCaps);
    goto LABEL_25;
  }
  if ( !ButtonCapsLength )
  {
    operator delete[](ButtonCaps);
    InterfacePath = -2147418113;
    goto LABEL_25;
  }
  operator delete[](ButtonCaps);
  operator delete(p_Usage);
  result = PnpDevice::OutputIoctl(*v2, v19, v20, &v28, &v29);
  if ( (int)result >= 0 )
  {
    if ( v29 != 4 )
    {
      InterfacePath = -2147418113;
      v7 = 123LL;
      goto LABEL_3;
    }
    v21 = v28;
    if ( !v28 )
    {
      InterfacePath = -2147418113;
      v7 = v28 + 124;
      goto LABEL_3;
    }
    v22 = *((_QWORD *)this + 12);
    if ( v28 > 0x40 )
      v21 = 64LL;
    v28 = v21;
    while ( *((_QWORD *)this + 8) < v21 )
    {
      v23 = (char *)operator new[](v22 + 87, (const struct std::nothrow_t *)&std::nothrow);
      if ( !v23 )
      {
        InterfacePath = -2147024882;
        v7 = 141LL;
        goto LABEL_3;
      }
      *((_QWORD *)v23 + 2) = this;
      *(_OWORD *)(v23 + 24) = 0LL;
      *(_OWORD *)(v23 + 40) = 0LL;
      *((_DWORD *)v23 + 14) = 0;
      *((_QWORD *)v23 + 8) = 0LL;
      *((_QWORD *)v23 + 9) = *((_QWORD *)this + 12);
      v24 = (ConsumerControlNexusDevice **)*((_QWORD *)this + 7);
      if ( *v24 != (ConsumerControlNexusDevice *)((char *)this + 48) )
        __fastfail(3u);
      *(_QWORD *)v23 = (char *)this + 48;
      *((_QWORD *)v23 + 1) = v24;
      *v24 = (ConsumerControlNexusDevice *)v23;
      ++*((_QWORD *)this + 8);
      *((_QWORD *)this + 7) = v23;
      v21 = v28;
    }
    v25 = ConsumerControlNexusDevice::QueueInputBuffers(this);
    if ( v25 < 0 )
      return (unsigned int)v25;
    return v5;
  }
  return result;
}
