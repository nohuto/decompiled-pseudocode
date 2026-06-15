/*
 * XREFs of ?QueryInterface@CSystemEffectWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400238E0
 * Callers:
 *     ?QueryInterface@CSystemEffectWrapper@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400340F0 (-QueryInterface@CSystemEffectWrapper@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140034110 (-QueryInterface@CSystemEffectWrapper@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140034130 (-QueryInterface@CSystemEffectWrapper@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140034150 (-QueryInterface@CSystemEffectWrapper@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140034170 (-QueryInterface@CSystemEffectWrapper@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140034190 (-QueryInterface@CSystemEffectWrapper@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400341B0 (-QueryInterface@CSystemEffectWrapper@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400341D0 (-QueryInterface@CSystemEffectWrapper@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400341F0 (-QueryInterface@CSystemEffectWrapper@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140034210 (-QueryInterface@CSystemEffectWrapper@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140034230 (-QueryInterface@CSystemEffectWrapper@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemEffectWrapper::QueryInterface(CSystemEffectWrapper *this, const struct _GUID *a2, void **a3)
{
  __int64 (__fastcall ***v4)(_QWORD, const struct _GUID *, void **); // rcx

  v4 = (__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **))*((_QWORD *)this + 18);
  if ( v4 )
    return (**v4)(v4, a2, a3);
  else
    return (**((__int64 (__fastcall ***)(char *, const struct _GUID *, void **))this - 1))((char *)this - 8, a2, a3);
}
