/*
 * XREFs of WheapWmiExecutePluginCtlMethod @ 0x1406146E4
 * Callers:
 *     WheapWmiExecuteMethod @ 0x1406144B0 (WheapWmiExecuteMethod.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 */

/*
 * Hex-Rays decompilation failed for WheapWmiExecutePluginCtlMethod @ 0x1406146E4
 * Reason: Hex-Rays returned no pseudocode for 0x1406146E4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406146E4: mov     rax, rsp
 * 00000001406146E7: mov     [rax+8], rbx
 * 00000001406146EB: mov     [rax+10h], rbp
 * 00000001406146EF: mov     [rax+18h], rsi
 * 00000001406146F3: mov     [rax+20h], rdi
 * 00000001406146F7: push    r12
 * 00000001406146F9: push    r14
 * 00000001406146FB: push    r15
 * 00000001406146FD: sub     rsp, 20h
 * 0000000140614701: mov     r15, [rsp+38h+arg_20]
 * 0000000140614706: xor     edi, edi
 * 0000000140614708: mov     rsi, r8
 * 000000014061470B: mov     r14d, edx
 * 000000014061470E: and     [r15], edi
 * 0000000140614711: cmp     ecx, 1
 * 0000000140614714: jz      short loc_140614720
 * 0000000140614716: mov     ecx, 0C0000297h
 * 000000014061471B: jmp     loc_1406147BE
 * 0000000140614720: cmp     r14d, 4
 * 0000000140614724: jb      loc_1406147B9
 * 000000014061472A: test    rsi, rsi
 * 000000014061472D: jz      loc_1406147B9
 * 0000000140614733: mov     ebp, [r8]
 * 0000000140614736: cmp     ebp, 4
 * 0000000140614739: jb      short loc_1406147B9
 * 000000014061473B: mov     edi, 8
 * 0000000140614740: cmp     r14d, edi
 * 0000000140614743: jnb     short loc_14061474C
 * 0000000140614745: mov     ecx, 0C0000023h
 * 000000014061474A: jmp     short loc_1406147BE
 * 000000014061474C: mov     ecx, ebp; Size
 * 000000014061474E: call    cs:__imp_PshedAllocateMemory
 * 0000000140614755: nop     dword ptr [rax+rax+00h]
 * 000000014061475A: mov     r12, rax
 * 000000014061475D: test    rax, rax
 * 0000000140614760: jnz     short loc_140614769
 * 0000000140614762: mov     ecx, 0C000009Ah
 * 0000000140614767: jmp     short loc_1406147BE
 * 0000000140614769: lea     rbx, [rsi+4]
 * 000000014061476D: mov     r8, rbp; Size
 * 0000000140614770: mov     rdx, rbx; Src
 * 0000000140614773: mov     rcx, r12; void *
 * 0000000140614776: call    memmove
 * 000000014061477B: lea     eax, [r14-8]
 * 000000014061477F: mov     r8, rbx
 * 0000000140614782: lea     r9, [rbx+4]
 * 0000000140614786: mov     [rbx], eax
 * 0000000140614788: mov     rdx, r12
 * 000000014061478B: mov     ecx, ebp
 * 000000014061478D: call    cs:__imp_PshedDoPluginCtl
 * 0000000140614794: nop     dword ptr [rax+rax+00h]
 * 0000000140614799: mov     rcx, r12; Address
 * 000000014061479C: mov     [rsi], eax
 * 000000014061479E: call    cs:__imp_PshedFreeMemory
 * 00000001406147A5: nop     dword ptr [rax+rax+00h]
 * 00000001406147AA: mov     eax, [rbx]
 * 00000001406147AC: mov     ecx, [rsi]
 * 00000001406147AE: add     eax, edi
 * 00000001406147B0: mov     edi, eax
 * 00000001406147B2: cmp     r14d, eax
 * 00000001406147B5: jnb     short loc_1406147BE
 * 00000001406147B7: jmp     short loc_140614745
 * 00000001406147B9: mov     ecx, 0C000000Dh
 * 00000001406147BE: mov     rbx, [rsp+38h+arg_0]
 * 00000001406147C3: mov     eax, ecx
 * 00000001406147C5: mov     rbp, [rsp+38h+arg_8]
 * 00000001406147CA: mov     rsi, [rsp+38h+arg_10]
 * 00000001406147CF: mov     [r15], edi
 * 00000001406147D2: mov     rdi, [rsp+38h+arg_18]
 * 00000001406147D7: add     rsp, 20h
 * 00000001406147DB: pop     r15
 * 00000001406147DD: pop     r14
 * 00000001406147DF: pop     r12
 * 00000001406147E1: retn
 */
