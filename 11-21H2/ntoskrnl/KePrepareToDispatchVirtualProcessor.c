/*
 * XREFs of KePrepareToDispatchVirtualProcessor @ 0x14045A560
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020D230 @ 0x14020D230 (sub_14020D230.c)
 *     sub_1404359C0 @ 0x1404359C0 (sub_1404359C0.c)
 */

/*
 * Hex-Rays decompilation failed for KePrepareToDispatchVirtualProcessor @ 0x14045A560
 * Reason: Hex-Rays returned no pseudocode for 0x14045A560
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014045A560: mov     rax, rsp
 * 000000014045A563: mov     [rax+8], rbx
 * 000000014045A567: mov     [rax+10h], rsi
 * 000000014045A56B: mov     [rax+18h], rdi
 * 000000014045A56F: mov     [rax+20h], r14
 * 000000014045A573: push    r15
 * 000000014045A575: sub     rsp, 40h
 * 000000014045A579: mov     rbx, gs:20h
 * 000000014045A582: mov     r10, rdx
 * 000000014045A585: movups  xmm0, cs:xmmword_140D06920
 * 000000014045A58C: xor     edx, edx
 * 000000014045A58E: mov     r14, [rsp+48h+arg_20]
 * 000000014045A593: movsd   xmm1, cs:qword_140D06930
 * 000000014045A59B: mov     r15, [rsp+48h+arg_28]
 * 000000014045A5A0: mov     [r10], dl
 * 000000014045A5A3: mov     [r8], dl
 * 000000014045A5A6: mov     [r9], dl
 * 000000014045A5A9: mov     [r14], dl
 * 000000014045A5AC: mov     [r15], rdx
 * 000000014045A5AF: movups  xmmword ptr [rax-28h], xmm0
 * 000000014045A5B3: movsd   qword ptr [rax-18h], xmm1
 * 000000014045A5B8: cli
 * 000000014045A5B9: test    cl, cl
 * 000000014045A5BB: jz      loc_14045A6EA
 * 000000014045A5C1: mov     rax, 1000000000h
 * 000000014045A5CB: test    [rsp+48h+var_28], rax
 * 000000014045A5D0: jnz     short loc_14045A5DB
 * 000000014045A5D2: mov     byte ptr [r8], 1
 * 000000014045A5D6: jmp     loc_14045A725
 * 000000014045A5DB: mov     rax, [rbx+8]
 * 000000014045A5DF: mov     rcx, [rax+220h]
 * 000000014045A5E6: mov     rsi, [rcx+9E0h]
 * 000000014045A5ED: test    rsi, rsi
 * 000000014045A5F0: jnz     short loc_14045A5F8
 * 000000014045A5F2: mov     byte ptr [r8], 1
 * 000000014045A5F6: jmp     short loc_14045A634
 * 000000014045A5F8: movzx   ecx, word ptr [rbx+6E0h]
 * 000000014045A5FF: test    cl, 8
 * 000000014045A602: jnz     loc_14045A6EA
 * 000000014045A608: test    byte ptr [rbx+6D6h], 1
 * 000000014045A60F: jz      short loc_14045A61A
 * 000000014045A611: test    cl, 10h
 * 000000014045A614: jnz     loc_14045A6EA
 * 000000014045A61A: test    byte ptr [rsp+48h+var_28], 10h
 * 000000014045A61F: jz      short loc_14045A630
 * 000000014045A621: test    [rsp+48h+var_28], 1000h
 * 000000014045A62A: jz      loc_14045A6EA
 * 000000014045A630: mov     byte ptr [r9], 1
 * 000000014045A634: movzx   eax, word ptr [rbx+6ECh]
 * 000000014045A63B: test    al, 2
 * 000000014045A63D: jz      short loc_14045A648
 * 000000014045A63F: xor     ecx, ecx
 * 000000014045A641: call    sub_14020D230
 * 000000014045A646: jmp     short loc_14045A68F
 * 000000014045A648: movzx   eax, word ptr [rbx+6E0h]
 * 000000014045A64F: test    al, 4
 * 000000014045A651: jz      short loc_14045A673
 * 000000014045A653: mov     eax, 1
 * 000000014045A658: lea     ecx, [rax+48h]
 * 000000014045A65B: wrmsr
 * 000000014045A65D: mov     edi, 0FFFBh
 * 000000014045A662: and     [rbx+6E0h], di
 * 000000014045A669: mov     [r10], al
 * 000000014045A66C: movzx   eax, word ptr [rbx+6E0h]
 * 000000014045A673: test    al, 20h
 * 000000014045A675: jz      short loc_14045A688
 * 000000014045A677: call    sub_1404359C0
 * 000000014045A67C: mov     eax, 0FFDFh
 * 000000014045A681: and     [rbx+6E0h], ax
 * 000000014045A688: mov     [rbx+6D8h], rsi
 * 000000014045A68F: movzx   eax, word ptr [rbx+6E0h]
 * 000000014045A696: movzx   edx, word ptr [rbx+6D0h]
 * 000000014045A69D: movzx   ecx, word ptr [rbx+6E6h]
 * 000000014045A6A4: mov     [rbx+6D4h], ax
 * 000000014045A6AB: mov     rax, 20000000000h
 * 000000014045A6B5: mov     [rbx+6D2h], dx
 * 000000014045A6BC: test    [rsp+48h+var_28], rax
 * 000000014045A6C1: jz      short loc_14045A6CE
 * 000000014045A6C3: test    byte ptr [rbx+6D6h], 1
 * 000000014045A6CA: cmovnz  cx, dx
 * 000000014045A6CE: cmp     [rbx+6E4h], cx
 * 000000014045A6D5: jz      short loc_14045A725
 * 000000014045A6D7: movzx   eax, cx
 * 000000014045A6DA: mov     [r15], rax
 * 000000014045A6DD: mov     byte ptr [r14], 1
 * 000000014045A6E1: mov     [rbx+6E4h], cx
 * 000000014045A6E8: jmp     short loc_14045A725
 * 000000014045A6EA: movzx   eax, word ptr [rbx+6E0h]
 * 000000014045A6F1: mov     edi, 0FFFBh
 * 000000014045A6F6: test    al, 4
 * 000000014045A6F8: jz      short loc_14045A715
 * 000000014045A6FA: mov     eax, 1
 * 000000014045A6FF: lea     ecx, [rax+48h]
 * 000000014045A702: wrmsr
 * 000000014045A704: and     [rbx+6E0h], di
 * 000000014045A70B: mov     [r10], al
 * 000000014045A70E: movzx   eax, word ptr [rbx+6E0h]
 * 000000014045A715: test    al, 20h
 * 000000014045A717: jz      short loc_14045A725
 * 000000014045A719: call    sub_1404359C0
 * 000000014045A71E: and     [rbx+6E0h], di
 * 000000014045A725: mov     rbx, [rsp+48h+arg_0]
 * 000000014045A72A: mov     rsi, [rsp+48h+arg_8]
 * 000000014045A72F: mov     rdi, [rsp+48h+arg_10]
 * 000000014045A734: mov     r14, [rsp+48h+arg_18]
 * 000000014045A739: add     rsp, 40h
 * 000000014045A73D: pop     r15
 * 000000014045A73F: retn
 */
