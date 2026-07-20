/*
 * XREFs of SmpEventWrite @ 0x14000C78C
 * Callers:
 *     SmpNtSerializeBoot @ 0x14000B0FC (SmpNtSerializeBoot.c)
 *     SmpProcessFileRenames @ 0x14000B13C (SmpProcessFileRenames.c)
 *     SmpLoadDataFromRegistry @ 0x14000B688 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for SmpEventWrite @ 0x14000C78C
 * Reason: Hex-Rays returned no pseudocode for 0x14000C78C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014000C78C: push    rbx
 * 000000014000C78E: sub     rsp, 20h
 * 000000014000C792: mov     rbx, rcx
 * 000000014000C795: mov     rcx, cs:SmpTraceHandle; RegHandle
 * 000000014000C79C: test    rcx, rcx
 * 000000014000C79F: jz      short loc_14000C7B8
 * 000000014000C7A1: mov     rdx, rbx; EventDescriptor
 * 000000014000C7A4: call    cs:__imp_EtwEventEnabled
 * 000000014000C7AB: nop     dword ptr [rax+rax+00h]
 * 000000014000C7B0: test    al, al
 * 000000014000C7B2: jnz     loc_1400156E2
 * 000000014000C7B8: add     rsp, 20h
 * 000000014000C7BC: pop     rbx
 * 000000014000C7BD: retn
 * 00000001400156E2: mov     rcx, cs:SmpTraceHandle
 * 00000001400156E9: xor     r9d, r9d
 * 00000001400156EC: xor     r8d, r8d
 * 00000001400156EF: mov     rdx, rbx
 * 00000001400156F2: call    cs:__imp_EtwEventWrite
 * 00000001400156F9: nop     dword ptr [rax+rax+00h]
 * 00000001400156FE: nop
 * 00000001400156FF: jmp     loc_14000C7B8
 */
