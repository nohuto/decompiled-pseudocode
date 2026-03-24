/*
 * XREFs of HalpApicIsCmciImplemented @ 0x1403A4E70
 * Callers:
 *     HalpApicInitializeLocalUnit @ 0x140377580 (HalpApicInitializeLocalUnit.c)
 * Callees:
 *     HalpApicGetCpuInfo @ 0x1403A4F10 (HalpApicGetCpuInfo.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for HalpApicIsCmciImplemented @ 0x1403A4E70
 * Reason: Hex-Rays returned no pseudocode for 0x1403A4E70
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403A4E70: mov     rax, rsp
 * 00000001403A4E73: mov     [rax+10h], rbx
 * 00000001403A4E77: mov     [rax+18h], rbp
 * 00000001403A4E7B: push    rsi
 * 00000001403A4E7C: push    rdi
 * 00000001403A4E7D: push    r14
 * 00000001403A4E7F: sub     rsp, 20h
 * 00000001403A4E83: mov     rsi, rdx
 * 00000001403A4E86: mov     byte ptr [rax+8], 0
 * 00000001403A4E8A: mov     r14, rcx
 * 00000001403A4E8D: lea     r9, [rax+8]
 * 00000001403A4E91: xor     edx, edx
 * 00000001403A4E93: xor     ecx, ecx
 * 00000001403A4E95: xor     r8d, r8d
 * 00000001403A4E98: call    HalpApicGetCpuInfo
 * 00000001403A4E9D: neg     al
 * 00000001403A4E9F: sbb     r8b, r8b
 * 00000001403A4EA2: xor     ebx, ebx
 * 00000001403A4EA4: and     r8b, [rsp+38h+arg_0]
 * 00000001403A4EA9: xor     ebp, ebp
 * 00000001403A4EAB: xor     dil, dil
 * 00000001403A4EAE: mov     [rsp+38h+arg_0], r8b
 * 00000001403A4EB3: cmp     r8b, 2
 * 00000001403A4EB7: jnz     loc_1404EAE5A
 * 00000001403A4EBD: mov     ecx, 179h
 * 00000001403A4EC2: rdmsr
 * 00000001403A4EC4: shl     rdx, 20h
 * 00000001403A4EC8: or      rax, rdx
 * 00000001403A4ECB: and     eax, 400h
 * 00000001403A4ED0: setnz   dil
 * 00000001403A4ED4: neg     rax
 * 00000001403A4ED7: sbb     ebx, ebx
 * 00000001403A4ED9: and     ebx, 2F0h
 * 00000001403A4EDF: test    r14, r14
 * 00000001403A4EE2: jz      short loc_1403A4EEC
 * 00000001403A4EE4: test    dil, dil
 * 00000001403A4EE7: jz      short loc_1403A4EEC
 * 00000001403A4EE9: mov     [r14], ebx
 * 00000001403A4EEC: test    rsi, rsi
 * 00000001403A4EEF: jz      short loc_1403A4EF3
 * 00000001403A4EF1: mov     [rsi], ebp
 * 00000001403A4EF3: mov     rbx, [rsp+38h+arg_8]
 * 00000001403A4EF8: mov     al, dil
 * 00000001403A4EFB: mov     rbp, [rsp+38h+arg_10]
 * 00000001403A4F00: add     rsp, 20h
 * 00000001403A4F04: pop     r14
 * 00000001403A4F06: pop     rdi
 * 00000001403A4F07: pop     rsi
 * 00000001403A4F08: retn
 * 00000001404EAE5A: cmp     r8b, 1
 * 00000001404EAE5E: jnz     loc_1403A4EDF
 * 00000001404EAE64: mov     rax, cs:HalpApicRead
 * 00000001404EAE6B: mov     ecx, 30h ; '0'
 * 00000001404EAE70: call    _guard_dispatch_icall
 * 00000001404EAE75: test    eax, eax
 * 00000001404EAE77: jns     loc_1403A4EDF
 * 00000001404EAE7D: mov     rax, cs:HalpApicRead
 * 00000001404EAE84: mov     ecx, 400h
 * 00000001404EAE89: call    _guard_dispatch_icall
 * 00000001404EAE8E: and     eax, 0FF0000h
 * 00000001404EAE93: mov     ecx, 10000h
 * 00000001404EAE98: cmp     ecx, eax
 * 00000001404EAE9A: sbb     ebx, ebx
 * 00000001404EAE9C: and     ebx, 510h
 * 00000001404EAEA2: cmp     eax, ecx
 * 00000001404EAEA4: setnbe  dil
 * 00000001404EAEA8: cmp     eax, 20000h
 * 00000001404EAEAD: jbe     loc_1403A4EDF
 * 00000001404EAEB3: mov     ebp, 520h
 * 00000001404EAEB8: jmp     loc_1403A4EDF
 */
