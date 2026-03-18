/*
 * XREFs of ?GetPresentCount@CLegacySwapChain@@UEBAIXZ @ 0x1800D6714
 * Callers:
 *     ?GetPresentCount@CLegacySwapChain@@$4PPPPPPPM@A@EBAIXZ @ 0x180108EF0 (-GetPresentCount@CLegacySwapChain@@$4PPPPPPPM@A@EBAIXZ.c)
 *     ?GetPresentCount@CLegacySwapChain@@$4PPPPPPPM@BI@EBAIXZ @ 0x180109EF0 (-GetPresentCount@CLegacySwapChain@@$4PPPPPPPM@BI@EBAIXZ.c)
 *     ?GetPresentCount@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAIXZ @ 0x18010A510 (-GetPresentCount@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAIXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySwapChain::GetPresentCount(CLegacySwapChain *this)
{
  __int64 v1; // rcx
  __int64 result; // rax
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this - 41);
  result = 0LL;
  v3 = 0;
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v1 + 120LL))(v1, &v3);
    return v3;
  }
  return result;
}
