/*
 * XREFs of ?Release@CSystemEffectWrapper@@UEAAKXZ @ 0x14001F970
 * Callers:
 *     ?Release@CSystemEffectWrapper@@W7EAAKXZ @ 0x140031970 (-Release@CSystemEffectWrapper@@W7EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WBA@EAAKXZ @ 0x140031990 (-Release@CSystemEffectWrapper@@WBA@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WBI@EAAKXZ @ 0x1400319B0 (-Release@CSystemEffectWrapper@@WBI@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WCA@EAAKXZ @ 0x1400319D0 (-Release@CSystemEffectWrapper@@WCA@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WCI@EAAKXZ @ 0x1400319F0 (-Release@CSystemEffectWrapper@@WCI@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WDA@EAAKXZ @ 0x140031A10 (-Release@CSystemEffectWrapper@@WDA@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WDI@EAAKXZ @ 0x140031A30 (-Release@CSystemEffectWrapper@@WDI@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WEA@EAAKXZ @ 0x140031A50 (-Release@CSystemEffectWrapper@@WEA@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WEI@EAAKXZ @ 0x140031A70 (-Release@CSystemEffectWrapper@@WEI@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WFA@EAAKXZ @ 0x140031A90 (-Release@CSystemEffectWrapper@@WFA@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WFI@EAAKXZ @ 0x140031AB0 (-Release@CSystemEffectWrapper@@WFI@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WGA@EAAKXZ @ 0x140031AD0 (-Release@CSystemEffectWrapper@@WGA@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WGI@EAAKXZ @ 0x140031AF0 (-Release@CSystemEffectWrapper@@WGI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemEffectWrapper::Release(CSystemEffectWrapper *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 22);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  else
    return (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 16) + 16LL))((char *)this + 128);
}
