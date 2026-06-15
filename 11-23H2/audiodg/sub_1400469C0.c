/*
 * XREFs of sub_1400469C0 @ 0x1400469C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

/*
 * Hex-Rays decompilation failed for sub_1400469C0 @ 0x1400469C0
 * Reason: Hex-Rays returned no pseudocode for 0x1400469C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400469C0: mov     ebx, dword ptr [rsp+arg_48]
 * 00000001400469C4: test    ebx, ebx
 * 00000001400469C6: jns     loc_14001CDA7
 * 00000001400469CC: mov     rcx, [rsp+arg_40]; this
 * 00000001400469D1: mov     r9d, ebx; char *
 * 00000001400469D4: lea     r8, aAvcoreAudiocor_49; "avcore\\audiocore\\engine\\core\\proces"...
 * 00000001400469DB: mov     edx, 0B2Dh; void *
 * 00000001400469E0: call    ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z; wil::details::in1diag3::Return_Hr(void *,uint,char const *,long)
 * 00000001400469E5: nop
 * 00000001400469E6: mov     rcx, [rsp+arg_18]
 * 00000001400469EB: mov     rdx, [rcx]
 * 00000001400469EE: mov     rax, [rdx]
 * 00000001400469F1: mov     r10, 0E79C269A14DB6070h
 * 00000001400469FB: mov     edx, 1
 * 0000000140046A00: call    cs:__guard_xfg_dispatch_icall_fptr
 * 0000000140046A06: jmp     short loc_140046A26
 * 0000000140046A08: mov     edx, 0B16h; void *
 * 0000000140046A0D: mov     ebx, 887C0028h
 * 0000000140046A12: mov     r9d, ebx; char *
 * 0000000140046A15: lea     r8, aAvcoreAudiocor_49; "avcore\\audiocore\\engine\\core\\proces"...
 * 0000000140046A1C: mov     rcx, [rsp+arg_40]; this
 * 0000000140046A21: call    ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z; wil::details::in1diag3::Return_Hr(void *,uint,char const *,long)
 * 0000000140046A26: mov     eax, ebx
 * 0000000140046A28: jmp     loc_14001CD50
 */
