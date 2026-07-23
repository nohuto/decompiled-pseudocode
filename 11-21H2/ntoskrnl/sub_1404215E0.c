/*
 * XREFs of sub_1404215E0 @ 0x1404215E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020D230 @ 0x14020D230 (sub_14020D230.c)
 *     HalPerformEndOfInterrupt @ 0x140222670 (HalPerformEndOfInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x14022BAA0 (HalRequestSoftwareInterrupt.c)
 *     sub_1402ECA00 @ 0x1402ECA00 (sub_1402ECA00.c)
 *     sub_14041F8A0 @ 0x14041F8A0 (sub_14041F8A0.c)
 *     sub_1404206B0 @ 0x1404206B0 (sub_1404206B0.c)
 *     sub_140421230 @ 0x140421230 (sub_140421230.c)
 *     sub_1404215E0 @ 0x1404215E0 (sub_1404215E0.c)
 *     sub_140425700 @ 0x140425700 (sub_140425700.c)
 *     sub_1404281E0 @ 0x1404281E0 (sub_1404281E0.c)
 *     sub_140569E70 @ 0x140569E70 (sub_140569E70.c)
 *     sub_140571820 @ 0x140571820 (sub_140571820.c)
 */

/*
 * Hex-Rays decompilation failed for sub_1404215E0 @ 0x1404215E0
 * Reason: Hex-Rays returned no pseudocode for 0x1404215E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404215E0: mov     rdx, rsp
 * 00000001404215E3: mov     rcx, gs:8B58h
 * 00000001404215EC: lea     rax, [rcx-6000h]
 * 00000001404215F3: cmp     rax, rsp
 * 00000001404215F6: ja      short loc_1404215FD
 * 00000001404215F8: cmp     rsp, rcx
 * 00000001404215FB: jb      short loc_140421609
 * 00000001404215FD: cmp     cs:dword_140C31E20, 0
 * 0000000140421604: jnz     short loc_140421609
 * 0000000140421606: mov     rsp, rcx
 * 0000000140421609: sub     rsp, 20h
 * 000000014042160D: mov     [rsp+20h+var_10], rdx
 * 0000000140421612: call    sub_140421230
 * 0000000140421617: mov     rsp, [rsp+20h+var_10]
 * 000000014042161C: mov     rcx, rsi
 * 000000014042161F: call    HalPerformEndOfInterrupt
 * 0000000140421624: mov     rcx, gs:20h
 * 000000014042162D: cmp     byte ptr [rcx+20h], 1
 * 0000000140421631: ja      short loc_1404216AD
 * 0000000140421633: rdtsc
 * 0000000140421635: shl     rdx, 20h
 * 0000000140421639: or      rax, rdx
 * 000000014042163C: sub     rax, [rcx+8180h]
 * 0000000140421643: add     [rcx+8278h], rax
 * 000000014042164A: add     [rcx+8180h], rax
 * 0000000140421651: mov     r8, rax
 * 0000000140421654: mov     rax, [rcx+8]
 * 0000000140421658: test    byte ptr [rax+2], 72h
 * 000000014042165C: jz      short loc_140421671
 * 000000014042165E: xor     edx, edx
 * 0000000140421660: call    sub_1402ECA00
 * 0000000140421665: mov     rcx, gs:20h
 * 000000014042166E: inc     byte ptr [rcx+20h]
 * 0000000140421671: mov     dl, [rcx+6]
 * 0000000140421674: and     byte ptr [rcx+6], 0
 * 0000000140421678: cmp     byte ptr [rcx+7], 0
 * 000000014042167C: jnz     short loc_1404216AD
 * 000000014042167E: test    dl, dl
 * 0000000140421680: jz      short loc_1404216AD
 * 0000000140421682: cmp     byte ptr [rbp-57h], 2
 * 0000000140421686: jnb     short loc_140421693
 * 0000000140421688: and     byte ptr [rcx+20h], 0
 * 000000014042168C: call    sub_1404281E0
 * 0000000140421691: jmp     short loc_1404216B0
 * 0000000140421693: mov     ecx, 2
 * 0000000140421698: call    cs:off_140015970
 * 000000014042169F: nop     dword ptr [rax+rax+00h]
 * 00000001404216A4: mov     rcx, gs:20h
 * 00000001404216AD: dec     byte ptr [rcx+20h]
 * 00000001404216B0: movzx   ecx, byte ptr [rbp-57h]
 * 00000001404216B4: cmp     cs:dword_140D06B08, 0
 * 00000001404216BB: jz      short loc_1404216C4
 * 00000001404216BD: call    sub_140569E70
 * 00000001404216C2: jmp     short loc_1404216C8
 * 00000001404216C4: mov     cr8, rcx
 * 00000001404216C8: mov     rsi, [rbp+0D0h]
 * 00000001404216CF: test    byte ptr [rbp+0F0h], 1
 * 00000001404216D6: jz      loc_1404219C4
 * 00000001404216DC: test    byte ptr cs:dword_140D069F0, 0FFh
 * 00000001404216E3: jz      short loc_1404216E8
 * 00000001404216E5: stac
 * 00000001404216E8: mov     rcx, gs:188h
 * 00000001404216F1: test    byte ptr [rcx+0C2h], 3
 * 00000001404216F8: jz      short loc_140421715
 * 00000001404216FA: mov     ecx, 1
 * 00000001404216FF: mov     cr8, rcx
 * 0000000140421703: sti
 * 0000000140421704: call    sub_140425700
 * 0000000140421709: cli
 * 000000014042170A: mov     ecx, 0
 * 000000014042170F: mov     cr8, rcx
 * 0000000140421713: jmp     short loc_1404216E8
 * 0000000140421715: test    byte ptr gs:86Ch, 2
 * 000000014042171E: jz      short loc_140421727
 * 0000000140421720: xor     ecx, ecx
 * 0000000140421722: call    sub_14020D230
 * 0000000140421727: mov     rcx, gs:188h
 * 0000000140421730: test    dword ptr [rcx], 8000000h
 * 0000000140421736: jz      short loc_14042173D
 * 0000000140421738: call    sub_1404206B0
 * 000000014042173D: mov     rcx, gs:188h
 * 0000000140421746: test    dword ptr [rcx], 10000h
 * 000000014042174C: jz      short loc_140421762
 * 000000014042174E: test    byte ptr [rcx+2], 1
 * 0000000140421752: jz      short loc_140421762
 * 0000000140421754: call    sub_140571820
 * 0000000140421759: mov     rcx, gs:188h
 * 0000000140421762: ldmxcsr dword ptr [rbp-54h]
 * 0000000140421766: cmp     word ptr [rbp+80h], 0
 * 000000014042176E: jz      short loc_140421775
 * 0000000140421770: call    sub_14041F8A0
 * 0000000140421775: mov     rcx, gs:188h
 * 000000014042177E: bt      dword ptr [rcx+74h], 16h
 * 0000000140421783: jnb     short loc_1404217AF
 * 0000000140421785: xor     ecx, ecx
 * 0000000140421787: rdsspq  rcx
 * 000000014042178C: mov     r8, gs:9828h
 * 0000000140421795: add     r8, 8
 * 0000000140421799: cmp     rcx, r8
 * 000000014042179C: jnz     short loc_1404217AF
 * 000000014042179E: mov     rcx, gs:9820h
 * 00000001404217A7: rstorssp qword ptr [rcx]
 * 00000001404217AB: saveprevssp
 * 00000001404217AF: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404217B3: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404217B7: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404217BB: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404217BF: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404217C3: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404217C7: mov     r11, [rbp-20h]
 * 00000001404217CB: mov     r10, [rbp-28h]
 * 00000001404217CF: mov     r9, [rbp-30h]
 * 00000001404217D3: mov     r8, [rbp-38h]
 * 00000001404217D7: mov     byte ptr gs:856h, 0
 * 00000001404217E0: movzx   eax, word ptr gs:86Ah
 * 00000001404217E9: cmp     gs:864h, ax
 * 00000001404217F2: jz      short loc_140421806
 * 00000001404217F4: mov     gs:864h, ax
 * 00000001404217FD: mov     ecx, 48h ; 'H'
 * 0000000140421802: xor     edx, edx
 * 0000000140421804: wrmsr
 * 0000000140421806: btr     word ptr gs:860h, 2
 * 0000000140421811: jnb     short loc_140421821
 * 0000000140421813: mov     eax, 1
 * 0000000140421818: xor     edx, edx
 * 000000014042181A: mov     ecx, 49h ; 'I'
 * 000000014042181F: wrmsr
 * 0000000140421821: btr     word ptr gs:860h, 5
 * 000000014042182C: jnb     loc_140421969
 * 0000000140421832: call    loc_140421945
 * 0000000140421837: add     rsp, 8
 * 000000014042183B: call    loc_14042194E
 * 0000000140421840: add     rsp, 8
 * 0000000140421844: call    loc_140421837
 * 0000000140421849: add     rsp, 8
 * 000000014042184D: call    loc_140421840
 * 0000000140421852: add     rsp, 8
 * 0000000140421856: call    loc_140421849
 * 000000014042185B: add     rsp, 8
 * 000000014042185F: call    loc_140421852
 * 0000000140421864: add     rsp, 8
 * 0000000140421868: call    loc_14042185B
 * 000000014042186D: add     rsp, 8
 * 0000000140421871: call    loc_140421864
 * 0000000140421876: add     rsp, 8
 * 000000014042187A: call    loc_14042186D
 * 000000014042187F: add     rsp, 8
 * 0000000140421883: call    loc_140421876
 * 0000000140421888: add     rsp, 8
 * 000000014042188C: call    loc_14042187F
 * 0000000140421891: add     rsp, 8
 * 0000000140421895: call    loc_140421888
 * 000000014042189A: add     rsp, 8
 * 000000014042189E: call    loc_140421891
 * 00000001404218A3: add     rsp, 8
 * 00000001404218A7: call    loc_14042189A
 * 00000001404218AC: add     rsp, 8
 * 00000001404218B0: call    loc_1404218A3
 * 00000001404218B5: add     rsp, 8
 * 00000001404218B9: call    loc_1404218AC
 * 00000001404218BE: add     rsp, 8
 * 00000001404218C2: call    loc_1404218B5
 * 00000001404218C7: add     rsp, 8
 * 00000001404218CB: call    loc_1404218BE
 * 00000001404218D0: add     rsp, 8
 * 00000001404218D4: call    loc_1404218C7
 * 00000001404218D9: add     rsp, 8
 * 00000001404218DD: call    loc_1404218D0
 * 00000001404218E2: add     rsp, 8
 * 00000001404218E6: call    loc_1404218D9
 * 00000001404218EB: add     rsp, 8
 * 00000001404218EF: call    loc_1404218E2
 * 00000001404218F4: add     rsp, 8
 * 00000001404218F8: call    loc_1404218EB
 * 00000001404218FD: add     rsp, 8
 * 0000000140421901: call    loc_1404218F4
 * 0000000140421906: add     rsp, 8
 * 000000014042190A: call    loc_1404218FD
 * 000000014042190F: add     rsp, 8
 * 0000000140421913: call    loc_140421906
 * 0000000140421918: add     rsp, 8
 * 000000014042191C: call    loc_14042190F
 * 0000000140421921: add     rsp, 8
 * 0000000140421925: call    loc_140421918
 * 000000014042192A: add     rsp, 8
 * 000000014042192E: call    loc_140421921
 * 0000000140421933: add     rsp, 8
 * 0000000140421937: call    loc_14042192A
 * 000000014042193C: add     rsp, 8
 * 0000000140421940: call    loc_140421933
 * 0000000140421945: add     rsp, 8
 * 0000000140421949: call    loc_14042193C
 * 000000014042194E: add     rsp, 8
 * 0000000140421952: mov     eax, 0DADAh
 * 0000000140421957: test    byte ptr gs:862h, 8
 * 0000000140421960: jz      short loc_140421969
 * 0000000140421962: mov     al, 20h ; ' '
 * 0000000140421964: incsspq rax
 * 0000000140421969: test    word ptr gs:860h, 80h
 * 0000000140421974: jz      short loc_140421982
 * 0000000140421976: xor     eax, eax
 * 0000000140421978: xor     edx, edx
 * 000000014042197A: mov     ecx, 1
 * 000000014042197F: div     rcx
 * 0000000140421982: mov     rdx, [rbp-40h]
 * 0000000140421986: mov     rcx, [rbp-48h]
 * 000000014042198A: mov     rax, [rbp-50h]
 * 000000014042198E: mov     rsp, rbp
 * 0000000140421991: mov     rbp, [rbp+0D8h]
 * 0000000140421998: add     rsp, 0E8h
 * 000000014042199F: test    cs:byte_140E01840, 1
 * 00000001404219A6: jz      short loc_1404219AD
 * 00000001404219A8: jmp     sub_140AB6B80
 * 00000001404219AD: test    word ptr gs:860h, 100h
 * 00000001404219B8: jz      short loc_1404219BF
 * 00000001404219BA: verw    [rsp-1C8h+arg_1E0]
 * 00000001404219BF: swapgs
 * 00000001404219C2: iretq
 * 00000001404219C4: ldmxcsr dword ptr [rbp-54h]
 * 00000001404219C8: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404219CC: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404219D0: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404219D4: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404219D8: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404219DC: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404219E0: mov     r11, [rbp-20h]
 * 00000001404219E4: mov     r10, [rbp-28h]
 * 00000001404219E8: mov     r9, [rbp-30h]
 * 00000001404219EC: mov     r8, [rbp-38h]
 * 00000001404219F0: mov     rdx, [rbp-40h]
 * 00000001404219F4: mov     rcx, [rbp-48h]
 * 00000001404219F8: mov     rax, [rbp-50h]
 * 00000001404219FC: mov     rsp, rbp
 * 00000001404219FF: mov     rbp, [rbp+0D8h]
 * 0000000140421A06: add     rsp, 0E8h
 * 0000000140421A0D: iretq
 */
