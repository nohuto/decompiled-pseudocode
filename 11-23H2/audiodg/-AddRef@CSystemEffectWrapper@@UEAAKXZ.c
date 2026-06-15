/*
 * XREFs of ?AddRef@CSystemEffectWrapper@@UEAAKXZ @ 0x14001F920
 * Callers:
 *     ?AddRef@CSystemEffectWrapper@@W7EAAKXZ @ 0x1400312B0 (-AddRef@CSystemEffectWrapper@@W7EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WBA@EAAKXZ @ 0x1400312D0 (-AddRef@CSystemEffectWrapper@@WBA@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WBI@EAAKXZ @ 0x1400312F0 (-AddRef@CSystemEffectWrapper@@WBI@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WCA@EAAKXZ @ 0x140031310 (-AddRef@CSystemEffectWrapper@@WCA@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WCI@EAAKXZ @ 0x140031330 (-AddRef@CSystemEffectWrapper@@WCI@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WDA@EAAKXZ @ 0x140031350 (-AddRef@CSystemEffectWrapper@@WDA@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WDI@EAAKXZ @ 0x140031370 (-AddRef@CSystemEffectWrapper@@WDI@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WEA@EAAKXZ @ 0x140031390 (-AddRef@CSystemEffectWrapper@@WEA@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WEI@EAAKXZ @ 0x1400313B0 (-AddRef@CSystemEffectWrapper@@WEI@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WFA@EAAKXZ @ 0x1400313D0 (-AddRef@CSystemEffectWrapper@@WFA@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WFI@EAAKXZ @ 0x1400313F0 (-AddRef@CSystemEffectWrapper@@WFI@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WGA@EAAKXZ @ 0x140031410 (-AddRef@CSystemEffectWrapper@@WGA@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WGI@EAAKXZ @ 0x140031430 (-AddRef@CSystemEffectWrapper@@WGI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemEffectWrapper::AddRef(CSystemEffectWrapper *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 22);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  else
    return (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 16) + 8LL))((char *)this + 128);
}
