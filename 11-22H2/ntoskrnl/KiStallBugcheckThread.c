/*
 * XREFs of KiStallBugcheckThread @ 0x14057B648
 * Callers:
 *     KiScheduleBugcheckRecovery @ 0x14057B524 (KiScheduleBugcheckRecovery.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140305CD0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x140306B20 (KeSetSystemGroupAffinityThread.c)
 *     RtlRaiseException @ 0x14030D3B0 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

/*
 * Hex-Rays decompilation failed for KiStallBugcheckThread @ 0x14057B648
 * Reason: Hex-Rays returned no pseudocode for 0x14057B648
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014057B648: mov     rax, rsp
 * 000000014057B64B: mov     [rax+8], rbx
 * 000000014057B64F: mov     [rax+10h], rbp
 * 000000014057B653: mov     [rax+18h], rsi
 * 000000014057B657: mov     [rax+20h], rdi
 * 000000014057B65B: push    r14
 * 000000014057B65D: sub     rsp, 60h
 * 000000014057B661: mov     rax, cs:__security_cookie
 * 000000014057B668: xor     rax, rsp
 * 000000014057B66B: mov     [rsp+68h+var_18], rax
 * 000000014057B670: mov     rcx, gs:20h
 * 000000014057B679: xorps   xmm0, xmm0
 * 000000014057B67C: xorps   xmm1, xmm1
 * 000000014057B67F: movups  xmmword ptr [rsp+68h+Affinity.Mask], xmm0
 * 000000014057B684: movups  xmmword ptr [rsp+68h+PreviousAffinity.Mask], xmm1
 * 000000014057B689: mov     rsi, cr8
 * 000000014057B68D: mov     al, [rcx+20h]
 * 000000014057B690: xor     r14d, r14d
 * 000000014057B693: lea     ebx, [r14+1]
 * 000000014057B697: test    al, al
 * 000000014057B699: jnz     loc_14057B883
 * 000000014057B69F: lea     edi, [rbx+1]
 * 000000014057B6A2: cmp     sil, dil
 * 000000014057B6A5: jbe     short loc_14057B6E6
 * 000000014057B6A7: mov     ecx, cs:KiIrqlFlags
 * 000000014057B6AD: test    ecx, ecx
 * 000000014057B6AF: jz      short loc_14057B6E2
 * 000000014057B6B1: mov     rax, cr8
 * 000000014057B6B5: test    bl, cl
 * 000000014057B6B7: jz      short loc_14057B6E2
 * 000000014057B6B9: sub     al, dil
 * 000000014057B6BC: cmp     al, 0Dh
 * 000000014057B6BE: ja      short loc_14057B6E2
 * 000000014057B6C0: mov     rcx, gs:20h
 * 000000014057B6C9: mov     rdx, [rcx+88B8h]
 * 000000014057B6D0: mov     eax, [rdx+14h]
 * 000000014057B6D3: and     eax, 0FFFF0007h
 * 000000014057B6D8: mov     [rdx+14h], eax
 * 000000014057B6DB: jnz     short loc_14057B6E2
 * 000000014057B6DD: call    KiRemoveSystemWorkPriorityKick
 * 000000014057B6E2: mov     cr8, rdi
 * 000000014057B6E6: mov     rax, gs:20h
 * 000000014057B6EF: lea     rcx, KiProcessorIndexToNumberMappingTable
 * 000000014057B6F6: xor     edx, edx
 * 000000014057B6F8: mov     dword ptr [rsp+68h+Affinity.Reserved], edx
 * 000000014057B6FC: mov     [rsp+68h+Affinity.Reserved+4], dx
 * 000000014057B701: lea     rdx, [rsp+68h+PreviousAffinity]; PreviousAffinity
 * 000000014057B706: mov     eax, [rax+24h]
 * 000000014057B709: mov     ecx, [rcx+rax*4]
 * 000000014057B70C: mov     eax, ecx
 * 000000014057B70E: shr     eax, 6
 * 000000014057B711: and     ecx, 3Fh
 * 000000014057B714: mov     [rsp+68h+Affinity.Group], ax
 * 000000014057B719: mov     rax, rbx
 * 000000014057B71C: shl     rax, cl
 * 000000014057B71F: lea     rcx, [rsp+68h+Affinity]; Affinity
 * 000000014057B724: mov     [rsp+68h+Affinity.Mask], rax
 * 000000014057B729: call    KeSetSystemGroupAffinityThread
 * 000000014057B72E: mov     ecx, cs:KiIrqlFlags
 * 000000014057B734: test    ecx, ecx
 * 000000014057B736: jz      short loc_14057B769
 * 000000014057B738: mov     rax, cr8
 * 000000014057B73C: test    bl, cl
 * 000000014057B73E: jz      short loc_14057B769
 * 000000014057B740: sub     al, dil
 * 000000014057B743: cmp     al, 0Dh
 * 000000014057B745: ja      short loc_14057B769
 * 000000014057B747: mov     rcx, gs:20h
 * 000000014057B750: mov     rdx, [rcx+88B8h]
 * 000000014057B757: mov     eax, [rdx+14h]
 * 000000014057B75A: and     eax, 0FFFF0001h
 * 000000014057B75F: mov     [rdx+14h], eax
 * 000000014057B762: jnz     short loc_14057B769
 * 000000014057B764: call    KiRemoveSystemWorkPriorityKick
 * 000000014057B769: mov     cr8, r14
 * 000000014057B76D: or      cs:byte_140C413F7, dil
 * 000000014057B774: lea     rcx, KiBugcheckBlockingEvent; Object
 * 000000014057B77B: xor     r9d, r9d; Alertable
 * 000000014057B77E: mov     [rsp+68h+Timeout], r14; Timeout
 * 000000014057B783: xor     r8d, r8d; WaitMode
 * 000000014057B786: xor     edx, edx; WaitReason
 * 000000014057B788: call    KeWaitForSingleObject
 * 000000014057B78D: mov     rcx, cr8
 * 000000014057B791: mov     cr8, rdi
 * 000000014057B795: mov     eax, cs:KiIrqlFlags
 * 000000014057B79B: or      rbp, 0FFFFFFFFFFFFFFFFh
 * 000000014057B79F: test    eax, eax
 * 000000014057B7A1: jz      short loc_14057B7E3
 * 000000014057B7A3: test    bl, al
 * 000000014057B7A5: jz      short loc_14057B7E3
 * 000000014057B7A7: cmp     cl, 0Fh
 * 000000014057B7AA: ja      short loc_14057B7E3
 * 000000014057B7AC: mov     rax, gs:20h
 * 000000014057B7B5: mov     r9, [rax+88B8h]
 * 000000014057B7BC: mov     r8d, [r9+14h]
 * 000000014057B7C0: cmp     cl, dil
 * 000000014057B7C3: jnz     short loc_14057B7CA
 * 000000014057B7C5: lea     ecx, [rbp+5]
 * 000000014057B7C8: jmp     short loc_14057B7DC
 * 000000014057B7CA: movzx   ecx, cl
 * 000000014057B7CD: mov     rdx, rbp
 * 000000014057B7D0: add     ecx, ebx
 * 000000014057B7D2: shl     rdx, cl
 * 000000014057B7D5: mov     ecx, 4
 * 000000014057B7DA: and     ecx, edx
 * 000000014057B7DC: or      r8d, ecx
 * 000000014057B7DF: mov     [r9+14h], r8d
 * 000000014057B7E3: lea     rcx, [rsp+68h+PreviousAffinity]; PreviousAffinity
 * 000000014057B7E8: call    KeRevertToUserGroupAffinityThread
 * 000000014057B7ED: cmp     sil, dil
 * 000000014057B7F0: jbe     short loc_14057B85A
 * 000000014057B7F2: mov     r9, cr8
 * 000000014057B7F6: movzx   eax, sil
 * 000000014057B7FA: mov     cr8, rax
 * 000000014057B7FE: mov     eax, cs:KiIrqlFlags
 * 000000014057B804: test    eax, eax
 * 000000014057B806: jz      short loc_14057B85A
 * 000000014057B808: test    bl, al
 * 000000014057B80A: jz      short loc_14057B85A
 * 000000014057B80C: cmp     r9b, 0Fh
 * 000000014057B810: ja      short loc_14057B85A
 * 000000014057B812: cmp     sil, 0Fh
 * 000000014057B816: ja      short loc_14057B85A
 * 000000014057B818: mov     rax, gs:20h
 * 000000014057B821: movzx   ecx, sil
 * 000000014057B825: mov     r10, [rax+88B8h]
 * 000000014057B82C: mov     r8d, [r10+14h]
 * 000000014057B830: cmp     r9b, sil
 * 000000014057B833: jnz     short loc_14057B839
 * 000000014057B835: shl     ebx, cl
 * 000000014057B837: jmp     short loc_14057B853
 * 000000014057B839: inc     ecx
 * 000000014057B83B: mov     rdx, rbx
 * 000000014057B83E: shl     rdx, cl
 * 000000014057B841: sub     edx, ebx
 * 000000014057B843: movzx   ecx, r9b
 * 000000014057B847: add     ecx, ebx
 * 000000014057B849: shl     rbp, cl
 * 000000014057B84C: and     edx, ebp
 * 000000014057B84E: and     edx, 0FFFFFFFCh
 * 000000014057B851: mov     ebx, edx
 * 000000014057B853: or      r8d, ebx
 * 000000014057B856: mov     [r10+14h], r8d
 * 000000014057B85A: mov     rcx, [rsp+68h+var_18]
 * 000000014057B85F: xor     rcx, rsp; StackCookie
 * 000000014057B862: call    __security_check_cookie
 * 000000014057B867: lea     r11, [rsp+68h+var_8]
 * 000000014057B86C: mov     rbx, [r11+10h]
 * 000000014057B870: mov     rbp, [r11+18h]
 * 000000014057B874: mov     rsi, [r11+20h]
 * 000000014057B878: mov     rdi, [r11+28h]
 * 000000014057B87C: mov     rsp, r11
 * 000000014057B87F: pop     r14
 * 000000014057B881: retn
 * 000000014057B883: cmp     al, bl
 * 000000014057B885: jnz     short loc_14057B8F9
 * 000000014057B887: mov     al, [rcx+33BAh]
 * 000000014057B88D: test    al, al
 * 000000014057B88F: jz      short loc_14057B8F9
 * 000000014057B891: mov     edi, 2
 * 000000014057B896: cmp     sil, dil
 * 000000014057B899: jbe     short loc_14057B8DA
 * 000000014057B89B: mov     ecx, cs:KiIrqlFlags
 * 000000014057B8A1: test    ecx, ecx
 * 000000014057B8A3: jz      short loc_14057B8D6
 * 000000014057B8A5: mov     rax, cr8
 * 000000014057B8A9: test    bl, cl
 * 000000014057B8AB: jz      short loc_14057B8D6
 * 000000014057B8AD: sub     al, dil
 * 000000014057B8B0: cmp     al, 0Dh
 * 000000014057B8B2: ja      short loc_14057B8D6
 * 000000014057B8B4: mov     rcx, gs:20h
 * 000000014057B8BD: mov     rdx, [rcx+88B8h]
 * 000000014057B8C4: mov     eax, [rdx+14h]
 * 000000014057B8C7: and     eax, 0FFFF0007h
 * 000000014057B8CC: mov     [rdx+14h], eax
 * 000000014057B8CF: jnz     short loc_14057B8D6
 * 000000014057B8D1: call    KiRemoveSystemWorkPriorityKick
 * 000000014057B8D6: mov     cr8, rdi
 * 000000014057B8DA: mov     ecx, 4
 * 000000014057B8DF: or      cs:byte_140C413F7, cl
 * 000000014057B8E5: lea     rcx, KiRecoverableBugcheckException; "4"
 * 000000014057B8EC: call    RtlRaiseException
 * 000000014057B8F1: int     3; Trap to Debugger
 * 000000014057B8F2: mov     ecx, 38h ; '8'
 * 000000014057B8F7: int     29h; Win8: RtlFailFast(ecx)
 * 000000014057B8F9: mov     ecx, 4
 * 000000014057B8FE: int     29h; Win8: RtlFailFast(ecx)
 */
