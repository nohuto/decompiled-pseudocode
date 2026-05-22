/*
 * XREFs of ?Disconnect@AlpcPort@@UEAAXXZ @ 0x1800FDE50
 * Callers:
 *     <none>
 * Callees:
 *     ?Cancel@AlpcMessage@@QEAAXPEAX@Z @ 0x1800FD6D8 (-Cancel@AlpcMessage@@QEAAXPEAX@Z.c)
 *     ?RejectClientConnection@AlpcPort@@UEAAJXZ @ 0x1800FF420 (-RejectClientConnection@AlpcPort@@UEAAJXZ.c)
 */

/*
 * Hex-Rays decompilation failed for ?Disconnect@AlpcPort@@UEAAXXZ @ 0x1800FDE50
 * Reason: Hex-Rays returned no pseudocode for 0x1800FDE50
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800FDE50: mov     [rsp+arg_10], rbx
 * 00000001800FDE55: push    rbp
 * 00000001800FDE56: push    rsi
 * 00000001800FDE57: push    rdi
 * 00000001800FDE58: sub     rsp, 40h
 * 00000001800FDE5C: movsx   eax, word ptr [rcx+5Ch]
 * 00000001800FDE60: mov     rbx, rcx
 * 00000001800FDE63: and     eax, 0FFFF00FFh
 * 00000001800FDE68: cmp     eax, 0Ah
 * 00000001800FDE6B: jnz     short loc_1800FDE72
 * 00000001800FDE6D: call    ?RejectClientConnection@AlpcPort@@UEAAJXZ; AlpcPort::RejectClientConnection(void)
 * 00000001800FDE72: mov     rcx, [rbx+38h]
 * 00000001800FDE76: xor     edx, edx
 * 00000001800FDE78: call    cs:__imp_NtAlpcDisconnectPort
 * 00000001800FDE7F: nop     dword ptr [rax+rax+00h]
 * 00000001800FDE84: test    eax, eax
 * 00000001800FDE86: jnz     loc_1800FDF27
 * 00000001800FDE8C: lea     rdi, [rbx+58h]
 * 00000001800FDE90: lea     rbp, [rbx+1A8h]
 * 00000001800FDE97: and     [rsp+58h+arg_0], 0
 * 00000001800FDE9D: xor     eax, eax
 * 00000001800FDE9F: xorps   xmm0, xmm0
 * 00000001800FDEA2: mov     [rsp+58h+arg_8], 14Ch
 * 00000001800FDEAB: movups  xmmword ptr [rdi], xmm0
 * 00000001800FDEAE: xor     r9d, r9d
 * 00000001800FDEB1: xor     r8d, r8d
 * 00000001800FDEB4: movups  xmmword ptr [rdi+10h], xmm0
 * 00000001800FDEB8: mov     [rdi+20h], rax
 * 00000001800FDEBC: xor     edx, edx
 * 00000001800FDEBE: mov     [rdi+150h], rax
 * 00000001800FDEC5: mov     eax, 28h ; '('
 * 00000001800FDECA: mov     [rdi+2], ax
 * 00000001800FDECE: lea     rax, [rsp+58h+arg_0]
 * 00000001800FDED3: mov     [rsp+58h+var_20], rax
 * 00000001800FDED8: lea     rax, [rsp+58h+arg_8]
 * 00000001800FDEDD: mov     dword ptr [rdi+150h], 60000000h
 * 00000001800FDEE7: mov     rcx, [rbx+38h]
 * 00000001800FDEEB: mov     [rsp+58h+var_28], rbp
 * 00000001800FDEF0: mov     [rsp+58h+var_30], rax
 * 00000001800FDEF5: mov     [rsp+58h+var_38], rdi
 * 00000001800FDEFA: call    cs:__imp_NtAlpcSendWaitReceivePort
 * 00000001800FDF01: nop     dword ptr [rax+rax+00h]
 * 00000001800FDF06: mov     esi, eax
 * 00000001800FDF08: mov     eax, 2000h
 * 00000001800FDF0D: test    [rbx+5Ch], ax
 * 00000001800FDF11: jz      short loc_1800FDF1F
 * 00000001800FDF13: mov     rdx, [rbx+38h]; void *
 * 00000001800FDF17: mov     rcx, rdi; this
 * 00000001800FDF1A: call    ?Cancel@AlpcMessage@@QEAAXPEAX@Z; AlpcMessage::Cancel(void *)
 * 00000001800FDF1F: test    esi, esi
 * 00000001800FDF21: jz      loc_1800FDE97
 * 00000001800FDF27: mov     rcx, rbx; this
 * 00000001800FDF2A: mov     rbx, [rsp+58h+arg_10]
 * 00000001800FDF2F: add     rsp, 40h
 * 00000001800FDF33: pop     rdi
 * 00000001800FDF34: pop     rsi
 * 00000001800FDF35: pop     rbp
 * 00000001800FDF36: jmp     ?DisconnectAllSections@SipcPort@@IEAAXXZ; SipcPort::DisconnectAllSections(void)
 */
