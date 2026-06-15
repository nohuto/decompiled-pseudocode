/*
 * XREFs of sub_14003DB67 @ 0x14003DB67
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

/*
 * Hex-Rays decompilation failed for sub_14003DB67 @ 0x14003DB67
 * Reason: Hex-Rays returned no pseudocode for 0x14003DB67
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014003DB67: mov     ebx, dword ptr [rsp+arg_68]
 * 000000014003DB6B: test    ebx, ebx
 * 000000014003DB6D: jns     loc_140007BEA
 * 000000014003DB73: mov     rcx, [rsp+arg_60]; this
 * 000000014003DB78: mov     r9d, ebx; char *
 * 000000014003DB7B: lea     r8, aAvcoreAudiocor; "avcore\\audiocore\\server\\audiodg\\exe"...
 * 000000014003DB82: mov     edx, 553h; void *
 * 000000014003DB87: call    ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z; wil::details::in1diag3::Return_Hr(void *,uint,char const *,long)
 * 000000014003DB8C: nop
 * 000000014003DB8D: mov     rcx, [rsp+lpCriticalSection]; lpCriticalSection
 * 000000014003DB95: test    rcx, rcx
 * 000000014003DB98: jz      short loc_14003DBA7
 * 000000014003DB9A: call    cs:__imp_LeaveCriticalSection
 * 000000014003DBA1: nop     dword ptr [rax+rax+00h]
 * 000000014003DBA6: nop
 * 000000014003DBA7: mov     edx, 10h
 * 000000014003DBAC: mov     rcx, [rsp+Block]; Block
 * 000000014003DBB4: call    ??3@YAXPEAX_K@Z; operator delete(void *,unsigned __int64)
 * 000000014003DBB9: nop
 * 000000014003DBBA: mov     rcx, [rsp+arg_70]; lpCriticalSection
 * 000000014003DBBF: test    rcx, rcx
 * 000000014003DBC2: jz      short loc_14003DBD0
 * 000000014003DBC4: call    cs:__imp_LeaveCriticalSection
 * 000000014003DBCB: nop     dword ptr [rax+rax+00h]
 * 000000014003DBD0: mov     eax, ebx
 * 000000014003DBD2: jmp     loc_140007C2F
 */
