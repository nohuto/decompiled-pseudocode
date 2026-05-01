/*
 * XREFs of ?AddRef@HolographicPositioner@@UEAAKXZ @ 0x180133000
 * Callers:
 *     ?AddRef@CShellSnapComponent@@W7EAAKXZ @ 0x1801F8850 (-AddRef@CShellSnapComponent@@W7EAAKXZ.c)
 *     ?AddRef@CShellSnapComponent@@WDA@EAAKXZ @ 0x1801F8870 (-AddRef@CShellSnapComponent@@WDA@EAAKXZ.c)
 *     ?AddRef@CShellSnapComponent@@WDI@EAAKXZ @ 0x1801F8890 (-AddRef@CShellSnapComponent@@WDI@EAAKXZ.c)
 *     ?AddRef@CShellSnapComponent@@WHA@EAAKXZ @ 0x1801F88B0 (-AddRef@CShellSnapComponent@@WHA@EAAKXZ.c)
 *     ?AddRef@CShellSnapComponent@@WHI@EAAKXZ @ 0x1801F88D0 (-AddRef@CShellSnapComponent@@WHI@EAAKXZ.c)
 *     ?AddRef@CShellSnapComponent@@WIA@EAAKXZ @ 0x1801F88F0 (-AddRef@CShellSnapComponent@@WIA@EAAKXZ.c)
 *     ?AddRef@CShellSnapComponent@@WII@EAAKXZ @ 0x1801F8910 (-AddRef@CShellSnapComponent@@WII@EAAKXZ.c)
 *     ?AddRef@CShellSnapComponent@@WJA@EAAKXZ @ 0x1801F8930 (-AddRef@CShellSnapComponent@@WJA@EAAKXZ.c)
 *     ?AddRef@CShellSnapComponent@@WJI@EAAKXZ @ 0x1801F8950 (-AddRef@CShellSnapComponent@@WJI@EAAKXZ.c)
 *     ?AddRef@CShellSnapComponent@@WKI@EAAKXZ @ 0x1801F8970 (-AddRef@CShellSnapComponent@@WKI@EAAKXZ.c)
 *     ?AddRef@CShellSnapComponent@@WLA@EAAKXZ @ 0x1801F8990 (-AddRef@CShellSnapComponent@@WLA@EAAKXZ.c)
 *     ?AddRef@CShellSnapComponent@@WLI@EAAKXZ @ 0x1801F89B0 (-AddRef@CShellSnapComponent@@WLI@EAAKXZ.c)
 *     ?AddRef@CShellSnapComponent@@WKA@EAAKXZ @ 0x18020ECD0 (-AddRef@CShellSnapComponent@@WKA@EAAKXZ.c)
 *     ?AddRef@CShellSnapComponent@@WMA@EAAKXZ @ 0x18020ECF0 (-AddRef@CShellSnapComponent@@WMA@EAAKXZ.c)
 *     ?AddRef@CShellSnapComponent@@WMI@EAAKXZ @ 0x18020ED10 (-AddRef@CShellSnapComponent@@WMI@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall HolographicPositioner::AddRef(HolographicPositioner *this)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *((_QWORD *)this + 27);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFF;
    v3 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 27, v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return (unsigned int)Microsoft::WRL::Details::SafeUnknownIncrementReference(
                         (Microsoft::WRL::Details *)(2 * v1 + 16),
                         (volatile int *)((unsigned __int64)v1 >> 63));
}
