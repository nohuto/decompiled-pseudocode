/*
 * XREFs of PopAllowAwayModeSettingCallback @ 0x1408647C0
 * Callers:
 *     <none>
 * Callees:
 *     PopSetSystemState @ 0x14058E40C (PopSetSystemState.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopAllowAwayModeSettingCallback @ 0x1408647C0
 * Reason: Hex-Rays returned no pseudocode for 0x1408647C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001408647C0: mov     [rsp+arg_0], rbx
 * 00000001408647C5: mov     [rsp+arg_8], rbp
 * 00000001408647CA: mov     [rsp+arg_10], rsi
 * 00000001408647CF: push    rdi
 * 00000001408647D0: sub     rsp, 20h
 * 00000001408647D4: mov     ebp, r8d
 * 00000001408647D7: mov     rdi, rdx
 * 00000001408647DA: mov     rsi, rcx
 * 00000001408647DD: mov     ebx, 0C000000Dh
 * 00000001408647E2: call    PopAcquirePolicyLock
 * 00000001408647E7: mov     r9, qword ptr cs:GUID_ALLOW_AWAYMODE.Data1
 * 00000001408647EE: sub     r9, [rsi]
 * 00000001408647F1: jnz     short loc_1408647FE
 * 00000001408647F3: mov     r9, qword ptr cs:GUID_ALLOW_AWAYMODE.Data4
 * 00000001408647FA: sub     r9, [rsi+8]
 * 00000001408647FE: xor     esi, esi
 * 0000000140864800: test    r9, r9
 * 0000000140864803: jnz     short loc_140864822
 * 0000000140864805: lea     ecx, [rsi+4]
 * 0000000140864808: cmp     ebp, ecx
 * 000000014086480A: jnz     short loc_140864822
 * 000000014086480C: test    rdi, rdi
 * 000000014086480F: jz      short loc_140864822
 * 0000000140864811: cmp     [rdi], esi
 * 0000000140864813: jz      loc_1409238E6
 * 0000000140864819: mov     cs:byte_140C3D972, 1
 * 0000000140864820: mov     ebx, esi
 * 0000000140864822: call    PopReleasePolicyLock
 * 0000000140864827: mov     rbp, [rsp+28h+arg_8]
 * 000000014086482C: mov     eax, ebx
 * 000000014086482E: mov     rbx, [rsp+28h+arg_0]
 * 0000000140864833: mov     rsi, [rsp+28h+arg_10]
 * 0000000140864838: add     rsp, 20h
 * 000000014086483C: pop     rdi
 * 000000014086483D: retn
 * 00000001409238E6: cmp     cs:byte_140C3D971, sil
 * 00000001409238ED: mov     cs:byte_140C3D972, sil
 * 00000001409238F4: jz      loc_140864820
 * 00000001409238FA: mov     edx, 7
 * 00000001409238FF: call    PopSetSystemState
 * 0000000140923904: nop
 * 0000000140923905: jmp     loc_140864820
 */
