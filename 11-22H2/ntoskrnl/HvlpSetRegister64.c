/*
 * XREFs of HvlpSetRegister64 @ 0x140548ED0
 * Callers:
 *     HvlEnlightenProcessor @ 0x140382F20 (HvlEnlightenProcessor.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x14053F5FC (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlLogGuestCrashInformation @ 0x14053FA00 (HvlLogGuestCrashInformation.c)
 *     HvlSetGuestSchedulerEventRegister @ 0x140540660 (HvlSetGuestSchedulerEventRegister.c)
 *     HvlpPhase0Enlightenments @ 0x1405494BC (HvlpPhase0Enlightenments.c)
 *     HvlpTryToLockCpuManagementVersion @ 0x140549678 (HvlpTryToLockCpuManagementVersion.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmHvSetVirtualProcessorQos @ 0x1405A0144 (PpmHvSetVirtualProcessorQos.c)
 *     HvlDeleteProcessor @ 0x1409412AC (HvlDeleteProcessor.c)
 * Callees:
 *     RtlRaiseException @ 0x14030D3B0 (RtlRaiseException.c)
 */

/*
 * Hex-Rays decompilation failed for HvlpSetRegister64 @ 0x140548ED0
 * Reason: Hex-Rays returned no pseudocode for 0x140548ED0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140548ED0: sub     rsp, 28h
 * 0000000140548ED4: mov     eax, 0A0002h
 * 0000000140548ED9: mov     r8d, ecx
 * 0000000140548EDC: cmp     ecx, eax
 * 0000000140548EDE: jg      loc_140548F7E
 * 0000000140548EE4: jz      loc_140548FB0
 * 0000000140548EEA: mov     eax, 90002h
 * 0000000140548EEF: cmp     ecx, eax
 * 0000000140548EF1: jg      short loc_140548F43
 * 0000000140548EF3: jz      short loc_140548F3C
 * 0000000140548EF5: sub     ecx, 210h
 * 0000000140548EFB: jz      short loc_140548F33
 * 0000000140548EFD: sub     ecx, 1
 * 0000000140548F00: jz      short loc_140548F33
 * 0000000140548F02: sub     ecx, 1
 * 0000000140548F05: jz      short loc_140548F33
 * 0000000140548F07: sub     ecx, 1
 * 0000000140548F0A: jz      short loc_140548F33
 * 0000000140548F0C: sub     ecx, 1
 * 0000000140548F0F: jz      short loc_140548F33
 * 0000000140548F11: sub     ecx, 1
 * 0000000140548F14: jz      short loc_140548F29
 * 0000000140548F16: cmp     ecx, 5Bh ; '['
 * 0000000140548F19: jnz     loc_140548FE7
 * 0000000140548F1F: mov     ecx, 40000116h
 * 0000000140548F24: jmp     loc_140548FB7
 * 0000000140548F29: mov     ecx, 40000105h
 * 0000000140548F2E: jmp     loc_140548FB7
 * 0000000140548F33: lea     ecx, [r8+3FFFFEF0h]
 * 0000000140548F3A: jmp     short loc_140548FB7
 * 0000000140548F3C: mov     ecx, 40000000h
 * 0000000140548F41: jmp     short loc_140548FB7
 * 0000000140548F43: sub     ecx, 90007h
 * 0000000140548F49: jz      short loc_140548F77
 * 0000000140548F4B: sub     ecx, 0Ch
 * 0000000140548F4E: jz      short loc_140548F70
 * 0000000140548F50: sub     ecx, 4
 * 0000000140548F53: jz      short loc_140548F69
 * 0000000140548F55: sub     ecx, 4
 * 0000000140548F58: jz      short loc_140548F62
 * 0000000140548F5A: sub     ecx, 0FFE5h
 * 0000000140548F60: jmp     short loc_140548FA9
 * 0000000140548F62: mov     ecx, 400000C2h
 * 0000000140548F67: jmp     short loc_140548FB7
 * 0000000140548F69: mov     ecx, 40000021h
 * 0000000140548F6E: jmp     short loc_140548FB7
 * 0000000140548F70: mov     ecx, 40000073h
 * 0000000140548F75: jmp     short loc_140548FB7
 * 0000000140548F77: mov     ecx, 40000004h
 * 0000000140548F7C: jmp     short loc_140548FB7
 * 0000000140548F7E: mov     eax, 0A000Ah
 * 0000000140548F83: cmp     r8d, eax
 * 0000000140548F86: jg      short loc_140548FC6
 * 0000000140548F88: jz      short loc_140548FB0
 * 0000000140548F8A: sub     ecx, 0A0003h
 * 0000000140548F90: jz      short loc_140548FB0
 * 0000000140548F92: sub     ecx, 1
 * 0000000140548F95: jz      short loc_140548FB0
 * 0000000140548F97: sub     ecx, 1
 * 0000000140548F9A: jz      short loc_140548FB0
 * 0000000140548F9C: sub     ecx, 1
 * 0000000140548F9F: jz      short loc_140548FB0
 * 0000000140548FA1: sub     ecx, 1
 * 0000000140548FA4: jz      short loc_140548FB0
 * 0000000140548FA6: sub     ecx, 1
 * 0000000140548FA9: jz      short loc_140548FB0
 * 0000000140548FAB: cmp     ecx, 1
 * 0000000140548FAE: jnz     short loc_140548FE7
 * 0000000140548FB0: lea     ecx, [r8+3FF60090h]
 * 0000000140548FB7: mov     rax, rdx
 * 0000000140548FBA: shr     rdx, 20h
 * 0000000140548FBE: wrmsr
 * 0000000140548FC0: add     rsp, 28h
 * 0000000140548FC4: retn
 * 0000000140548FC6: sub     ecx, 0A000Bh
 * 0000000140548FCC: jz      short loc_140548FB0
 * 0000000140548FCE: sub     ecx, 1
 * 0000000140548FD1: jz      short loc_140548FB0
 * 0000000140548FD3: sub     ecx, 1
 * 0000000140548FD6: jz      short loc_140548FB0
 * 0000000140548FD8: sub     ecx, 1
 * 0000000140548FDB: jz      short loc_140548FB0
 * 0000000140548FDD: sub     ecx, 1
 * 0000000140548FE0: jz      short loc_140548FB0
 * 0000000140548FE2: cmp     ecx, 4
 * 0000000140548FE5: jz      short loc_140548FF5
 * 0000000140548FE7: lea     rcx, qword_140C0D0D0; ULONG_PTR
 * 0000000140548FEE: call    RtlRaiseException
 * 0000000140548FF3: jmp     short loc_140548FC0
 * 0000000140548FF5: mov     ecx, 40000083h
 * 0000000140548FFA: jmp     short loc_140548FB7
 */
