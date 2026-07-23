/*
 * XREFs of HalpApicIsCmciImplemented @ 0x1403A5050
 * Callers:
 *     HalpApicInitializeLocalUnit @ 0x140377720 (HalpApicInitializeLocalUnit.c)
 * Callees:
 *     HalpApicGetCpuInfo @ 0x1403A50F0 (HalpApicGetCpuInfo.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for HalpApicIsCmciImplemented @ 0x1403A5050
 * Reason: Hex-Rays returned no pseudocode for 0x1403A5050
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403A5050: mov     rax, rsp
 * 00000001403A5053: mov     [rax+10h], rbx
 * 00000001403A5057: mov     [rax+18h], rbp
 * 00000001403A505B: push    rsi
 * 00000001403A505C: push    rdi
 * 00000001403A505D: push    r14
 * 00000001403A505F: sub     rsp, 20h
 * 00000001403A5063: mov     rsi, rdx
 * 00000001403A5066: mov     byte ptr [rax+8], 0
 * 00000001403A506A: mov     r14, rcx
 * 00000001403A506D: lea     r9, [rax+8]
 * 00000001403A5071: xor     edx, edx
 * 00000001403A5073: xor     ecx, ecx
 * 00000001403A5075: xor     r8d, r8d
 * 00000001403A5078: call    HalpApicGetCpuInfo
 * 00000001403A507D: neg     al
 * 00000001403A507F: sbb     r8b, r8b
 * 00000001403A5082: xor     ebx, ebx
 * 00000001403A5084: and     r8b, [rsp+38h+arg_0]
 * 00000001403A5089: xor     ebp, ebp
 * 00000001403A508B: xor     dil, dil
 * 00000001403A508E: mov     [rsp+38h+arg_0], r8b
 * 00000001403A5093: cmp     r8b, 2
 * 00000001403A5097: jnz     loc_1404EB3B2
 * 00000001403A509D: mov     ecx, 179h
 * 00000001403A50A2: rdmsr
 * 00000001403A50A4: shl     rdx, 20h
 * 00000001403A50A8: or      rax, rdx
 * 00000001403A50AB: and     eax, 400h
 * 00000001403A50B0: setnz   dil
 * 00000001403A50B4: neg     rax
 * 00000001403A50B7: sbb     ebx, ebx
 * 00000001403A50B9: and     ebx, 2F0h
 * 00000001403A50BF: test    r14, r14
 * 00000001403A50C2: jz      short loc_1403A50CC
 * 00000001403A50C4: test    dil, dil
 * 00000001403A50C7: jz      short loc_1403A50CC
 * 00000001403A50C9: mov     [r14], ebx
 * 00000001403A50CC: test    rsi, rsi
 * 00000001403A50CF: jz      short loc_1403A50D3
 * 00000001403A50D1: mov     [rsi], ebp
 * 00000001403A50D3: mov     rbx, [rsp+38h+arg_8]
 * 00000001403A50D8: mov     al, dil
 * 00000001403A50DB: mov     rbp, [rsp+38h+arg_10]
 * 00000001403A50E0: add     rsp, 20h
 * 00000001403A50E4: pop     r14
 * 00000001403A50E6: pop     rdi
 * 00000001403A50E7: pop     rsi
 * 00000001403A50E8: retn
 * 00000001404EB3B2: cmp     r8b, 1
 * 00000001404EB3B6: jnz     loc_1403A50BF
 * 00000001404EB3BC: mov     rax, cs:HalpApicRead
 * 00000001404EB3C3: mov     ecx, 30h ; '0'
 * 00000001404EB3C8: call    _guard_dispatch_icall
 * 00000001404EB3CD: test    eax, eax
 * 00000001404EB3CF: jns     loc_1403A50BF
 * 00000001404EB3D5: mov     rax, cs:HalpApicRead
 * 00000001404EB3DC: mov     ecx, 400h
 * 00000001404EB3E1: call    _guard_dispatch_icall
 * 00000001404EB3E6: and     eax, 0FF0000h
 * 00000001404EB3EB: mov     ecx, 10000h
 * 00000001404EB3F0: cmp     ecx, eax
 * 00000001404EB3F2: sbb     ebx, ebx
 * 00000001404EB3F4: and     ebx, 510h
 * 00000001404EB3FA: cmp     eax, ecx
 * 00000001404EB3FC: setnbe  dil
 * 00000001404EB400: cmp     eax, 20000h
 * 00000001404EB405: jbe     loc_1403A50BF
 * 00000001404EB40B: mov     ebp, 520h
 * 00000001404EB410: jmp     loc_1403A50BF
 */
