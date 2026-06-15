/*
 * XREFs of sub_14003DB27 @ 0x14003DB27
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

/*
 * Hex-Rays decompilation failed for sub_14003DB27 @ 0x14003DB27
 * Reason: Hex-Rays returned no pseudocode for 0x14003DB27
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014003DB27: mov     ebx, dword ptr [rsp+arg_68]
 * 000000014003DB2B: test    ebx, ebx
 * 000000014003DB2D: jns     loc_140007BEA
 * 000000014003DB33: mov     rcx, [rsp+arg_60]; this
 * 000000014003DB38: mov     r9d, ebx; char *
 * 000000014003DB3B: lea     r8, aAvcoreAudiocor; "avcore\\audiocore\\server\\audiodg\\exe"...
 * 000000014003DB42: mov     edx, 553h; void *
 * 000000014003DB47: call    ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z; wil::details::in1diag3::Return_Hr(void *,uint,char const *,long)
 * 000000014003DB4C: nop
 * 000000014003DB4D: mov     rcx, [rsp+lpCriticalSection]; lpCriticalSection
 * 000000014003DB55: test    rcx, rcx
 * 000000014003DB58: jz      short loc_14003DB67
 * 000000014003DB5A: call    cs:__imp_LeaveCriticalSection
 * 000000014003DB61: nop     dword ptr [rax+rax+00h]
 * 000000014003DB66: nop
 * 000000014003DB67: mov     edx, 10h
 * 000000014003DB6C: mov     rcx, [rsp+Block]; Block
 * 000000014003DB74: call    ??3@YAXPEAX_K@Z; operator delete(void *,unsigned __int64)
 * 000000014003DB79: nop
 * 000000014003DB7A: mov     rcx, [rsp+arg_70]; lpCriticalSection
 * 000000014003DB7F: test    rcx, rcx
 * 000000014003DB82: jz      short loc_14003DB90
 * 000000014003DB84: call    cs:__imp_LeaveCriticalSection
 * 000000014003DB8B: nop     dword ptr [rax+rax+00h]
 * 000000014003DB90: mov     eax, ebx
 * 000000014003DB92: jmp     loc_140007C2F
 */
