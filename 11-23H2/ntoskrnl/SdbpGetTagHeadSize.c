/*
 * XREFs of SdbpGetTagHeadSize @ 0x140742168
 * Callers:
 *     SdbpGetMappedTagData @ 0x140740B7C (SdbpGetMappedTagData.c)
 *     SdbpReadTagData @ 0x14075768C (SdbpReadTagData.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     SdbpReadMappedData @ 0x140742A7C (SdbpReadMappedData.c)
 */

/*
 * Hex-Rays decompilation failed for SdbpGetTagHeadSize @ 0x140742168
 * Reason: Hex-Rays returned no pseudocode for 0x140742168
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140742168: push    rbx
 * 000000014074216A: sub     rsp, 20h
 * 000000014074216E: xor     ebx, ebx
 * 0000000140742170: lea     r8, [rsp+28h+arg_10]
 * 0000000140742175: mov     [rsp+28h+arg_10], bx
 * 000000014074217A: lea     r9d, [rbx+2]
 * 000000014074217E: call    SdbpReadMappedData
 * 0000000140742183: test    eax, eax
 * 0000000140742185: jz      loc_1408D5A9A
 * 000000014074218B: movzx   eax, [rsp+28h+arg_10]
 * 0000000140742190: mov     ecx, 0F000h
 * 0000000140742195: and     ax, cx
 * 0000000140742198: mov     ecx, 7000h
 * 000000014074219D: cmp     ax, cx
 * 00000001407421A0: sbb     eax, eax
 * 00000001407421A2: and     eax, 0FFFFFFFCh
 * 00000001407421A5: add     eax, 6
 * 00000001407421A8: add     rsp, 20h
 * 00000001407421AC: pop     rbx
 * 00000001407421AD: retn
 * 00000001408D5A9A: mov     r8d, 5Eh ; '^'
 * 00000001408D5AA0: lea     r9, aErrorReadingTa_0; "Error reading tag"
 * 00000001408D5AA7: lea     rdx, aSdbpgettaghead; "SdbpGetTagHeadSize"
 * 00000001408D5AAE: lea     ecx, [r8-5Dh]
 * 00000001408D5AB2: call    AslLogCallPrintf
 * 00000001408D5AB7: xor     eax, eax
 * 00000001408D5AB9: jmp     loc_1407421A8
 */
