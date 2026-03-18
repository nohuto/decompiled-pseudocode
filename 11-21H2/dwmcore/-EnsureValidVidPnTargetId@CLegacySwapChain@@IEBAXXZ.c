/*
 * XREFs of ?EnsureValidVidPnTargetId@CLegacySwapChain@@IEBAXXZ @ 0x18001C050
 * Callers:
 *     ?PostPresent@CLegacySwapChain@@IEAAX_N0@Z @ 0x18001BF70 (-PostPresent@CLegacySwapChain@@IEAAX_N0@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetDXGIOutput@CDisplayManager@@QEAAJU_LUID@@IPEAPEAUIDXGIOutputDWM@@@Z @ 0x18027F930 (-GetDXGIOutput@CDisplayManager@@QEAAJU_LUID@@IPEAPEAUIDXGIOutputDWM@@@Z.c)
 */

void __fastcall CLegacySwapChain::EnsureValidVidPnTargetId(struct _LUID *this)
{
  CDisplayManager *v2; // rcx
  struct IDXGIOutputDWM *v3[2]; // [rsp+20h] [rbp-E8h] BYREF
  _BYTE v4[12]; // [rsp+30h] [rbp-D8h] BYREF
  LONG v5; // [rsp+3Ch] [rbp-CCh]

  if ( this[26].HighPart == -1 )
  {
    v3[0] = 0LL;
    wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(v3);
    if ( CDisplayManager::GetDXGIOutput(v2, this[18], this[26].LowPart, v3) >= 0
      && (*(int (__fastcall **)(struct IDXGIOutputDWM *, _BYTE *))(*(_QWORD *)v3[0] + 32LL))(v3[0], v4) >= 0 )
    {
      this[26].HighPart = v5;
    }
    wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>(v3);
  }
}
