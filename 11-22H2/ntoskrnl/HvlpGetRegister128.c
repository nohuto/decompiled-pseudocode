/*
 * XREFs of HvlpGetRegister128 @ 0x140548CF0
 * Callers:
 *     HvlGetSystemPasidCapabilities @ 0x1405444F0 (HvlGetSystemPasidCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x140549004 (HvlpDetermineEnlightenments.c)
 * Callees:
 *     RtlRaiseException @ 0x14030D3B0 (RtlRaiseException.c)
 */

/*
 * Hex-Rays decompilation failed for HvlpGetRegister128 @ 0x140548CF0
 * Reason: Hex-Rays returned no pseudocode for 0x140548CF0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140548CF0: push    rbx
 * 0000000140548CF2: sub     rsp, 20h
 * 0000000140548CF6: mov     eax, 100h
 * 0000000140548CFB: mov     r8, rdx
 * 0000000140548CFE: sub     ecx, eax
 * 0000000140548D00: jz      short loc_140548D57
 * 0000000140548D02: sub     ecx, eax
 * 0000000140548D04: jz      short loc_140548D50
 * 0000000140548D06: sub     ecx, 1
 * 0000000140548D09: jz      short loc_140548D49
 * 0000000140548D0B: sub     ecx, 1
 * 0000000140548D0E: jz      short loc_140548D42
 * 0000000140548D10: sub     ecx, 1
 * 0000000140548D13: jz      short loc_140548D3B
 * 0000000140548D15: sub     ecx, 1
 * 0000000140548D18: jz      short loc_140548D34
 * 0000000140548D1A: cmp     ecx, 1
 * 0000000140548D1D: jz      short loc_140548D2D
 * 0000000140548D1F: lea     rcx, qword_140C0D0D0; ULONG_PTR
 * 0000000140548D26: call    RtlRaiseException
 * 0000000140548D2B: jmp     short loc_140548D6F
 * 0000000140548D2D: mov     eax, 40000008h
 * 0000000140548D32: jmp     short loc_140548D5C
 * 0000000140548D34: mov     eax, 40000007h
 * 0000000140548D39: jmp     short loc_140548D5C
 * 0000000140548D3B: mov     eax, 40000006h
 * 0000000140548D40: jmp     short loc_140548D5C
 * 0000000140548D42: mov     eax, 40000005h
 * 0000000140548D47: jmp     short loc_140548D5C
 * 0000000140548D49: mov     eax, 40000004h
 * 0000000140548D4E: jmp     short loc_140548D5C
 * 0000000140548D50: mov     eax, 40000003h
 * 0000000140548D55: jmp     short loc_140548D5C
 * 0000000140548D57: mov     eax, 40000002h
 * 0000000140548D5C: xor     ecx, ecx
 * 0000000140548D5E: cpuid
 * 0000000140548D60: mov     [r8], eax
 * 0000000140548D63: mov     [r8+4], ebx
 * 0000000140548D67: mov     [r8+8], ecx
 * 0000000140548D6B: mov     [r8+0Ch], edx
 * 0000000140548D6F: add     rsp, 20h
 * 0000000140548D73: pop     rbx
 * 0000000140548D74: retn
 */
