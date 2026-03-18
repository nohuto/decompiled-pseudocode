/*
 * XREFs of ?GetVidPnTargetId@CLegacySwapChain@@UEBAIXZ @ 0x1800D914C
 * Callers:
 *     ?GetVidPnTargetId@CLegacySwapChain@@$4PPPPPPPM@A@EBAIXZ @ 0x180108FD0 (-GetVidPnTargetId@CLegacySwapChain@@$4PPPPPPPM@A@EBAIXZ.c)
 *     ?GetVidPnTargetId@CLegacySwapChain@@$4PPPPPPPM@BI@EBAIXZ @ 0x180109FD0 (-GetVidPnTargetId@CLegacySwapChain@@$4PPPPPPPM@BI@EBAIXZ.c)
 *     ?GetVidPnTargetId@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAIXZ @ 0x18010A5F0 (-GetVidPnTargetId@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAIXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetDXGIOutput@CDisplayManager@@QEAAJU_LUID@@IPEAPEAUIDXGIOutputDWM@@@Z @ 0x18027F930 (-GetDXGIOutput@CDisplayManager@@QEAAJU_LUID@@IPEAPEAUIDXGIOutputDWM@@@Z.c)
 */

__int64 __fastcall CLegacySwapChain::GetVidPnTargetId(CLegacySwapChain *this)
{
  __int64 result; // rax
  CDisplayManager *v3; // rcx
  struct IDXGIOutputDWM *v4[2]; // [rsp+20h] [rbp-E8h] BYREF
  _BYTE v5[12]; // [rsp+30h] [rbp-D8h] BYREF
  int v6; // [rsp+3Ch] [rbp-CCh]

  result = *((unsigned int *)this - 47);
  if ( (_DWORD)result == -1 )
  {
    v4[0] = 0LL;
    wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(v4);
    if ( CDisplayManager::GetDXGIOutput(v3, *(struct _LUID *)((char *)this - 256), *((_DWORD *)this - 48), v4) >= 0
      && (*(int (__fastcall **)(struct IDXGIOutputDWM *, _BYTE *))(*(_QWORD *)v4[0] + 32LL))(v4[0], v5) >= 0 )
    {
      *((_DWORD *)this - 47) = v6;
    }
    wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)v4);
    return *((unsigned int *)this - 47);
  }
  return result;
}
