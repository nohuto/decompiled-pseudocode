/*
 * XREFs of MiEvictPageTableLock @ 0x1402E5230
 * Callers:
 *     MiDeleteNonPagedPoolPte @ 0x140212710 (MiDeleteNonPagedPoolPte.c)
 *     MiDeleteSystemPageTable @ 0x14021DE10 (MiDeleteSystemPageTable.c)
 *     MiTerminateWsle @ 0x140274730 (MiTerminateWsle.c)
 *     MiDeleteVa @ 0x14027A4A0 (MiDeleteVa.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x1402376E0 (MiLockPageTableInternal.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetLeafVa @ 0x1402E5A20 (MiGetLeafVa.c)
 *     MiGetUsedPtesHandle @ 0x1402E5A70 (MiGetUsedPtesHandle.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402E5B30 (MiUnlockNestedPageTableWritePte.c)
 *     MiIsPoolPteInUse @ 0x1402E6248 (MiIsPoolPteInUse.c)
 *     MiUnlockPageTableInternal @ 0x1403193E0 (MiUnlockPageTableInternal.c)
 *     RtlCompareMemoryUlong @ 0x1404291E0 (RtlCompareMemoryUlong.c)
 */

/*
 * Hex-Rays decompilation failed for MiEvictPageTableLock @ 0x1402E5230
 * Reason: Hex-Rays returned no pseudocode for 0x1402E5230
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402E5230: mov     rax, rsp
 * 00000001402E5233: mov     [rax+8], rbx
 * 00000001402E5237: mov     [rax+10h], rbp
 * 00000001402E523B: mov     [rax+18h], rsi
 * 00000001402E523F: mov     [rax+20h], rdi
 * 00000001402E5243: push    r14
 * 00000001402E5245: sub     rsp, 20h
 * 00000001402E5249: mov     rbx, r8
 * 00000001402E524C: mov     r14d, r9d
 * 00000001402E524F: xor     r8d, r8d
 * 00000001402E5252: mov     rsi, rdx
 * 00000001402E5255: mov     rbp, rcx
 * 00000001402E5258: call    MiLockPageTableInternal
 * 00000001402E525D: mov     rcx, rsi
 * 00000001402E5260: call    MiGetLeafVa
 * 00000001402E5265: mov     rcx, 7FFFFFFEFFFFh
 * 00000001402E526F: cmp     rax, rcx
 * 00000001402E5272: mov     rcx, rsi
 * 00000001402E5275: ja      short loc_1402E52E8
 * 00000001402E5277: shl     rcx, 19h
 * 00000001402E527B: mov     rax, 0FFFFF68000000000h
 * 00000001402E5285: mov     rax, rax
 * 00000001402E5288: shl     rax, 19h
 * 00000001402E528C: sub     rcx, rax
 * 00000001402E528F: sar     rcx, 10h
 * 00000001402E5293: shl     rcx, 19h
 * 00000001402E5297: sub     rcx, rax
 * 00000001402E529A: sar     rcx, 10h
 * 00000001402E529E: call    MiGetUsedPtesHandle
 * 00000001402E52A3: mov     ecx, [rax+10h]
 * 00000001402E52A6: shr     rcx, 10h
 * 00000001402E52AA: test    ecx, 3FFh
 * 00000001402E52B0: jnz     loc_1402E53A1
 * 00000001402E52B6: xor     r9d, r9d
 * 00000001402E52B9: mov     r8, rbx
 * 00000001402E52BC: mov     rdx, rsi
 * 00000001402E52BF: mov     rcx, rbp
 * 00000001402E52C2: call    MiUnlockNestedPageTableWritePte
 * 00000001402E52C7: mov     eax, 1
 * 00000001402E52CC: mov     rbx, [rsp+28h+arg_0]
 * 00000001402E52D1: mov     rbp, [rsp+28h+arg_8]
 * 00000001402E52D6: mov     rsi, [rsp+28h+arg_10]
 * 00000001402E52DB: mov     rdi, [rsp+28h+arg_18]
 * 00000001402E52E0: add     rsp, 20h
 * 00000001402E52E4: pop     r14
 * 00000001402E52E6: retn
 * 00000001402E52E8: call    MI_READ_PTE_LOCK_FREE
 * 00000001402E52ED: shr     rax, 0Ch
 * 00000001402E52F1: mov     rcx, 0FFFFFFFFFFh
 * 00000001402E52FB: and     rax, rcx
 * 00000001402E52FE: lea     rax, [rax+rax*2]
 * 00000001402E5302: add     rax, rax
 * 00000001402E5305: mov     rdx, 0FFFFDE0000000018h
 * 00000001402E530F: mov     rdx, [rdx+rax*8]
 * 00000001402E5313: mov     al, [rbp+0B8h]
 * 00000001402E5319: and     al, 7
 * 00000001402E531B: cmp     al, 1
 * 00000001402E531D: jz      loc_1402E53B3
 * 00000001402E5323: mov     ecx, 1
 * 00000001402E5328: movzx   eax, dx
 * 00000001402E532B: cmp     rax, rcx
 * 00000001402E532E: jnz     short loc_1402E53A1
 * 00000001402E5330: mov     rdi, rsi
 * 00000001402E5333: mov     rax, 0FFFFF68000000000h
 * 00000001402E533D: shl     rdi, 19h
 * 00000001402E5341: mov     rax, rax
 * 00000001402E5344: shl     rax, 19h
 * 00000001402E5348: sub     rdi, rax
 * 00000001402E534B: test    r14b, 1
 * 00000001402E534F: jnz     short loc_1402E5385
 * 00000001402E5351: test    r14b, 2
 * 00000001402E5355: jz      loc_1402E52B6
 * 00000001402E535B: sar     rdi, 10h
 * 00000001402E535F: mov     rcx, rdi
 * 00000001402E5362: call    MI_READ_PTE_LOCK_FREE
 * 00000001402E5367: mov     rcx, rax
 * 00000001402E536A: call    MiIsPoolPteInUse
 * 00000001402E536F: test    eax, eax
 * 00000001402E5371: jnz     short loc_1402E53A1
 * 00000001402E5373: add     rdi, 8
 * 00000001402E5377: test    rdi, 0FFFh
 * 00000001402E537E: jnz     short loc_1402E535F
 * 00000001402E5380: jmp     loc_1402E52B6
 * 00000001402E5385: mov     rcx, rdi
 * 00000001402E5388: xor     r8d, r8d; Pattern
 * 00000001402E538B: sar     rcx, 10h; Source
 * 00000001402E538F: mov     edx, 1000h; Length
 * 00000001402E5394: call    RtlCompareMemoryUlong
 * 00000001402E5399: cmp     rax, 1000h
 * 00000001402E539F: jz      short loc_1402E5351
 * 00000001402E53A1: mov     rdx, rsi
 * 00000001402E53A4: mov     rcx, rbp
 * 00000001402E53A7: call    MiUnlockPageTableInternal
 * 00000001402E53AC: xor     eax, eax
 * 00000001402E53AE: jmp     loc_1402E52CC
 * 00000001402E53B3: mov     rax, 0FFFFF6FB7DBED000h
 * 00000001402E53BD: cmp     rsi, rax
 * 00000001402E53C0: jb      loc_1402E5323
 * 00000001402E53C6: mov     rax, 0FFFFF6FB7DBEDFFFh
 * 00000001402E53D0: mov     ecx, 2
 * 00000001402E53D5: cmp     rsi, rax
 * 00000001402E53D8: ja      loc_1402E5323
 * 00000001402E53DE: jmp     loc_1402E5328
 */
