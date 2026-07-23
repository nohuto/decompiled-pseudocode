/*
 * XREFs of CmSiRWLockInitialize @ 0x14080E420
 * Callers:
 *     RtlHpHeapManagerInitialize @ 0x1403887E0 (RtlHpHeapManagerInitialize.c)
 *     RtlpHpHeapCreate @ 0x140388E98 (RtlpHpHeapCreate.c)
 *     ?SlotAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$03$03@@SAKPEAU1@@Z @ 0x1403A6294 (-SlotAllocate@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$03$03@@SAKPEAU1@@Z.c)
 *     CmFcManagerInitialize @ 0x140B385A8 (CmFcManagerInitialize.c)
 *     PspInitPhase0 @ 0x140B4A894 (PspInitPhase0.c)
 *     DbgkpInitializePhase0 @ 0x140B4FD94 (DbgkpInitializePhase0.c)
 *     SshInitialize @ 0x140B51B2C (SshInitialize.c)
 *     SshpAlpcInitialize @ 0x140B66D04 (SshpAlpcInitialize.c)
 *     SshpSessionManagerInitialize @ 0x140B754D4 (SshpSessionManagerInitialize.c)
 * Callees:
 *     <none>
 */

void __stdcall CmSiRWLockInitialize(PRTL_RUN_ONCE RunOnce)
{
  RunOnce->Value = 0LL;
}
