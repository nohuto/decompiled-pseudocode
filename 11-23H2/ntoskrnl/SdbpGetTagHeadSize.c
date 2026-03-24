/*
 * XREFs of SdbpGetTagHeadSize @ 0x140741F78
 * Callers:
 *     SdbpGetMappedTagData @ 0x14074098C (SdbpGetMappedTagData.c)
 *     SdbpReadTagData @ 0x14075749C (SdbpReadTagData.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     SdbpReadMappedData @ 0x14074288C (SdbpReadMappedData.c)
 */

/*
 * Hex-Rays decompilation failed for SdbpGetTagHeadSize @ 0x140741F78
 * Reason: Hex-Rays returned no pseudocode for 0x140741F78
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140741F78: push    rbx
 * 0000000140741F7A: sub     rsp, 20h
 * 0000000140741F7E: xor     ebx, ebx
 * 0000000140741F80: lea     r8, [rsp+28h+arg_10]
 * 0000000140741F85: mov     [rsp+28h+arg_10], bx
 * 0000000140741F8A: lea     r9d, [rbx+2]
 * 0000000140741F8E: call    SdbpReadMappedData
 * 0000000140741F93: test    eax, eax
 * 0000000140741F95: jz      loc_1408D585E
 * 0000000140741F9B: movzx   eax, [rsp+28h+arg_10]
 * 0000000140741FA0: mov     ecx, 0F000h
 * 0000000140741FA5: and     ax, cx
 * 0000000140741FA8: mov     ecx, 7000h
 * 0000000140741FAD: cmp     ax, cx
 * 0000000140741FB0: sbb     eax, eax
 * 0000000140741FB2: and     eax, 0FFFFFFFCh
 * 0000000140741FB5: add     eax, 6
 * 0000000140741FB8: add     rsp, 20h
 * 0000000140741FBC: pop     rbx
 * 0000000140741FBD: retn
 * 00000001408D585E: mov     r8d, 5Eh ; '^'
 * 00000001408D5864: lea     r9, aErrorReadingTa_0; "Error reading tag"
 * 00000001408D586B: lea     rdx, aSdbpgettaghead; "SdbpGetTagHeadSize"
 * 00000001408D5872: lea     ecx, [r8-5Dh]
 * 00000001408D5876: call    AslLogCallPrintf
 * 00000001408D587B: xor     eax, eax
 * 00000001408D587D: jmp     loc_140741FB8
 */
