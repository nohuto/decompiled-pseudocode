/*
 * XREFs of SdbpGetTagHeadSize @ 0x140742488
 * Callers:
 *     SdbpGetMappedTagData @ 0x140740E9C (SdbpGetMappedTagData.c)
 *     SdbpReadTagData @ 0x1407579AC (SdbpReadTagData.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     SdbpReadMappedData @ 0x140742D9C (SdbpReadMappedData.c)
 */

/*
 * Hex-Rays decompilation failed for SdbpGetTagHeadSize @ 0x140742488
 * Reason: Hex-Rays returned no pseudocode for 0x140742488
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140742488: push    rbx
 * 000000014074248A: sub     rsp, 20h
 * 000000014074248E: xor     ebx, ebx
 * 0000000140742490: lea     r8, [rsp+28h+arg_10]
 * 0000000140742495: mov     [rsp+28h+arg_10], bx
 * 000000014074249A: lea     r9d, [rbx+2]
 * 000000014074249E: call    SdbpReadMappedData
 * 00000001407424A3: test    eax, eax
 * 00000001407424A5: jz      loc_1408D6B2E
 * 00000001407424AB: movzx   eax, [rsp+28h+arg_10]
 * 00000001407424B0: mov     ecx, 0F000h
 * 00000001407424B5: and     ax, cx
 * 00000001407424B8: mov     ecx, 7000h
 * 00000001407424BD: cmp     ax, cx
 * 00000001407424C0: sbb     eax, eax
 * 00000001407424C2: and     eax, 0FFFFFFFCh
 * 00000001407424C5: add     eax, 6
 * 00000001407424C8: add     rsp, 20h
 * 00000001407424CC: pop     rbx
 * 00000001407424CD: retn
 * 00000001408D6B2E: mov     r8d, 5Eh ; '^'
 * 00000001408D6B34: lea     r9, aErrorReadingTa_0; "Error reading tag"
 * 00000001408D6B3B: lea     rdx, aSdbpgettaghead; "SdbpGetTagHeadSize"
 * 00000001408D6B42: lea     ecx, [r8-5Dh]
 * 00000001408D6B46: call    AslLogCallPrintf
 * 00000001408D6B4B: xor     eax, eax
 * 00000001408D6B4D: jmp     loc_1407424C8
 */
