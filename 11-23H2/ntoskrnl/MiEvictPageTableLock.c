/*
 * XREFs of MiEvictPageTableLock @ 0x1402E54C0
 * Callers:
 *     MiDeleteNonPagedPoolPte @ 0x1402126F0 (MiDeleteNonPagedPoolPte.c)
 *     MiDeleteSystemPageTable @ 0x14021DDF0 (MiDeleteSystemPageTable.c)
 *     MiTerminateWsle @ 0x140274AE0 (MiTerminateWsle.c)
 *     MiDeleteVa @ 0x14027A850 (MiDeleteVa.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x1402377D0 (MiLockPageTableInternal.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetLeafVa @ 0x1402E5CB0 (MiGetLeafVa.c)
 *     MiGetUsedPtesHandle @ 0x1402E5D00 (MiGetUsedPtesHandle.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402E5DC0 (MiUnlockNestedPageTableWritePte.c)
 *     MiIsPoolPteInUse @ 0x1402E64D8 (MiIsPoolPteInUse.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     RtlCompareMemoryUlong @ 0x140429C30 (RtlCompareMemoryUlong.c)
 */

/*
 * Hex-Rays decompilation failed for MiEvictPageTableLock @ 0x1402E54C0
 * Reason: Hex-Rays returned no pseudocode for 0x1402E54C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402E54C0: mov     rax, rsp
 * 00000001402E54C3: mov     [rax+8], rbx
 * 00000001402E54C7: mov     [rax+10h], rbp
 * 00000001402E54CB: mov     [rax+18h], rsi
 * 00000001402E54CF: mov     [rax+20h], rdi
 * 00000001402E54D3: push    r14
 * 00000001402E54D5: sub     rsp, 20h
 * 00000001402E54D9: mov     rbx, r8
 * 00000001402E54DC: mov     r14d, r9d
 * 00000001402E54DF: xor     r8d, r8d
 * 00000001402E54E2: mov     rsi, rdx
 * 00000001402E54E5: mov     rbp, rcx
 * 00000001402E54E8: call    MiLockPageTableInternal
 * 00000001402E54ED: mov     rcx, rsi
 * 00000001402E54F0: call    MiGetLeafVa
 * 00000001402E54F5: mov     rcx, 7FFFFFFEFFFFh
 * 00000001402E54FF: cmp     rax, rcx
 * 00000001402E5502: mov     rcx, rsi
 * 00000001402E5505: ja      short loc_1402E5578
 * 00000001402E5507: shl     rcx, 19h
 * 00000001402E550B: mov     rax, 0FFFFF68000000000h
 * 00000001402E5515: mov     rax, rax
 * 00000001402E5518: shl     rax, 19h
 * 00000001402E551C: sub     rcx, rax
 * 00000001402E551F: sar     rcx, 10h
 * 00000001402E5523: shl     rcx, 19h
 * 00000001402E5527: sub     rcx, rax
 * 00000001402E552A: sar     rcx, 10h
 * 00000001402E552E: call    MiGetUsedPtesHandle
 * 00000001402E5533: mov     ecx, [rax+10h]
 * 00000001402E5536: shr     rcx, 10h
 * 00000001402E553A: test    ecx, 3FFh
 * 00000001402E5540: jnz     loc_1402E5631
 * 00000001402E5546: xor     r9d, r9d
 * 00000001402E5549: mov     r8, rbx
 * 00000001402E554C: mov     rdx, rsi
 * 00000001402E554F: mov     rcx, rbp
 * 00000001402E5552: call    MiUnlockNestedPageTableWritePte
 * 00000001402E5557: mov     eax, 1
 * 00000001402E555C: mov     rbx, [rsp+28h+arg_0]
 * 00000001402E5561: mov     rbp, [rsp+28h+arg_8]
 * 00000001402E5566: mov     rsi, [rsp+28h+arg_10]
 * 00000001402E556B: mov     rdi, [rsp+28h+arg_18]
 * 00000001402E5570: add     rsp, 20h
 * 00000001402E5574: pop     r14
 * 00000001402E5576: retn
 * 00000001402E5578: call    MI_READ_PTE_LOCK_FREE
 * 00000001402E557D: shr     rax, 0Ch
 * 00000001402E5581: mov     rcx, 0FFFFFFFFFFh
 * 00000001402E558B: and     rax, rcx
 * 00000001402E558E: lea     rax, [rax+rax*2]
 * 00000001402E5592: add     rax, rax
 * 00000001402E5595: mov     rdx, 0FFFFDE0000000018h
 * 00000001402E559F: mov     rdx, [rdx+rax*8]
 * 00000001402E55A3: mov     al, [rbp+0B8h]
 * 00000001402E55A9: and     al, 7
 * 00000001402E55AB: cmp     al, 1
 * 00000001402E55AD: jz      loc_1402E5643
 * 00000001402E55B3: mov     ecx, 1
 * 00000001402E55B8: movzx   eax, dx
 * 00000001402E55BB: cmp     rax, rcx
 * 00000001402E55BE: jnz     short loc_1402E5631
 * 00000001402E55C0: mov     rdi, rsi
 * 00000001402E55C3: mov     rax, 0FFFFF68000000000h
 * 00000001402E55CD: shl     rdi, 19h
 * 00000001402E55D1: mov     rax, rax
 * 00000001402E55D4: shl     rax, 19h
 * 00000001402E55D8: sub     rdi, rax
 * 00000001402E55DB: test    r14b, 1
 * 00000001402E55DF: jnz     short loc_1402E5615
 * 00000001402E55E1: test    r14b, 2
 * 00000001402E55E5: jz      loc_1402E5546
 * 00000001402E55EB: sar     rdi, 10h
 * 00000001402E55EF: mov     rcx, rdi
 * 00000001402E55F2: call    MI_READ_PTE_LOCK_FREE
 * 00000001402E55F7: mov     rcx, rax
 * 00000001402E55FA: call    MiIsPoolPteInUse
 * 00000001402E55FF: test    eax, eax
 * 00000001402E5601: jnz     short loc_1402E5631
 * 00000001402E5603: add     rdi, 8
 * 00000001402E5607: test    rdi, 0FFFh
 * 00000001402E560E: jnz     short loc_1402E55EF
 * 00000001402E5610: jmp     loc_1402E5546
 * 00000001402E5615: mov     rcx, rdi
 * 00000001402E5618: xor     r8d, r8d; Pattern
 * 00000001402E561B: sar     rcx, 10h; Source
 * 00000001402E561F: mov     edx, 1000h; Length
 * 00000001402E5624: call    RtlCompareMemoryUlong
 * 00000001402E5629: cmp     rax, 1000h
 * 00000001402E562F: jz      short loc_1402E55E1
 * 00000001402E5631: mov     rdx, rsi
 * 00000001402E5634: mov     rcx, rbp
 * 00000001402E5637: call    MiUnlockPageTableInternal
 * 00000001402E563C: xor     eax, eax
 * 00000001402E563E: jmp     loc_1402E555C
 * 00000001402E5643: mov     rax, 0FFFFF6FB7DBED000h
 * 00000001402E564D: cmp     rsi, rax
 * 00000001402E5650: jb      loc_1402E55B3
 * 00000001402E5656: mov     rax, 0FFFFF6FB7DBEDFFFh
 * 00000001402E5660: mov     ecx, 2
 * 00000001402E5665: cmp     rsi, rax
 * 00000001402E5668: ja      loc_1402E55B3
 * 00000001402E566E: jmp     loc_1402E55B8
 */
