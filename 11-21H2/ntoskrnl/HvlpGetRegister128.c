/*
 * XREFs of HvlpGetRegister128 @ 0x14054BF60
 * Callers:
 *     HvlSvmGetSystemCapabilities @ 0x140548D80 (HvlSvmGetSystemCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x14054C1A4 (HvlpDetermineEnlightenments.c)
 * Callees:
 *     RtlRaiseException @ 0x140294A60 (RtlRaiseException.c)
 */

/*
 * Hex-Rays decompilation failed for HvlpGetRegister128 @ 0x14054BF60
 * Reason: Hex-Rays returned no pseudocode for 0x14054BF60
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014054BF60: push    rbx
 * 000000014054BF62: sub     rsp, 20h
 * 000000014054BF66: mov     eax, 100h
 * 000000014054BF6B: mov     r8, rdx
 * 000000014054BF6E: sub     ecx, eax
 * 000000014054BF70: jz      short loc_14054BFC7
 * 000000014054BF72: sub     ecx, eax
 * 000000014054BF74: jz      short loc_14054BFC0
 * 000000014054BF76: sub     ecx, 1
 * 000000014054BF79: jz      short loc_14054BFB9
 * 000000014054BF7B: sub     ecx, 1
 * 000000014054BF7E: jz      short loc_14054BFB2
 * 000000014054BF80: sub     ecx, 1
 * 000000014054BF83: jz      short loc_14054BFAB
 * 000000014054BF85: sub     ecx, 1
 * 000000014054BF88: jz      short loc_14054BFA4
 * 000000014054BF8A: cmp     ecx, 1
 * 000000014054BF8D: jz      short loc_14054BF9D
 * 000000014054BF8F: lea     rcx, unk_140C0CB00
 * 000000014054BF96: call    RtlRaiseException
 * 000000014054BF9B: jmp     short loc_14054BFDF
 * 000000014054BF9D: mov     eax, 40000008h
 * 000000014054BFA2: jmp     short loc_14054BFCC
 * 000000014054BFA4: mov     eax, 40000007h
 * 000000014054BFA9: jmp     short loc_14054BFCC
 * 000000014054BFAB: mov     eax, 40000006h
 * 000000014054BFB0: jmp     short loc_14054BFCC
 * 000000014054BFB2: mov     eax, 40000005h
 * 000000014054BFB7: jmp     short loc_14054BFCC
 * 000000014054BFB9: mov     eax, 40000004h
 * 000000014054BFBE: jmp     short loc_14054BFCC
 * 000000014054BFC0: mov     eax, 40000003h
 * 000000014054BFC5: jmp     short loc_14054BFCC
 * 000000014054BFC7: mov     eax, 40000002h
 * 000000014054BFCC: xor     ecx, ecx
 * 000000014054BFCE: cpuid
 * 000000014054BFD0: mov     [r8], eax
 * 000000014054BFD3: mov     [r8+4], ebx
 * 000000014054BFD7: mov     [r8+8], ecx
 * 000000014054BFDB: mov     [r8+0Ch], edx
 * 000000014054BFDF: add     rsp, 20h
 * 000000014054BFE3: pop     rbx
 * 000000014054BFE4: retn
 */
