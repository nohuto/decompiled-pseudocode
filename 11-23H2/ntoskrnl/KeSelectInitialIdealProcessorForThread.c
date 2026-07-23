/*
 * XREFs of KeSelectInitialIdealProcessorForThread @ 0x14020380C
 * Callers:
 *     KeStartThread @ 0x1402BE368 (KeStartThread.c)
 *     PspAllocateThread @ 0x140740BC0 (PspAllocateThread.c)
 * Callees:
 *     KeSelectIdealProcessor @ 0x14020385C (KeSelectIdealProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KeSelectInitialIdealProcessorForThread @ 0x14020380C
 * Reason: Hex-Rays returned no pseudocode for 0x14020380C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014020380C: sub     rsp, 28h
 * 0000000140203810: movzx   eax, word ptr [rdx+8]
 * 0000000140203814: mov     r10, rdx
 * 0000000140203817: cmp     ax, [rcx+0A10h]
 * 000000014020381E: jnb     short loc_140203851
 * 0000000140203820: mov     r8, [rcx+rax*8+0A18h]
 * 0000000140203828: add     rcx, 284h
 * 000000014020382F: mov     [rsp+28h+arg_0], r8
 * 0000000140203834: mov     r9d, 1
 * 000000014020383A: lea     r8, [rsp+28h+arg_0]
 * 000000014020383F: lea     rdx, [rcx+rax*2]
 * 0000000140203843: mov     rcx, r10
 * 0000000140203846: call    KeSelectIdealProcessor
 * 000000014020384B: add     rsp, 28h
 * 000000014020384F: retn
 * 0000000140203851: xor     r8d, r8d
 * 0000000140203854: jmp     short loc_140203828
 */
