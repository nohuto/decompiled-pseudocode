/*
 * XREFs of ?RuntimeClassInitialize@SpatialRimDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAVHIDDevice@@PEAX@Z @ 0x1800CC69C
 * Callers:
 *     ??$MakeAndInitialize@VSpatialRimDevice@SpatialInteractions@Internal@Windows@@UIHidDevice@234@AEAPEAVHIDDevice@@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIHidDevice@SpatialInteractions@Internal@Windows@@AEAPEAVHIDDevice@@AEAPEAX@Z @ 0x1800BCF34 (--$MakeAndInitialize@VSpatialRimDevice@SpatialInteractions@Internal@Windows@@UIHidDevice@234@AEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007DEDC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x1800CC26C (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 *     GetRIMDeviceInstancePath @ 0x1800CC3D8 (GetRIMDeviceInstancePath.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialRimDevice::RuntimeClassInitialize(
        Windows::Internal::SpatialInteractions::SpatialRimDevice *this,
        struct HIDDevice *a2,
        void *a3)
{
  int v3; // eax
  int HIDCapabilities; // ebx
  __int64 v8; // rdx
  __int64 v10; // rdx
  int v11; // ebx
  HANDLE CurrentProcess; // rbx
  HANDLE v13; // rax
  const char *v14; // r9
  __int64 v15; // rdx
  HANDLE v16; // rax
  void *v17; // rdi
  void *v18; // rbx
  HANDLE v19; // rax
  _OWORD v20[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v21; // [rsp+60h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct _HIDP_CAPS *v23; // [rsp+80h] [rbp+8h] BYREF

  v3 = *((_DWORD *)a2 + 10);
  v23 = 0LL;
  *((_DWORD *)this + 12) = v3;
  HIDCapabilities = HIDDevice::GetHIDCapabilities((PHIDP_PREPARSED_DATA *)a2, &v23);
  if ( HIDCapabilities < 0 )
  {
    v8 = 58LL;
    goto LABEL_3;
  }
  *(struct _HIDP_CAPS *)((char *)this + 72) = *v23;
  *((_QWORD *)this + 17) = *((_QWORD *)a2 + 6);
  v10 = *((_QWORD *)a2 + 2);
  memset(v20, 0, sizeof(v20));
  v21 = 0LL;
  LODWORD(v20[0]) = 3;
  v11 = RIMGetDeviceProperties(a3, v10, v20);
  if ( (v11 & 0xC0000000) == 0xC0000000 )
  {
    HIDCapabilities = v11 | 0x10000000;
    if ( HIDCapabilities >= 0 )
      return (unsigned int)HIDCapabilities;
    v8 = 65LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevice.cpp",
      (const char *)(unsigned int)HIDCapabilities);
    return (unsigned int)HIDCapabilities;
  }
  *((_DWORD *)this + 13) = DWORD2(v20[0]);
  *((_WORD *)this + 28) = WORD6(v20[0]);
  WindowsDeleteString(*((HSTRING *)this + 8));
  *((_QWORD *)this + 8) = 0LL;
  HIDCapabilities = GetRIMDeviceInstancePath((__int64)a3, *((_QWORD *)a2 + 2), (HSTRING *)this + 8);
  if ( HIDCapabilities < 0 )
  {
    v8 = 70LL;
    goto LABEL_3;
  }
  CurrentProcess = GetCurrentProcess();
  v13 = GetCurrentProcess();
  if ( !DuplicateHandle(v13, a3, CurrentProcess, (LPHANDLE)this + 19, 0, 0, 2u) )
  {
    v15 = 72LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v15,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevice.cpp",
             v14);
  }
  v16 = GetCurrentProcess();
  v17 = (void *)*((_QWORD *)a2 + 2);
  v18 = v16;
  v19 = GetCurrentProcess();
  if ( !DuplicateHandle(v19, v17, v18, (LPHANDLE)this + 21, 0, 0, 2u) )
  {
    v15 = 73LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v15,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevice.cpp",
             v14);
  }
  return 0LL;
}
