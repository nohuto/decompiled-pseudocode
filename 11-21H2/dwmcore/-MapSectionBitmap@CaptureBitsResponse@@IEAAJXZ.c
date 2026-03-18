/*
 * XREFs of ?MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x18001FB40
 * Callers:
 *     ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x18001FAD0 (-OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ.c)
 *     ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x1801B9990 (-OnPresentComplete@CaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x18005FD84 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CaptureBitsResponse::MapSectionBitmap(CaptureBitsResponse *this)
{
  void *v2; // rax
  int v3; // eax
  unsigned int v4; // ecx
  signed int v5; // ebx
  char *v6; // rcx
  signed int LastError; // eax
  unsigned int v9; // ecx
  unsigned int dwNumberOfBytesToMap; // [rsp+20h] [rbp-28h]
  struct IBitmapSource *v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = 0LL;
  SetLastError(0);
  v2 = MapViewOfFile(*((HANDLE *)this + 207), 2u, 0, 0, *((unsigned int *)this + 418));
  *((_QWORD *)this + 208) = v2;
  if ( v2 )
  {
    memset_0(v2, 0, *((unsigned int *)this + 418));
    v3 = HrCreateBitmapFromMemoryEx(
           *((_DWORD *)this + 409),
           *((_DWORD *)this + 410),
           (CaptureBitsResponse *)((char *)this + 1644),
           *((_DWORD *)this + 419),
           *((_DWORD *)this + 418),
           *((unsigned __int8 **)this + 208),
           0LL,
           &v11);
    v5 = v3;
    if ( v3 < 0 )
    {
      dwNumberOfBytesToMap = 269;
    }
    else
    {
      wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((char *)this + 1680);
      v6 = (char *)v11 + *(int *)(*((_QWORD *)v11 + 1) + 4LL) + 8;
      v3 = (**(__int64 (__fastcall ***)(char *, GUID *, char *))v6)(
             v6,
             &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
             (char *)this + 1680);
      v5 = v3;
      if ( v3 >= 0 )
        goto LABEL_4;
      dwNumberOfBytesToMap = 272;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, dwNumberOfBytesToMap, 0LL);
    goto LABEL_4;
  }
  LastError = GetLastError();
  v5 = LastError;
  if ( LastError > 0 )
    v5 = (unsigned __int16)LastError | 0x80070000;
  if ( v5 >= 0 )
    v5 = -2003304445;
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v5, 0x100u, 0LL);
LABEL_4:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v11);
  return (unsigned int)v5;
}
