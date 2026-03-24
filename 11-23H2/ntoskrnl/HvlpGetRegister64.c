/*
 * XREFs of HvlpGetRegister64 @ 0x140548CE0
 * Callers:
 *     HvlEnlightenProcessor @ 0x1403828D0 (HvlEnlightenProcessor.c)
 *     HvlGetReferenceTime @ 0x1403C85E4 (HvlGetReferenceTime.c)
 *     HvlGetReferenceTimeUsingTscPage @ 0x1403C8620 (HvlGetReferenceTimeUsingTscPage.c)
 *     HvlLogGuestCrashInformation @ 0x14053F950 (HvlLogGuestCrashInformation.c)
 *     HvlpPhase0Enlightenments @ 0x14054941C (HvlpPhase0Enlightenments.c)
 *     HvlpTryToLockCpuManagementVersion @ 0x1405495D8 (HvlpTryToLockCpuManagementVersion.c)
 *     HvlDeleteProcessor @ 0x1409411FC (HvlDeleteProcessor.c)
 * Callees:
 *     RtlRaiseException @ 0x14030D590 (RtlRaiseException.c)
 */

/*
 * Hex-Rays decompilation failed for HvlpGetRegister64 @ 0x140548CE0
 * Reason: Hex-Rays returned no pseudocode for 0x140548CE0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140548CE0: sub     rsp, 28h
 * 0000000140548CE4: mov     eax, 0A0002h
 * 0000000140548CE9: mov     r9, rdx
 * 0000000140548CEC: mov     r8d, ecx
 * 0000000140548CEF: cmp     ecx, eax
 * 0000000140548CF1: jg      loc_140548DA3
 * 0000000140548CF7: jz      loc_140548DD5
 * 0000000140548CFD: mov     eax, 90002h
 * 0000000140548D02: cmp     ecx, eax
 * 0000000140548D04: jg      short loc_140548D5C
 * 0000000140548D06: jz      short loc_140548D52
 * 0000000140548D08: sub     ecx, 210h
 * 0000000140548D0E: jz      short loc_140548D46
 * 0000000140548D10: sub     ecx, 1
 * 0000000140548D13: jz      short loc_140548D46
 * 0000000140548D15: sub     ecx, 1
 * 0000000140548D18: jz      short loc_140548D46
 * 0000000140548D1A: sub     ecx, 1
 * 0000000140548D1D: jz      short loc_140548D46
 * 0000000140548D1F: sub     ecx, 1
 * 0000000140548D22: jz      short loc_140548D46
 * 0000000140548D24: sub     ecx, 1
 * 0000000140548D27: jz      short loc_140548D3C
 * 0000000140548D29: cmp     ecx, 5Bh ; '['
 * 0000000140548D2C: jnz     loc_140548E0F
 * 0000000140548D32: mov     ecx, 40000116h
 * 0000000140548D37: jmp     loc_140548DDC
 * 0000000140548D3C: mov     ecx, 40000105h
 * 0000000140548D41: jmp     loc_140548DDC
 * 0000000140548D46: lea     ecx, [r8+3FFFFEF0h]
 * 0000000140548D4D: jmp     loc_140548DDC
 * 0000000140548D52: mov     ecx, 40000000h
 * 0000000140548D57: jmp     loc_140548DDC
 * 0000000140548D5C: sub     ecx, 90003h
 * 0000000140548D62: jz      short loc_140548D9C
 * 0000000140548D64: sub     ecx, 1
 * 0000000140548D67: jz      short loc_140548D95
 * 0000000140548D69: sub     ecx, 3
 * 0000000140548D6C: jz      short loc_140548D8E
 * 0000000140548D6E: sub     ecx, 0Ch
 * 0000000140548D71: jz      short loc_140548D87
 * 0000000140548D73: sub     ecx, 4
 * 0000000140548D76: jz      short loc_140548D80
 * 0000000140548D78: sub     ecx, 0FFE9h
 * 0000000140548D7E: jmp     short loc_140548DCE
 * 0000000140548D80: mov     ecx, 40000021h
 * 0000000140548D85: jmp     short loc_140548DDC
 * 0000000140548D87: mov     ecx, 40000073h
 * 0000000140548D8C: jmp     short loc_140548DDC
 * 0000000140548D8E: mov     ecx, 40000004h
 * 0000000140548D93: jmp     short loc_140548DDC
 * 0000000140548D95: mov     ecx, 40000020h
 * 0000000140548D9A: jmp     short loc_140548DDC
 * 0000000140548D9C: mov     ecx, 40000002h
 * 0000000140548DA1: jmp     short loc_140548DDC
 * 0000000140548DA3: mov     eax, 0A000Ah
 * 0000000140548DA8: cmp     r8d, eax
 * 0000000140548DAB: jg      short loc_140548DEE
 * 0000000140548DAD: jz      short loc_140548DD5
 * 0000000140548DAF: sub     ecx, 0A0003h
 * 0000000140548DB5: jz      short loc_140548DD5
 * 0000000140548DB7: sub     ecx, 1
 * 0000000140548DBA: jz      short loc_140548DD5
 * 0000000140548DBC: sub     ecx, 1
 * 0000000140548DBF: jz      short loc_140548DD5
 * 0000000140548DC1: sub     ecx, 1
 * 0000000140548DC4: jz      short loc_140548DD5
 * 0000000140548DC6: sub     ecx, 1
 * 0000000140548DC9: jz      short loc_140548DD5
 * 0000000140548DCB: sub     ecx, 1
 * 0000000140548DCE: jz      short loc_140548DD5
 * 0000000140548DD0: cmp     ecx, 1
 * 0000000140548DD3: jnz     short loc_140548E0F
 * 0000000140548DD5: lea     ecx, [r8+3FF60090h]
 * 0000000140548DDC: rdmsr
 * 0000000140548DDE: shl     rdx, 20h
 * 0000000140548DE2: or      rax, rdx
 * 0000000140548DE5: mov     [r9], rax
 * 0000000140548DE8: add     rsp, 28h
 * 0000000140548DEC: retn
 * 0000000140548DEE: sub     ecx, 0A000Bh
 * 0000000140548DF4: jz      short loc_140548DD5
 * 0000000140548DF6: sub     ecx, 1
 * 0000000140548DF9: jz      short loc_140548DD5
 * 0000000140548DFB: sub     ecx, 1
 * 0000000140548DFE: jz      short loc_140548DD5
 * 0000000140548E00: sub     ecx, 1
 * 0000000140548E03: jz      short loc_140548DD5
 * 0000000140548E05: sub     ecx, 1
 * 0000000140548E08: jz      short loc_140548DD5
 * 0000000140548E0A: cmp     ecx, 4
 * 0000000140548E0D: jz      short loc_140548E1D
 * 0000000140548E0F: lea     rcx, qword_140C0D0D0; ULONG_PTR
 * 0000000140548E16: call    RtlRaiseException
 * 0000000140548E1B: jmp     short loc_140548DE8
 * 0000000140548E1D: mov     ecx, 40000083h
 * 0000000140548E22: jmp     short loc_140548DDC
 */
