/*
 * XREFs of ?OpenInterface@PnpDevice@@QEAAJKK@Z @ 0x1800F9C34
 * Callers:
 *     ?OpenInterface@PnpDevice@@QEAAJXZ @ 0x1800F9D6C (-OpenInterface@PnpDevice@@QEAAJXZ.c)
 *     ?Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800FC580 (-Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DLSDR@@@details@wil@@QEAA_NXZ @ 0x1800638EC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DLSDR@@@details@wil@@QEAA_NXZ.c)
 *     ?CreateFileHandle@PnpDevice@@AEAAJKK@Z @ 0x1800639A0 (-CreateFileHandle@PnpDevice@@AEAAJKK@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800A7C6C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall PnpDevice::OpenInterface(PnpDevice *this, DWORD dwDesiredAccess, DWORD dwShareMode)
{
  int FileHandle; // eax
  unsigned int v7; // edi
  const WCHAR *StringRawBuffer; // rax
  const char *v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((_DWORD *)this + 31) == 2 && *((_QWORD *)this + 4) )
  {
    if ( *((_QWORD *)this + 5) != -1LL )
      return 0LL;
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_DLSDR>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_DLSDR>::GetImpl'::`2'::impl) )
    {
      FileHandle = PnpDevice::CreateFileHandle(this, dwDesiredAccess, dwShareMode);
      v7 = FileHandle;
      if ( FileHandle < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x195,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp",
          (const char *)(unsigned int)FileHandle);
        return v7;
      }
      *((_DWORD *)this + 33) = dwDesiredAccess;
      *((_DWORD *)this + 34) = dwShareMode;
      return 0LL;
    }
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 4), 0LL);
    _InterlockedExchange64(
      (volatile __int64 *)this + 5,
      (__int64)CreateFileW(StringRawBuffer, dwDesiredAccess, dwShareMode, 0LL, 3u, 0x60000000u, 0LL));
    if ( *((_QWORD *)this + 5) != -1LL )
      return 0LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x1A5,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp",
             v10);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
}
