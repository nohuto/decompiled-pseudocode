/*
 * XREFs of sub_1400414F3 @ 0x1400414F3
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

/*
 * Hex-Rays decompilation failed for sub_1400414F3 @ 0x1400414F3
 * Reason: Hex-Rays returned no pseudocode for 0x1400414F3
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400414F3: mov     edi, dword ptr [rsp+arg_C0]
 * 00000001400414FA: xor     ebx, ebx
 * 00000001400414FC: test    edi, edi
 * 00000001400414FE: jns     loc_140012117
 * 0000000140041504: mov     rcx, [rsp+arg_B0]; this
 * 000000014004150C: mov     r9d, edi; char *
 * 000000014004150F: lea     r8, aAvcoreAudiocor_35; "avcore\\audiocore\\server\\audiodg\\exe"...
 * 0000000140041516: mov     edx, 13Fh; void *
 * 000000014004151B: call    ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z; wil::details::in1diag3::Return_Hr(void *,uint,char const *,long)
 * 0000000140041520: nop
 * 0000000140041521: mov     rcx, [rsp+lpCriticalSection]; lpCriticalSection
 * 0000000140041526: test    rcx, rcx
 * 0000000140041529: jz      short loc_140041538
 * 000000014004152B: call    cs:__imp_LeaveCriticalSection
 * 0000000140041532: nop     dword ptr [rax+rax+00h]
 * 0000000140041537: nop
 * 0000000140041538: mov     rcx, [rsp+arg_58]
 * 000000014004153D: jmp     loc_140041485
 */
