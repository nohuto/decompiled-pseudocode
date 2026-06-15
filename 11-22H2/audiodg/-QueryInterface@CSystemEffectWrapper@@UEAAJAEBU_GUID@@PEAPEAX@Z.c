/*
 * XREFs of ?QueryInterface@CSystemEffectWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001F7B0
 * Callers:
 *     ?QueryInterface@CSystemEffectWrapper@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140031630 (-QueryInterface@CSystemEffectWrapper@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140031650 (-QueryInterface@CSystemEffectWrapper@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140031670 (-QueryInterface@CSystemEffectWrapper@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140031690 (-QueryInterface@CSystemEffectWrapper@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400316B0 (-QueryInterface@CSystemEffectWrapper@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400316D0 (-QueryInterface@CSystemEffectWrapper@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400316F0 (-QueryInterface@CSystemEffectWrapper@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140031710 (-QueryInterface@CSystemEffectWrapper@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140031730 (-QueryInterface@CSystemEffectWrapper@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140031750 (-QueryInterface@CSystemEffectWrapper@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140031770 (-QueryInterface@CSystemEffectWrapper@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140031790 (-QueryInterface@CSystemEffectWrapper@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400317B0 (-QueryInterface@CSystemEffectWrapper@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemEffectWrapper::QueryInterface(CSystemEffectWrapper *this, const struct _GUID *a2, void **a3)
{
  __int64 (__fastcall ***v4)(_QWORD, const struct _GUID *, void **); // rcx

  v4 = (__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **))*((_QWORD *)this + 22);
  if ( v4 )
    return (**v4)(v4, a2, a3);
  else
    return (**((__int64 (__fastcall ***)(char *, const struct _GUID *, void **))this + 16))((char *)this + 128, a2, a3);
}
