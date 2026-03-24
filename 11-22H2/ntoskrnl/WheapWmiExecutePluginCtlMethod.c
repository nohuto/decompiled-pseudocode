/*
 * XREFs of WheapWmiExecutePluginCtlMethod @ 0x140614204
 * Callers:
 *     WheapWmiExecuteMethod @ 0x140613FD0 (WheapWmiExecuteMethod.c)
 * Callees:
 *     memmove @ 0x140435100 (memmove.c)
 */

/*
 * Hex-Rays decompilation failed for WheapWmiExecutePluginCtlMethod @ 0x140614204
 * Reason: Hex-Rays returned no pseudocode for 0x140614204
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140614204: mov     rax, rsp
 * 0000000140614207: mov     [rax+8], rbx
 * 000000014061420B: mov     [rax+10h], rbp
 * 000000014061420F: mov     [rax+18h], rsi
 * 0000000140614213: mov     [rax+20h], rdi
 * 0000000140614217: push    r12
 * 0000000140614219: push    r14
 * 000000014061421B: push    r15
 * 000000014061421D: sub     rsp, 20h
 * 0000000140614221: mov     r15, [rsp+38h+arg_20]
 * 0000000140614226: xor     edi, edi
 * 0000000140614228: mov     rsi, r8
 * 000000014061422B: mov     r14d, edx
 * 000000014061422E: and     [r15], edi
 * 0000000140614231: cmp     ecx, 1
 * 0000000140614234: jz      short loc_140614240
 * 0000000140614236: mov     ecx, 0C0000297h
 * 000000014061423B: jmp     loc_1406142DE
 * 0000000140614240: cmp     r14d, 4
 * 0000000140614244: jb      loc_1406142D9
 * 000000014061424A: test    rsi, rsi
 * 000000014061424D: jz      loc_1406142D9
 * 0000000140614253: mov     ebp, [r8]
 * 0000000140614256: cmp     ebp, 4
 * 0000000140614259: jb      short loc_1406142D9
 * 000000014061425B: mov     edi, 8
 * 0000000140614260: cmp     r14d, edi
 * 0000000140614263: jnb     short loc_14061426C
 * 0000000140614265: mov     ecx, 0C0000023h
 * 000000014061426A: jmp     short loc_1406142DE
 * 000000014061426C: mov     ecx, ebp; Size
 * 000000014061426E: call    cs:__imp_PshedAllocateMemory
 * 0000000140614275: nop     dword ptr [rax+rax+00h]
 * 000000014061427A: mov     r12, rax
 * 000000014061427D: test    rax, rax
 * 0000000140614280: jnz     short loc_140614289
 * 0000000140614282: mov     ecx, 0C000009Ah
 * 0000000140614287: jmp     short loc_1406142DE
 * 0000000140614289: lea     rbx, [rsi+4]
 * 000000014061428D: mov     r8, rbp; Size
 * 0000000140614290: mov     rdx, rbx; Src
 * 0000000140614293: mov     rcx, r12; void *
 * 0000000140614296: call    memmove
 * 000000014061429B: lea     eax, [r14-8]
 * 000000014061429F: mov     r8, rbx
 * 00000001406142A2: lea     r9, [rbx+4]
 * 00000001406142A6: mov     [rbx], eax
 * 00000001406142A8: mov     rdx, r12
 * 00000001406142AB: mov     ecx, ebp
 * 00000001406142AD: call    cs:__imp_PshedDoPluginCtl
 * 00000001406142B4: nop     dword ptr [rax+rax+00h]
 * 00000001406142B9: mov     rcx, r12; Address
 * 00000001406142BC: mov     [rsi], eax
 * 00000001406142BE: call    cs:__imp_PshedFreeMemory
 * 00000001406142C5: nop     dword ptr [rax+rax+00h]
 * 00000001406142CA: mov     eax, [rbx]
 * 00000001406142CC: mov     ecx, [rsi]
 * 00000001406142CE: add     eax, edi
 * 00000001406142D0: mov     edi, eax
 * 00000001406142D2: cmp     r14d, eax
 * 00000001406142D5: jnb     short loc_1406142DE
 * 00000001406142D7: jmp     short loc_140614265
 * 00000001406142D9: mov     ecx, 0C000000Dh
 * 00000001406142DE: mov     rbx, [rsp+38h+arg_0]
 * 00000001406142E3: mov     eax, ecx
 * 00000001406142E5: mov     rbp, [rsp+38h+arg_8]
 * 00000001406142EA: mov     rsi, [rsp+38h+arg_10]
 * 00000001406142EF: mov     [r15], edi
 * 00000001406142F2: mov     rdi, [rsp+38h+arg_18]
 * 00000001406142F7: add     rsp, 20h
 * 00000001406142FB: pop     r15
 * 00000001406142FD: pop     r14
 * 00000001406142FF: pop     r12
 * 0000000140614301: retn
 */
