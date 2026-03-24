/*
 * XREFs of KiVirtualizationException @ 0x140431440
 * Callers:
 *     KiVirtualizationExceptionShadow @ 0x140AF7B40 (KiVirtualizationExceptionShadow.c)
 * Callees:
 *     KzLowerIrql @ 0x14023E470 (KzLowerIrql.c)
 *     KzRaiseIrql @ 0x1402AFD30 (KzRaiseIrql.c)
 *     KiRestoreDebugRegisterState @ 0x14041E860 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041E8E0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041F680 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140424760 (KiInitiateUserApc.c)
 *     KiVirtualizationException @ 0x140431440 (KiVirtualizationException.c)
 *     KiBugCheckDispatch @ 0x1404342C0 (KiBugCheckDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140434D00 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiUpdateStibpPairing @ 0x1404607C0 (KiUpdateStibpPairing.c)
 *     KiCopyCounters @ 0x140574240 (KiCopyCounters.c)
 *     KiEpfHandleNotification @ 0x1405790A0 (KiEpfHandleNotification.c)
 */

/*
 * Hex-Rays decompilation failed for KiVirtualizationException @ 0x140431440
 * Reason: Hex-Rays returned no pseudocode for 0x140431440
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140431440: sub     rsp, 8
 * 0000000140431444: push    rbp
 * 0000000140431445: sub     rsp, 158h
 * 000000014043144C: lea     rbp, [rsp+80h]
 * 0000000140431454: mov     [rbp+0E8h+var_13D], 1
 * 0000000140431458: mov     [rbp+0E8h+var_138], rax
 * 000000014043145C: mov     [rbp+0E8h+var_130], rcx
 * 0000000140431460: mov     [rbp+0E8h+var_128], rdx
 * 0000000140431464: mov     [rbp+0E8h+var_120], r8
 * 0000000140431468: mov     [rbp+0E8h+var_118], r9
 * 000000014043146C: mov     [rbp+0E8h+var_110], r10
 * 0000000140431470: mov     [rbp+0E8h+var_108], r11
 * 0000000140431474: test    [rbp+0E8h+arg_0], 1
 * 000000014043147B: jnz     short loc_1404314B7
 * 000000014043147D: xor     edx, edx
 * 000000014043147F: rdsspq  rdx
 * 0000000140431484: mov     [rbp+0E8h+var_90], rdx
 * 0000000140431488: lfence
 * 000000014043148B: test    word ptr gs:860h, 1
 * 0000000140431496: jnz     short loc_1404314A0
 * 0000000140431498: lfence
 * 000000014043149B: jmp     loc_140431727
 * 00000001404314A0: movzx   eax, word ptr gs:864h
 * 00000001404314A9: mov     ecx, 48h ; 'H'
 * 00000001404314AE: xor     edx, edx
 * 00000001404314B0: wrmsr
 * 00000001404314B2: jmp     loc_140431727
 * 00000001404314B7: test    cs:KiKvaShadow, 1
 * 00000001404314BE: jnz     short loc_1404314C3
 * 00000001404314C0: swapgs
 * 00000001404314C3: lfence
 * 00000001404314C6: mov     rcx, gs:95A8h
 * 00000001404314CF: test    rcx, rcx
 * 00000001404314D2: jz      short loc_1404314F3
 * 00000001404314D4: rdsspq  rdx
 * 00000001404314D9: mov     r10, gs:95A0h
 * 00000001404314E2: add     r10, 8
 * 00000001404314E6: cmp     rdx, r10
 * 00000001404314E9: jnz     short loc_1404314F3
 * 00000001404314EB: rstorssp qword ptr [rcx]
 * 00000001404314EF: saveprevssp
 * 00000001404314F3: mov     r10, gs:188h
 * 00000001404314FC: mov     rcx, gs:188h
 * 0000000140431505: mov     rcx, [rcx+220h]
 * 000000014043150C: mov     rcx, [rcx+9E0h]
 * 0000000140431513: mov     gs:858h, rcx
 * 000000014043151C: mov     cx, gs:850h
 * 0000000140431525: mov     gs:852h, cx
 * 000000014043152E: mov     cx, gs:860h
 * 0000000140431537: mov     gs:854h, cx
 * 0000000140431540: movzx   eax, word ptr gs:866h
 * 0000000140431549: cmp     gs:864h, ax
 * 0000000140431552: jz      short loc_140431566
 * 0000000140431554: mov     gs:864h, ax
 * 000000014043155D: mov     ecx, 48h ; 'H'
 * 0000000140431562: xor     edx, edx
 * 0000000140431564: wrmsr
 * 0000000140431566: movzx   edx, word ptr gs:860h
 * 000000014043156F: test    edx, 8
 * 0000000140431575: jz      short loc_14043158E
 * 0000000140431577: mov     eax, 1
 * 000000014043157C: xor     edx, edx
 * 000000014043157E: mov     ecx, 49h ; 'I'
 * 0000000140431583: wrmsr
 * 0000000140431585: movzx   edx, word ptr gs:860h
 * 000000014043158E: test    edx, 2
 * 0000000140431594: jz      loc_1404316D1
 * 000000014043159A: call    loc_1404316AD
 * 000000014043159F: add     rsp, 8
 * 00000001404315A3: call    loc_1404316B6
 * 00000001404315A8: add     rsp, 8
 * 00000001404315AC: call    loc_14043159F
 * 00000001404315B1: add     rsp, 8
 * 00000001404315B5: call    loc_1404315A8
 * 00000001404315BA: add     rsp, 8
 * 00000001404315BE: call    loc_1404315B1
 * 00000001404315C3: add     rsp, 8
 * 00000001404315C7: call    loc_1404315BA
 * 00000001404315CC: add     rsp, 8
 * 00000001404315D0: call    loc_1404315C3
 * 00000001404315D5: add     rsp, 8
 * 00000001404315D9: call    loc_1404315CC
 * 00000001404315DE: add     rsp, 8
 * 00000001404315E2: call    loc_1404315D5
 * 00000001404315E7: add     rsp, 8
 * 00000001404315EB: call    loc_1404315DE
 * 00000001404315F0: add     rsp, 8
 * 00000001404315F4: call    loc_1404315E7
 * 00000001404315F9: add     rsp, 8
 * 00000001404315FD: call    loc_1404315F0
 * 0000000140431602: add     rsp, 8
 * 0000000140431606: call    loc_1404315F9
 * 000000014043160B: add     rsp, 8
 * 000000014043160F: call    loc_140431602
 * 0000000140431614: add     rsp, 8
 * 0000000140431618: call    loc_14043160B
 * 000000014043161D: add     rsp, 8
 * 0000000140431621: call    loc_140431614
 * 0000000140431626: add     rsp, 8
 * 000000014043162A: call    loc_14043161D
 * 000000014043162F: add     rsp, 8
 * 0000000140431633: call    loc_140431626
 * 0000000140431638: add     rsp, 8
 * 000000014043163C: call    loc_14043162F
 * 0000000140431641: add     rsp, 8
 * 0000000140431645: call    loc_140431638
 * 000000014043164A: add     rsp, 8
 * 000000014043164E: call    loc_140431641
 * 0000000140431653: add     rsp, 8
 * 0000000140431657: call    loc_14043164A
 * 000000014043165C: add     rsp, 8
 * 0000000140431660: call    loc_140431653
 * 0000000140431665: add     rsp, 8
 * 0000000140431669: call    loc_14043165C
 * 000000014043166E: add     rsp, 8
 * 0000000140431672: call    loc_140431665
 * 0000000140431677: add     rsp, 8
 * 000000014043167B: call    loc_14043166E
 * 0000000140431680: add     rsp, 8
 * 0000000140431684: call    loc_140431677
 * 0000000140431689: add     rsp, 8
 * 000000014043168D: call    loc_140431680
 * 0000000140431692: add     rsp, 8
 * 0000000140431696: call    loc_140431689
 * 000000014043169B: add     rsp, 8
 * 000000014043169F: call    loc_140431692
 * 00000001404316A4: add     rsp, 8
 * 00000001404316A8: call    loc_14043169B
 * 00000001404316AD: add     rsp, 8
 * 00000001404316B1: call    loc_1404316A4
 * 00000001404316B6: add     rsp, 8
 * 00000001404316BA: mov     eax, 0DADAh
 * 00000001404316BF: test    byte ptr gs:862h, 8
 * 00000001404316C8: jz      short loc_1404316D1
 * 00000001404316CA: mov     al, 20h ; ' '
 * 00000001404316CC: incsspq rax
 * 00000001404316D1: test    edx, 200h
 * 00000001404316D7: jz      short loc_1404316DE
 * 00000001404316D9: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001404316DE: lfence
 * 00000001404316E1: mov     byte ptr gs:856h, 0
 * 00000001404316EA: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001404316F1: jz      short loc_140431712
 * 00000001404316F3: mov     ecx, 6A7h
 * 00000001404316F8: rdmsr
 * 00000001404316FA: cmp     edx, 0
 * 00000001404316FD: jz      short loc_140431712
 * 00000001404316FF: mov     ecx, edx
 * 0000000140431701: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140431707: cmp     edx, ecx
 * 0000000140431709: jz      short loc_140431712
 * 000000014043170B: mov     ecx, 6A7h
 * 0000000140431710: wrmsr
 * 0000000140431712: test    byte ptr [r10+3], 3
 * 0000000140431717: mov     [rbp+0E8h+var_68], 0
 * 0000000140431720: jz      short loc_140431727
 * 0000000140431722: call    KiSaveDebugRegisterState
 * 0000000140431727: cld
 * 0000000140431728: stmxcsr [rbp+0E8h+var_13C]
 * 000000014043172C: ldmxcsr dword ptr gs:180h
 * 0000000140431735: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140431739: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014043173D: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140431741: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140431745: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140431749: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014043174D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140431754: jz      short loc_140431762
 * 0000000140431756: test    [rbp+0E8h+arg_0], 1
 * 000000014043175D: jz      short loc_140431762
 * 000000014043175F: stac
 * 0000000140431762: mov     r9, gs:8888h
 * 000000014043176B: test    r9, r9
 * 000000014043176E: jz      loc_140431B0C
 * 0000000140431774: cmp     dword ptr [r9+44h], 1
 * 0000000140431779: jnz     loc_140431B0C
 * 000000014043177F: test    [rbp+0E8h+arg_8], 200h
 * 0000000140431789: jz      loc_140431B0C
 * 000000014043178F: mov     rax, cr8
 * 0000000140431793: mov     dword ptr [rbp+0E8h+NewIrql], eax
 * 0000000140431796: cmp     al, 2
 * 0000000140431798: jge     loc_140431B0C
 * 000000014043179E: mov     ecx, 2; NewIrql
 * 00000001404317A3: call    KzRaiseIrql
 * 00000001404317A8: sti
 * 00000001404317A9: mov     r9, gs:8888h
 * 00000001404317B2: mov     rcx, [r9+48h]
 * 00000001404317B6: mov     dword ptr [r9+44h], 0
 * 00000001404317BE: call    KiEpfHandleNotification
 * 00000001404317C3: cli
 * 00000001404317C4: mov     ecx, dword ptr [rbp+0E8h+NewIrql]; NewIrql
 * 00000001404317C7: call    KzLowerIrql
 * 00000001404317CC: test    [rbp+0E8h+arg_0], 1
 * 00000001404317D3: jz      loc_140431AC1
 * 00000001404317D9: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404317E0: jz      short loc_1404317E5
 * 00000001404317E2: stac
 * 00000001404317E5: mov     rcx, gs:188h
 * 00000001404317EE: test    byte ptr [rcx+0C2h], 3
 * 00000001404317F5: jz      short loc_140431812
 * 00000001404317F7: mov     ecx, 1
 * 00000001404317FC: mov     cr8, rcx
 * 0000000140431800: sti
 * 0000000140431801: call    KiInitiateUserApc
 * 0000000140431806: cli
 * 0000000140431807: mov     ecx, 0
 * 000000014043180C: mov     cr8, rcx
 * 0000000140431810: jmp     short loc_1404317E5
 * 0000000140431812: test    byte ptr gs:86Ch, 2
 * 000000014043181B: jz      short loc_140431824
 * 000000014043181D: xor     ecx, ecx
 * 000000014043181F: call    KiUpdateStibpPairing
 * 0000000140431824: mov     rcx, gs:188h
 * 000000014043182D: test    dword ptr [rcx], 8000000h
 * 0000000140431833: jz      short loc_14043183A
 * 0000000140431835: call    KiRestoreSetContextState
 * 000000014043183A: mov     rcx, gs:188h
 * 0000000140431843: test    dword ptr [rcx], 10000h
 * 0000000140431849: jz      short loc_14043185F
 * 000000014043184B: test    byte ptr [rcx+2], 1
 * 000000014043184F: jz      short loc_14043185F
 * 0000000140431851: call    KiCopyCounters
 * 0000000140431856: mov     rcx, gs:188h
 * 000000014043185F: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140431863: cmp     [rbp+0E8h+var_68], 0
 * 000000014043186B: jz      short loc_140431872
 * 000000014043186D: call    KiRestoreDebugRegisterState
 * 0000000140431872: mov     rcx, gs:188h
 * 000000014043187B: bt      dword ptr [rcx+74h], 16h
 * 0000000140431880: jnb     short loc_1404318AC
 * 0000000140431882: xor     ecx, ecx
 * 0000000140431884: rdsspq  rcx
 * 0000000140431889: mov     r8, gs:95A8h
 * 0000000140431892: add     r8, 8
 * 0000000140431896: cmp     rcx, r8
 * 0000000140431899: jnz     short loc_1404318AC
 * 000000014043189B: mov     rcx, gs:95A0h
 * 00000001404318A4: rstorssp qword ptr [rcx]
 * 00000001404318A8: saveprevssp
 * 00000001404318AC: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001404318B0: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001404318B4: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001404318B8: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001404318BC: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001404318C0: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001404318C4: mov     r11, [rbp+0E8h+var_108]
 * 00000001404318C8: mov     r10, [rbp+0E8h+var_110]
 * 00000001404318CC: mov     r9, [rbp+0E8h+var_118]
 * 00000001404318D0: mov     r8, [rbp+0E8h+var_120]
 * 00000001404318D4: mov     byte ptr gs:856h, 0
 * 00000001404318DD: movzx   eax, word ptr gs:86Ah
 * 00000001404318E6: cmp     gs:864h, ax
 * 00000001404318EF: jz      short loc_140431903
 * 00000001404318F1: mov     gs:864h, ax
 * 00000001404318FA: mov     ecx, 48h ; 'H'
 * 00000001404318FF: xor     edx, edx
 * 0000000140431901: wrmsr
 * 0000000140431903: btr     word ptr gs:860h, 2
 * 000000014043190E: jnb     short loc_14043191E
 * 0000000140431910: mov     eax, 1
 * 0000000140431915: xor     edx, edx
 * 0000000140431917: mov     ecx, 49h ; 'I'
 * 000000014043191C: wrmsr
 * 000000014043191E: btr     word ptr gs:860h, 5
 * 0000000140431929: jnb     loc_140431A66
 * 000000014043192F: call    loc_140431A42
 * 0000000140431934: add     rsp, 8
 * 0000000140431938: call    loc_140431A4B
 * 000000014043193D: add     rsp, 8
 * 0000000140431941: call    loc_140431934
 * 0000000140431946: add     rsp, 8
 * 000000014043194A: call    loc_14043193D
 * 000000014043194F: add     rsp, 8
 * 0000000140431953: call    loc_140431946
 * 0000000140431958: add     rsp, 8
 * 000000014043195C: call    loc_14043194F
 * 0000000140431961: add     rsp, 8
 * 0000000140431965: call    loc_140431958
 * 000000014043196A: add     rsp, 8
 * 000000014043196E: call    loc_140431961
 * 0000000140431973: add     rsp, 8
 * 0000000140431977: call    loc_14043196A
 * 000000014043197C: add     rsp, 8
 * 0000000140431980: call    loc_140431973
 * 0000000140431985: add     rsp, 8
 * 0000000140431989: call    loc_14043197C
 * 000000014043198E: add     rsp, 8
 * 0000000140431992: call    loc_140431985
 * 0000000140431997: add     rsp, 8
 * 000000014043199B: call    loc_14043198E
 * 00000001404319A0: add     rsp, 8
 * 00000001404319A4: call    loc_140431997
 * 00000001404319A9: add     rsp, 8
 * 00000001404319AD: call    loc_1404319A0
 * 00000001404319B2: add     rsp, 8
 * 00000001404319B6: call    loc_1404319A9
 * 00000001404319BB: add     rsp, 8
 * 00000001404319BF: call    loc_1404319B2
 * 00000001404319C4: add     rsp, 8
 * 00000001404319C8: call    loc_1404319BB
 * 00000001404319CD: add     rsp, 8
 * 00000001404319D1: call    loc_1404319C4
 * 00000001404319D6: add     rsp, 8
 * 00000001404319DA: call    loc_1404319CD
 * 00000001404319DF: add     rsp, 8
 * 00000001404319E3: call    loc_1404319D6
 * 00000001404319E8: add     rsp, 8
 * 00000001404319EC: call    loc_1404319DF
 * 00000001404319F1: add     rsp, 8
 * 00000001404319F5: call    loc_1404319E8
 * 00000001404319FA: add     rsp, 8
 * 00000001404319FE: call    loc_1404319F1
 * 0000000140431A03: add     rsp, 8
 * 0000000140431A07: call    loc_1404319FA
 * 0000000140431A0C: add     rsp, 8
 * 0000000140431A10: call    loc_140431A03
 * 0000000140431A15: add     rsp, 8
 * 0000000140431A19: call    loc_140431A0C
 * 0000000140431A1E: add     rsp, 8
 * 0000000140431A22: call    loc_140431A15
 * 0000000140431A27: add     rsp, 8
 * 0000000140431A2B: call    loc_140431A1E
 * 0000000140431A30: add     rsp, 8
 * 0000000140431A34: call    loc_140431A27
 * 0000000140431A39: add     rsp, 8
 * 0000000140431A3D: call    loc_140431A30
 * 0000000140431A42: add     rsp, 8
 * 0000000140431A46: call    loc_140431A39
 * 0000000140431A4B: add     rsp, 8
 * 0000000140431A4F: mov     eax, 0DADAh
 * 0000000140431A54: test    byte ptr gs:862h, 8
 * 0000000140431A5D: jz      short loc_140431A66
 * 0000000140431A5F: mov     al, 20h ; ' '
 * 0000000140431A61: incsspq rax
 * 0000000140431A66: test    word ptr gs:860h, 80h
 * 0000000140431A71: jz      short loc_140431A7F
 * 0000000140431A73: xor     eax, eax
 * 0000000140431A75: xor     edx, edx
 * 0000000140431A77: mov     ecx, 1
 * 0000000140431A7C: div     rcx
 * 0000000140431A7F: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140431A83: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140431A87: mov     rax, [rbp+0E8h+var_138]
 * 0000000140431A8B: mov     rsp, rbp
 * 0000000140431A8E: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140431A95: add     rsp, 0E8h
 * 0000000140431A9C: test    cs:KiKvaShadow, 1
 * 0000000140431AA3: jz      short loc_140431AAA
 * 0000000140431AA5: jmp     KiKernelExit
 * 0000000140431AAA: test    word ptr gs:860h, 100h
 * 0000000140431AB5: jz      short loc_140431ABC
 * 0000000140431AB7: verw    [rsp+arg_18]
 * 0000000140431ABC: swapgs
 * 0000000140431ABF: iretq
 * 0000000140431AC1: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140431AC5: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140431AC9: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140431ACD: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140431AD1: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140431AD5: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140431AD9: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140431ADD: mov     r11, [rbp+0E8h+var_108]
 * 0000000140431AE1: mov     r10, [rbp+0E8h+var_110]
 * 0000000140431AE5: mov     r9, [rbp+0E8h+var_118]
 * 0000000140431AE9: mov     r8, [rbp+0E8h+var_120]
 * 0000000140431AED: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140431AF1: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140431AF5: mov     rax, [rbp+0E8h+var_138]
 * 0000000140431AF9: mov     rsp, rbp
 * 0000000140431AFC: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140431B03: add     rsp, 0E8h
 * 0000000140431B0A: iretq
 * 0000000140431B0C: mov     r10, [rbp+0E8h]
 * 0000000140431B13: mov     r9, gs:8888h
 * 0000000140431B1C: movzx   r8, [rbp+0E8h+NewIrql]
 * 0000000140431B21: mov     ecx, 7Fh
 * 0000000140431B26: mov     edx, 20h ; ' '
 * 0000000140431B2B: call    KiBugCheckDispatch
 */
