/*
 * XREFs of ?SetColorSpace@CLegacyStereoSwapChain@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180290DF8
 * Callers:
 *     ?SetColorSpace@CLegacyStereoSwapChain@@$4PPPPPPPM@A@EAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18010A1B0 (-SetColorSpace@CLegacyStereoSwapChain@@$4PPPPPPPM@A@EAAXW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetColorSpace@CLegacySwapChain@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18028BA5C (-SetColorSpace@CLegacySwapChain@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

void __fastcall CLegacyStereoSwapChain::SetColorSpace(CLegacyStereoSwapChain *this, enum DXGI_COLOR_SPACE_TYPE a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  if ( *((_DWORD *)this - 71) != a2 )
  {
    v4 = *((_QWORD *)this - 10);
    if ( v4 )
    {
      v5 = *(int *)(*(_QWORD *)(v4 + 8) + 24LL) + v4 + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
    }
    CLegacySwapChain::SetColorSpace((CLegacyStereoSwapChain *)((char *)this - 24), a2);
  }
}
