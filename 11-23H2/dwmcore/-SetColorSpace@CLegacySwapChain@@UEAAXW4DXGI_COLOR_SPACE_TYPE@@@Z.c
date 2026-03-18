/*
 * XREFs of ?SetColorSpace@CLegacySwapChain@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18029B300
 * Callers:
 *     ?SetColorSpace@CLegacySwapChain@@$4PPPPPPPM@A@EAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18011F890 (-SetColorSpace@CLegacySwapChain@@$4PPPPPPPM@A@EAAXW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?SetColorSpace@CLegacySwapChain@@$4PPPPPPPM@BKI@EAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180120FF0 (-SetColorSpace@CLegacySwapChain@@$4PPPPPPPM@BKI@EAAXW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?SetColorSpace@CLegacyStereoSwapChain@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802A00F8 (-SetColorSpace@CLegacyStereoSwapChain@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CLegacySwapChain::SetColorSpace(CLegacySwapChain *this, enum DXGI_COLOR_SPACE_TYPE a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx

  if ( *((_DWORD *)this - 37) != a2 )
  {
    v2 = *((_QWORD *)this - 38);
    *((_DWORD *)this - 37) = a2;
    if ( v2 )
    {
      v3 = v2 + 8 + *(int *)(*(_QWORD *)(v2 + 8) + 24LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
    }
  }
}
