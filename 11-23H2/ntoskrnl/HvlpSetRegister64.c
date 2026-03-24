/*
 * XREFs of HvlpSetRegister64 @ 0x140548E30
 * Callers:
 *     HvlEnlightenProcessor @ 0x1403828D0 (HvlEnlightenProcessor.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x14053F54C (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlLogGuestCrashInformation @ 0x14053F950 (HvlLogGuestCrashInformation.c)
 *     HvlSetGuestSchedulerEventRegister @ 0x1405405B0 (HvlSetGuestSchedulerEventRegister.c)
 *     HvlpPhase0Enlightenments @ 0x14054941C (HvlpPhase0Enlightenments.c)
 *     HvlpTryToLockCpuManagementVersion @ 0x1405495D8 (HvlpTryToLockCpuManagementVersion.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmHvSetVirtualProcessorQos @ 0x1405A00B4 (PpmHvSetVirtualProcessorQos.c)
 *     HvlDeleteProcessor @ 0x1409411FC (HvlDeleteProcessor.c)
 * Callees:
 *     RtlRaiseException @ 0x14030D590 (RtlRaiseException.c)
 */

/*
 * Hex-Rays decompilation failed for HvlpSetRegister64 @ 0x140548E30
 * Reason: Hex-Rays returned no pseudocode for 0x140548E30
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140548E30: sub     rsp, 28h
 * 0000000140548E34: mov     eax, 0A0002h
 * 0000000140548E39: mov     r8d, ecx
 * 0000000140548E3C: cmp     ecx, eax
 * 0000000140548E3E: jg      loc_140548EDE
 * 0000000140548E44: jz      loc_140548F10
 * 0000000140548E4A: mov     eax, 90002h
 * 0000000140548E4F: cmp     ecx, eax
 * 0000000140548E51: jg      short loc_140548EA3
 * 0000000140548E53: jz      short loc_140548E9C
 * 0000000140548E55: sub     ecx, 210h
 * 0000000140548E5B: jz      short loc_140548E93
 * 0000000140548E5D: sub     ecx, 1
 * 0000000140548E60: jz      short loc_140548E93
 * 0000000140548E62: sub     ecx, 1
 * 0000000140548E65: jz      short loc_140548E93
 * 0000000140548E67: sub     ecx, 1
 * 0000000140548E6A: jz      short loc_140548E93
 * 0000000140548E6C: sub     ecx, 1
 * 0000000140548E6F: jz      short loc_140548E93
 * 0000000140548E71: sub     ecx, 1
 * 0000000140548E74: jz      short loc_140548E89
 * 0000000140548E76: cmp     ecx, 5Bh ; '['
 * 0000000140548E79: jnz     loc_140548F47
 * 0000000140548E7F: mov     ecx, 40000116h
 * 0000000140548E84: jmp     loc_140548F17
 * 0000000140548E89: mov     ecx, 40000105h
 * 0000000140548E8E: jmp     loc_140548F17
 * 0000000140548E93: lea     ecx, [r8+3FFFFEF0h]
 * 0000000140548E9A: jmp     short loc_140548F17
 * 0000000140548E9C: mov     ecx, 40000000h
 * 0000000140548EA1: jmp     short loc_140548F17
 * 0000000140548EA3: sub     ecx, 90007h
 * 0000000140548EA9: jz      short loc_140548ED7
 * 0000000140548EAB: sub     ecx, 0Ch
 * 0000000140548EAE: jz      short loc_140548ED0
 * 0000000140548EB0: sub     ecx, 4
 * 0000000140548EB3: jz      short loc_140548EC9
 * 0000000140548EB5: sub     ecx, 4
 * 0000000140548EB8: jz      short loc_140548EC2
 * 0000000140548EBA: sub     ecx, 0FFE5h
 * 0000000140548EC0: jmp     short loc_140548F09
 * 0000000140548EC2: mov     ecx, 400000C2h
 * 0000000140548EC7: jmp     short loc_140548F17
 * 0000000140548EC9: mov     ecx, 40000021h
 * 0000000140548ECE: jmp     short loc_140548F17
 * 0000000140548ED0: mov     ecx, 40000073h
 * 0000000140548ED5: jmp     short loc_140548F17
 * 0000000140548ED7: mov     ecx, 40000004h
 * 0000000140548EDC: jmp     short loc_140548F17
 * 0000000140548EDE: mov     eax, 0A000Ah
 * 0000000140548EE3: cmp     r8d, eax
 * 0000000140548EE6: jg      short loc_140548F26
 * 0000000140548EE8: jz      short loc_140548F10
 * 0000000140548EEA: sub     ecx, 0A0003h
 * 0000000140548EF0: jz      short loc_140548F10
 * 0000000140548EF2: sub     ecx, 1
 * 0000000140548EF5: jz      short loc_140548F10
 * 0000000140548EF7: sub     ecx, 1
 * 0000000140548EFA: jz      short loc_140548F10
 * 0000000140548EFC: sub     ecx, 1
 * 0000000140548EFF: jz      short loc_140548F10
 * 0000000140548F01: sub     ecx, 1
 * 0000000140548F04: jz      short loc_140548F10
 * 0000000140548F06: sub     ecx, 1
 * 0000000140548F09: jz      short loc_140548F10
 * 0000000140548F0B: cmp     ecx, 1
 * 0000000140548F0E: jnz     short loc_140548F47
 * 0000000140548F10: lea     ecx, [r8+3FF60090h]
 * 0000000140548F17: mov     rax, rdx
 * 0000000140548F1A: shr     rdx, 20h
 * 0000000140548F1E: wrmsr
 * 0000000140548F20: add     rsp, 28h
 * 0000000140548F24: retn
 * 0000000140548F26: sub     ecx, 0A000Bh
 * 0000000140548F2C: jz      short loc_140548F10
 * 0000000140548F2E: sub     ecx, 1
 * 0000000140548F31: jz      short loc_140548F10
 * 0000000140548F33: sub     ecx, 1
 * 0000000140548F36: jz      short loc_140548F10
 * 0000000140548F38: sub     ecx, 1
 * 0000000140548F3B: jz      short loc_140548F10
 * 0000000140548F3D: sub     ecx, 1
 * 0000000140548F40: jz      short loc_140548F10
 * 0000000140548F42: cmp     ecx, 4
 * 0000000140548F45: jz      short loc_140548F55
 * 0000000140548F47: lea     rcx, qword_140C0D0D0; ULONG_PTR
 * 0000000140548F4E: call    RtlRaiseException
 * 0000000140548F53: jmp     short loc_140548F20
 * 0000000140548F55: mov     ecx, 40000083h
 * 0000000140548F5A: jmp     short loc_140548F17
 */
