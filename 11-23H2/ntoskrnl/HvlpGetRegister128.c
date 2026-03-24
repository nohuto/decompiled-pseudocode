/*
 * XREFs of HvlpGetRegister128 @ 0x140548C50
 * Callers:
 *     HvlGetSystemPasidCapabilities @ 0x140544450 (HvlGetSystemPasidCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x140548F64 (HvlpDetermineEnlightenments.c)
 * Callees:
 *     RtlRaiseException @ 0x14030D590 (RtlRaiseException.c)
 */

/*
 * Hex-Rays decompilation failed for HvlpGetRegister128 @ 0x140548C50
 * Reason: Hex-Rays returned no pseudocode for 0x140548C50
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140548C50: push    rbx
 * 0000000140548C52: sub     rsp, 20h
 * 0000000140548C56: mov     eax, 100h
 * 0000000140548C5B: mov     r8, rdx
 * 0000000140548C5E: sub     ecx, eax
 * 0000000140548C60: jz      short loc_140548CB7
 * 0000000140548C62: sub     ecx, eax
 * 0000000140548C64: jz      short loc_140548CB0
 * 0000000140548C66: sub     ecx, 1
 * 0000000140548C69: jz      short loc_140548CA9
 * 0000000140548C6B: sub     ecx, 1
 * 0000000140548C6E: jz      short loc_140548CA2
 * 0000000140548C70: sub     ecx, 1
 * 0000000140548C73: jz      short loc_140548C9B
 * 0000000140548C75: sub     ecx, 1
 * 0000000140548C78: jz      short loc_140548C94
 * 0000000140548C7A: cmp     ecx, 1
 * 0000000140548C7D: jz      short loc_140548C8D
 * 0000000140548C7F: lea     rcx, qword_140C0D0D0; ULONG_PTR
 * 0000000140548C86: call    RtlRaiseException
 * 0000000140548C8B: jmp     short loc_140548CCF
 * 0000000140548C8D: mov     eax, 40000008h
 * 0000000140548C92: jmp     short loc_140548CBC
 * 0000000140548C94: mov     eax, 40000007h
 * 0000000140548C99: jmp     short loc_140548CBC
 * 0000000140548C9B: mov     eax, 40000006h
 * 0000000140548CA0: jmp     short loc_140548CBC
 * 0000000140548CA2: mov     eax, 40000005h
 * 0000000140548CA7: jmp     short loc_140548CBC
 * 0000000140548CA9: mov     eax, 40000004h
 * 0000000140548CAE: jmp     short loc_140548CBC
 * 0000000140548CB0: mov     eax, 40000003h
 * 0000000140548CB5: jmp     short loc_140548CBC
 * 0000000140548CB7: mov     eax, 40000002h
 * 0000000140548CBC: xor     ecx, ecx
 * 0000000140548CBE: cpuid
 * 0000000140548CC0: mov     [r8], eax
 * 0000000140548CC3: mov     [r8+4], ebx
 * 0000000140548CC7: mov     [r8+8], ecx
 * 0000000140548CCB: mov     [r8+0Ch], edx
 * 0000000140548CCF: add     rsp, 20h
 * 0000000140548CD3: pop     rbx
 * 0000000140548CD4: retn
 */
