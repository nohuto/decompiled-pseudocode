/*
 * XREFs of WheapWmiExecutePluginCtlMethod @ 0x140614194
 * Callers:
 *     WheapWmiExecuteMethod @ 0x140613F60 (WheapWmiExecuteMethod.c)
 * Callees:
 *     memmove @ 0x140435700 (memmove.c)
 */

/*
 * Hex-Rays decompilation failed for WheapWmiExecutePluginCtlMethod @ 0x140614194
 * Reason: Hex-Rays returned no pseudocode for 0x140614194
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140614194: mov     rax, rsp
 * 0000000140614197: mov     [rax+8], rbx
 * 000000014061419B: mov     [rax+10h], rbp
 * 000000014061419F: mov     [rax+18h], rsi
 * 00000001406141A3: mov     [rax+20h], rdi
 * 00000001406141A7: push    r12
 * 00000001406141A9: push    r14
 * 00000001406141AB: push    r15
 * 00000001406141AD: sub     rsp, 20h
 * 00000001406141B1: mov     r15, [rsp+38h+arg_20]
 * 00000001406141B6: xor     edi, edi
 * 00000001406141B8: mov     rsi, r8
 * 00000001406141BB: mov     r14d, edx
 * 00000001406141BE: and     [r15], edi
 * 00000001406141C1: cmp     ecx, 1
 * 00000001406141C4: jz      short loc_1406141D0
 * 00000001406141C6: mov     ecx, 0C0000297h
 * 00000001406141CB: jmp     loc_14061426E
 * 00000001406141D0: cmp     r14d, 4
 * 00000001406141D4: jb      loc_140614269
 * 00000001406141DA: test    rsi, rsi
 * 00000001406141DD: jz      loc_140614269
 * 00000001406141E3: mov     ebp, [r8]
 * 00000001406141E6: cmp     ebp, 4
 * 00000001406141E9: jb      short loc_140614269
 * 00000001406141EB: mov     edi, 8
 * 00000001406141F0: cmp     r14d, edi
 * 00000001406141F3: jnb     short loc_1406141FC
 * 00000001406141F5: mov     ecx, 0C0000023h
 * 00000001406141FA: jmp     short loc_14061426E
 * 00000001406141FC: mov     ecx, ebp; Size
 * 00000001406141FE: call    cs:__imp_PshedAllocateMemory
 * 0000000140614205: nop     dword ptr [rax+rax+00h]
 * 000000014061420A: mov     r12, rax
 * 000000014061420D: test    rax, rax
 * 0000000140614210: jnz     short loc_140614219
 * 0000000140614212: mov     ecx, 0C000009Ah
 * 0000000140614217: jmp     short loc_14061426E
 * 0000000140614219: lea     rbx, [rsi+4]
 * 000000014061421D: mov     r8, rbp; Size
 * 0000000140614220: mov     rdx, rbx; Src
 * 0000000140614223: mov     rcx, r12; void *
 * 0000000140614226: call    memmove
 * 000000014061422B: lea     eax, [r14-8]
 * 000000014061422F: mov     r8, rbx
 * 0000000140614232: lea     r9, [rbx+4]
 * 0000000140614236: mov     [rbx], eax
 * 0000000140614238: mov     rdx, r12
 * 000000014061423B: mov     ecx, ebp
 * 000000014061423D: call    cs:__imp_PshedDoPluginCtl
 * 0000000140614244: nop     dword ptr [rax+rax+00h]
 * 0000000140614249: mov     rcx, r12; Address
 * 000000014061424C: mov     [rsi], eax
 * 000000014061424E: call    cs:__imp_PshedFreeMemory
 * 0000000140614255: nop     dword ptr [rax+rax+00h]
 * 000000014061425A: mov     eax, [rbx]
 * 000000014061425C: mov     ecx, [rsi]
 * 000000014061425E: add     eax, edi
 * 0000000140614260: mov     edi, eax
 * 0000000140614262: cmp     r14d, eax
 * 0000000140614265: jnb     short loc_14061426E
 * 0000000140614267: jmp     short loc_1406141F5
 * 0000000140614269: mov     ecx, 0C000000Dh
 * 000000014061426E: mov     rbx, [rsp+38h+arg_0]
 * 0000000140614273: mov     eax, ecx
 * 0000000140614275: mov     rbp, [rsp+38h+arg_8]
 * 000000014061427A: mov     rsi, [rsp+38h+arg_10]
 * 000000014061427F: mov     [r15], edi
 * 0000000140614282: mov     rdi, [rsp+38h+arg_18]
 * 0000000140614287: add     rsp, 20h
 * 000000014061428B: pop     r15
 * 000000014061428D: pop     r14
 * 000000014061428F: pop     r12
 * 0000000140614291: retn
 */
