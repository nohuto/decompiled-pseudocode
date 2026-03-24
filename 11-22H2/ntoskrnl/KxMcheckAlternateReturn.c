/*
 * XREFs of KxMcheckAlternateReturn @ 0x1404309C0
 * Callers:
 *     KxMcheckAlternateReturnShadow @ 0x140AF7A40 (KxMcheckAlternateReturnShadow.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x14041E860 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041E8E0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041F680 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140424760 (KiInitiateUserApc.c)
 *     KxMcheckAlternateReturn @ 0x1404309C0 (KxMcheckAlternateReturn.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140434D00 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiUpdateStibpPairing @ 0x1404607C0 (KiUpdateStibpPairing.c)
 *     KiCopyCounters @ 0x140574240 (KiCopyCounters.c)
 *     KiMcheckAlternateReturn @ 0x140580420 (KiMcheckAlternateReturn.c)
 */

/*
 * Hex-Rays decompilation failed for KxMcheckAlternateReturn @ 0x1404309C0
 * Reason: Hex-Rays returned no pseudocode for 0x1404309C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404309C0: sub     rsp, 8
 * 00000001404309C4: push    rbp
 * 00000001404309C5: sub     rsp, 158h
 * 00000001404309CC: lea     rbp, [rsp+80h]
 * 00000001404309D4: mov     [rbp+0E8h+var_13D], 1
 * 00000001404309D8: mov     [rbp+0E8h+var_138], rax
 * 00000001404309DC: mov     [rbp+0E8h+var_130], rcx
 * 00000001404309E0: mov     [rbp+0E8h+var_128], rdx
 * 00000001404309E4: mov     [rbp+0E8h+var_120], r8
 * 00000001404309E8: mov     [rbp+0E8h+var_118], r9
 * 00000001404309EC: mov     [rbp+0E8h+var_110], r10
 * 00000001404309F0: mov     [rbp+0E8h+var_108], r11
 * 00000001404309F4: test    [rbp+0E8h+arg_0], 1
 * 00000001404309FB: jnz     short loc_140430A37
 * 00000001404309FD: xor     edx, edx
 * 00000001404309FF: rdsspq  rdx
 * 0000000140430A04: mov     [rbp+0E8h+var_90], rdx
 * 0000000140430A08: lfence
 * 0000000140430A0B: test    word ptr gs:860h, 1
 * 0000000140430A16: jnz     short loc_140430A20
 * 0000000140430A18: lfence
 * 0000000140430A1B: jmp     loc_140430CA7
 * 0000000140430A20: movzx   eax, word ptr gs:864h
 * 0000000140430A29: mov     ecx, 48h ; 'H'
 * 0000000140430A2E: xor     edx, edx
 * 0000000140430A30: wrmsr
 * 0000000140430A32: jmp     loc_140430CA7
 * 0000000140430A37: test    cs:KiKvaShadow, 1
 * 0000000140430A3E: jnz     short loc_140430A43
 * 0000000140430A40: swapgs
 * 0000000140430A43: lfence
 * 0000000140430A46: mov     rcx, gs:95A8h
 * 0000000140430A4F: test    rcx, rcx
 * 0000000140430A52: jz      short loc_140430A73
 * 0000000140430A54: rdsspq  rdx
 * 0000000140430A59: mov     r10, gs:95A0h
 * 0000000140430A62: add     r10, 8
 * 0000000140430A66: cmp     rdx, r10
 * 0000000140430A69: jnz     short loc_140430A73
 * 0000000140430A6B: rstorssp qword ptr [rcx]
 * 0000000140430A6F: saveprevssp
 * 0000000140430A73: mov     r10, gs:188h
 * 0000000140430A7C: mov     rcx, gs:188h
 * 0000000140430A85: mov     rcx, [rcx+220h]
 * 0000000140430A8C: mov     rcx, [rcx+9E0h]
 * 0000000140430A93: mov     gs:858h, rcx
 * 0000000140430A9C: mov     cx, gs:850h
 * 0000000140430AA5: mov     gs:852h, cx
 * 0000000140430AAE: mov     cx, gs:860h
 * 0000000140430AB7: mov     gs:854h, cx
 * 0000000140430AC0: movzx   eax, word ptr gs:866h
 * 0000000140430AC9: cmp     gs:864h, ax
 * 0000000140430AD2: jz      short loc_140430AE6
 * 0000000140430AD4: mov     gs:864h, ax
 * 0000000140430ADD: mov     ecx, 48h ; 'H'
 * 0000000140430AE2: xor     edx, edx
 * 0000000140430AE4: wrmsr
 * 0000000140430AE6: movzx   edx, word ptr gs:860h
 * 0000000140430AEF: test    edx, 8
 * 0000000140430AF5: jz      short loc_140430B0E
 * 0000000140430AF7: mov     eax, 1
 * 0000000140430AFC: xor     edx, edx
 * 0000000140430AFE: mov     ecx, 49h ; 'I'
 * 0000000140430B03: wrmsr
 * 0000000140430B05: movzx   edx, word ptr gs:860h
 * 0000000140430B0E: test    edx, 2
 * 0000000140430B14: jz      loc_140430C51
 * 0000000140430B1A: call    loc_140430C2D
 * 0000000140430B1F: add     rsp, 8
 * 0000000140430B23: call    loc_140430C36
 * 0000000140430B28: add     rsp, 8
 * 0000000140430B2C: call    loc_140430B1F
 * 0000000140430B31: add     rsp, 8
 * 0000000140430B35: call    loc_140430B28
 * 0000000140430B3A: add     rsp, 8
 * 0000000140430B3E: call    loc_140430B31
 * 0000000140430B43: add     rsp, 8
 * 0000000140430B47: call    loc_140430B3A
 * 0000000140430B4C: add     rsp, 8
 * 0000000140430B50: call    loc_140430B43
 * 0000000140430B55: add     rsp, 8
 * 0000000140430B59: call    loc_140430B4C
 * 0000000140430B5E: add     rsp, 8
 * 0000000140430B62: call    loc_140430B55
 * 0000000140430B67: add     rsp, 8
 * 0000000140430B6B: call    loc_140430B5E
 * 0000000140430B70: add     rsp, 8
 * 0000000140430B74: call    loc_140430B67
 * 0000000140430B79: add     rsp, 8
 * 0000000140430B7D: call    loc_140430B70
 * 0000000140430B82: add     rsp, 8
 * 0000000140430B86: call    loc_140430B79
 * 0000000140430B8B: add     rsp, 8
 * 0000000140430B8F: call    loc_140430B82
 * 0000000140430B94: add     rsp, 8
 * 0000000140430B98: call    loc_140430B8B
 * 0000000140430B9D: add     rsp, 8
 * 0000000140430BA1: call    loc_140430B94
 * 0000000140430BA6: add     rsp, 8
 * 0000000140430BAA: call    loc_140430B9D
 * 0000000140430BAF: add     rsp, 8
 * 0000000140430BB3: call    loc_140430BA6
 * 0000000140430BB8: add     rsp, 8
 * 0000000140430BBC: call    loc_140430BAF
 * 0000000140430BC1: add     rsp, 8
 * 0000000140430BC5: call    loc_140430BB8
 * 0000000140430BCA: add     rsp, 8
 * 0000000140430BCE: call    loc_140430BC1
 * 0000000140430BD3: add     rsp, 8
 * 0000000140430BD7: call    loc_140430BCA
 * 0000000140430BDC: add     rsp, 8
 * 0000000140430BE0: call    loc_140430BD3
 * 0000000140430BE5: add     rsp, 8
 * 0000000140430BE9: call    loc_140430BDC
 * 0000000140430BEE: add     rsp, 8
 * 0000000140430BF2: call    loc_140430BE5
 * 0000000140430BF7: add     rsp, 8
 * 0000000140430BFB: call    loc_140430BEE
 * 0000000140430C00: add     rsp, 8
 * 0000000140430C04: call    loc_140430BF7
 * 0000000140430C09: add     rsp, 8
 * 0000000140430C0D: call    loc_140430C00
 * 0000000140430C12: add     rsp, 8
 * 0000000140430C16: call    loc_140430C09
 * 0000000140430C1B: add     rsp, 8
 * 0000000140430C1F: call    loc_140430C12
 * 0000000140430C24: add     rsp, 8
 * 0000000140430C28: call    loc_140430C1B
 * 0000000140430C2D: add     rsp, 8
 * 0000000140430C31: call    loc_140430C24
 * 0000000140430C36: add     rsp, 8
 * 0000000140430C3A: mov     eax, 0DADAh
 * 0000000140430C3F: test    byte ptr gs:862h, 8
 * 0000000140430C48: jz      short loc_140430C51
 * 0000000140430C4A: mov     al, 20h ; ' '
 * 0000000140430C4C: incsspq rax
 * 0000000140430C51: test    edx, 200h
 * 0000000140430C57: jz      short loc_140430C5E
 * 0000000140430C59: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140430C5E: lfence
 * 0000000140430C61: mov     byte ptr gs:856h, 0
 * 0000000140430C6A: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140430C71: jz      short loc_140430C92
 * 0000000140430C73: mov     ecx, 6A7h
 * 0000000140430C78: rdmsr
 * 0000000140430C7A: cmp     edx, 0
 * 0000000140430C7D: jz      short loc_140430C92
 * 0000000140430C7F: mov     ecx, edx
 * 0000000140430C81: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140430C87: cmp     edx, ecx
 * 0000000140430C89: jz      short loc_140430C92
 * 0000000140430C8B: mov     ecx, 6A7h
 * 0000000140430C90: wrmsr
 * 0000000140430C92: test    byte ptr [r10+3], 3
 * 0000000140430C97: mov     [rbp+0E8h+var_68], 0
 * 0000000140430CA0: jz      short loc_140430CA7
 * 0000000140430CA2: call    KiSaveDebugRegisterState
 * 0000000140430CA7: cld
 * 0000000140430CA8: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140430CAC: ldmxcsr dword ptr gs:180h
 * 0000000140430CB5: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140430CB9: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140430CBD: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140430CC1: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140430CC5: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140430CC9: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140430CCD: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140430CD4: jz      short loc_140430CE2
 * 0000000140430CD6: test    [rbp+0E8h+arg_0], 1
 * 0000000140430CDD: jz      short loc_140430CE2
 * 0000000140430CDF: stac
 * 0000000140430CE2: sub     rsp, 30h
 * 0000000140430CE6: bt      [rbp+0E8h+arg_8], 9
 * 0000000140430CEE: jnb     short loc_140430CF1
 * 0000000140430CF0: sti
 * 0000000140430CF1: lea     rcx, [rsp+198h+var_178]
 * 0000000140430CF6: call    KiMcheckAlternateReturn
 * 0000000140430CFB: cli
 * 0000000140430CFC: test    [rbp+0E8h+arg_0], 1
 * 0000000140430D03: jz      loc_140430FF1
 * 0000000140430D09: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140430D10: jz      short loc_140430D15
 * 0000000140430D12: stac
 * 0000000140430D15: mov     rcx, gs:188h
 * 0000000140430D1E: test    byte ptr [rcx+0C2h], 3
 * 0000000140430D25: jz      short loc_140430D42
 * 0000000140430D27: mov     ecx, 1
 * 0000000140430D2C: mov     cr8, rcx
 * 0000000140430D30: sti
 * 0000000140430D31: call    KiInitiateUserApc
 * 0000000140430D36: cli
 * 0000000140430D37: mov     ecx, 0
 * 0000000140430D3C: mov     cr8, rcx
 * 0000000140430D40: jmp     short loc_140430D15
 * 0000000140430D42: test    byte ptr gs:86Ch, 2
 * 0000000140430D4B: jz      short loc_140430D54
 * 0000000140430D4D: xor     ecx, ecx
 * 0000000140430D4F: call    KiUpdateStibpPairing
 * 0000000140430D54: mov     rcx, gs:188h
 * 0000000140430D5D: test    dword ptr [rcx], 8000000h
 * 0000000140430D63: jz      short loc_140430D6A
 * 0000000140430D65: call    KiRestoreSetContextState
 * 0000000140430D6A: mov     rcx, gs:188h
 * 0000000140430D73: test    dword ptr [rcx], 10000h
 * 0000000140430D79: jz      short loc_140430D8F
 * 0000000140430D7B: test    byte ptr [rcx+2], 1
 * 0000000140430D7F: jz      short loc_140430D8F
 * 0000000140430D81: call    KiCopyCounters
 * 0000000140430D86: mov     rcx, gs:188h
 * 0000000140430D8F: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140430D93: cmp     [rbp+0E8h+var_68], 0
 * 0000000140430D9B: jz      short loc_140430DA2
 * 0000000140430D9D: call    KiRestoreDebugRegisterState
 * 0000000140430DA2: mov     rcx, gs:188h
 * 0000000140430DAB: bt      dword ptr [rcx+74h], 16h
 * 0000000140430DB0: jnb     short loc_140430DDC
 * 0000000140430DB2: xor     ecx, ecx
 * 0000000140430DB4: rdsspq  rcx
 * 0000000140430DB9: mov     r8, gs:95A8h
 * 0000000140430DC2: add     r8, 8
 * 0000000140430DC6: cmp     rcx, r8
 * 0000000140430DC9: jnz     short loc_140430DDC
 * 0000000140430DCB: mov     rcx, gs:95A0h
 * 0000000140430DD4: rstorssp qword ptr [rcx]
 * 0000000140430DD8: saveprevssp
 * 0000000140430DDC: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140430DE0: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140430DE4: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140430DE8: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140430DEC: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140430DF0: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140430DF4: mov     r11, [rbp+0E8h+var_108]
 * 0000000140430DF8: mov     r10, [rbp+0E8h+var_110]
 * 0000000140430DFC: mov     r9, [rbp+0E8h+var_118]
 * 0000000140430E00: mov     r8, [rbp+0E8h+var_120]
 * 0000000140430E04: mov     byte ptr gs:856h, 0
 * 0000000140430E0D: movzx   eax, word ptr gs:86Ah
 * 0000000140430E16: cmp     gs:864h, ax
 * 0000000140430E1F: jz      short loc_140430E33
 * 0000000140430E21: mov     gs:864h, ax
 * 0000000140430E2A: mov     ecx, 48h ; 'H'
 * 0000000140430E2F: xor     edx, edx
 * 0000000140430E31: wrmsr
 * 0000000140430E33: btr     word ptr gs:860h, 2
 * 0000000140430E3E: jnb     short loc_140430E4E
 * 0000000140430E40: mov     eax, 1
 * 0000000140430E45: xor     edx, edx
 * 0000000140430E47: mov     ecx, 49h ; 'I'
 * 0000000140430E4C: wrmsr
 * 0000000140430E4E: btr     word ptr gs:860h, 5
 * 0000000140430E59: jnb     loc_140430F96
 * 0000000140430E5F: call    loc_140430F72
 * 0000000140430E64: add     rsp, 8
 * 0000000140430E68: call    loc_140430F7B
 * 0000000140430E6D: add     rsp, 8
 * 0000000140430E71: call    loc_140430E64
 * 0000000140430E76: add     rsp, 8
 * 0000000140430E7A: call    loc_140430E6D
 * 0000000140430E7F: add     rsp, 8
 * 0000000140430E83: call    loc_140430E76
 * 0000000140430E88: add     rsp, 8
 * 0000000140430E8C: call    loc_140430E7F
 * 0000000140430E91: add     rsp, 8
 * 0000000140430E95: call    loc_140430E88
 * 0000000140430E9A: add     rsp, 8
 * 0000000140430E9E: call    loc_140430E91
 * 0000000140430EA3: add     rsp, 8
 * 0000000140430EA7: call    loc_140430E9A
 * 0000000140430EAC: add     rsp, 8
 * 0000000140430EB0: call    loc_140430EA3
 * 0000000140430EB5: add     rsp, 8
 * 0000000140430EB9: call    loc_140430EAC
 * 0000000140430EBE: add     rsp, 8
 * 0000000140430EC2: call    loc_140430EB5
 * 0000000140430EC7: add     rsp, 8
 * 0000000140430ECB: call    loc_140430EBE
 * 0000000140430ED0: add     rsp, 8
 * 0000000140430ED4: call    loc_140430EC7
 * 0000000140430ED9: add     rsp, 8
 * 0000000140430EDD: call    loc_140430ED0
 * 0000000140430EE2: add     rsp, 8
 * 0000000140430EE6: call    loc_140430ED9
 * 0000000140430EEB: add     rsp, 8
 * 0000000140430EEF: call    loc_140430EE2
 * 0000000140430EF4: add     rsp, 8
 * 0000000140430EF8: call    loc_140430EEB
 * 0000000140430EFD: add     rsp, 8
 * 0000000140430F01: call    loc_140430EF4
 * 0000000140430F06: add     rsp, 8
 * 0000000140430F0A: call    loc_140430EFD
 * 0000000140430F0F: add     rsp, 8
 * 0000000140430F13: call    loc_140430F06
 * 0000000140430F18: add     rsp, 8
 * 0000000140430F1C: call    loc_140430F0F
 * 0000000140430F21: add     rsp, 8
 * 0000000140430F25: call    loc_140430F18
 * 0000000140430F2A: add     rsp, 8
 * 0000000140430F2E: call    loc_140430F21
 * 0000000140430F33: add     rsp, 8
 * 0000000140430F37: call    loc_140430F2A
 * 0000000140430F3C: add     rsp, 8
 * 0000000140430F40: call    loc_140430F33
 * 0000000140430F45: add     rsp, 8
 * 0000000140430F49: call    loc_140430F3C
 * 0000000140430F4E: add     rsp, 8
 * 0000000140430F52: call    loc_140430F45
 * 0000000140430F57: add     rsp, 8
 * 0000000140430F5B: call    loc_140430F4E
 * 0000000140430F60: add     rsp, 8
 * 0000000140430F64: call    loc_140430F57
 * 0000000140430F69: add     rsp, 8
 * 0000000140430F6D: call    loc_140430F60
 * 0000000140430F72: add     rsp, 8
 * 0000000140430F76: call    loc_140430F69
 * 0000000140430F7B: add     rsp, 8
 * 0000000140430F7F: mov     eax, 0DADAh
 * 0000000140430F84: test    byte ptr gs:862h, 8
 * 0000000140430F8D: jz      short loc_140430F96
 * 0000000140430F8F: mov     al, 20h ; ' '
 * 0000000140430F91: incsspq rax
 * 0000000140430F96: test    word ptr gs:860h, 80h
 * 0000000140430FA1: jz      short loc_140430FAF
 * 0000000140430FA3: xor     eax, eax
 * 0000000140430FA5: xor     edx, edx
 * 0000000140430FA7: mov     ecx, 1
 * 0000000140430FAC: div     rcx
 * 0000000140430FAF: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140430FB3: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140430FB7: mov     rax, [rbp+0E8h+var_138]
 * 0000000140430FBB: mov     rsp, rbp
 * 0000000140430FBE: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140430FC5: add     rsp, 0E8h
 * 0000000140430FCC: test    cs:KiKvaShadow, 1
 * 0000000140430FD3: jz      short loc_140430FDA
 * 0000000140430FD5: jmp     KiKernelExit
 * 0000000140430FDA: test    word ptr gs:860h, 100h
 * 0000000140430FE5: jz      short loc_140430FEC
 * 0000000140430FE7: verw    [rsp+arg_18]
 * 0000000140430FEC: swapgs
 * 0000000140430FEF: iretq
 * 0000000140430FF1: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140430FF5: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140430FF9: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140430FFD: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140431001: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140431005: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140431009: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014043100D: mov     r11, [rbp+0E8h+var_108]
 * 0000000140431011: mov     r10, [rbp+0E8h+var_110]
 * 0000000140431015: mov     r9, [rbp+0E8h+var_118]
 * 0000000140431019: mov     r8, [rbp+0E8h+var_120]
 * 000000014043101D: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140431021: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140431025: mov     rax, [rbp+0E8h+var_138]
 * 0000000140431029: mov     rsp, rbp
 * 000000014043102C: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140431033: add     rsp, 0E8h
 * 000000014043103A: iretq
 */
