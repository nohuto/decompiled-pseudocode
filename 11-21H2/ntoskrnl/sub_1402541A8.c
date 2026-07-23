/*
 * XREFs of sub_1402541A8 @ 0x1402541A8
 * Callers:
 *     sub_1406DBDA0 @ 0x1406DBDA0 (sub_1406DBDA0.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1402A2094 @ 0x1402A2094 (sub_1402A2094.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140387858 @ 0x140387858 (sub_140387858.c)
 *     sub_140387B78 @ 0x140387B78 (sub_140387B78.c)
 *     sub_1403886FC @ 0x1403886FC (sub_1403886FC.c)
 *     sub_140388BFC @ 0x140388BFC (sub_140388BFC.c)
 *     sub_140389ADC @ 0x140389ADC (sub_140389ADC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14053E4A8 @ 0x14053E4A8 (sub_14053E4A8.c)
 *     sub_1406DBEDC @ 0x1406DBEDC (sub_1406DBEDC.c)
 *     sub_1406DBF58 @ 0x1406DBF58 (sub_1406DBF58.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

/*
 * Hex-Rays decompilation failed for sub_1402541A8 @ 0x1402541A8
 * Reason: Hex-Rays returned no pseudocode for 0x1402541A8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402541A8: mov     r11, rsp
 * 00000001402541AB: mov     [r11+8], rbx
 * 00000001402541AF: mov     [r11+10h], rsi
 * 00000001402541B3: mov     [r11+18h], rdi
 * 00000001402541B7: mov     [r11+20h], r12
 * 00000001402541BB: push    r13
 * 00000001402541BD: push    r14
 * 00000001402541BF: push    r15
 * 00000001402541C1: sub     rsp, 7E0h
 * 00000001402541C8: mov     rax, cs:__security_cookie
 * 00000001402541CF: xor     rax, rsp
 * 00000001402541D2: mov     [rsp+7F8h+var_28], rax
 * 00000001402541DA: xor     r13b, r13b
 * 00000001402541DD: xorps   xmm0, xmm0
 * 00000001402541E0: xor     eax, eax
 * 00000001402541E2: movups  xmmword ptr [rsp+7F8h+LockHandle.LockQueue.Next], xmm0
 * 00000001402541EA: mov     [r11-518h], rax
 * 00000001402541F1: and     [rsp+7F8h+var_584], eax
 * 00000001402541F8: and     [rsp+7F8h+var_550], eax
 * 00000001402541FF: mov     rsi, 0FFFFF78000000014h
 * 0000000140254209: mov     rsi, [rsi]
 * 000000014025420C: mov     rbx, rsi
 * 000000014025420F: sub     rbx, cs:qword_140C49890
 * 0000000140254216: mov     rdi, rsi
 * 0000000140254219: sub     rdi, cs:qword_140C49898
 * 0000000140254220: cmp     rbx, cs:qword_140C498A8
 * 0000000140254227: jge     short loc_140254268
 * 0000000140254229: mov     rax, cs:qword_140C498B8
 * 0000000140254230: test    rax, rax
 * 0000000140254233: jle     short loc_140254268
 * 0000000140254235: mov     rcx, [rsp+7F8h+var_28]
 * 000000014025423D: xor     rcx, rsp; _StackCookie
 * 0000000140254240: call    __security_check_cookie
 * 0000000140254245: lea     r11, [rsp+7F8h+var_18]
 * 000000014025424D: mov     rbx, [r11+20h]
 * 0000000140254251: mov     rsi, [r11+28h]
 * 0000000140254255: mov     rdi, [r11+30h]
 * 0000000140254259: mov     r12, [r11+38h]
 * 000000014025425D: mov     rsp, r11
 * 0000000140254260: pop     r15
 * 0000000140254262: pop     r14
 * 0000000140254264: pop     r13
 * 0000000140254266: retn
 * 0000000140254268: cmp     cs:qword_140C498B8, 0
 * 0000000140254270: jnz     loc_140254F41
 * 0000000140254276: mov     r13b, 1
 * 0000000140254279: inc     cs:qword_140C498B8
 * 0000000140254280: mov     r14, cs:qword_140C498C8
 * 0000000140254287: add     r14, 0Ah
 * 000000014025428B: mov     [rsp+7F8h+var_548], r14
 * 0000000140254293: imul    rdx, r14, 940h; NumberOfBytes
 * 000000014025429A: mov     ecx, 600h; PoolType
 * 000000014025429F: mov     r8d, 65546343h; Tag
 * 00000001402542A5: call    ExAllocatePoolWithTag
 * 00000001402542AA: mov     [rsp+7F8h+P], rax
 * 00000001402542B2: test    rax, rax
 * 00000001402542B5: jz      loc_140254235
 * 00000001402542BB: lea     rdx, [rsp+7F8h+LockHandle]; LockHandle
 * 00000001402542C3: lea     rcx, SpinLock; SpinLock
 * 00000001402542CA: call    KeAcquireInStackQueuedSpinLock
 * 00000001402542CF: mov     r15, cs:qword_140C49B30
 * 00000001402542D6: mov     [rsp+7F8h+var_4A0], r15
 * 00000001402542DE: mov     r12d, [rsp+7F8h+var_550]
 * 00000001402542E6: lea     rax, qword_140C49B30
 * 00000001402542ED: cmp     r15, rax
 * 00000001402542F0: jz      loc_140254418
 * 00000001402542F6: mov     eax, r12d
 * 00000001402542F9: cmp     rax, r14
 * 00000001402542FC: jnb     loc_140254418
 * 0000000140254302: lea     r14, [r15-10h]
 * 0000000140254306: mov     [rsp+7F8h+var_3A8], r14
 * 000000014025430E: inc     r12d
 * 0000000140254311: mov     [rsp+7F8h+var_550], r12d
 * 0000000140254319: cmp     qword ptr [r14+150h], 0
 * 0000000140254321: jbe     loc_1402543B4
 * 0000000140254327: mov     al, 1
 * 0000000140254329: test    al, al
 * 000000014025432B: jz      loc_140254401
 * 0000000140254331: lea     r10, [r14+0E0h]
 * 0000000140254338: mov     rcx, r10
 * 000000014025433B: call    sub_140387858
 * 0000000140254340: mov     r9d, [rsp+7F8h+var_584]
 * 0000000140254348: imul    rax, r9, 940h
 * 000000014025434F: mov     rcx, [rsp+7F8h+P]
 * 0000000140254357: add     rcx, rax; void *
 * 000000014025435A: mov     rdx, r10; Src
 * 000000014025435D: mov     r8d, 940h; Size
 * 0000000140254363: call    memmove
 * 0000000140254368: lea     rcx, [r14+0F0h]; void *
 * 000000014025436F: xor     edx, edx; Val
 * 0000000140254371: mov     r8d, 498h; Size
 * 0000000140254377: call    memset
 * 000000014025437C: test    r13b, r13b
 * 000000014025437F: jz      short loc_140254395
 * 0000000140254381: lea     rcx, [r14+588h]; void *
 * 0000000140254388: xor     edx, edx; Val
 * 000000014025438A: mov     r8d, 498h; Size
 * 0000000140254390: call    memset
 * 0000000140254395: mov     r15, [r15]
 * 0000000140254398: mov     [rsp+7F8h+var_4A0], r15
 * 00000001402543A0: inc     [rsp+7F8h+var_584]
 * 00000001402543A7: mov     r14, [rsp+7F8h+var_548]
 * 00000001402543AF: jmp     loc_1402542E6
 * 00000001402543B4: cmp     qword ptr [r14+158h], 0
 * 00000001402543BC: ja      loc_140254327
 * 00000001402543C2: cmp     qword ptr [r14+160h], 0
 * 00000001402543CA: ja      loc_140254327
 * 00000001402543D0: cmp     qword ptr [r14+310h], 0
 * 00000001402543D8: ja      loc_140254327
 * 00000001402543DE: cmp     qword ptr [r14+318h], 0
 * 00000001402543E6: ja      loc_140254327
 * 00000001402543EC: cmp     qword ptr [r14+320h], 0
 * 00000001402543F4: ja      loc_140254327
 * 00000001402543FA: xor     al, al
 * 00000001402543FC: jmp     loc_140254329
 * 0000000140254401: test    r13b, r13b
 * 0000000140254404: jz      short loc_1402543A7
 * 0000000140254406: mov     rcx, r14
 * 0000000140254409: call    sub_14053E4A8
 * 000000014025440E: test    al, al
 * 0000000140254410: jnz     loc_140254331
 * 0000000140254416: jmp     short loc_1402543A7
 * 0000000140254418: lea     rcx, [rsp+7F8h+LockHandle]; LockHandle
 * 0000000140254420: call    KeReleaseInStackQueuedSpinLockFromDpcLevel
 * 0000000140254425: mov     r14, qword ptr [rsp+7F8h+LockHandle.OldIrql]
 * 000000014025442D: mov     eax, cs:dword_140D06B08
 * 0000000140254433: test    eax, eax
 * 0000000140254435: jnz     loc_140480574
 * 000000014025443B: movzx   eax, r14b
 * 000000014025443F: mov     cr8, rax
 * 0000000140254443: call    sub_1406DBF58
 * 0000000140254448: mov     ecx, cs:dword_140C49C0C
 * 000000014025444E: mov     r12, 6666666666666667h
 * 0000000140254458: test    cl, 1
 * 000000014025445B: jz      loc_140254546
 * 0000000140254461: mov     rax, r12
 * 0000000140254464: imul    rbx
 * 0000000140254467: sar     rdx, 2
 * 000000014025446B: mov     r9, rdx
 * 000000014025446E: shr     r9, 3Fh
 * 0000000140254472: add     r9, rdx
 * 0000000140254475: mov     rax, cs:qword_140C49900
 * 000000014025447C: mov     [rsp+7F8h+var_760], rax
 * 0000000140254484: mov     rax, cs:qword_140C498F8
 * 000000014025448B: mov     [rsp+7F8h+var_768], rax
 * 0000000140254493: mov     rax, cs:qword_140C498F0
 * 000000014025449A: mov     [rsp+7F8h+var_770], rax
 * 00000001402544A2: mov     rax, cs:qword_140C498E8
 * 00000001402544A9: mov     [rsp+7F8h+var_778], rax
 * 00000001402544B1: mov     rax, cs:qword_140C498E0
 * 00000001402544B8: mov     [rsp+7F8h+var_780], rax
 * 00000001402544BD: mov     rax, cs:qword_140C49948
 * 00000001402544C4: mov     [rsp+7F8h+var_788], rax
 * 00000001402544C9: mov     rax, cs:qword_140C49940
 * 00000001402544D0: mov     [rsp+7F8h+var_790], rax
 * 00000001402544D5: mov     rax, cs:qword_140C49938
 * 00000001402544DC: mov     [rsp+7F8h+var_798], rax
 * 00000001402544E1: mov     rax, cs:qword_140C49930
 * 00000001402544E8: mov     [rsp+7F8h+var_7A0], rax
 * 00000001402544ED: mov     rax, cs:qword_140C49928
 * 00000001402544F4: mov     [rsp+7F8h+var_7A8], rax
 * 00000001402544F9: mov     rax, cs:qword_140C49920
 * 0000000140254500: mov     [rsp+7F8h+var_7B0], rax
 * 0000000140254505: mov     rax, cs:qword_140C49918
 * 000000014025450C: mov     [rsp+7F8h+var_7B8], rax
 * 0000000140254511: mov     rax, cs:qword_140C49910
 * 0000000140254518: mov     [rsp+7F8h+var_7C0], rax
 * 000000014025451D: mov     rax, cs:qword_140C49908
 * 0000000140254524: mov     [rsp+7F8h+var_7C8], rax
 * 0000000140254529: mov     rax, cs:qword_140C498D8
 * 0000000140254530: mov     [rsp+7F8h+var_7D0], rax
 * 0000000140254535: mov     rax, cs:qword_140C498D0
 * 000000014025453C: mov     [rsp+7F8h+var_7D8], rax
 * 0000000140254541: call    sub_140389ADC
 * 0000000140254546: call    sub_1406DBEDC
 * 000000014025454B: xor     r10d, r10d
 * 000000014025454E: test    r13b, r13b
 * 0000000140254551: jz      loc_1402545F5
 * 0000000140254557: cmp     cs:dword_140C02EE8, 5
 * 000000014025455E: jbe     short loc_14025457E
 * 0000000140254560: mov     rdx, 400000000000h
 * 000000014025456A: lea     rcx, dword_140C02EE8
 * 0000000140254571: call    sub_1402A2000
 * 0000000140254576: test    al, al
 * 0000000140254578: jnz     loc_1404805E6
 * 000000014025457E: mov     cs:qword_140C49950, r10
 * 0000000140254585: mov     cs:qword_140C49958, r10
 * 000000014025458C: mov     cs:qword_140C49960, r10
 * 0000000140254593: mov     cs:qword_140C49968, r10
 * 000000014025459A: mov     cs:qword_140C49970, r10
 * 00000001402545A1: mov     cs:qword_140C49978, r10
 * 00000001402545A8: mov     cs:qword_140C49980, r10
 * 00000001402545AF: mov     cs:qword_140C49988, r10
 * 00000001402545B6: mov     cs:qword_140C49990, r10
 * 00000001402545BD: mov     cs:qword_140C49998, r10
 * 00000001402545C4: mov     cs:qword_140C499A0, r10
 * 00000001402545CB: mov     cs:qword_140C499A8, r10
 * 00000001402545D2: mov     cs:qword_140C499B0, r10
 * 00000001402545D9: mov     cs:qword_140C499B8, r10
 * 00000001402545E0: mov     cs:qword_140C499C0, r10
 * 00000001402545E7: mov     cs:qword_140C499C8, r10
 * 00000001402545EE: mov     cs:qword_140C49898, rsi
 * 00000001402545F5: mov     eax, r10d
 * 00000001402545F8: mov     [rsp+7F8h+var_580], eax
 * 00000001402545FF: mov     edx, [rsp+7F8h+var_584]
 * 0000000140254606: mov     ecx, eax
 * 0000000140254608: cmp     rcx, rdx
 * 000000014025460B: jnb     loc_140254F26
 * 0000000140254611: imul    rdi, rcx, 940h
 * 0000000140254618: add     rdi, [rsp+7F8h+P]
 * 0000000140254620: mov     rcx, [rdi+58h]
 * 0000000140254624: test    rcx, rcx
 * 0000000140254627: jz      loc_14048097A
 * 000000014025462D: mov     rax, rcx
 * 0000000140254630: sub     rax, [rdi+60h]
 * 0000000140254634: imul    rax, 64h ; 'd'
 * 0000000140254638: xor     edx, edx
 * 000000014025463A: div     rcx
 * 000000014025463D: mov     r8, rax
 * 0000000140254640: mov     [rsp+7F8h+var_548], r8
 * 0000000140254648: mov     eax, cs:dword_140C49C0C
 * 000000014025464E: test    al, 1
 * 0000000140254650: jz      loc_1402547C5
 * 0000000140254656: mov     rax, r12
 * 0000000140254659: imul    rbx
 * 000000014025465C: sar     rdx, 2
 * 0000000140254660: mov     rax, rdx
 * 0000000140254663: shr     rax, 3Fh
 * 0000000140254667: add     rdx, rax
 * 000000014025466A: mov     rax, [rdi+3E0h]
 * 0000000140254671: mov     [rsp+7F8h+var_6F8], rax
 * 0000000140254679: mov     rax, [rdi+3D8h]
 * 0000000140254680: mov     [rsp+7F8h+var_700], rax
 * 0000000140254688: mov     rax, [rdi+250h]
 * 000000014025468F: mov     [rsp+7F8h+var_708], rax
 * 0000000140254697: mov     rax, [rdi+248h]
 * 000000014025469E: mov     [rsp+7F8h+var_710], rax
 * 00000001402546A6: mov     rax, [rdi+240h]
 * 00000001402546AD: mov     [rsp+7F8h+var_718], rax
 * 00000001402546B5: mov     rax, [rdi+238h]
 * 00000001402546BC: mov     [rsp+7F8h+var_720], rax
 * 00000001402546C4: mov     rax, [rdi+230h]
 * 00000001402546CB: mov     [rsp+7F8h+var_728], rax
 * 00000001402546D3: mov     rax, [rdi+0A8h]
 * 00000001402546DA: mov     [rsp+7F8h+var_730], rax
 * 00000001402546E2: mov     rax, [rdi+0A0h]
 * 00000001402546E9: mov     [rsp+7F8h+var_738], rax
 * 00000001402546F1: mov     rax, [rdi+80h]
 * 00000001402546F8: mov     [rsp+7F8h+var_740], rax
 * 0000000140254700: mov     rax, [rdi+78h]
 * 0000000140254704: mov     [rsp+7F8h+var_748], rax
 * 000000014025470C: mov     rax, [rdi+70h]
 * 0000000140254710: mov     [rsp+7F8h+var_750], rax
 * 0000000140254718: mov     rax, [rdi+98h]
 * 000000014025471F: mov     [rsp+7F8h+var_758], rax
 * 0000000140254727: mov     rax, [rdi+90h]
 * 000000014025472E: mov     [rsp+7F8h+var_760], rax
 * 0000000140254736: mov     rax, [rdi+88h]
 * 000000014025473D: mov     [rsp+7F8h+var_768], rax
 * 0000000140254745: mov     [rsp+7F8h+var_770], r8
 * 000000014025474D: mov     rax, [rdi+68h]
 * 0000000140254751: mov     [rsp+7F8h+var_778], rax
 * 0000000140254759: mov     rax, [rdi+60h]
 * 000000014025475D: mov     [rsp+7F8h+var_780], rax
 * 0000000140254762: mov     [rsp+7F8h+var_788], rcx
 * 0000000140254767: mov     rax, [rdi+50h]
 * 000000014025476B: mov     [rsp+7F8h+var_790], rax
 * 0000000140254770: mov     rax, [rdi+48h]
 * 0000000140254774: mov     [rsp+7F8h+var_798], rax
 * 0000000140254779: mov     rax, [rdi+40h]
 * 000000014025477D: mov     [rsp+7F8h+var_7A0], rax
 * 0000000140254782: mov     rax, [rdi+38h]
 * 0000000140254786: mov     [rsp+7F8h+var_7A8], rax
 * 000000014025478B: mov     rax, [rdi+30h]
 * 000000014025478F: mov     [rsp+7F8h+var_7B0], rax
 * 0000000140254794: mov     rax, [rdi+28h]
 * 0000000140254798: mov     [rsp+7F8h+var_7B8], rax
 * 000000014025479D: mov     rax, [rdi+20h]
 * 00000001402547A1: mov     [rsp+7F8h+var_7C0], rax
 * 00000001402547A6: mov     rax, [rdi+18h]
 * 00000001402547AA: mov     [rsp+7F8h+var_7C8], rax
 * 00000001402547AF: mov     rax, [rdi+10h]
 * 00000001402547B3: mov     [rsp+7F8h+var_7D0], rax
 * 00000001402547B8: mov     [rsp+7F8h+var_7D8], rdx
 * 00000001402547BD: mov     r9, rdi
 * 00000001402547C0: call    sub_140388BFC
 * 00000001402547C5: mov     eax, cs:dword_140C49C0C
 * 00000001402547CB: test    al, 1
 * 00000001402547CD: jz      loc_140254C0B
 * 00000001402547D3: mov     rax, r12
 * 00000001402547D6: imul    rbx
 * 00000001402547D9: sar     rdx, 2
 * 00000001402547DD: mov     rax, rdx
 * 00000001402547E0: shr     rax, 3Fh
 * 00000001402547E4: add     rdx, rax
 * 00000001402547E7: mov     rax, [rdi+4A0h]
 * 00000001402547EE: mov     [rsp+7F8h+var_598], rax
 * 00000001402547F6: mov     rax, [rdi+498h]
 * 00000001402547FD: mov     [rsp+7F8h+var_5A0], rax
 * 0000000140254805: mov     rax, [rdi+490h]
 * 000000014025480C: mov     [rsp+7F8h+var_5A8], rax
 * 0000000140254814: mov     rax, [rdi+488h]
 * 000000014025481B: mov     [rsp+7F8h+var_5B0], rax
 * 0000000140254823: mov     rax, [rdi+480h]
 * 000000014025482A: mov     [rsp+7F8h+var_5B8], rax
 * 0000000140254832: mov     rax, [rdi+478h]
 * 0000000140254839: mov     [rsp+7F8h+var_5C0], rax
 * 0000000140254841: mov     rax, [rdi+470h]
 * 0000000140254848: mov     [rsp+7F8h+var_5C8], rax
 * 0000000140254850: mov     rax, [rdi+468h]
 * 0000000140254857: mov     [rsp+7F8h+var_5D0], rax
 * 000000014025485F: mov     rax, [rdi+460h]
 * 0000000140254866: mov     [rsp+7F8h+var_5D8], rax
 * 000000014025486E: mov     rax, [rdi+458h]
 * 0000000140254875: mov     [rsp+7F8h+var_5E0], rax
 * 000000014025487D: mov     rax, [rdi+450h]
 * 0000000140254884: mov     [rsp+7F8h+var_5E8], rax
 * 000000014025488C: mov     rax, [rdi+448h]
 * 0000000140254893: mov     [rsp+7F8h+var_5F0], rax
 * 000000014025489B: mov     rax, [rdi+440h]
 * 00000001402548A2: mov     [rsp+7F8h+var_5F8], rax
 * 00000001402548AA: mov     rax, [rdi+438h]
 * 00000001402548B1: mov     [rsp+7F8h+var_600], rax
 * 00000001402548B9: mov     rax, [rdi+430h]
 * 00000001402548C0: mov     [rsp+7F8h+var_608], rax
 * 00000001402548C8: mov     rax, [rdi+428h]
 * 00000001402548CF: mov     [rsp+7F8h+var_610], rax
 * 00000001402548D7: mov     rax, [rdi+420h]
 * 00000001402548DE: mov     [rsp+7F8h+var_618], rax
 * 00000001402548E6: mov     rax, [rdi+418h]
 * 00000001402548ED: mov     [rsp+7F8h+var_620], rax
 * 00000001402548F5: mov     rax, [rdi+410h]
 * 00000001402548FC: mov     [rsp+7F8h+var_628], rax
 * 0000000140254904: mov     rax, [rdi+408h]
 * 000000014025490B: mov     [rsp+7F8h+var_630], rax
 * 0000000140254913: mov     rax, [rdi+400h]
 * 000000014025491A: mov     [rsp+7F8h+var_638], rax
 * 0000000140254922: mov     rax, [rdi+3F8h]
 * 0000000140254929: mov     [rsp+7F8h+var_640], rax
 * 0000000140254931: mov     rax, [rdi+3F0h]
 * 0000000140254938: mov     [rsp+7F8h+var_648], rax
 * 0000000140254940: mov     rax, [rdi+3E8h]
 * 0000000140254947: mov     [rsp+7F8h+var_650], rax
 * 000000014025494F: mov     rax, [rdi+228h]
 * 0000000140254956: mov     [rsp+7F8h+var_658], rax
 * 000000014025495E: mov     rax, [rdi+220h]
 * 0000000140254965: mov     [rsp+7F8h+var_660], rax
 * 000000014025496D: mov     rax, [rdi+218h]
 * 0000000140254974: mov     [rsp+7F8h+var_668], rax
 * 000000014025497C: mov     rax, [rdi+210h]
 * 0000000140254983: mov     [rsp+7F8h+var_670], rax
 * 000000014025498B: mov     rax, [rdi+208h]
 * 0000000140254992: mov     [rsp+7F8h+var_678], rax
 * 000000014025499A: mov     rax, [rdi+200h]
 * 00000001402549A1: mov     [rsp+7F8h+var_680], rax
 * 00000001402549A9: mov     rax, [rdi+1F8h]
 * 00000001402549B0: mov     [rsp+7F8h+var_688], rax
 * 00000001402549B8: mov     rax, [rdi+1F0h]
 * 00000001402549BF: mov     [rsp+7F8h+var_690], rax
 * 00000001402549C7: mov     rax, [rdi+1E8h]
 * 00000001402549CE: mov     [rsp+7F8h+var_698], rax
 * 00000001402549D6: mov     rax, [rdi+1E0h]
 * 00000001402549DD: mov     [rsp+7F8h+var_6A0], rax
 * 00000001402549E5: mov     rax, [rdi+1D8h]
 * 00000001402549EC: mov     [rsp+7F8h+var_6A8], rax
 * 00000001402549F4: mov     rax, [rdi+1D0h]
 * 00000001402549FB: mov     [rsp+7F8h+var_6B0], rax
 * 0000000140254A03: mov     rax, [rdi+1C8h]
 * 0000000140254A0A: mov     [rsp+7F8h+var_6B8], rax
 * 0000000140254A12: mov     rax, [rdi+1C0h]
 * 0000000140254A19: mov     [rsp+7F8h+var_6C0], rax
 * 0000000140254A21: mov     rax, [rdi+1B8h]
 * 0000000140254A28: mov     [rsp+7F8h+var_6C8], rax
 * 0000000140254A30: mov     rax, [rdi+1B0h]
 * 0000000140254A37: mov     [rsp+7F8h+var_6D0], rax
 * 0000000140254A3F: mov     rax, [rdi+1A8h]
 * 0000000140254A46: mov     [rsp+7F8h+var_6D8], rax
 * 0000000140254A4E: mov     rax, [rdi+1A0h]
 * 0000000140254A55: mov     [rsp+7F8h+var_6E0], rax
 * 0000000140254A5D: mov     rax, [rdi+198h]
 * 0000000140254A64: mov     [rsp+7F8h+var_6E8], rax
 * 0000000140254A6C: mov     rax, [rdi+190h]
 * 0000000140254A73: mov     [rsp+7F8h+var_6F0], rax
 * 0000000140254A7B: mov     rax, [rdi+188h]
 * 0000000140254A82: mov     [rsp+7F8h+var_6F8], rax
 * 0000000140254A8A: mov     rax, [rdi+180h]
 * 0000000140254A91: mov     [rsp+7F8h+var_700], rax
 * 0000000140254A99: mov     rax, [rdi+178h]
 * 0000000140254AA0: mov     [rsp+7F8h+var_708], rax
 * 0000000140254AA8: mov     rax, [rdi+170h]
 * 0000000140254AAF: mov     [rsp+7F8h+var_710], rax
 * 0000000140254AB7: mov     rax, [rdi+168h]
 * 0000000140254ABE: mov     [rsp+7F8h+var_718], rax
 * 0000000140254AC6: mov     rax, [rdi+160h]
 * 0000000140254ACD: mov     [rsp+7F8h+var_720], rax
 * 0000000140254AD5: mov     rax, [rdi+158h]
 * 0000000140254ADC: mov     [rsp+7F8h+var_728], rax
 * 0000000140254AE4: mov     rax, [rdi+150h]
 * 0000000140254AEB: mov     [rsp+7F8h+var_730], rax
 * 0000000140254AF3: mov     rax, [rdi+148h]
 * 0000000140254AFA: mov     [rsp+7F8h+var_738], rax
 * 0000000140254B02: mov     rax, [rdi+140h]
 * 0000000140254B09: mov     [rsp+7F8h+var_740], rax
 * 0000000140254B11: mov     rax, [rdi+138h]
 * 0000000140254B18: mov     [rsp+7F8h+var_748], rax
 * 0000000140254B20: mov     rax, [rdi+130h]
 * 0000000140254B27: mov     [rsp+7F8h+var_750], rax
 * 0000000140254B2F: mov     rax, [rdi+128h]
 * 0000000140254B36: mov     [rsp+7F8h+var_758], rax
 * 0000000140254B3E: mov     rax, [rdi+120h]
 * 0000000140254B45: mov     [rsp+7F8h+var_760], rax
 * 0000000140254B4D: mov     rax, [rdi+118h]
 * 0000000140254B54: mov     [rsp+7F8h+var_768], rax
 * 0000000140254B5C: mov     rax, [rdi+110h]
 * 0000000140254B63: mov     [rsp+7F8h+var_770], rax
 * 0000000140254B6B: mov     rax, [rdi+108h]
 * 0000000140254B72: mov     [rsp+7F8h+var_778], rax
 * 0000000140254B7A: mov     rax, [rdi+100h]
 * 0000000140254B81: mov     [rsp+7F8h+var_780], rax
 * 0000000140254B86: mov     rax, [rdi+0F8h]
 * 0000000140254B8D: mov     [rsp+7F8h+var_788], rax
 * 0000000140254B92: mov     rax, [rdi+0F0h]
 * 0000000140254B99: mov     [rsp+7F8h+var_790], rax
 * 0000000140254B9E: mov     rax, [rdi+0E8h]
 * 0000000140254BA5: mov     [rsp+7F8h+var_798], rax
 * 0000000140254BAA: mov     rax, [rdi+0E0h]
 * 0000000140254BB1: mov     [rsp+7F8h+var_7A0], rax
 * 0000000140254BB6: mov     rax, [rdi+0D8h]
 * 0000000140254BBD: mov     [rsp+7F8h+var_7A8], rax
 * 0000000140254BC2: mov     rax, [rdi+0D0h]
 * 0000000140254BC9: mov     [rsp+7F8h+var_7B0], rax
 * 0000000140254BCE: mov     rax, [rdi+0C8h]
 * 0000000140254BD5: mov     [rsp+7F8h+var_7B8], rax
 * 0000000140254BDA: mov     rax, [rdi+0C0h]
 * 0000000140254BE1: mov     [rsp+7F8h+var_7C0], rax
 * 0000000140254BE6: mov     rax, [rdi+0B8h]
 * 0000000140254BED: mov     [rsp+7F8h+var_7C8], rax
 * 0000000140254BF2: mov     rax, [rdi+0B0h]
 * 0000000140254BF9: mov     [rsp+7F8h+var_7D0], rax
 * 0000000140254BFE: mov     [rsp+7F8h+var_7D8], rdx
 * 0000000140254C03: mov     r9, rdi
 * 0000000140254C06: call    sub_140387B78
 * 0000000140254C0B: mov     eax, cs:dword_140C49C0C
 * 0000000140254C11: test    al, 1
 * 0000000140254C13: jz      loc_140254EE9
 * 0000000140254C19: mov     rax, r12
 * 0000000140254C1C: imul    rbx
 * 0000000140254C1F: sar     rdx, 2
 * 0000000140254C23: mov     rax, rdx
 * 0000000140254C26: shr     rax, 3Fh
 * 0000000140254C2A: add     rdx, rax
 * 0000000140254C2D: mov     rax, [rdi+3D0h]
 * 0000000140254C34: mov     [rsp+7F8h+var_658], rax
 * 0000000140254C3C: mov     rax, [rdi+3C8h]
 * 0000000140254C43: mov     [rsp+7F8h+var_660], rax
 * 0000000140254C4B: mov     rax, [rdi+3C0h]
 * 0000000140254C52: mov     [rsp+7F8h+var_668], rax
 * 0000000140254C5A: mov     rax, [rdi+3B8h]
 * 0000000140254C61: mov     [rsp+7F8h+var_670], rax
 * 0000000140254C69: mov     rax, [rdi+3B0h]
 * 0000000140254C70: mov     [rsp+7F8h+var_678], rax
 * 0000000140254C78: mov     rax, [rdi+3A8h]
 * 0000000140254C7F: mov     [rsp+7F8h+var_680], rax
 * 0000000140254C87: mov     rax, [rdi+3A0h]
 * 0000000140254C8E: mov     [rsp+7F8h+var_688], rax
 * 0000000140254C96: mov     rax, [rdi+398h]
 * 0000000140254C9D: mov     [rsp+7F8h+var_690], rax
 * 0000000140254CA5: mov     rax, [rdi+390h]
 * 0000000140254CAC: mov     [rsp+7F8h+var_698], rax
 * 0000000140254CB4: mov     rax, [rdi+388h]
 * 0000000140254CBB: mov     [rsp+7F8h+var_6A0], rax
 * 0000000140254CC3: mov     rax, [rdi+380h]
 * 0000000140254CCA: mov     [rsp+7F8h+var_6A8], rax
 * 0000000140254CD2: mov     rax, [rdi+378h]
 * 0000000140254CD9: mov     [rsp+7F8h+var_6B0], rax
 * 0000000140254CE1: mov     rax, [rdi+370h]
 * 0000000140254CE8: mov     [rsp+7F8h+var_6B8], rax
 * 0000000140254CF0: mov     rax, [rdi+368h]
 * 0000000140254CF7: mov     [rsp+7F8h+var_6C0], rax
 * 0000000140254CFF: mov     rax, [rdi+360h]
 * 0000000140254D06: mov     [rsp+7F8h+var_6C8], rax
 * 0000000140254D0E: mov     rax, [rdi+358h]
 * 0000000140254D15: mov     [rsp+7F8h+var_6D0], rax
 * 0000000140254D1D: mov     rax, [rdi+350h]
 * 0000000140254D24: mov     [rsp+7F8h+var_6D8], rax
 * 0000000140254D2C: mov     rax, [rdi+348h]
 * 0000000140254D33: mov     [rsp+7F8h+var_6E0], rax
 * 0000000140254D3B: mov     rax, [rdi+340h]
 * 0000000140254D42: mov     [rsp+7F8h+var_6E8], rax
 * 0000000140254D4A: mov     rax, [rdi+338h]
 * 0000000140254D51: mov     [rsp+7F8h+var_6F0], rax
 * 0000000140254D59: mov     rax, [rdi+330h]
 * 0000000140254D60: mov     [rsp+7F8h+var_6F8], rax
 * 0000000140254D68: mov     rax, [rdi+328h]
 * 0000000140254D6F: mov     [rsp+7F8h+var_700], rax
 * 0000000140254D77: mov     rax, [rdi+320h]
 * 0000000140254D7E: mov     [rsp+7F8h+var_708], rax
 * 0000000140254D86: mov     rax, [rdi+318h]
 * 0000000140254D8D: mov     [rsp+7F8h+var_710], rax
 * 0000000140254D95: mov     rax, [rdi+310h]
 * 0000000140254D9C: mov     [rsp+7F8h+var_718], rax
 * 0000000140254DA4: mov     rax, [rdi+308h]
 * 0000000140254DAB: mov     [rsp+7F8h+var_720], rax
 * 0000000140254DB3: mov     rax, [rdi+300h]
 * 0000000140254DBA: mov     [rsp+7F8h+var_728], rax
 * 0000000140254DC2: mov     rax, [rdi+2F8h]
 * 0000000140254DC9: mov     [rsp+7F8h+var_730], rax
 * 0000000140254DD1: mov     rax, [rdi+2F0h]
 * 0000000140254DD8: mov     [rsp+7F8h+var_738], rax
 * 0000000140254DE0: mov     rax, [rdi+2E8h]
 * 0000000140254DE7: mov     [rsp+7F8h+var_740], rax
 * 0000000140254DEF: mov     rax, [rdi+2E0h]
 * 0000000140254DF6: mov     [rsp+7F8h+var_748], rax
 * 0000000140254DFE: mov     rax, [rdi+2D8h]
 * 0000000140254E05: mov     [rsp+7F8h+var_750], rax
 * 0000000140254E0D: mov     rax, [rdi+2D0h]
 * 0000000140254E14: mov     [rsp+7F8h+var_758], rax
 * 0000000140254E1C: mov     rax, [rdi+2C8h]
 * 0000000140254E23: mov     [rsp+7F8h+var_760], rax
 * 0000000140254E2B: mov     rax, [rdi+2C0h]
 * 0000000140254E32: mov     [rsp+7F8h+var_768], rax
 * 0000000140254E3A: mov     rax, [rdi+2B8h]
 * 0000000140254E41: mov     [rsp+7F8h+var_770], rax
 * 0000000140254E49: mov     rax, [rdi+2B0h]
 * 0000000140254E50: mov     [rsp+7F8h+var_778], rax
 * 0000000140254E58: mov     rax, [rdi+2A8h]
 * 0000000140254E5F: mov     [rsp+7F8h+var_780], rax
 * 0000000140254E64: mov     rax, [rdi+2A0h]
 * 0000000140254E6B: mov     [rsp+7F8h+var_788], rax
 * 0000000140254E70: mov     rax, [rdi+298h]
 * 0000000140254E77: mov     [rsp+7F8h+var_790], rax
 * 0000000140254E7C: mov     rax, [rdi+290h]
 * 0000000140254E83: mov     [rsp+7F8h+var_798], rax
 * 0000000140254E88: mov     rax, [rdi+288h]
 * 0000000140254E8F: mov     [rsp+7F8h+var_7A0], rax
 * 0000000140254E94: mov     rax, [rdi+280h]
 * 0000000140254E9B: mov     [rsp+7F8h+var_7A8], rax
 * 0000000140254EA0: mov     rax, [rdi+278h]
 * 0000000140254EA7: mov     [rsp+7F8h+var_7B0], rax
 * 0000000140254EAC: mov     rax, [rdi+270h]
 * 0000000140254EB3: mov     [rsp+7F8h+var_7B8], rax
 * 0000000140254EB8: mov     rax, [rdi+268h]
 * 0000000140254EBF: mov     [rsp+7F8h+var_7C0], rax
 * 0000000140254EC4: mov     rax, [rdi+260h]
 * 0000000140254ECB: mov     [rsp+7F8h+var_7C8], rax
 * 0000000140254ED0: mov     rax, [rdi+258h]
 * 0000000140254ED7: mov     [rsp+7F8h+var_7D0], rax
 * 0000000140254EDC: mov     [rsp+7F8h+var_7D8], rdx
 * 0000000140254EE1: mov     r9, rdi
 * 0000000140254EE4: call    sub_1403886FC
 * 0000000140254EE9: xor     r10d, r10d
 * 0000000140254EEC: test    r13b, r13b
 * 0000000140254EEF: jz      short loc_140254F18
 * 0000000140254EF1: cmp     cs:dword_140C02EE8, 5
 * 0000000140254EF8: jbe     short loc_140254F18
 * 0000000140254EFA: mov     rdx, 400000000000h
 * 0000000140254F04: lea     rcx, dword_140C02EE8
 * 0000000140254F0B: call    sub_1402A2000
 * 0000000140254F10: test    al, al
 * 0000000140254F12: jnz     loc_140480982
 * 0000000140254F18: mov     eax, [rsp+7F8h+var_580]
 * 0000000140254F1F: inc     eax
 * 0000000140254F21: jmp     loc_1402545F8
 * 0000000140254F26: mov     cs:qword_140C49890, rsi
 * 0000000140254F2D: xor     edx, edx; Tag
 * 0000000140254F2F: mov     rcx, [rsp+7F8h+P]; P
 * 0000000140254F37: call    ExFreePoolWithTag
 * 0000000140254F3C: jmp     loc_140254235
 * 0000000140254F41: cmp     rdi, cs:qword_140C498B0
 * 0000000140254F48: jl      loc_140254279
 * 0000000140254F4E: jmp     loc_140254276
 * 000000014043E8E1: push    rbx
 * 000000014043E8E3: push    rbp
 * 000000014043E8E4: sub     rsp, 278h
 * 000000014043E8EB: mov     rbp, rdx
 * 000000014043E8EE: lea     rcx, [rbp+2D0h]; LockHandle
 * 000000014043E8F5: call    KeReleaseInStackQueuedSpinLockFromDpcLevel
 * 000000014043E8FA: mov     rbx, [rbp+2E0h]
 * 000000014043E901: mov     eax, cs:dword_140D06B08
 * 000000014043E907: test    eax, eax
 * 000000014043E909: jz      short loc_14043E966
 * 000000014043E90B: test    al, 1
 * 000000014043E90D: jz      short loc_14043E966
 * 000000014043E90F: mov     rax, cr8
 * 000000014043E913: mov     [rbp+27Ch], al
 * 000000014043E919: cmp     al, 0Fh
 * 000000014043E91B: ja      short loc_14043E966
 * 000000014043E91D: cmp     bl, 0Fh
 * 000000014043E920: ja      short loc_14043E966
 * 000000014043E922: cmp     al, 2
 * 000000014043E924: jb      short loc_14043E966
 * 000000014043E926: mov     r10, gs:20h
 * 000000014043E92F: mov     r9, [r10+88B8h]
 * 000000014043E936: mov     r8d, [r9+14h]
 * 000000014043E93A: movzx   ecx, byte ptr [rbp+2E0h]
 * 000000014043E941: inc     ecx
 * 000000014043E943: mov     edx, 1
 * 000000014043E948: shl     rdx, cl
 * 000000014043E94B: dec     edx
 * 000000014043E94D: not     edx
 * 000000014043E94F: movzx   eax, dx
 * 000000014043E952: not     eax
 * 000000014043E954: and     r8d, eax
 * 000000014043E957: mov     [r9+14h], r8d
 * 000000014043E95B: jnz     short loc_14043E966
 * 000000014043E95D: mov     rcx, r10
 * 000000014043E960: call    sub_140418E4C
 * 000000014043E965: nop
 * 000000014043E966: movzx   eax, bl
 * 000000014043E969: mov     cr8, rax
 * 000000014043E96D: add     rsp, 278h
 * 000000014043E974: pop     rbp
 * 000000014043E975: pop     rbx
 * 000000014043E976: retn
 * 0000000140480574: test    al, 1
 * 0000000140480576: jz      loc_14025443B
 * 000000014048057C: mov     rax, cr8
 * 0000000140480580: cmp     al, 0Fh
 * 0000000140480582: ja      loc_14025443B
 * 0000000140480588: cmp     r14b, 0Fh
 * 000000014048058C: ja      loc_14025443B
 * 0000000140480592: mov     r15d, 2
 * 0000000140480598: cmp     al, r15b
 * 000000014048059B: jb      loc_14025443B
 * 00000001404805A1: mov     r10, gs:20h
 * 00000001404805AA: mov     r9, [r10+88B8h]
 * 00000001404805B1: mov     r8d, [r9+14h]
 * 00000001404805B5: movzx   ecx, [rsp+7F8h+LockHandle.OldIrql]
 * 00000001404805BD: inc     ecx
 * 00000001404805BF: or      rdx, 0FFFFFFFFFFFFFFFFh
 * 00000001404805C3: shl     rdx, cl
 * 00000001404805C6: movzx   eax, dx
 * 00000001404805C9: not     eax
 * 00000001404805CB: and     r8d, eax
 * 00000001404805CE: mov     [r9+14h], r8d
 * 00000001404805D2: jnz     loc_14025443B
 * 00000001404805D8: mov     rcx, r10
 * 00000001404805DB: call    sub_140418E4C
 * 00000001404805E0: nop
 * 00000001404805E1: jmp     loc_14025443B
 * 00000001404805E6: mov     [rsp+7F8h+var_498], 1000000h
 * 00000001404805F2: lea     rax, [rsp+7F8h+var_498]
 * 00000001404805FA: mov     [rsp+7F8h+var_378], rax
 * 0000000140480602: mov     [rsp+7F8h+var_370], 8
 * 000000014048060E: mov     ecx, 4
 * 0000000140480613: mov     [rsp+7F8h+var_588], cx
 * 000000014048061B: lea     rax, [rsp+7F8h+var_588]
 * 0000000140480623: mov     [rsp+7F8h+var_368], rax
 * 000000014048062B: mov     [rsp+7F8h+var_360], 2
 * 0000000140480637: mov     rax, r12
 * 000000014048063A: imul    rdi
 * 000000014048063D: sar     rdx, 2
 * 0000000140480641: mov     rax, rdx
 * 0000000140480644: shr     rax, 3Fh
 * 0000000140480648: add     rdx, rax
 * 000000014048064B: mov     [rsp+7F8h+var_3B0], rdx
 * 0000000140480653: lea     rax, [rsp+7F8h+var_3B0]
 * 000000014048065B: mov     [rsp+7F8h+var_358], rax
 * 0000000140480663: mov     [rsp+7F8h+var_350], 8
 * 000000014048066F: mov     eax, cs:dword_140C097B4
 * 0000000140480675: mov     [rsp+7F8h+var_580], eax
 * 000000014048067C: lea     rax, [rsp+7F8h+var_580]
 * 0000000140480684: mov     [rsp+7F8h+var_348], rax
 * 000000014048068C: mov     [rsp+7F8h+var_340], rcx
 * 0000000140480694: mov     rax, cs:qword_140C49950
 * 000000014048069B: mov     [rsp+7F8h+var_510], rax
 * 00000001404806A3: lea     rax, [rsp+7F8h+var_510]
 * 00000001404806AB: mov     [rsp+7F8h+var_338], rax
 * 00000001404806B3: mov     [rsp+7F8h+var_330], 8
 * 00000001404806BF: mov     rax, cs:qword_140C49958
 * 00000001404806C6: mov     [rsp+7F8h+var_508], rax
 * 00000001404806CE: lea     rax, [rsp+7F8h+var_508]
 * 00000001404806D6: mov     [rsp+7F8h+var_328], rax
 * 00000001404806DE: mov     [rsp+7F8h+var_320], 8
 * 00000001404806EA: mov     rax, cs:qword_140C49988
 * 00000001404806F1: mov     [rsp+7F8h+var_500], rax
 * 00000001404806F9: lea     rax, [rsp+7F8h+var_500]
 * 0000000140480701: mov     [rsp+7F8h+var_318], rax
 * 0000000140480709: mov     [rsp+7F8h+var_310], 8
 * 0000000140480715: mov     rax, cs:qword_140C49990
 * 000000014048071C: mov     [rsp+7F8h+var_4F8], rax
 * 0000000140480724: lea     rax, [rsp+7F8h+var_4F8]
 * 000000014048072C: mov     [rsp+7F8h+var_308], rax
 * 0000000140480734: mov     [rsp+7F8h+var_300], 8
 * 0000000140480740: mov     rax, cs:qword_140C49998
 * 0000000140480747: mov     [rsp+7F8h+var_4F0], rax
 * 000000014048074F: lea     rax, [rsp+7F8h+var_4F0]
 * 0000000140480757: mov     [rsp+7F8h+var_2F8], rax
 * 000000014048075F: mov     [rsp+7F8h+var_2F0], 8
 * 000000014048076B: mov     rax, cs:qword_140C499A0
 * 0000000140480772: mov     [rsp+7F8h+var_4E8], rax
 * 000000014048077A: lea     rax, [rsp+7F8h+var_4E8]
 * 0000000140480782: mov     [rsp+7F8h+var_2E8], rax
 * 000000014048078A: mov     [rsp+7F8h+var_2E0], 8
 * 0000000140480796: mov     rax, cs:qword_140C499A8
 * 000000014048079D: mov     [rsp+7F8h+var_4E0], rax
 * 00000001404807A5: lea     rax, [rsp+7F8h+var_4E0]
 * 00000001404807AD: mov     [rsp+7F8h+var_2D8], rax
 * 00000001404807B5: mov     [rsp+7F8h+var_2D0], 8
 * 00000001404807C1: mov     rax, cs:qword_140C499B0
 * 00000001404807C8: mov     [rsp+7F8h+var_4D8], rax
 * 00000001404807D0: lea     rax, [rsp+7F8h+var_4D8]
 * 00000001404807D8: mov     [rsp+7F8h+var_2C8], rax
 * 00000001404807E0: mov     [rsp+7F8h+var_2C0], 8
 * 00000001404807EC: mov     rax, cs:qword_140C499B8
 * 00000001404807F3: mov     [rsp+7F8h+var_4D0], rax
 * 00000001404807FB: lea     rax, [rsp+7F8h+var_4D0]
 * 0000000140480803: mov     [rsp+7F8h+var_2B8], rax
 * 000000014048080B: mov     [rsp+7F8h+var_2B0], 8
 * 0000000140480817: mov     rax, cs:qword_140C499C0
 * 000000014048081E: mov     [rsp+7F8h+var_4C8], rax
 * 0000000140480826: lea     rax, [rsp+7F8h+var_4C8]
 * 000000014048082E: mov     [rsp+7F8h+var_2A8], rax
 * 0000000140480836: mov     [rsp+7F8h+var_2A0], 8
 * 0000000140480842: mov     rax, cs:qword_140C499C8
 * 0000000140480849: mov     [rsp+7F8h+var_4C0], rax
 * 0000000140480851: lea     rax, [rsp+7F8h+var_4C0]
 * 0000000140480859: mov     [rsp+7F8h+var_298], rax
 * 0000000140480861: mov     [rsp+7F8h+var_290], 8
 * 000000014048086D: mov     rax, cs:qword_140C49960
 * 0000000140480874: mov     [rsp+7F8h+var_4B8], rax
 * 000000014048087C: lea     rax, [rsp+7F8h+var_4B8]
 * 0000000140480884: mov     [rsp+7F8h+var_288], rax
 * 000000014048088C: mov     [rsp+7F8h+var_280], 8
 * 0000000140480898: mov     rax, cs:qword_140C49968
 * 000000014048089F: mov     [rsp+7F8h+var_4B0], rax
 * 00000001404808A7: lea     rax, [rsp+7F8h+var_4B0]
 * 00000001404808AF: mov     [rsp+7F8h+var_278], rax
 * 00000001404808B7: mov     [rsp+7F8h+var_270], 8
 * 00000001404808C3: mov     rax, cs:qword_140C49970
 * 00000001404808CA: mov     [rsp+7F8h+var_4A8], rax
 * 00000001404808D2: lea     rax, [rsp+7F8h+var_4A8]
 * 00000001404808DA: mov     [rsp+7F8h+var_268], rax
 * 00000001404808E2: mov     [rsp+7F8h+var_260], 8
 * 00000001404808EE: mov     rax, cs:qword_140C49978
 * 00000001404808F5: mov     [rsp+7F8h+var_538], rax
 * 00000001404808FD: lea     rax, [rsp+7F8h+var_538]
 * 0000000140480905: mov     [rsp+7F8h+var_258], rax
 * 000000014048090D: mov     [rsp+7F8h+var_250], 8
 * 0000000140480919: mov     rax, cs:qword_140C49980
 * 0000000140480920: mov     [rsp+7F8h+var_530], rax
 * 0000000140480928: lea     rax, [rsp+7F8h+var_530]
 * 0000000140480930: mov     [rsp+7F8h+var_248], rax
 * 0000000140480938: mov     [rsp+7F8h+var_240], 8
 * 0000000140480944: lea     rax, [rsp+7F8h+var_398]
 * 000000014048094C: mov     [rsp+7F8h+var_7D0], rax
 * 0000000140480951: mov     dword ptr [rsp+7F8h+var_7D8], 16h
 * 0000000140480959: xor     r9d, r9d
 * 000000014048095C: xor     r8d, r8d
 * 000000014048095F: lea     rdx, byte_1400289EF
 * 0000000140480966: lea     rcx, dword_140C02EE8
 * 000000014048096D: call    sub_14020A9C4
 * 0000000140480972: xor     r10d, r10d
 * 0000000140480975: jmp     loc_14025457E
 * 000000014048097A: mov     r8, r10
 * 000000014048097D: jmp     loc_140254640
 * 0000000140480982: mov     [rsp+7F8h+var_530], 1000000h
 * 000000014048098E: lea     rax, [rsp+7F8h+var_530]
 * 0000000140480996: mov     [rsp+7F8h+var_378], rax
 * 000000014048099E: mov     [rsp+7F8h+var_370], 8
 * 00000001404809AA: mov     eax, 4
 * 00000001404809AF: mov     [rsp+7F8h+var_588], ax
 * 00000001404809B7: lea     rax, [rsp+7F8h+var_588]
 * 00000001404809BF: mov     [rsp+7F8h+var_368], rax
 * 00000001404809C7: mov     [rsp+7F8h+var_360], 2
 * 00000001404809D3: mov     [rsp+7F8h+var_358], rdi
 * 00000001404809DB: mov     [rsp+7F8h+var_350], 10h
 * 00000001404809E7: mov     rax, r12
 * 00000001404809EA: imul    rbx
 * 00000001404809ED: sar     rdx, 2
 * 00000001404809F1: mov     rax, rdx
 * 00000001404809F4: shr     rax, 3Fh
 * 00000001404809F8: add     rdx, rax
 * 00000001404809FB: mov     [rsp+7F8h+var_538], rdx
 * 0000000140480A03: lea     rax, [rsp+7F8h+var_538]
 * 0000000140480A0B: mov     [rsp+7F8h+var_348], rax
 * 0000000140480A13: mov     [rsp+7F8h+var_340], 8
 * 0000000140480A1F: mov     rax, [rdi+4A8h]
 * 0000000140480A26: mov     [rsp+7F8h+var_490], rax
 * 0000000140480A2E: lea     rax, [rsp+7F8h+var_490]
 * 0000000140480A36: mov     [rsp+7F8h+var_338], rax
 * 0000000140480A3E: mov     [rsp+7F8h+var_330], 8
 * 0000000140480A4A: mov     rax, [rdi+4B0h]
 * 0000000140480A51: mov     [rsp+7F8h+var_488], rax
 * 0000000140480A59: lea     rax, [rsp+7F8h+var_488]
 * 0000000140480A61: mov     [rsp+7F8h+var_328], rax
 * 0000000140480A69: mov     [rsp+7F8h+var_320], 8
 * 0000000140480A75: mov     rax, [rdi+4B8h]
 * 0000000140480A7C: mov     [rsp+7F8h+var_480], rax
 * 0000000140480A84: lea     rax, [rsp+7F8h+var_480]
 * 0000000140480A8C: mov     [rsp+7F8h+var_318], rax
 * 0000000140480A94: mov     [rsp+7F8h+var_310], 8
 * 0000000140480AA0: mov     rax, [rdi+4C0h]
 * 0000000140480AA7: mov     [rsp+7F8h+var_478], rax
 * 0000000140480AAF: lea     rax, [rsp+7F8h+var_478]
 * 0000000140480AB7: mov     [rsp+7F8h+var_308], rax
 * 0000000140480ABF: mov     [rsp+7F8h+var_300], 8
 * 0000000140480ACB: mov     rax, [rdi+4C8h]
 * 0000000140480AD2: mov     [rsp+7F8h+var_470], rax
 * 0000000140480ADA: lea     rax, [rsp+7F8h+var_470]
 * 0000000140480AE2: mov     [rsp+7F8h+var_2F8], rax
 * 0000000140480AEA: mov     [rsp+7F8h+var_2F0], 8
 * 0000000140480AF6: mov     rax, [rdi+4D0h]
 * 0000000140480AFD: mov     [rsp+7F8h+var_468], rax
 * 0000000140480B05: lea     rax, [rsp+7F8h+var_468]
 * 0000000140480B0D: mov     [rsp+7F8h+var_2E8], rax
 * 0000000140480B15: mov     [rsp+7F8h+var_2E0], 8
 * 0000000140480B21: mov     rax, [rdi+4D8h]
 * 0000000140480B28: mov     [rsp+7F8h+var_460], rax
 * 0000000140480B30: lea     rax, [rsp+7F8h+var_460]
 * 0000000140480B38: mov     [rsp+7F8h+var_2D8], rax
 * 0000000140480B40: mov     [rsp+7F8h+var_2D0], 8
 * 0000000140480B4C: mov     rax, [rdi+4E0h]
 * 0000000140480B53: mov     [rsp+7F8h+var_458], rax
 * 0000000140480B5B: lea     rax, [rsp+7F8h+var_458]
 * 0000000140480B63: mov     [rsp+7F8h+var_2C8], rax
 * 0000000140480B6B: mov     [rsp+7F8h+var_2C0], 8
 * 0000000140480B77: mov     rax, [rdi+4E8h]
 * 0000000140480B7E: mov     [rsp+7F8h+var_450], rax
 * 0000000140480B86: lea     rax, [rsp+7F8h+var_450]
 * 0000000140480B8E: mov     [rsp+7F8h+var_2B8], rax
 * 0000000140480B96: mov     [rsp+7F8h+var_2B0], 8
 * 0000000140480BA2: mov     rax, [rdi+4F0h]
 * 0000000140480BA9: mov     [rsp+7F8h+var_448], rax
 * 0000000140480BB1: lea     rax, [rsp+7F8h+var_448]
 * 0000000140480BB9: mov     [rsp+7F8h+var_2A8], rax
 * 0000000140480BC1: mov     [rsp+7F8h+var_2A0], 8
 * 0000000140480BCD: mov     rax, [rdi+4F8h]
 * 0000000140480BD4: mov     [rsp+7F8h+var_440], rax
 * 0000000140480BDC: lea     rax, [rsp+7F8h+var_440]
 * 0000000140480BE4: mov     [rsp+7F8h+var_298], rax
 * 0000000140480BEC: mov     [rsp+7F8h+var_290], 8
 * 0000000140480BF8: mov     rax, [rsp+7F8h+var_548]
 * 0000000140480C00: mov     [rsp+7F8h+var_438], rax
 * 0000000140480C08: lea     rax, [rsp+7F8h+var_438]
 * 0000000140480C10: mov     [rsp+7F8h+var_288], rax
 * 0000000140480C18: mov     [rsp+7F8h+var_280], 8
 * 0000000140480C24: mov     rax, [rdi+500h]
 * 0000000140480C2B: mov     [rsp+7F8h+var_430], rax
 * 0000000140480C33: lea     rax, [rsp+7F8h+var_430]
 * 0000000140480C3B: mov     [rsp+7F8h+var_278], rax
 * 0000000140480C43: mov     [rsp+7F8h+var_270], 8
 * 0000000140480C4F: mov     rax, [rdi+520h]
 * 0000000140480C56: mov     [rsp+7F8h+var_428], rax
 * 0000000140480C5E: lea     rax, [rsp+7F8h+var_428]
 * 0000000140480C66: mov     [rsp+7F8h+var_268], rax
 * 0000000140480C6E: mov     [rsp+7F8h+var_260], 8
 * 0000000140480C7A: mov     rax, [rdi+528h]
 * 0000000140480C81: mov     [rsp+7F8h+var_420], rax
 * 0000000140480C89: lea     rax, [rsp+7F8h+var_420]
 * 0000000140480C91: mov     [rsp+7F8h+var_258], rax
 * 0000000140480C99: mov     [rsp+7F8h+var_250], 8
 * 0000000140480CA5: mov     rax, [rdi+530h]
 * 0000000140480CAC: mov     [rsp+7F8h+var_418], rax
 * 0000000140480CB4: lea     rax, [rsp+7F8h+var_418]
 * 0000000140480CBC: mov     [rsp+7F8h+var_248], rax
 * 0000000140480CC4: mov     [rsp+7F8h+var_240], 8
 * 0000000140480CD0: mov     rax, [rdi+508h]
 * 0000000140480CD7: mov     [rsp+7F8h+var_410], rax
 * 0000000140480CDF: lea     rax, [rsp+7F8h+var_410]
 * 0000000140480CE7: mov     [rsp+7F8h+var_238], rax
 * 0000000140480CEF: mov     [rsp+7F8h+var_230], 8
 * 0000000140480CFB: mov     rax, [rdi+510h]
 * 0000000140480D02: mov     [rsp+7F8h+var_408], rax
 * 0000000140480D0A: lea     rax, [rsp+7F8h+var_408]
 * 0000000140480D12: mov     [rsp+7F8h+var_228], rax
 * 0000000140480D1A: mov     [rsp+7F8h+var_220], 8
 * 0000000140480D26: mov     rax, [rdi+518h]
 * 0000000140480D2D: mov     [rsp+7F8h+var_400], rax
 * 0000000140480D35: lea     rax, [rsp+7F8h+var_400]
 * 0000000140480D3D: mov     [rsp+7F8h+var_218], rax
 * 0000000140480D45: mov     [rsp+7F8h+var_210], 8
 * 0000000140480D51: mov     rax, [rdi+538h]
 * 0000000140480D58: mov     [rsp+7F8h+var_3F8], rax
 * 0000000140480D60: lea     rax, [rsp+7F8h+var_3F8]
 * 0000000140480D68: mov     [rsp+7F8h+var_208], rax
 * 0000000140480D70: mov     [rsp+7F8h+var_200], 8
 * 0000000140480D7C: mov     rax, [rdi+540h]
 * 0000000140480D83: mov     [rsp+7F8h+var_3F0], rax
 * 0000000140480D8B: lea     rax, [rsp+7F8h+var_3F0]
 * 0000000140480D93: mov     [rsp+7F8h+var_1F8], rax
 * 0000000140480D9B: mov     [rsp+7F8h+var_1F0], 8
 * 0000000140480DA7: mov     rax, [rdi+6C8h]
 * 0000000140480DAE: mov     [rsp+7F8h+var_3E8], rax
 * 0000000140480DB6: lea     rax, [rsp+7F8h+var_3E8]
 * 0000000140480DBE: mov     [rsp+7F8h+var_1E8], rax
 * 0000000140480DC6: mov     [rsp+7F8h+var_1E0], 8
 * 0000000140480DD2: mov     rax, [rdi+6D0h]
 * 0000000140480DD9: mov     [rsp+7F8h+var_3E0], rax
 * 0000000140480DE1: lea     rax, [rsp+7F8h+var_3E0]
 * 0000000140480DE9: mov     [rsp+7F8h+var_1D8], rax
 * 0000000140480DF1: mov     [rsp+7F8h+var_1D0], 8
 * 0000000140480DFD: mov     rax, [rdi+6D8h]
 * 0000000140480E04: mov     [rsp+7F8h+var_3D8], rax
 * 0000000140480E0C: lea     rax, [rsp+7F8h+var_3D8]
 * 0000000140480E14: mov     [rsp+7F8h+var_1C8], rax
 * 0000000140480E1C: mov     [rsp+7F8h+var_1C0], 8
 * 0000000140480E28: mov     rax, [rdi+6E0h]
 * 0000000140480E2F: mov     [rsp+7F8h+var_3D0], rax
 * 0000000140480E37: lea     rax, [rsp+7F8h+var_3D0]
 * 0000000140480E3F: mov     [rsp+7F8h+var_1B8], rax
 * 0000000140480E47: mov     [rsp+7F8h+var_1B0], 8
 * 0000000140480E53: mov     rax, [rdi+6E8h]
 * 0000000140480E5A: mov     [rsp+7F8h+var_3C8], rax
 * 0000000140480E62: lea     rax, [rsp+7F8h+var_3C8]
 * 0000000140480E6A: mov     [rsp+7F8h+var_1A8], rax
 * 0000000140480E72: mov     [rsp+7F8h+var_1A0], 8
 * 0000000140480E7E: mov     rax, [rdi+870h]
 * 0000000140480E85: mov     [rsp+7F8h+var_3C0], rax
 * 0000000140480E8D: lea     rax, [rsp+7F8h+var_3C0]
 * 0000000140480E95: mov     [rsp+7F8h+var_198], rax
 * 0000000140480E9D: mov     [rsp+7F8h+var_190], 8
 * 0000000140480EA9: mov     rax, [rdi+878h]
 * 0000000140480EB0: mov     [rsp+7F8h+var_3B8], rax
 * 0000000140480EB8: lea     rax, [rsp+7F8h+var_3B8]
 * 0000000140480EC0: mov     [rsp+7F8h+var_188], rax
 * 0000000140480EC8: mov     [rsp+7F8h+var_180], 8
 * 0000000140480ED4: lea     rdx, a256us1ms4ms16m; "256us, 1ms, 4ms, 16ms, 64ms, 128ms, 256"...
 * 0000000140480EDB: lea     rcx, [rsp+7F8h+var_178]
 * 0000000140480EE3: call    sub_1402A2094
 * 0000000140480EE8: mov     edx, 0Ch
 * 0000000140480EED: mov     [rsp+7F8h+var_578], dx
 * 0000000140480EF5: lea     rax, [rsp+7F8h+var_578]
 * 0000000140480EFD: mov     [rsp+7F8h+var_168], rax
 * 0000000140480F05: mov     [rsp+7F8h+var_160], 2
 * 0000000140480F11: lea     rax, [rdi+548h]
 * 0000000140480F18: mov     [rsp+7F8h+var_158], rax
 * 0000000140480F20: mov     [rsp+7F8h+var_150], 60h ; '`'
 * 0000000140480F2C: mov     [rsp+7F8h+var_574], dx
 * 0000000140480F34: lea     rax, [rsp+7F8h+var_574]
 * 0000000140480F3C: mov     [rsp+7F8h+var_148], rax
 * 0000000140480F44: mov     [rsp+7F8h+var_140], 2
 * 0000000140480F50: lea     rax, [rdi+5A8h]
 * 0000000140480F57: mov     [rsp+7F8h+var_138], rax
 * 0000000140480F5F: mov     [rsp+7F8h+var_130], 60h ; '`'
 * 0000000140480F6B: mov     [rsp+7F8h+var_570], dx
 * 0000000140480F73: lea     rax, [rsp+7F8h+var_570]
 * 0000000140480F7B: mov     [rsp+7F8h+var_128], rax
 * 0000000140480F83: mov     [rsp+7F8h+var_120], 2
 * 0000000140480F8F: lea     rax, [rdi+608h]
 * 0000000140480F96: mov     [rsp+7F8h+var_118], rax
 * 0000000140480F9E: mov     [rsp+7F8h+var_110], 60h ; '`'
 * 0000000140480FAA: mov     [rsp+7F8h+var_56C], dx
 * 0000000140480FB2: lea     rax, [rsp+7F8h+var_56C]
 * 0000000140480FBA: mov     [rsp+7F8h+var_108], rax
 * 0000000140480FC2: mov     [rsp+7F8h+var_100], 2
 * 0000000140480FCE: lea     rax, [rdi+668h]
 * 0000000140480FD5: mov     [rsp+7F8h+var_F8], rax
 * 0000000140480FDD: mov     [rsp+7F8h+var_F0], 60h ; '`'
 * 0000000140480FE9: mov     [rsp+7F8h+var_568], dx
 * 0000000140480FF1: lea     rax, [rsp+7F8h+var_568]
 * 0000000140480FF9: mov     [rsp+7F8h+var_E8], rax
 * 0000000140481001: mov     [rsp+7F8h+var_E0], 2
 * 000000014048100D: lea     rax, [rdi+6F0h]
 * 0000000140481014: mov     [rsp+7F8h+var_D8], rax
 * 000000014048101C: mov     [rsp+7F8h+var_D0], 60h ; '`'
 * 0000000140481028: mov     [rsp+7F8h+var_564], dx
 * 0000000140481030: lea     rax, [rsp+7F8h+var_564]
 * 0000000140481038: mov     [rsp+7F8h+var_C8], rax
 * 0000000140481040: mov     [rsp+7F8h+var_C0], 2
 * 000000014048104C: lea     rax, [rdi+750h]
 * 0000000140481053: mov     [rsp+7F8h+var_B8], rax
 * 000000014048105B: mov     [rsp+7F8h+var_B0], 60h ; '`'
 * 0000000140481067: mov     [rsp+7F8h+var_560], dx
 * 000000014048106F: lea     rax, [rsp+7F8h+var_560]
 * 0000000140481077: mov     [rsp+7F8h+var_A8], rax
 * 000000014048107F: mov     [rsp+7F8h+var_A0], 2
 * 000000014048108B: lea     rax, [rdi+7B0h]
 * 0000000140481092: mov     [rsp+7F8h+var_98], rax
 * 000000014048109A: mov     [rsp+7F8h+var_90], 60h ; '`'
 * 00000001404810A6: mov     [rsp+7F8h+var_55C], dx
 * 00000001404810AE: lea     rax, [rsp+7F8h+var_55C]
 * 00000001404810B6: mov     [rsp+7F8h+var_88], rax
 * 00000001404810BE: mov     [rsp+7F8h+var_80], 2
 * 00000001404810CA: lea     rax, [rdi+810h]
 * 00000001404810D1: mov     [rsp+7F8h+var_78], rax
 * 00000001404810D9: mov     [rsp+7F8h+var_70], 60h ; '`'
 * 00000001404810E5: mov     [rsp+7F8h+var_558], dx
 * 00000001404810ED: lea     rax, [rsp+7F8h+var_558]
 * 00000001404810F5: mov     [rsp+7F8h+var_68], rax
 * 00000001404810FD: mov     [rsp+7F8h+var_60], 2
 * 0000000140481109: lea     rax, [rdi+880h]
 * 0000000140481110: mov     [rsp+7F8h+var_58], rax
 * 0000000140481118: mov     [rsp+7F8h+var_50], 60h ; '`'
 * 0000000140481124: mov     [rsp+7F8h+var_554], dx
 * 000000014048112C: lea     rax, [rsp+7F8h+var_554]
 * 0000000140481134: mov     [rsp+7F8h+var_48], rax
 * 000000014048113C: mov     [rsp+7F8h+var_40], 2
 * 0000000140481148: lea     rax, [rdi+8E0h]
 * 000000014048114F: mov     [rsp+7F8h+var_38], rax
 * 0000000140481157: mov     [rsp+7F8h+var_30], 60h ; '`'
 * 0000000140481163: lea     rax, [rsp+7F8h+var_398]
 * 000000014048116B: mov     [rsp+7F8h+var_7D0], rax
 * 0000000140481170: mov     dword ptr [rsp+7F8h+var_7D8], 37h ; '7'
 * 0000000140481178: xor     r9d, r9d
 * 000000014048117B: xor     r8d, r8d
 * 000000014048117E: lea     rdx, byte_140028531
 * 0000000140481185: lea     rcx, dword_140C02EE8
 * 000000014048118C: call    sub_14020A9C4
 * 0000000140481191: xor     r10d, r10d
 * 0000000140481194: jmp     loc_140254F18
 */
