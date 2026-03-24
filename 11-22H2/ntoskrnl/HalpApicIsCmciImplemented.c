/*
 * XREFs of HalpApicIsCmciImplemented @ 0x1403A4710
 * Callers:
 *     HalpApicInitializeLocalUnit @ 0x140377BD0 (HalpApicInitializeLocalUnit.c)
 * Callees:
 *     HalpApicGetCpuInfo @ 0x1403A47B0 (HalpApicGetCpuInfo.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for HalpApicIsCmciImplemented @ 0x1403A4710
 * Reason: Hex-Rays returned no pseudocode for 0x1403A4710
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403A4710: mov     rax, rsp
 * 00000001403A4713: mov     [rax+10h], rbx
 * 00000001403A4717: mov     [rax+18h], rbp
 * 00000001403A471B: push    rsi
 * 00000001403A471C: push    rdi
 * 00000001403A471D: push    r14
 * 00000001403A471F: sub     rsp, 20h
 * 00000001403A4723: mov     rsi, rdx
 * 00000001403A4726: mov     byte ptr [rax+8], 0
 * 00000001403A472A: mov     r14, rcx
 * 00000001403A472D: lea     r9, [rax+8]
 * 00000001403A4731: xor     edx, edx
 * 00000001403A4733: xor     ecx, ecx
 * 00000001403A4735: xor     r8d, r8d
 * 00000001403A4738: call    HalpApicGetCpuInfo
 * 00000001403A473D: neg     al
 * 00000001403A473F: sbb     r8b, r8b
 * 00000001403A4742: xor     ebx, ebx
 * 00000001403A4744: and     r8b, [rsp+38h+arg_0]
 * 00000001403A4749: xor     ebp, ebp
 * 00000001403A474B: xor     dil, dil
 * 00000001403A474E: mov     [rsp+38h+arg_0], r8b
 * 00000001403A4753: cmp     r8b, 2
 * 00000001403A4757: jnz     loc_1404EB1EE
 * 00000001403A475D: mov     ecx, 179h
 * 00000001403A4762: rdmsr
 * 00000001403A4764: shl     rdx, 20h
 * 00000001403A4768: or      rax, rdx
 * 00000001403A476B: and     eax, 400h
 * 00000001403A4770: setnz   dil
 * 00000001403A4774: neg     rax
 * 00000001403A4777: sbb     ebx, ebx
 * 00000001403A4779: and     ebx, 2F0h
 * 00000001403A477F: test    r14, r14
 * 00000001403A4782: jz      short loc_1403A478C
 * 00000001403A4784: test    dil, dil
 * 00000001403A4787: jz      short loc_1403A478C
 * 00000001403A4789: mov     [r14], ebx
 * 00000001403A478C: test    rsi, rsi
 * 00000001403A478F: jz      short loc_1403A4793
 * 00000001403A4791: mov     [rsi], ebp
 * 00000001403A4793: mov     rbx, [rsp+38h+arg_8]
 * 00000001403A4798: mov     al, dil
 * 00000001403A479B: mov     rbp, [rsp+38h+arg_10]
 * 00000001403A47A0: add     rsp, 20h
 * 00000001403A47A4: pop     r14
 * 00000001403A47A6: pop     rdi
 * 00000001403A47A7: pop     rsi
 * 00000001403A47A8: retn
 * 00000001404EB1EE: cmp     r8b, 1
 * 00000001404EB1F2: jnz     loc_1403A477F
 * 00000001404EB1F8: mov     rax, cs:HalpApicRead
 * 00000001404EB1FF: mov     ecx, 30h ; '0'
 * 00000001404EB204: call    _guard_dispatch_icall
 * 00000001404EB209: test    eax, eax
 * 00000001404EB20B: jns     loc_1403A477F
 * 00000001404EB211: mov     rax, cs:HalpApicRead
 * 00000001404EB218: mov     ecx, 400h
 * 00000001404EB21D: call    _guard_dispatch_icall
 * 00000001404EB222: and     eax, 0FF0000h
 * 00000001404EB227: mov     ecx, 10000h
 * 00000001404EB22C: cmp     ecx, eax
 * 00000001404EB22E: sbb     ebx, ebx
 * 00000001404EB230: and     ebx, 510h
 * 00000001404EB236: cmp     eax, ecx
 * 00000001404EB238: setnbe  dil
 * 00000001404EB23C: cmp     eax, 20000h
 * 00000001404EB241: jbe     loc_1403A477F
 * 00000001404EB247: mov     ebp, 520h
 * 00000001404EB24C: jmp     loc_1403A477F
 */
