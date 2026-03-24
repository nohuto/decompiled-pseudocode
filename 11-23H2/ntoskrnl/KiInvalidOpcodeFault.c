/*
 * XREFs of KiInvalidOpcodeFault @ 0x14042D900
 * Callers:
 *     KiInvalidOpcodeFaultShadow @ 0x140AF6440 (KiInvalidOpcodeFaultShadow.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x14041EF20 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041EFA0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041FD40 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140424E20 (KiInitiateUserApc.c)
 *     KiInvalidOpcodeFault @ 0x14042D900 (KiInvalidOpcodeFault.c)
 *     KiExceptionDispatch @ 0x140434940 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435300 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiUpdateStibpPairing @ 0x140460E20 (KiUpdateStibpPairing.c)
 *     KiCopyCounters @ 0x1405741A0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInvalidOpcodeFault @ 0x14042D900
 * Reason: Hex-Rays returned no pseudocode for 0x14042D900
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014042D900: sub     rsp, 8
 * 000000014042D904: push    rbp
 * 000000014042D905: sub     rsp, 158h
 * 000000014042D90C: lea     rbp, [rsp+80h]
 * 000000014042D914: mov     [rbp+0E8h+var_13D], 1
 * 000000014042D918: mov     [rbp+0E8h+var_138], rax
 * 000000014042D91C: mov     [rbp+0E8h+var_130], rcx
 * 000000014042D920: mov     [rbp+0E8h+var_128], rdx
 * 000000014042D924: mov     [rbp+0E8h+var_120], r8
 * 000000014042D928: mov     [rbp+0E8h+var_118], r9
 * 000000014042D92C: mov     [rbp+0E8h+var_110], r10
 * 000000014042D930: mov     [rbp+0E8h+var_108], r11
 * 000000014042D934: test    [rbp+0E8h+arg_0], 1
 * 000000014042D93B: jnz     short loc_14042D977
 * 000000014042D93D: xor     edx, edx
 * 000000014042D93F: rdsspq  rdx
 * 000000014042D944: mov     [rbp+0E8h+var_90], rdx
 * 000000014042D948: lfence
 * 000000014042D94B: test    word ptr gs:860h, 1
 * 000000014042D956: jnz     short loc_14042D960
 * 000000014042D958: lfence
 * 000000014042D95B: jmp     loc_14042DBE7
 * 000000014042D960: movzx   eax, word ptr gs:864h
 * 000000014042D969: mov     ecx, 48h ; 'H'
 * 000000014042D96E: xor     edx, edx
 * 000000014042D970: wrmsr
 * 000000014042D972: jmp     loc_14042DBE7
 * 000000014042D977: test    cs:KiKvaShadow, 1
 * 000000014042D97E: jnz     short loc_14042D983
 * 000000014042D980: swapgs
 * 000000014042D983: lfence
 * 000000014042D986: mov     rcx, gs:95A8h
 * 000000014042D98F: test    rcx, rcx
 * 000000014042D992: jz      short loc_14042D9B3
 * 000000014042D994: rdsspq  rdx
 * 000000014042D999: mov     r10, gs:95A0h
 * 000000014042D9A2: add     r10, 8
 * 000000014042D9A6: cmp     rdx, r10
 * 000000014042D9A9: jnz     short loc_14042D9B3
 * 000000014042D9AB: rstorssp qword ptr [rcx]
 * 000000014042D9AF: saveprevssp
 * 000000014042D9B3: mov     r10, gs:188h
 * 000000014042D9BC: mov     rcx, gs:188h
 * 000000014042D9C5: mov     rcx, [rcx+220h]
 * 000000014042D9CC: mov     rcx, [rcx+9E0h]
 * 000000014042D9D3: mov     gs:858h, rcx
 * 000000014042D9DC: mov     cx, gs:850h
 * 000000014042D9E5: mov     gs:852h, cx
 * 000000014042D9EE: mov     cx, gs:860h
 * 000000014042D9F7: mov     gs:854h, cx
 * 000000014042DA00: movzx   eax, word ptr gs:866h
 * 000000014042DA09: cmp     gs:864h, ax
 * 000000014042DA12: jz      short loc_14042DA26
 * 000000014042DA14: mov     gs:864h, ax
 * 000000014042DA1D: mov     ecx, 48h ; 'H'
 * 000000014042DA22: xor     edx, edx
 * 000000014042DA24: wrmsr
 * 000000014042DA26: movzx   edx, word ptr gs:860h
 * 000000014042DA2F: test    edx, 8
 * 000000014042DA35: jz      short loc_14042DA4E
 * 000000014042DA37: mov     eax, 1
 * 000000014042DA3C: xor     edx, edx
 * 000000014042DA3E: mov     ecx, 49h ; 'I'
 * 000000014042DA43: wrmsr
 * 000000014042DA45: movzx   edx, word ptr gs:860h
 * 000000014042DA4E: test    edx, 2
 * 000000014042DA54: jz      loc_14042DB91
 * 000000014042DA5A: call    loc_14042DB6D
 * 000000014042DA5F: add     rsp, 8
 * 000000014042DA63: call    loc_14042DB76
 * 000000014042DA68: add     rsp, 8
 * 000000014042DA6C: call    loc_14042DA5F
 * 000000014042DA71: add     rsp, 8
 * 000000014042DA75: call    loc_14042DA68
 * 000000014042DA7A: add     rsp, 8
 * 000000014042DA7E: call    loc_14042DA71
 * 000000014042DA83: add     rsp, 8
 * 000000014042DA87: call    loc_14042DA7A
 * 000000014042DA8C: add     rsp, 8
 * 000000014042DA90: call    loc_14042DA83
 * 000000014042DA95: add     rsp, 8
 * 000000014042DA99: call    loc_14042DA8C
 * 000000014042DA9E: add     rsp, 8
 * 000000014042DAA2: call    loc_14042DA95
 * 000000014042DAA7: add     rsp, 8
 * 000000014042DAAB: call    loc_14042DA9E
 * 000000014042DAB0: add     rsp, 8
 * 000000014042DAB4: call    loc_14042DAA7
 * 000000014042DAB9: add     rsp, 8
 * 000000014042DABD: call    loc_14042DAB0
 * 000000014042DAC2: add     rsp, 8
 * 000000014042DAC6: call    loc_14042DAB9
 * 000000014042DACB: add     rsp, 8
 * 000000014042DACF: call    loc_14042DAC2
 * 000000014042DAD4: add     rsp, 8
 * 000000014042DAD8: call    loc_14042DACB
 * 000000014042DADD: add     rsp, 8
 * 000000014042DAE1: call    loc_14042DAD4
 * 000000014042DAE6: add     rsp, 8
 * 000000014042DAEA: call    loc_14042DADD
 * 000000014042DAEF: add     rsp, 8
 * 000000014042DAF3: call    loc_14042DAE6
 * 000000014042DAF8: add     rsp, 8
 * 000000014042DAFC: call    loc_14042DAEF
 * 000000014042DB01: add     rsp, 8
 * 000000014042DB05: call    loc_14042DAF8
 * 000000014042DB0A: add     rsp, 8
 * 000000014042DB0E: call    loc_14042DB01
 * 000000014042DB13: add     rsp, 8
 * 000000014042DB17: call    loc_14042DB0A
 * 000000014042DB1C: add     rsp, 8
 * 000000014042DB20: call    loc_14042DB13
 * 000000014042DB25: add     rsp, 8
 * 000000014042DB29: call    loc_14042DB1C
 * 000000014042DB2E: add     rsp, 8
 * 000000014042DB32: call    loc_14042DB25
 * 000000014042DB37: add     rsp, 8
 * 000000014042DB3B: call    loc_14042DB2E
 * 000000014042DB40: add     rsp, 8
 * 000000014042DB44: call    loc_14042DB37
 * 000000014042DB49: add     rsp, 8
 * 000000014042DB4D: call    loc_14042DB40
 * 000000014042DB52: add     rsp, 8
 * 000000014042DB56: call    loc_14042DB49
 * 000000014042DB5B: add     rsp, 8
 * 000000014042DB5F: call    loc_14042DB52
 * 000000014042DB64: add     rsp, 8
 * 000000014042DB68: call    loc_14042DB5B
 * 000000014042DB6D: add     rsp, 8
 * 000000014042DB71: call    loc_14042DB64
 * 000000014042DB76: add     rsp, 8
 * 000000014042DB7A: mov     eax, 0DADAh
 * 000000014042DB7F: test    byte ptr gs:862h, 8
 * 000000014042DB88: jz      short loc_14042DB91
 * 000000014042DB8A: mov     al, 20h ; ' '
 * 000000014042DB8C: incsspq rax
 * 000000014042DB91: test    edx, 200h
 * 000000014042DB97: jz      short loc_14042DB9E
 * 000000014042DB99: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014042DB9E: lfence
 * 000000014042DBA1: mov     byte ptr gs:856h, 0
 * 000000014042DBAA: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014042DBB1: jz      short loc_14042DBD2
 * 000000014042DBB3: mov     ecx, 6A7h
 * 000000014042DBB8: rdmsr
 * 000000014042DBBA: cmp     edx, 0
 * 000000014042DBBD: jz      short loc_14042DBD2
 * 000000014042DBBF: mov     ecx, edx
 * 000000014042DBC1: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014042DBC7: cmp     edx, ecx
 * 000000014042DBC9: jz      short loc_14042DBD2
 * 000000014042DBCB: mov     ecx, 6A7h
 * 000000014042DBD0: wrmsr
 * 000000014042DBD2: test    byte ptr [r10+3], 3
 * 000000014042DBD7: mov     [rbp+0E8h+var_68], 0
 * 000000014042DBE0: jz      short loc_14042DBE7
 * 000000014042DBE2: call    KiSaveDebugRegisterState
 * 000000014042DBE7: cld
 * 000000014042DBE8: stmxcsr [rbp+0E8h+var_13C]
 * 000000014042DBEC: ldmxcsr dword ptr gs:180h
 * 000000014042DBF5: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014042DBF9: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014042DBFD: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014042DC01: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014042DC05: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014042DC09: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014042DC0D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042DC14: jz      short loc_14042DC22
 * 000000014042DC16: test    [rbp+0E8h+arg_0], 1
 * 000000014042DC1D: jz      short loc_14042DC22
 * 000000014042DC1F: stac
 * 000000014042DC22: test    [rbp+0E8h+arg_8], 200h
 * 000000014042DC2C: jz      short loc_14042DC2F
 * 000000014042DC2E: sti
 * 000000014042DC2F: mov     ecx, 10000002h
 * 000000014042DC34: xor     edx, edx
 * 000000014042DC36: mov     r8, [rbp+0E8h]
 * 000000014042DC3D: call    KiExceptionDispatch
 * 000000014042DC42: nop
 * 000000014042DC43: cli
 * 000000014042DC44: test    [rbp+0E8h+arg_0], 1
 * 000000014042DC4B: jz      loc_14042DF39
 * 000000014042DC51: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042DC58: jz      short loc_14042DC5D
 * 000000014042DC5A: stac
 * 000000014042DC5D: mov     rcx, gs:188h
 * 000000014042DC66: test    byte ptr [rcx+0C2h], 3
 * 000000014042DC6D: jz      short loc_14042DC8A
 * 000000014042DC6F: mov     ecx, 1
 * 000000014042DC74: mov     cr8, rcx
 * 000000014042DC78: sti
 * 000000014042DC79: call    KiInitiateUserApc
 * 000000014042DC7E: cli
 * 000000014042DC7F: mov     ecx, 0
 * 000000014042DC84: mov     cr8, rcx
 * 000000014042DC88: jmp     short loc_14042DC5D
 * 000000014042DC8A: test    byte ptr gs:86Ch, 2
 * 000000014042DC93: jz      short loc_14042DC9C
 * 000000014042DC95: xor     ecx, ecx
 * 000000014042DC97: call    KiUpdateStibpPairing
 * 000000014042DC9C: mov     rcx, gs:188h
 * 000000014042DCA5: test    dword ptr [rcx], 8000000h
 * 000000014042DCAB: jz      short loc_14042DCB2
 * 000000014042DCAD: call    KiRestoreSetContextState
 * 000000014042DCB2: mov     rcx, gs:188h
 * 000000014042DCBB: test    dword ptr [rcx], 10000h
 * 000000014042DCC1: jz      short loc_14042DCD7
 * 000000014042DCC3: test    byte ptr [rcx+2], 1
 * 000000014042DCC7: jz      short loc_14042DCD7
 * 000000014042DCC9: call    KiCopyCounters
 * 000000014042DCCE: mov     rcx, gs:188h
 * 000000014042DCD7: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014042DCDB: cmp     [rbp+0E8h+var_68], 0
 * 000000014042DCE3: jz      short loc_14042DCEA
 * 000000014042DCE5: call    KiRestoreDebugRegisterState
 * 000000014042DCEA: mov     rcx, gs:188h
 * 000000014042DCF3: bt      dword ptr [rcx+74h], 16h
 * 000000014042DCF8: jnb     short loc_14042DD24
 * 000000014042DCFA: xor     ecx, ecx
 * 000000014042DCFC: rdsspq  rcx
 * 000000014042DD01: mov     r8, gs:95A8h
 * 000000014042DD0A: add     r8, 8
 * 000000014042DD0E: cmp     rcx, r8
 * 000000014042DD11: jnz     short loc_14042DD24
 * 000000014042DD13: mov     rcx, gs:95A0h
 * 000000014042DD1C: rstorssp qword ptr [rcx]
 * 000000014042DD20: saveprevssp
 * 000000014042DD24: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014042DD28: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014042DD2C: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014042DD30: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014042DD34: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014042DD38: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014042DD3C: mov     r11, [rbp+0E8h+var_108]
 * 000000014042DD40: mov     r10, [rbp+0E8h+var_110]
 * 000000014042DD44: mov     r9, [rbp+0E8h+var_118]
 * 000000014042DD48: mov     r8, [rbp+0E8h+var_120]
 * 000000014042DD4C: mov     byte ptr gs:856h, 0
 * 000000014042DD55: movzx   eax, word ptr gs:86Ah
 * 000000014042DD5E: cmp     gs:864h, ax
 * 000000014042DD67: jz      short loc_14042DD7B
 * 000000014042DD69: mov     gs:864h, ax
 * 000000014042DD72: mov     ecx, 48h ; 'H'
 * 000000014042DD77: xor     edx, edx
 * 000000014042DD79: wrmsr
 * 000000014042DD7B: btr     word ptr gs:860h, 2
 * 000000014042DD86: jnb     short loc_14042DD96
 * 000000014042DD88: mov     eax, 1
 * 000000014042DD8D: xor     edx, edx
 * 000000014042DD8F: mov     ecx, 49h ; 'I'
 * 000000014042DD94: wrmsr
 * 000000014042DD96: btr     word ptr gs:860h, 5
 * 000000014042DDA1: jnb     loc_14042DEDE
 * 000000014042DDA7: call    loc_14042DEBA
 * 000000014042DDAC: add     rsp, 8
 * 000000014042DDB0: call    loc_14042DEC3
 * 000000014042DDB5: add     rsp, 8
 * 000000014042DDB9: call    loc_14042DDAC
 * 000000014042DDBE: add     rsp, 8
 * 000000014042DDC2: call    loc_14042DDB5
 * 000000014042DDC7: add     rsp, 8
 * 000000014042DDCB: call    loc_14042DDBE
 * 000000014042DDD0: add     rsp, 8
 * 000000014042DDD4: call    loc_14042DDC7
 * 000000014042DDD9: add     rsp, 8
 * 000000014042DDDD: call    loc_14042DDD0
 * 000000014042DDE2: add     rsp, 8
 * 000000014042DDE6: call    loc_14042DDD9
 * 000000014042DDEB: add     rsp, 8
 * 000000014042DDEF: call    loc_14042DDE2
 * 000000014042DDF4: add     rsp, 8
 * 000000014042DDF8: call    loc_14042DDEB
 * 000000014042DDFD: add     rsp, 8
 * 000000014042DE01: call    loc_14042DDF4
 * 000000014042DE06: add     rsp, 8
 * 000000014042DE0A: call    loc_14042DDFD
 * 000000014042DE0F: add     rsp, 8
 * 000000014042DE13: call    loc_14042DE06
 * 000000014042DE18: add     rsp, 8
 * 000000014042DE1C: call    loc_14042DE0F
 * 000000014042DE21: add     rsp, 8
 * 000000014042DE25: call    loc_14042DE18
 * 000000014042DE2A: add     rsp, 8
 * 000000014042DE2E: call    loc_14042DE21
 * 000000014042DE33: add     rsp, 8
 * 000000014042DE37: call    loc_14042DE2A
 * 000000014042DE3C: add     rsp, 8
 * 000000014042DE40: call    loc_14042DE33
 * 000000014042DE45: add     rsp, 8
 * 000000014042DE49: call    loc_14042DE3C
 * 000000014042DE4E: add     rsp, 8
 * 000000014042DE52: call    loc_14042DE45
 * 000000014042DE57: add     rsp, 8
 * 000000014042DE5B: call    loc_14042DE4E
 * 000000014042DE60: add     rsp, 8
 * 000000014042DE64: call    loc_14042DE57
 * 000000014042DE69: add     rsp, 8
 * 000000014042DE6D: call    loc_14042DE60
 * 000000014042DE72: add     rsp, 8
 * 000000014042DE76: call    loc_14042DE69
 * 000000014042DE7B: add     rsp, 8
 * 000000014042DE7F: call    loc_14042DE72
 * 000000014042DE84: add     rsp, 8
 * 000000014042DE88: call    loc_14042DE7B
 * 000000014042DE8D: add     rsp, 8
 * 000000014042DE91: call    loc_14042DE84
 * 000000014042DE96: add     rsp, 8
 * 000000014042DE9A: call    loc_14042DE8D
 * 000000014042DE9F: add     rsp, 8
 * 000000014042DEA3: call    loc_14042DE96
 * 000000014042DEA8: add     rsp, 8
 * 000000014042DEAC: call    loc_14042DE9F
 * 000000014042DEB1: add     rsp, 8
 * 000000014042DEB5: call    loc_14042DEA8
 * 000000014042DEBA: add     rsp, 8
 * 000000014042DEBE: call    loc_14042DEB1
 * 000000014042DEC3: add     rsp, 8
 * 000000014042DEC7: mov     eax, 0DADAh
 * 000000014042DECC: test    byte ptr gs:862h, 8
 * 000000014042DED5: jz      short loc_14042DEDE
 * 000000014042DED7: mov     al, 20h ; ' '
 * 000000014042DED9: incsspq rax
 * 000000014042DEDE: test    word ptr gs:860h, 80h
 * 000000014042DEE9: jz      short loc_14042DEF7
 * 000000014042DEEB: xor     eax, eax
 * 000000014042DEED: xor     edx, edx
 * 000000014042DEEF: mov     ecx, 1
 * 000000014042DEF4: div     rcx
 * 000000014042DEF7: mov     rdx, [rbp+0E8h+var_128]
 * 000000014042DEFB: mov     rcx, [rbp+0E8h+var_130]
 * 000000014042DEFF: mov     rax, [rbp+0E8h+var_138]
 * 000000014042DF03: mov     rsp, rbp
 * 000000014042DF06: mov     rbp, [rbp+0E8h+var_10]
 * 000000014042DF0D: add     rsp, 0E8h
 * 000000014042DF14: test    cs:KiKvaShadow, 1
 * 000000014042DF1B: jz      short loc_14042DF22
 * 000000014042DF1D: jmp     KiKernelExit
 * 000000014042DF22: test    word ptr gs:860h, 100h
 * 000000014042DF2D: jz      short loc_14042DF34
 * 000000014042DF2F: verw    [rsp+arg_18]
 * 000000014042DF34: swapgs
 * 000000014042DF37: iretq
 * 000000014042DF39: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014042DF3D: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014042DF41: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014042DF45: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014042DF49: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014042DF4D: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014042DF51: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014042DF55: mov     r11, [rbp+0E8h+var_108]
 * 000000014042DF59: mov     r10, [rbp+0E8h+var_110]
 * 000000014042DF5D: mov     r9, [rbp+0E8h+var_118]
 * 000000014042DF61: mov     r8, [rbp+0E8h+var_120]
 * 000000014042DF65: mov     rdx, [rbp+0E8h+var_128]
 * 000000014042DF69: mov     rcx, [rbp+0E8h+var_130]
 * 000000014042DF6D: mov     rax, [rbp+0E8h+var_138]
 * 000000014042DF71: mov     rsp, rbp
 * 000000014042DF74: mov     rbp, [rbp+0E8h+var_10]
 * 000000014042DF7B: add     rsp, 0E8h
 * 000000014042DF82: iretq
 */
