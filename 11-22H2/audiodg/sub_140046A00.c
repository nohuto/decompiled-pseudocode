/*
 * XREFs of sub_140046A00 @ 0x140046A00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140046A00 @ 0x140046A00
 * Reason: Hex-Rays returned no pseudocode for 0x140046A00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140046A00: mov     ebx, dword ptr [rsp+arg_48]
 * 0000000140046A04: test    ebx, ebx
 * 0000000140046A06: jns     loc_14001CDA7
 * 0000000140046A0C: mov     rcx, [rsp+arg_40]; this
 * 0000000140046A11: mov     r9d, ebx; char *
 * 0000000140046A14: lea     r8, aAvcoreAudiocor_49; "avcore\\audiocore\\engine\\core\\proces"...
 * 0000000140046A1B: mov     edx, 0B2Dh; void *
 * 0000000140046A20: call    ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z; wil::details::in1diag3::Return_Hr(void *,uint,char const *,long)
 * 0000000140046A25: nop
 * 0000000140046A26: mov     rcx, [rsp+arg_18]
 * 0000000140046A2B: mov     rdx, [rcx]
 * 0000000140046A2E: mov     rax, [rdx]
 * 0000000140046A31: mov     r10, 0E79C269A14DB6070h
 * 0000000140046A3B: mov     edx, 1
 * 0000000140046A40: call    cs:__guard_xfg_dispatch_icall_fptr
 * 0000000140046A46: jmp     short loc_140046A66
 * 0000000140046A48: mov     edx, 0B16h; void *
 * 0000000140046A4D: mov     ebx, 887C0028h
 * 0000000140046A52: mov     r9d, ebx; char *
 * 0000000140046A55: lea     r8, aAvcoreAudiocor_49; "avcore\\audiocore\\engine\\core\\proces"...
 * 0000000140046A5C: mov     rcx, [rsp+arg_40]; this
 * 0000000140046A61: call    ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z; wil::details::in1diag3::Return_Hr(void *,uint,char const *,long)
 * 0000000140046A66: mov     eax, ebx
 * 0000000140046A68: jmp     loc_14001CD50
 */
