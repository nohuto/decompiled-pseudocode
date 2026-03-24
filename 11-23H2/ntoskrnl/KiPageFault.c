/*
 * XREFs of KiPageFault @ 0x14042F900
 * Callers:
 *     KiPageFaultShadow @ 0x140AF6840 (KiPageFaultShadow.c)
 * Callees:
 *     MmAccessFault @ 0x140235370 (MmAccessFault.c)
 *     KiCheckForSListAddress @ 0x14030FDE0 (KiCheckForSListAddress.c)
 *     KiRestoreDebugRegisterState @ 0x14041EF20 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041EFA0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041FD40 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140424E20 (KiInitiateUserApc.c)
 *     KiPageFault @ 0x14042F900 (KiPageFault.c)
 *     KiBugCheckDispatch @ 0x1404348C0 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140434940 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435300 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiUpdateStibpPairing @ 0x140460E20 (KiUpdateStibpPairing.c)
 *     PsWatchWorkingSet @ 0x1404638C0 (PsWatchWorkingSet.c)
 *     KdSetOwedBreakpoints @ 0x140568030 (KdSetOwedBreakpoints.c)
 *     KiCopyCounters @ 0x1405741A0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiPageFault @ 0x14042F900
 * Reason: Hex-Rays returned no pseudocode for 0x14042F900
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014042F900: push    rbp
 * 000000014042F901: sub     rsp, 158h
 * 000000014042F908: lea     rbp, [rsp+80h]
 * 000000014042F910: mov     [rbp+0D8h+var_12D], 1
 * 000000014042F914: mov     [rbp+0D8h+var_128], rax
 * 000000014042F918: mov     [rbp+0D8h+var_120], rcx
 * 000000014042F91C: mov     [rbp+0D8h+var_118], rdx
 * 000000014042F920: mov     [rbp+0D8h+var_110], r8
 * 000000014042F924: mov     [rbp+0D8h+var_108], r9
 * 000000014042F928: mov     [rbp+0D8h+var_100], r10
 * 000000014042F92C: mov     [rbp+0D8h+var_F8], r11
 * 000000014042F930: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014042F937: jnz     short loc_14042F973
 * 000000014042F939: xor     edx, edx
 * 000000014042F93B: rdsspq  rdx
 * 000000014042F940: mov     [rbp+0D8h+var_80], rdx
 * 000000014042F944: lfence
 * 000000014042F947: test    word ptr gs:860h, 1
 * 000000014042F952: jnz     short loc_14042F95C
 * 000000014042F954: lfence
 * 000000014042F957: jmp     loc_14042FBFA
 * 000000014042F95C: movzx   eax, word ptr gs:864h
 * 000000014042F965: mov     ecx, 48h ; 'H'
 * 000000014042F96A: xor     edx, edx
 * 000000014042F96C: wrmsr
 * 000000014042F96E: jmp     loc_14042FBFA
 * 000000014042F973: test    cs:KiKvaShadow, 1
 * 000000014042F97A: jnz     short loc_14042F97F
 * 000000014042F97C: swapgs
 * 000000014042F97F: lfence
 * 000000014042F982: mov     rcx, gs:95A8h
 * 000000014042F98B: test    rcx, rcx
 * 000000014042F98E: jz      short loc_14042F9AF
 * 000000014042F990: rdsspq  rdx
 * 000000014042F995: mov     r10, gs:95A0h
 * 000000014042F99E: add     r10, 8
 * 000000014042F9A2: cmp     rdx, r10
 * 000000014042F9A5: jnz     short loc_14042F9AF
 * 000000014042F9A7: rstorssp qword ptr [rcx]
 * 000000014042F9AB: saveprevssp
 * 000000014042F9AF: mov     r10, gs:188h
 * 000000014042F9B8: mov     rcx, gs:188h
 * 000000014042F9C1: mov     rcx, [rcx+220h]
 * 000000014042F9C8: mov     rcx, [rcx+9E0h]
 * 000000014042F9CF: mov     gs:858h, rcx
 * 000000014042F9D8: mov     cx, gs:850h
 * 000000014042F9E1: mov     gs:852h, cx
 * 000000014042F9EA: mov     cx, gs:860h
 * 000000014042F9F3: mov     gs:854h, cx
 * 000000014042F9FC: movzx   eax, word ptr gs:866h
 * 000000014042FA05: cmp     gs:864h, ax
 * 000000014042FA0E: jz      short loc_14042FA22
 * 000000014042FA10: mov     gs:864h, ax
 * 000000014042FA19: mov     ecx, 48h ; 'H'
 * 000000014042FA1E: xor     edx, edx
 * 000000014042FA20: wrmsr
 * 000000014042FA22: movzx   edx, word ptr gs:860h
 * 000000014042FA2B: test    edx, 8
 * 000000014042FA31: jz      short loc_14042FA4A
 * 000000014042FA33: mov     eax, 1
 * 000000014042FA38: xor     edx, edx
 * 000000014042FA3A: mov     ecx, 49h ; 'I'
 * 000000014042FA3F: wrmsr
 * 000000014042FA41: movzx   edx, word ptr gs:860h
 * 000000014042FA4A: test    edx, 2
 * 000000014042FA50: jz      loc_14042FB8D
 * 000000014042FA56: call    loc_14042FB69
 * 000000014042FA5B: add     rsp, 8
 * 000000014042FA5F: call    loc_14042FB72
 * 000000014042FA64: add     rsp, 8
 * 000000014042FA68: call    loc_14042FA5B
 * 000000014042FA6D: add     rsp, 8
 * 000000014042FA71: call    loc_14042FA64
 * 000000014042FA76: add     rsp, 8
 * 000000014042FA7A: call    loc_14042FA6D
 * 000000014042FA7F: add     rsp, 8
 * 000000014042FA83: call    loc_14042FA76
 * 000000014042FA88: add     rsp, 8
 * 000000014042FA8C: call    loc_14042FA7F
 * 000000014042FA91: add     rsp, 8
 * 000000014042FA95: call    loc_14042FA88
 * 000000014042FA9A: add     rsp, 8
 * 000000014042FA9E: call    loc_14042FA91
 * 000000014042FAA3: add     rsp, 8
 * 000000014042FAA7: call    loc_14042FA9A
 * 000000014042FAAC: add     rsp, 8
 * 000000014042FAB0: call    loc_14042FAA3
 * 000000014042FAB5: add     rsp, 8
 * 000000014042FAB9: call    loc_14042FAAC
 * 000000014042FABE: add     rsp, 8
 * 000000014042FAC2: call    loc_14042FAB5
 * 000000014042FAC7: add     rsp, 8
 * 000000014042FACB: call    loc_14042FABE
 * 000000014042FAD0: add     rsp, 8
 * 000000014042FAD4: call    loc_14042FAC7
 * 000000014042FAD9: add     rsp, 8
 * 000000014042FADD: call    loc_14042FAD0
 * 000000014042FAE2: add     rsp, 8
 * 000000014042FAE6: call    loc_14042FAD9
 * 000000014042FAEB: add     rsp, 8
 * 000000014042FAEF: call    loc_14042FAE2
 * 000000014042FAF4: add     rsp, 8
 * 000000014042FAF8: call    loc_14042FAEB
 * 000000014042FAFD: add     rsp, 8
 * 000000014042FB01: call    loc_14042FAF4
 * 000000014042FB06: add     rsp, 8
 * 000000014042FB0A: call    loc_14042FAFD
 * 000000014042FB0F: add     rsp, 8
 * 000000014042FB13: call    loc_14042FB06
 * 000000014042FB18: add     rsp, 8
 * 000000014042FB1C: call    loc_14042FB0F
 * 000000014042FB21: add     rsp, 8
 * 000000014042FB25: call    loc_14042FB18
 * 000000014042FB2A: add     rsp, 8
 * 000000014042FB2E: call    loc_14042FB21
 * 000000014042FB33: add     rsp, 8
 * 000000014042FB37: call    loc_14042FB2A
 * 000000014042FB3C: add     rsp, 8
 * 000000014042FB40: call    loc_14042FB33
 * 000000014042FB45: add     rsp, 8
 * 000000014042FB49: call    loc_14042FB3C
 * 000000014042FB4E: add     rsp, 8
 * 000000014042FB52: call    loc_14042FB45
 * 000000014042FB57: add     rsp, 8
 * 000000014042FB5B: call    loc_14042FB4E
 * 000000014042FB60: add     rsp, 8
 * 000000014042FB64: call    loc_14042FB57
 * 000000014042FB69: add     rsp, 8
 * 000000014042FB6D: call    loc_14042FB60
 * 000000014042FB72: add     rsp, 8
 * 000000014042FB76: mov     eax, 0DADAh
 * 000000014042FB7B: test    byte ptr gs:862h, 8
 * 000000014042FB84: jz      short loc_14042FB8D
 * 000000014042FB86: mov     al, 20h ; ' '
 * 000000014042FB88: incsspq rax
 * 000000014042FB8D: test    edx, 200h
 * 000000014042FB93: jz      short loc_14042FB9A
 * 000000014042FB95: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014042FB9A: lfence
 * 000000014042FB9D: mov     byte ptr gs:856h, 0
 * 000000014042FBA6: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014042FBAD: jz      short loc_14042FBCE
 * 000000014042FBAF: mov     ecx, 6A7h
 * 000000014042FBB4: rdmsr
 * 000000014042FBB6: cmp     edx, 0
 * 000000014042FBB9: jz      short loc_14042FBCE
 * 000000014042FBBB: mov     ecx, edx
 * 000000014042FBBD: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014042FBC3: cmp     edx, ecx
 * 000000014042FBC5: jz      short loc_14042FBCE
 * 000000014042FBC7: mov     ecx, 6A7h
 * 000000014042FBCC: wrmsr
 * 000000014042FBCE: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 000000014042FBD6: jnz     short loc_14042FBE5
 * 000000014042FBD8: mov     ecx, 0C0000102h
 * 000000014042FBDD: rdmsr
 * 000000014042FBDF: mov     dword ptr [rbp+0D8h+var_F0], eax
 * 000000014042FBE2: mov     dword ptr [rbp+0D8h+var_F0+4], edx
 * 000000014042FBE5: test    byte ptr [r10+3], 3
 * 000000014042FBEA: mov     [rbp+0D8h+var_58], 0
 * 000000014042FBF3: jz      short loc_14042FBFA
 * 000000014042FBF5: call    KiSaveDebugRegisterState
 * 000000014042FBFA: cld
 * 000000014042FBFB: stmxcsr [rbp+0D8h+var_12C]
 * 000000014042FBFF: ldmxcsr dword ptr gs:180h
 * 000000014042FC08: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014042FC0C: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014042FC10: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014042FC14: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014042FC18: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014042FC1C: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014042FC20: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042FC27: jz      short loc_14042FC35
 * 000000014042FC29: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014042FC30: jz      short loc_14042FC35
 * 000000014042FC32: stac
 * 000000014042FC35: mov     eax, [rbp+0E0h]
 * 000000014042FC3B: mov     rcx, cr2
 * 000000014042FC3E: test    [rbp+0D8h+arg_10], 200h
 * 000000014042FC48: jz      short loc_14042FC4B
 * 000000014042FC4A: sti
 * 000000014042FC4B: mov     [rbp+0D8h+var_88], rcx
 * 000000014042FC4F: bt      [rbp+0D8h+arg_10], 9
 * 000000014042FC57: jnb     loc_14042FD89
 * 000000014042FC5D: lea     r9, [rbp+0D8h+var_158]
 * 000000014042FC61: mov     r8b, byte ptr [rbp+0D8h+arg_8]
 * 000000014042FC68: and     r8b, 1
 * 000000014042FC6C: mov     rdx, rcx; BugCheckParameter1
 * 000000014042FC6F: mov     ecx, eax; BugCheckParameter2
 * 000000014042FC71: shr     eax, 1
 * 000000014042FC73: and     eax, 9
 * 000000014042FC76: mov     [rbp+0D8h+var_12E], al
 * 000000014042FC79: call    MmAccessFault
 * 000000014042FC7E: test    eax, eax
 * 000000014042FC80: jl      short loc_14042FCB8
 * 000000014042FC82: cmp     cs:PsWatchEnabled, 0
 * 000000014042FC89: jz      short loc_14042FC9D
 * 000000014042FC8B: mov     r8, [rbp+0D8h+var_88]
 * 000000014042FC8F: mov     rdx, [rbp+0D8h+arg_0]
 * 000000014042FC96: mov     ecx, eax
 * 000000014042FC98: call    PsWatchWorkingSet
 * 000000014042FC9D: cmp     cs:KdpOweBreakpoint, 0
 * 000000014042FCA4: jz      loc_14042FD8F
 * 000000014042FCAA: mov     rcx, [rbp+0D8h+var_88]
 * 000000014042FCAE: call    KdSetOwedBreakpoints
 * 000000014042FCB3: jmp     loc_14042FD8F
 * 000000014042FCB8: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014042FCBF: jz      short loc_14042FD13
 * 000000014042FCC1: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 000000014042FCC9: jnz     short loc_14042FD09
 * 000000014042FCCB: mov     r9, gs:188h
 * 000000014042FCD4: test    byte ptr [r9+3], 4
 * 000000014042FCD9: jz      short loc_14042FCE4
 * 000000014042FCDB: mov     r8, [r9+640h]
 * 000000014042FCE2: jmp     short loc_14042FCED
 * 000000014042FCE4: mov     r8, gs:30h
 * 000000014042FCED: cmp     r8, [rbp+0D8h+var_F0]
 * 000000014042FCF1: jz      short loc_14042FD13
 * 000000014042FCF3: mov     ecx, 0C0000102h
 * 000000014042FCF8: mov     eax, r8d
 * 000000014042FCFB: shr     r8, 20h
 * 000000014042FCFF: mov     edx, r8d
 * 000000014042FD02: wrmsr
 * 000000014042FD04: jmp     loc_14042FD8F
 * 000000014042FD09: mov     rcx, [rbp+0D8h+var_88]
 * 000000014042FD0D: shr     rcx, 20h
 * 000000014042FD11: jnz     short loc_14042FD8F
 * 000000014042FD13: mov     ecx, eax
 * 000000014042FD15: mov     edx, 2
 * 000000014042FD1A: cmp     ecx, 0D0000006h
 * 000000014042FD20: jz      short loc_14042FD63
 * 000000014042FD22: cmp     ecx, 0C0000005h
 * 000000014042FD28: jz      short loc_14042FD49
 * 000000014042FD2A: cmp     ecx, 80000001h
 * 000000014042FD30: jz      short loc_14042FD4E
 * 000000014042FD32: cmp     ecx, 0C00000FDh
 * 000000014042FD38: jz      short loc_14042FD4E
 * 000000014042FD3A: mov     ecx, 0C0000006h
 * 000000014042FD3F: mov     edx, 3
 * 000000014042FD44: mov     r11d, eax
 * 000000014042FD47: jmp     short loc_14042FD4E
 * 000000014042FD49: mov     ecx, 10000004h
 * 000000014042FD4E: mov     r10, [rbp+0D8h+var_88]
 * 000000014042FD52: movzx   r9, [rbp+0D8h+var_12E]
 * 000000014042FD57: mov     r8, [rbp+0D8h+arg_0]
 * 000000014042FD5E: call    KiExceptionDispatch
 * 000000014042FD63: mov     rax, cr8
 * 000000014042FD67: mov     r10, [rbp+0D8h+arg_0]
 * 000000014042FD6E: movzx   r9, [rbp+0D8h+var_12E]
 * 000000014042FD73: and     eax, 0FFh
 * 000000014042FD78: mov     r8, rax
 * 000000014042FD7B: mov     rdx, [rbp+0D8h+var_88]
 * 000000014042FD7F: mov     ecx, 0Ah
 * 000000014042FD84: call    KiBugCheckDispatch
 * 000000014042FD89: xor     eax, eax
 * 000000014042FD8B: mov     al, 0FFh
 * 000000014042FD8D: jmp     short loc_14042FD67
 * 000000014042FD8F: mov     rax, cr8
 * 000000014042FD93: or      eax, eax
 * 000000014042FD95: mov     [rbp+0D8h+var_138], eax
 * 000000014042FD98: jnz     short loc_14042FDA3
 * 000000014042FD9A: mov     ecx, 1
 * 000000014042FD9F: mov     cr8, rcx
 * 000000014042FDA3: lea     rcx, [rbp+0D8h+var_158]
 * 000000014042FDA7: call    KiCheckForSListAddress
 * 000000014042FDAC: mov     ecx, [rbp+0D8h+var_138]
 * 000000014042FDAF: or      ecx, ecx
 * 000000014042FDB1: jnz     short loc_14042FDB7
 * 000000014042FDB3: mov     cr8, rcx
 * 000000014042FDB7: cli
 * 000000014042FDB8: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014042FDBF: jz      loc_1404300AD
 * 000000014042FDC5: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042FDCC: jz      short loc_14042FDD1
 * 000000014042FDCE: stac
 * 000000014042FDD1: mov     rcx, gs:188h
 * 000000014042FDDA: test    byte ptr [rcx+0C2h], 3
 * 000000014042FDE1: jz      short loc_14042FDFE
 * 000000014042FDE3: mov     ecx, 1
 * 000000014042FDE8: mov     cr8, rcx
 * 000000014042FDEC: sti
 * 000000014042FDED: call    KiInitiateUserApc
 * 000000014042FDF2: cli
 * 000000014042FDF3: mov     ecx, 0
 * 000000014042FDF8: mov     cr8, rcx
 * 000000014042FDFC: jmp     short loc_14042FDD1
 * 000000014042FDFE: test    byte ptr gs:86Ch, 2
 * 000000014042FE07: jz      short loc_14042FE10
 * 000000014042FE09: xor     ecx, ecx
 * 000000014042FE0B: call    KiUpdateStibpPairing
 * 000000014042FE10: mov     rcx, gs:188h
 * 000000014042FE19: test    dword ptr [rcx], 8000000h
 * 000000014042FE1F: jz      short loc_14042FE26
 * 000000014042FE21: call    KiRestoreSetContextState
 * 000000014042FE26: mov     rcx, gs:188h
 * 000000014042FE2F: test    dword ptr [rcx], 10000h
 * 000000014042FE35: jz      short loc_14042FE4B
 * 000000014042FE37: test    byte ptr [rcx+2], 1
 * 000000014042FE3B: jz      short loc_14042FE4B
 * 000000014042FE3D: call    KiCopyCounters
 * 000000014042FE42: mov     rcx, gs:188h
 * 000000014042FE4B: ldmxcsr [rbp+0D8h+var_12C]
 * 000000014042FE4F: cmp     [rbp+0D8h+var_58], 0
 * 000000014042FE57: jz      short loc_14042FE5E
 * 000000014042FE59: call    KiRestoreDebugRegisterState
 * 000000014042FE5E: mov     rcx, gs:188h
 * 000000014042FE67: bt      dword ptr [rcx+74h], 16h
 * 000000014042FE6C: jnb     short loc_14042FE98
 * 000000014042FE6E: xor     ecx, ecx
 * 000000014042FE70: rdsspq  rcx
 * 000000014042FE75: mov     r8, gs:95A8h
 * 000000014042FE7E: add     r8, 8
 * 000000014042FE82: cmp     rcx, r8
 * 000000014042FE85: jnz     short loc_14042FE98
 * 000000014042FE87: mov     rcx, gs:95A0h
 * 000000014042FE90: rstorssp qword ptr [rcx]
 * 000000014042FE94: saveprevssp
 * 000000014042FE98: movaps  xmm0, [rbp+0D8h+var_E8]
 * 000000014042FE9C: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014042FEA0: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014042FEA4: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014042FEA8: movaps  xmm4, [rbp+0D8h+var_A8]
 * 000000014042FEAC: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014042FEB0: mov     r11, [rbp+0D8h+var_F8]
 * 000000014042FEB4: mov     r10, [rbp+0D8h+var_100]
 * 000000014042FEB8: mov     r9, [rbp+0D8h+var_108]
 * 000000014042FEBC: mov     r8, [rbp+0D8h+var_110]
 * 000000014042FEC0: mov     byte ptr gs:856h, 0
 * 000000014042FEC9: movzx   eax, word ptr gs:86Ah
 * 000000014042FED2: cmp     gs:864h, ax
 * 000000014042FEDB: jz      short loc_14042FEEF
 * 000000014042FEDD: mov     gs:864h, ax
 * 000000014042FEE6: mov     ecx, 48h ; 'H'
 * 000000014042FEEB: xor     edx, edx
 * 000000014042FEED: wrmsr
 * 000000014042FEEF: btr     word ptr gs:860h, 2
 * 000000014042FEFA: jnb     short loc_14042FF0A
 * 000000014042FEFC: mov     eax, 1
 * 000000014042FF01: xor     edx, edx
 * 000000014042FF03: mov     ecx, 49h ; 'I'
 * 000000014042FF08: wrmsr
 * 000000014042FF0A: btr     word ptr gs:860h, 5
 * 000000014042FF15: jnb     loc_140430052
 * 000000014042FF1B: call    loc_14043002E
 * 000000014042FF20: add     rsp, 8
 * 000000014042FF24: call    loc_140430037
 * 000000014042FF29: add     rsp, 8
 * 000000014042FF2D: call    loc_14042FF20
 * 000000014042FF32: add     rsp, 8
 * 000000014042FF36: call    loc_14042FF29
 * 000000014042FF3B: add     rsp, 8
 * 000000014042FF3F: call    loc_14042FF32
 * 000000014042FF44: add     rsp, 8
 * 000000014042FF48: call    loc_14042FF3B
 * 000000014042FF4D: add     rsp, 8
 * 000000014042FF51: call    loc_14042FF44
 * 000000014042FF56: add     rsp, 8
 * 000000014042FF5A: call    loc_14042FF4D
 * 000000014042FF5F: add     rsp, 8
 * 000000014042FF63: call    loc_14042FF56
 * 000000014042FF68: add     rsp, 8
 * 000000014042FF6C: call    loc_14042FF5F
 * 000000014042FF71: add     rsp, 8
 * 000000014042FF75: call    loc_14042FF68
 * 000000014042FF7A: add     rsp, 8
 * 000000014042FF7E: call    loc_14042FF71
 * 000000014042FF83: add     rsp, 8
 * 000000014042FF87: call    loc_14042FF7A
 * 000000014042FF8C: add     rsp, 8
 * 000000014042FF90: call    loc_14042FF83
 * 000000014042FF95: add     rsp, 8
 * 000000014042FF99: call    loc_14042FF8C
 * 000000014042FF9E: add     rsp, 8
 * 000000014042FFA2: call    loc_14042FF95
 * 000000014042FFA7: add     rsp, 8
 * 000000014042FFAB: call    loc_14042FF9E
 * 000000014042FFB0: add     rsp, 8
 * 000000014042FFB4: call    loc_14042FFA7
 * 000000014042FFB9: add     rsp, 8
 * 000000014042FFBD: call    loc_14042FFB0
 * 000000014042FFC2: add     rsp, 8
 * 000000014042FFC6: call    loc_14042FFB9
 * 000000014042FFCB: add     rsp, 8
 * 000000014042FFCF: call    loc_14042FFC2
 * 000000014042FFD4: add     rsp, 8
 * 000000014042FFD8: call    loc_14042FFCB
 * 000000014042FFDD: add     rsp, 8
 * 000000014042FFE1: call    loc_14042FFD4
 * 000000014042FFE6: add     rsp, 8
 * 000000014042FFEA: call    loc_14042FFDD
 * 000000014042FFEF: add     rsp, 8
 * 000000014042FFF3: call    loc_14042FFE6
 * 000000014042FFF8: add     rsp, 8
 * 000000014042FFFC: call    loc_14042FFEF
 * 0000000140430001: add     rsp, 8
 * 0000000140430005: call    loc_14042FFF8
 * 000000014043000A: add     rsp, 8
 * 000000014043000E: call    loc_140430001
 * 0000000140430013: add     rsp, 8
 * 0000000140430017: call    loc_14043000A
 * 000000014043001C: add     rsp, 8
 * 0000000140430020: call    loc_140430013
 * 0000000140430025: add     rsp, 8
 * 0000000140430029: call    loc_14043001C
 * 000000014043002E: add     rsp, 8
 * 0000000140430032: call    loc_140430025
 * 0000000140430037: add     rsp, 8
 * 000000014043003B: mov     eax, 0DADAh
 * 0000000140430040: test    byte ptr gs:862h, 8
 * 0000000140430049: jz      short loc_140430052
 * 000000014043004B: mov     al, 20h ; ' '
 * 000000014043004D: incsspq rax
 * 0000000140430052: test    word ptr gs:860h, 80h
 * 000000014043005D: jz      short loc_14043006B
 * 000000014043005F: xor     eax, eax
 * 0000000140430061: xor     edx, edx
 * 0000000140430063: mov     ecx, 1
 * 0000000140430068: div     rcx
 * 000000014043006B: mov     rdx, [rbp+0D8h+var_118]
 * 000000014043006F: mov     rcx, [rbp+0D8h+var_120]
 * 0000000140430073: mov     rax, [rbp+0D8h+var_128]
 * 0000000140430077: mov     rsp, rbp
 * 000000014043007A: mov     rbp, [rbp+0D8h+var_s0]
 * 0000000140430081: add     rsp, 0E8h
 * 0000000140430088: test    cs:KiKvaShadow, 1
 * 000000014043008F: jz      short loc_140430096
 * 0000000140430091: jmp     KiKernelExit
 * 0000000140430096: test    word ptr gs:860h, 100h
 * 00000001404300A1: jz      short loc_1404300A8
 * 00000001404300A3: verw    [rsp-10h+arg_20]
 * 00000001404300A8: swapgs
 * 00000001404300AB: iretq
 * 00000001404300AD: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001404300B1: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001404300B5: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001404300B9: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001404300BD: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001404300C1: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001404300C5: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001404300C9: mov     r11, [rbp+0D8h+var_F8]
 * 00000001404300CD: mov     r10, [rbp+0D8h+var_100]
 * 00000001404300D1: mov     r9, [rbp+0D8h+var_108]
 * 00000001404300D5: mov     r8, [rbp+0D8h+var_110]
 * 00000001404300D9: mov     rdx, [rbp+0D8h+var_118]
 * 00000001404300DD: mov     rcx, [rbp+0D8h+var_120]
 * 00000001404300E1: mov     rax, [rbp+0D8h+var_128]
 * 00000001404300E5: mov     rsp, rbp
 * 00000001404300E8: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001404300EF: add     rsp, 0E8h
 * 00000001404300F6: iretq
 */
