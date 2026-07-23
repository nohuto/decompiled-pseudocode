/*
 * XREFs of KiSystemService @ 0x140433700
 * Callers:
 *     KiSystemServiceShadow @ 0x140AF6EC0 (KiSystemServiceShadow.c)
 * Callees:
 *     KiSystemService @ 0x140433700 (KiSystemService.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435700 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemService @ 0x140433700
 * Reason: Hex-Rays returned no pseudocode for 0x140433700
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140433700: cmp     [rsp+arg_0], 23h ; '#'
 * 0000000140433706: jz      KiSystemService32User
 * 000000014043370C: test    cs:KiKvaShadow, 1
 * 0000000140433713: jnz     short loc_140433718
 * 0000000140433715: swapgs
 * 0000000140433718: lfence
 * 000000014043371B: mov     rcx, gs:95A8h
 * 0000000140433724: test    rcx, rcx
 * 0000000140433727: jz      short loc_140433731
 * 0000000140433729: rstorssp qword ptr [rcx]
 * 000000014043372D: saveprevssp
 * 0000000140433731: mov     rcx, r10
 * 0000000140433734: sub     rsp, 8
 * 0000000140433738: push    rbp
 * 0000000140433739: sub     rsp, 158h
 * 0000000140433740: lea     rbp, [rsp+168h+var_E8]
 * 0000000140433748: mov     [rbp+0C0h], rbx
 * 000000014043374F: mov     [rbp+0C8h], rdi
 * 0000000140433756: mov     [rbp+0D0h], rsi
 * 000000014043375D: cld
 * 000000014043375E: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140433765: jz      short loc_140433773
 * 0000000140433767: test    byte ptr [rbp+0F0h], 1
 * 000000014043376E: jz      short loc_140433773
 * 0000000140433770: stac
 * 0000000140433773: mov     [rbp-50h], rax
 * 0000000140433777: mov     [rbp-48h], rcx
 * 000000014043377B: mov     [rbp-40h], rdx
 * 000000014043377F: mov     rcx, gs:188h
 * 0000000140433788: mov     rcx, [rcx+220h]
 * 000000014043378F: mov     rcx, [rcx+9E0h]
 * 0000000140433796: mov     gs:858h, rcx
 * 000000014043379F: mov     cx, gs:850h
 * 00000001404337A8: mov     gs:852h, cx
 * 00000001404337B1: mov     cx, gs:860h
 * 00000001404337BA: mov     gs:854h, cx
 * 00000001404337C3: movzx   eax, word ptr gs:866h
 * 00000001404337CC: cmp     gs:864h, ax
 * 00000001404337D5: jz      short loc_1404337E9
 * 00000001404337D7: mov     gs:864h, ax
 * 00000001404337E0: mov     ecx, 48h ; 'H'
 * 00000001404337E5: xor     edx, edx
 * 00000001404337E7: wrmsr
 * 00000001404337E9: movzx   edx, word ptr gs:860h
 * 00000001404337F2: test    edx, 8
 * 00000001404337F8: jz      short loc_140433811
 * 00000001404337FA: mov     eax, 1
 * 00000001404337FF: xor     edx, edx
 * 0000000140433801: mov     ecx, 49h ; 'I'
 * 0000000140433806: wrmsr
 * 0000000140433808: movzx   edx, word ptr gs:860h
 * 0000000140433811: test    edx, 2
 * 0000000140433817: jz      loc_140433954
 * 000000014043381D: call    loc_140433930
 * 0000000140433822: add     rsp, 8
 * 0000000140433826: call    loc_140433939
 * 000000014043382B: add     rsp, 8
 * 000000014043382F: call    loc_140433822
 * 0000000140433834: add     rsp, 8
 * 0000000140433838: call    loc_14043382B
 * 000000014043383D: add     rsp, 8
 * 0000000140433841: call    loc_140433834
 * 0000000140433846: add     rsp, 8
 * 000000014043384A: call    loc_14043383D
 * 000000014043384F: add     rsp, 8
 * 0000000140433853: call    loc_140433846
 * 0000000140433858: add     rsp, 8
 * 000000014043385C: call    loc_14043384F
 * 0000000140433861: add     rsp, 8
 * 0000000140433865: call    loc_140433858
 * 000000014043386A: add     rsp, 8
 * 000000014043386E: call    loc_140433861
 * 0000000140433873: add     rsp, 8
 * 0000000140433877: call    loc_14043386A
 * 000000014043387C: add     rsp, 8
 * 0000000140433880: call    loc_140433873
 * 0000000140433885: add     rsp, 8
 * 0000000140433889: call    loc_14043387C
 * 000000014043388E: add     rsp, 8
 * 0000000140433892: call    loc_140433885
 * 0000000140433897: add     rsp, 8
 * 000000014043389B: call    loc_14043388E
 * 00000001404338A0: add     rsp, 8
 * 00000001404338A4: call    loc_140433897
 * 00000001404338A9: add     rsp, 8
 * 00000001404338AD: call    loc_1404338A0
 * 00000001404338B2: add     rsp, 8
 * 00000001404338B6: call    loc_1404338A9
 * 00000001404338BB: add     rsp, 8
 * 00000001404338BF: call    loc_1404338B2
 * 00000001404338C4: add     rsp, 8
 * 00000001404338C8: call    loc_1404338BB
 * 00000001404338CD: add     rsp, 8
 * 00000001404338D1: call    loc_1404338C4
 * 00000001404338D6: add     rsp, 8
 * 00000001404338DA: call    loc_1404338CD
 * 00000001404338DF: add     rsp, 8
 * 00000001404338E3: call    loc_1404338D6
 * 00000001404338E8: add     rsp, 8
 * 00000001404338EC: call    loc_1404338DF
 * 00000001404338F1: add     rsp, 8
 * 00000001404338F5: call    loc_1404338E8
 * 00000001404338FA: add     rsp, 8
 * 00000001404338FE: call    loc_1404338F1
 * 0000000140433903: add     rsp, 8
 * 0000000140433907: call    loc_1404338FA
 * 000000014043390C: add     rsp, 8
 * 0000000140433910: call    loc_140433903
 * 0000000140433915: add     rsp, 8
 * 0000000140433919: call    loc_14043390C
 * 000000014043391E: add     rsp, 8
 * 0000000140433922: call    loc_140433915
 * 0000000140433927: add     rsp, 8
 * 000000014043392B: call    loc_14043391E
 * 0000000140433930: add     rsp, 8
 * 0000000140433934: call    loc_140433927
 * 0000000140433939: add     rsp, 8
 * 000000014043393D: mov     eax, 0DADAh
 * 0000000140433942: test    byte ptr gs:862h, 8
 * 000000014043394B: jz      short loc_140433954
 * 000000014043394D: mov     al, 20h ; ' '
 * 000000014043394F: incsspq rax
 * 0000000140433954: test    edx, 200h
 * 000000014043395A: jz      short loc_140433961
 * 000000014043395C: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140433961: lfence
 * 0000000140433964: mov     byte ptr gs:856h, 0
 * 000000014043396D: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140433974: jz      short loc_140433995
 * 0000000140433976: mov     ecx, 6A7h
 * 000000014043397B: rdmsr
 * 000000014043397D: cmp     edx, 0
 * 0000000140433980: jz      short loc_140433995
 * 0000000140433982: mov     ecx, edx
 * 0000000140433984: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014043398A: cmp     edx, ecx
 * 000000014043398C: jz      short loc_140433995
 * 000000014043398E: mov     ecx, 6A7h
 * 0000000140433993: wrmsr
 * 0000000140433995: jmp     KiSystemServiceUser
 * 000000014043399A: retn
 */
