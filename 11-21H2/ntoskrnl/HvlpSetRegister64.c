/*
 * XREFs of HvlpSetRegister64 @ 0x14054C0E0
 * Callers:
 *     HvlEnlightenProcessor @ 0x1403B6B58 (HvlEnlightenProcessor.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x1405430DC (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlLogGuestCrashInformation @ 0x1405434E0 (HvlLogGuestCrashInformation.c)
 *     HvlpPhase0Enlightenments @ 0x14054C654 (HvlpPhase0Enlightenments.c)
 *     HvlpTryToLockCpuManagementVersion @ 0x14054C810 (HvlpTryToLockCpuManagementVersion.c)
 *     HvlDeleteProcessor @ 0x140931100 (HvlDeleteProcessor.c)
 * Callees:
 *     RtlRaiseException @ 0x140294A60 (RtlRaiseException.c)
 */

/*
 * Hex-Rays decompilation failed for HvlpSetRegister64 @ 0x14054C0E0
 * Reason: Hex-Rays returned no pseudocode for 0x14054C0E0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014054C0E0: sub     rsp, 28h
 * 000000014054C0E4: mov     eax, 90007h
 * 000000014054C0E9: cmp     ecx, eax
 * 000000014054C0EB: jg      short loc_14054C13B
 * 000000014054C0ED: jz      short loc_14054C134
 * 000000014054C0EF: cmp     ecx, 210h
 * 000000014054C0F5: jl      short loc_14054C172
 * 000000014054C0F7: cmp     ecx, 214h
 * 000000014054C0FD: jle     short loc_14054C12C
 * 000000014054C0FF: cmp     ecx, 215h
 * 000000014054C105: jz      short loc_14054C125
 * 000000014054C107: cmp     ecx, 270h
 * 000000014054C10D: jz      short loc_14054C11E
 * 000000014054C10F: cmp     ecx, 90002h
 * 000000014054C115: jnz     short loc_14054C172
 * 000000014054C117: mov     ecx, 40000000h
 * 000000014054C11C: jmp     short loc_14054C18C
 * 000000014054C11E: mov     ecx, 40000116h
 * 000000014054C123: jmp     short loc_14054C18C
 * 000000014054C125: mov     ecx, 40000105h
 * 000000014054C12A: jmp     short loc_14054C18C
 * 000000014054C12C: add     ecx, 3FFFFEF0h
 * 000000014054C132: jmp     short loc_14054C18C
 * 000000014054C134: mov     ecx, 40000004h
 * 000000014054C139: jmp     short loc_14054C18C
 * 000000014054C13B: cmp     ecx, 90013h
 * 000000014054C141: jz      short loc_14054C187
 * 000000014054C143: cmp     ecx, 90017h
 * 000000014054C149: jz      short loc_14054C180
 * 000000014054C14B: cmp     ecx, 9FFFFh
 * 000000014054C151: jle     short loc_14054C172
 * 000000014054C153: cmp     ecx, 0A000Fh
 * 000000014054C159: jle     short loc_14054C16A
 * 000000014054C15B: cmp     ecx, 0A0013h
 * 000000014054C161: jnz     short loc_14054C172
 * 000000014054C163: mov     ecx, 40000083h
 * 000000014054C168: jmp     short loc_14054C18C
 * 000000014054C16A: add     ecx, 3FF60090h
 * 000000014054C170: jmp     short loc_14054C18C
 * 000000014054C172: lea     rcx, unk_140C0CB00
 * 000000014054C179: call    RtlRaiseException
 * 000000014054C17E: jmp     short loc_14054C195
 * 000000014054C180: mov     ecx, 40000021h
 * 000000014054C185: jmp     short loc_14054C18C
 * 000000014054C187: mov     ecx, 40000073h
 * 000000014054C18C: mov     rax, rdx
 * 000000014054C18F: shr     rdx, 20h
 * 000000014054C193: wrmsr
 * 000000014054C195: add     rsp, 28h
 * 000000014054C199: retn
 */
