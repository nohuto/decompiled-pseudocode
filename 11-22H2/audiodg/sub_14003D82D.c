/*
 * XREFs of sub_14003D82D @ 0x14003D82D
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

/*
 * Hex-Rays decompilation failed for sub_14003D82D @ 0x14003D82D
 * Reason: Hex-Rays returned no pseudocode for 0x14003D82D
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014003D82D: mov     esi, dword ptr [rsp+arg_80]
 * 000000014003D834: xor     ebx, ebx
 * 000000014003D836: test    esi, esi
 * 000000014003D838: jns     loc_14000775B
 * 000000014003D83E: mov     rcx, [rsp+arg_70]; this
 * 000000014003D843: mov     r9d, esi; char *
 * 000000014003D846: lea     r8, aAvcoreAudiocor; "avcore\\audiocore\\server\\audiodg\\exe"...
 * 000000014003D84D: mov     edx, 12Ch; void *
 * 000000014003D852: call    ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z; wil::details::in1diag3::Return_Hr(void *,uint,char const *,long)
 * 000000014003D857: lea     rdi, ?g_CritSecSubmixList@@3Vcritical_section@wil@@A; wil::critical_section g_CritSecSubmixList
 * 000000014003D85E: jmp     loc_14000772B
 */
