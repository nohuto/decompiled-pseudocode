/*
 * XREFs of sub_14003D7ED @ 0x14003D7ED
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

/*
 * Hex-Rays decompilation failed for sub_14003D7ED @ 0x14003D7ED
 * Reason: Hex-Rays returned no pseudocode for 0x14003D7ED
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014003D7ED: mov     esi, dword ptr [rsp+arg_80]
 * 000000014003D7F4: xor     ebx, ebx
 * 000000014003D7F6: test    esi, esi
 * 000000014003D7F8: jns     loc_14000775B
 * 000000014003D7FE: mov     rcx, [rsp+arg_70]; this
 * 000000014003D803: mov     r9d, esi; char *
 * 000000014003D806: lea     r8, aAvcoreAudiocor; "avcore\\audiocore\\server\\audiodg\\exe"...
 * 000000014003D80D: mov     edx, 12Ch; void *
 * 000000014003D812: call    ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z; wil::details::in1diag3::Return_Hr(void *,uint,char const *,long)
 * 000000014003D817: lea     rdi, ?g_CritSecSubmixList@@3Vcritical_section@wil@@A; wil::critical_section g_CritSecSubmixList
 * 000000014003D81E: jmp     loc_14000772B
 */
