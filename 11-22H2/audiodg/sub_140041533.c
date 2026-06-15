/*
 * XREFs of sub_140041533 @ 0x140041533
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140041533 @ 0x140041533
 * Reason: Hex-Rays returned no pseudocode for 0x140041533
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140041533: mov     edi, dword ptr [rsp+arg_C0]
 * 000000014004153A: xor     ebx, ebx
 * 000000014004153C: test    edi, edi
 * 000000014004153E: jns     loc_140012117
 * 0000000140041544: mov     rcx, [rsp+arg_B0]; this
 * 000000014004154C: mov     r9d, edi; char *
 * 000000014004154F: lea     r8, aAvcoreAudiocor_35; "avcore\\audiocore\\server\\audiodg\\exe"...
 * 0000000140041556: mov     edx, 13Fh; void *
 * 000000014004155B: call    ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z; wil::details::in1diag3::Return_Hr(void *,uint,char const *,long)
 * 0000000140041560: nop
 * 0000000140041561: mov     rcx, [rsp+lpCriticalSection]; lpCriticalSection
 * 0000000140041566: test    rcx, rcx
 * 0000000140041569: jz      short loc_140041578
 * 000000014004156B: call    cs:__imp_LeaveCriticalSection
 * 0000000140041572: nop     dword ptr [rax+rax+00h]
 * 0000000140041577: nop
 * 0000000140041578: mov     rcx, [rsp+arg_58]
 * 000000014004157D: jmp     loc_1400414C5
 */
