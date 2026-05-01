/*
 * XREFs of ?Release@HolographicPositioner@@UEAAKXZ @ 0x18016DF50
 * Callers:
 *     ?Release@HolographicPositioner@@W7EAAKXZ @ 0x18029C630 (-Release@HolographicPositioner@@W7EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WDA@EAAKXZ @ 0x18029C650 (-Release@HolographicPositioner@@WDA@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WDI@EAAKXZ @ 0x18029C670 (-Release@HolographicPositioner@@WDI@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WHA@EAAKXZ @ 0x18029C690 (-Release@HolographicPositioner@@WHA@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WHI@EAAKXZ @ 0x18029C6B0 (-Release@HolographicPositioner@@WHI@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WIA@EAAKXZ @ 0x18029C6D0 (-Release@HolographicPositioner@@WIA@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WII@EAAKXZ @ 0x18029C6F0 (-Release@HolographicPositioner@@WII@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WJA@EAAKXZ @ 0x18029C710 (-Release@HolographicPositioner@@WJA@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WJI@EAAKXZ @ 0x18029C730 (-Release@HolographicPositioner@@WJI@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WKI@EAAKXZ @ 0x18029C750 (-Release@HolographicPositioner@@WKI@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WLA@EAAKXZ @ 0x18029C770 (-Release@HolographicPositioner@@WLA@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801422FC (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall HolographicPositioner::Release(HolographicPositioner *this)
{
  signed __int64 v1; // rax
  HolographicPositioner *v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rtt

  v1 = *((_QWORD *)this + 26);
  v2 = this;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 26, v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_5;
  }
  v3 = Microsoft::WRL::Details::SafeUnknownDecrementReference(
         (Microsoft::WRL::Details *)(2 * v1 + 16),
         (volatile int *)((unsigned __int64)v1 >> 63));
LABEL_5:
  if ( !v3 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v2 + 6) + 64LL))((__int64)v2 + 48, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v3;
}
