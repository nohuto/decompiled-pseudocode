/*
 * XREFs of ?Release@CSystemEffectWrapper@@UEAAKXZ @ 0x140023940
 * Callers:
 *     ?Release@CSystemEffectWrapper@@W7EAAKXZ @ 0x140034250 (-Release@CSystemEffectWrapper@@W7EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WBA@EAAKXZ @ 0x140034270 (-Release@CSystemEffectWrapper@@WBA@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WBI@EAAKXZ @ 0x140034290 (-Release@CSystemEffectWrapper@@WBI@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WCA@EAAKXZ @ 0x1400342B0 (-Release@CSystemEffectWrapper@@WCA@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WCI@EAAKXZ @ 0x1400342D0 (-Release@CSystemEffectWrapper@@WCI@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WDA@EAAKXZ @ 0x1400342F0 (-Release@CSystemEffectWrapper@@WDA@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WDI@EAAKXZ @ 0x140034310 (-Release@CSystemEffectWrapper@@WDI@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WEA@EAAKXZ @ 0x140034330 (-Release@CSystemEffectWrapper@@WEA@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WEI@EAAKXZ @ 0x140034350 (-Release@CSystemEffectWrapper@@WEI@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WFA@EAAKXZ @ 0x140034370 (-Release@CSystemEffectWrapper@@WFA@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WFI@EAAKXZ @ 0x140034390 (-Release@CSystemEffectWrapper@@WFI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemEffectWrapper::Release(CSystemEffectWrapper *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 18);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  else
    return (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 1) + 16LL))((char *)this - 8);
}
