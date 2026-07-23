/*
 * XREFs of PopAllowAwayModeSettingCallback @ 0x1408649A0
 * Callers:
 *     <none>
 * Callees:
 *     PopSetSystemState @ 0x14058DFAC (PopSetSystemState.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopAllowAwayModeSettingCallback @ 0x1408649A0
 * Reason: Hex-Rays returned no pseudocode for 0x1408649A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001408649A0: mov     [rsp+arg_0], rbx
 * 00000001408649A5: mov     [rsp+arg_8], rbp
 * 00000001408649AA: mov     [rsp+arg_10], rsi
 * 00000001408649AF: push    rdi
 * 00000001408649B0: sub     rsp, 20h
 * 00000001408649B4: mov     ebp, r8d
 * 00000001408649B7: mov     rdi, rdx
 * 00000001408649BA: mov     rsi, rcx
 * 00000001408649BD: mov     ebx, 0C000000Dh
 * 00000001408649C2: call    PopAcquirePolicyLock
 * 00000001408649C7: mov     r9, qword ptr cs:GUID_ALLOW_AWAYMODE.Data1
 * 00000001408649CE: sub     r9, [rsi]
 * 00000001408649D1: jnz     short loc_1408649DE
 * 00000001408649D3: mov     r9, qword ptr cs:GUID_ALLOW_AWAYMODE.Data4
 * 00000001408649DA: sub     r9, [rsi+8]
 * 00000001408649DE: xor     esi, esi
 * 00000001408649E0: test    r9, r9
 * 00000001408649E3: jnz     short loc_140864A02
 * 00000001408649E5: lea     ecx, [rsi+4]
 * 00000001408649E8: cmp     ebp, ecx
 * 00000001408649EA: jnz     short loc_140864A02
 * 00000001408649EC: test    rdi, rdi
 * 00000001408649EF: jz      short loc_140864A02
 * 00000001408649F1: cmp     [rdi], esi
 * 00000001408649F3: jz      loc_140923650
 * 00000001408649F9: mov     cs:byte_140C3D912, 1
 * 0000000140864A00: mov     ebx, esi
 * 0000000140864A02: call    PopReleasePolicyLock
 * 0000000140864A07: mov     rbp, [rsp+28h+arg_8]
 * 0000000140864A0C: mov     eax, ebx
 * 0000000140864A0E: mov     rbx, [rsp+28h+arg_0]
 * 0000000140864A13: mov     rsi, [rsp+28h+arg_10]
 * 0000000140864A18: add     rsp, 20h
 * 0000000140864A1C: pop     rdi
 * 0000000140864A1D: retn
 * 0000000140923650: cmp     cs:byte_140C3D911, sil
 * 0000000140923657: mov     cs:byte_140C3D912, sil
 * 000000014092365E: jz      loc_140864A00
 * 0000000140923664: mov     edx, 7
 * 0000000140923669: call    PopSetSystemState
 * 000000014092366E: nop
 * 000000014092366F: jmp     loc_140864A00
 */
