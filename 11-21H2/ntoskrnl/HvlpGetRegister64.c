/*
 * XREFs of HvlpGetRegister64 @ 0x14054BFF0
 * Callers:
 *     HvlGetReferenceTime @ 0x14039AF3C (HvlGetReferenceTime.c)
 *     HvlGetReferenceTimeUsingTscPage @ 0x14039AF70 (HvlGetReferenceTimeUsingTscPage.c)
 *     HvlEnlightenProcessor @ 0x1403B6B58 (HvlEnlightenProcessor.c)
 *     HvlLogGuestCrashInformation @ 0x1405434E0 (HvlLogGuestCrashInformation.c)
 *     HvlpPhase0Enlightenments @ 0x14054C654 (HvlpPhase0Enlightenments.c)
 *     HvlpTryToLockCpuManagementVersion @ 0x14054C810 (HvlpTryToLockCpuManagementVersion.c)
 *     HvlDeleteProcessor @ 0x140931100 (HvlDeleteProcessor.c)
 * Callees:
 *     RtlRaiseException @ 0x140294A60 (RtlRaiseException.c)
 */

/*
 * Hex-Rays decompilation failed for HvlpGetRegister64 @ 0x14054BFF0
 * Reason: Hex-Rays returned no pseudocode for 0x14054BFF0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014054BFF0: sub     rsp, 28h
 * 000000014054BFF4: mov     eax, 90004h
 * 000000014054BFF9: mov     r8, rdx
 * 000000014054BFFC: cmp     ecx, eax
 * 000000014054BFFE: jg      short loc_14054C064
 * 000000014054C000: jz      short loc_14054C05D
 * 000000014054C002: cmp     ecx, 210h
 * 000000014054C008: jl      loc_14054C0A3
 * 000000014054C00E: cmp     ecx, 214h
 * 000000014054C014: jle     short loc_14054C055
 * 000000014054C016: cmp     ecx, 215h
 * 000000014054C01C: jz      short loc_14054C04E
 * 000000014054C01E: cmp     ecx, 270h
 * 000000014054C024: jz      short loc_14054C047
 * 000000014054C026: cmp     ecx, 90002h
 * 000000014054C02C: jz      short loc_14054C040
 * 000000014054C02E: cmp     ecx, 90003h
 * 000000014054C034: jnz     short loc_14054C0A3
 * 000000014054C036: mov     ecx, 40000002h
 * 000000014054C03B: jmp     loc_14054C0C4
 * 000000014054C040: mov     ecx, 40000000h
 * 000000014054C045: jmp     short loc_14054C0C4
 * 000000014054C047: mov     ecx, 40000116h
 * 000000014054C04C: jmp     short loc_14054C0C4
 * 000000014054C04E: mov     ecx, 40000105h
 * 000000014054C053: jmp     short loc_14054C0C4
 * 000000014054C055: add     ecx, 3FFFFEF0h
 * 000000014054C05B: jmp     short loc_14054C0C4
 * 000000014054C05D: mov     ecx, 40000020h
 * 000000014054C062: jmp     short loc_14054C0C4
 * 000000014054C064: cmp     ecx, 90007h
 * 000000014054C06A: jz      short loc_14054C0BF
 * 000000014054C06C: cmp     ecx, 90013h
 * 000000014054C072: jz      short loc_14054C0B8
 * 000000014054C074: cmp     ecx, 90017h
 * 000000014054C07A: jz      short loc_14054C0B1
 * 000000014054C07C: cmp     ecx, 9FFFFh
 * 000000014054C082: jle     short loc_14054C0A3
 * 000000014054C084: cmp     ecx, 0A000Fh
 * 000000014054C08A: jle     short loc_14054C09B
 * 000000014054C08C: cmp     ecx, 0A0013h
 * 000000014054C092: jnz     short loc_14054C0A3
 * 000000014054C094: mov     ecx, 40000083h
 * 000000014054C099: jmp     short loc_14054C0C4
 * 000000014054C09B: add     ecx, 3FF60090h
 * 000000014054C0A1: jmp     short loc_14054C0C4
 * 000000014054C0A3: lea     rcx, unk_140C0CB00
 * 000000014054C0AA: call    RtlRaiseException
 * 000000014054C0AF: jmp     short loc_14054C0D0
 * 000000014054C0B1: mov     ecx, 40000021h
 * 000000014054C0B6: jmp     short loc_14054C0C4
 * 000000014054C0B8: mov     ecx, 40000073h
 * 000000014054C0BD: jmp     short loc_14054C0C4
 * 000000014054C0BF: mov     ecx, 40000004h
 * 000000014054C0C4: rdmsr
 * 000000014054C0C6: shl     rdx, 20h
 * 000000014054C0CA: or      rax, rdx
 * 000000014054C0CD: mov     [r8], rax
 * 000000014054C0D0: add     rsp, 28h
 * 000000014054C0D4: retn
 */
