/*
 * XREFs of HvlpGetRegister64 @ 0x140548D80
 * Callers:
 *     HvlEnlightenProcessor @ 0x140382F20 (HvlEnlightenProcessor.c)
 *     HvlGetReferenceTime @ 0x1403C7F84 (HvlGetReferenceTime.c)
 *     HvlGetReferenceTimeUsingTscPage @ 0x1403C7FC0 (HvlGetReferenceTimeUsingTscPage.c)
 *     HvlLogGuestCrashInformation @ 0x14053FA00 (HvlLogGuestCrashInformation.c)
 *     HvlpPhase0Enlightenments @ 0x1405494BC (HvlpPhase0Enlightenments.c)
 *     HvlpTryToLockCpuManagementVersion @ 0x140549678 (HvlpTryToLockCpuManagementVersion.c)
 *     HvlDeleteProcessor @ 0x1409412AC (HvlDeleteProcessor.c)
 * Callees:
 *     RtlRaiseException @ 0x14030D3B0 (RtlRaiseException.c)
 */

/*
 * Hex-Rays decompilation failed for HvlpGetRegister64 @ 0x140548D80
 * Reason: Hex-Rays returned no pseudocode for 0x140548D80
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140548D80: sub     rsp, 28h
 * 0000000140548D84: mov     eax, 0A0002h
 * 0000000140548D89: mov     r9, rdx
 * 0000000140548D8C: mov     r8d, ecx
 * 0000000140548D8F: cmp     ecx, eax
 * 0000000140548D91: jg      loc_140548E43
 * 0000000140548D97: jz      loc_140548E75
 * 0000000140548D9D: mov     eax, 90002h
 * 0000000140548DA2: cmp     ecx, eax
 * 0000000140548DA4: jg      short loc_140548DFC
 * 0000000140548DA6: jz      short loc_140548DF2
 * 0000000140548DA8: sub     ecx, 210h
 * 0000000140548DAE: jz      short loc_140548DE6
 * 0000000140548DB0: sub     ecx, 1
 * 0000000140548DB3: jz      short loc_140548DE6
 * 0000000140548DB5: sub     ecx, 1
 * 0000000140548DB8: jz      short loc_140548DE6
 * 0000000140548DBA: sub     ecx, 1
 * 0000000140548DBD: jz      short loc_140548DE6
 * 0000000140548DBF: sub     ecx, 1
 * 0000000140548DC2: jz      short loc_140548DE6
 * 0000000140548DC4: sub     ecx, 1
 * 0000000140548DC7: jz      short loc_140548DDC
 * 0000000140548DC9: cmp     ecx, 5Bh ; '['
 * 0000000140548DCC: jnz     loc_140548EAF
 * 0000000140548DD2: mov     ecx, 40000116h
 * 0000000140548DD7: jmp     loc_140548E7C
 * 0000000140548DDC: mov     ecx, 40000105h
 * 0000000140548DE1: jmp     loc_140548E7C
 * 0000000140548DE6: lea     ecx, [r8+3FFFFEF0h]
 * 0000000140548DED: jmp     loc_140548E7C
 * 0000000140548DF2: mov     ecx, 40000000h
 * 0000000140548DF7: jmp     loc_140548E7C
 * 0000000140548DFC: sub     ecx, 90003h
 * 0000000140548E02: jz      short loc_140548E3C
 * 0000000140548E04: sub     ecx, 1
 * 0000000140548E07: jz      short loc_140548E35
 * 0000000140548E09: sub     ecx, 3
 * 0000000140548E0C: jz      short loc_140548E2E
 * 0000000140548E0E: sub     ecx, 0Ch
 * 0000000140548E11: jz      short loc_140548E27
 * 0000000140548E13: sub     ecx, 4
 * 0000000140548E16: jz      short loc_140548E20
 * 0000000140548E18: sub     ecx, 0FFE9h
 * 0000000140548E1E: jmp     short loc_140548E6E
 * 0000000140548E20: mov     ecx, 40000021h
 * 0000000140548E25: jmp     short loc_140548E7C
 * 0000000140548E27: mov     ecx, 40000073h
 * 0000000140548E2C: jmp     short loc_140548E7C
 * 0000000140548E2E: mov     ecx, 40000004h
 * 0000000140548E33: jmp     short loc_140548E7C
 * 0000000140548E35: mov     ecx, 40000020h
 * 0000000140548E3A: jmp     short loc_140548E7C
 * 0000000140548E3C: mov     ecx, 40000002h
 * 0000000140548E41: jmp     short loc_140548E7C
 * 0000000140548E43: mov     eax, 0A000Ah
 * 0000000140548E48: cmp     r8d, eax
 * 0000000140548E4B: jg      short loc_140548E8E
 * 0000000140548E4D: jz      short loc_140548E75
 * 0000000140548E4F: sub     ecx, 0A0003h
 * 0000000140548E55: jz      short loc_140548E75
 * 0000000140548E57: sub     ecx, 1
 * 0000000140548E5A: jz      short loc_140548E75
 * 0000000140548E5C: sub     ecx, 1
 * 0000000140548E5F: jz      short loc_140548E75
 * 0000000140548E61: sub     ecx, 1
 * 0000000140548E64: jz      short loc_140548E75
 * 0000000140548E66: sub     ecx, 1
 * 0000000140548E69: jz      short loc_140548E75
 * 0000000140548E6B: sub     ecx, 1
 * 0000000140548E6E: jz      short loc_140548E75
 * 0000000140548E70: cmp     ecx, 1
 * 0000000140548E73: jnz     short loc_140548EAF
 * 0000000140548E75: lea     ecx, [r8+3FF60090h]
 * 0000000140548E7C: rdmsr
 * 0000000140548E7E: shl     rdx, 20h
 * 0000000140548E82: or      rax, rdx
 * 0000000140548E85: mov     [r9], rax
 * 0000000140548E88: add     rsp, 28h
 * 0000000140548E8C: retn
 * 0000000140548E8E: sub     ecx, 0A000Bh
 * 0000000140548E94: jz      short loc_140548E75
 * 0000000140548E96: sub     ecx, 1
 * 0000000140548E99: jz      short loc_140548E75
 * 0000000140548E9B: sub     ecx, 1
 * 0000000140548E9E: jz      short loc_140548E75
 * 0000000140548EA0: sub     ecx, 1
 * 0000000140548EA3: jz      short loc_140548E75
 * 0000000140548EA5: sub     ecx, 1
 * 0000000140548EA8: jz      short loc_140548E75
 * 0000000140548EAA: cmp     ecx, 4
 * 0000000140548EAD: jz      short loc_140548EBD
 * 0000000140548EAF: lea     rcx, qword_140C0D0D0; ULONG_PTR
 * 0000000140548EB6: call    RtlRaiseException
 * 0000000140548EBB: jmp     short loc_140548E88
 * 0000000140548EBD: mov     ecx, 40000083h
 * 0000000140548EC2: jmp     short loc_140548E7C
 */
