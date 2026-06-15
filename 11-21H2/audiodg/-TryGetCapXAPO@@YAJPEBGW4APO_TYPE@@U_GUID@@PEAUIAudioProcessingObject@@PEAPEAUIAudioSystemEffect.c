/*
 * XREFs of ?TryGetCapXAPO@@YAJPEBGW4APO_TYPE@@U_GUID@@PEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects3@@@Z @ 0x14002C774
 * Callers:
 *     ?IsCapXAPO@@YAJPEBGW4APO_TYPE@@U_GUID@@PEA_N@Z @ 0x14002C6C0 (-IsCapXAPO@@YAJPEBGW4APO_TYPE@@U_GUID@@PEA_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x14006CF68 (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 */

__int64 __fastcall TryGetCapXAPO(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int (__fastcall ***a4)(_QWORD, GUID *, __int64),
        __int64 a5)
{
  if ( (**a4)(a4, &GUID_c58b31cd_fc6a_4255_bc1f_ad29bb0a4a17, a5) >= 0 )
    return 0LL;
  else
    return 0LL;
}
