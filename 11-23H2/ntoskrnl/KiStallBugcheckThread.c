/*
 * XREFs of KiStallBugcheckThread @ 0x14057B5B8
 * Callers:
 *     KiScheduleBugcheckRecovery @ 0x14057B494 (KiScheduleBugcheckRecovery.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140305E00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x140306C50 (KeSetSystemGroupAffinityThread.c)
 *     RtlRaiseException @ 0x14030D590 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 */

/*
 * Hex-Rays decompilation failed for KiStallBugcheckThread @ 0x14057B5B8
 * Reason: Hex-Rays returned no pseudocode for 0x14057B5B8
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014057B5B8: mov     rax, rsp
 * 000000014057B5BB: mov     [rax+8], rbx
 * 000000014057B5BF: mov     [rax+10h], rbp
 * 000000014057B5C3: mov     [rax+18h], rsi
 * 000000014057B5C7: mov     [rax+20h], rdi
 * 000000014057B5CB: push    r14
 * 000000014057B5CD: sub     rsp, 60h
 * 000000014057B5D1: mov     rax, cs:__security_cookie
 * 000000014057B5D8: xor     rax, rsp
 * 000000014057B5DB: mov     [rsp+68h+var_18], rax
 * 000000014057B5E0: mov     rcx, gs:20h
 * 000000014057B5E9: xorps   xmm0, xmm0
 * 000000014057B5EC: xorps   xmm1, xmm1
 * 000000014057B5EF: movups  xmmword ptr [rsp+68h+Affinity.Mask], xmm0
 * 000000014057B5F4: movups  xmmword ptr [rsp+68h+PreviousAffinity.Mask], xmm1
 * 000000014057B5F9: mov     rsi, cr8
 * 000000014057B5FD: mov     al, [rcx+20h]
 * 000000014057B600: xor     r14d, r14d
 * 000000014057B603: lea     ebx, [r14+1]
 * 000000014057B607: test    al, al
 * 000000014057B609: jnz     loc_14057B7F3
 * 000000014057B60F: lea     edi, [rbx+1]
 * 000000014057B612: cmp     sil, dil
 * 000000014057B615: jbe     short loc_14057B656
 * 000000014057B617: mov     ecx, cs:KiIrqlFlags
 * 000000014057B61D: test    ecx, ecx
 * 000000014057B61F: jz      short loc_14057B652
 * 000000014057B621: mov     rax, cr8
 * 000000014057B625: test    bl, cl
 * 000000014057B627: jz      short loc_14057B652
 * 000000014057B629: sub     al, dil
 * 000000014057B62C: cmp     al, 0Dh
 * 000000014057B62E: ja      short loc_14057B652
 * 000000014057B630: mov     rcx, gs:20h
 * 000000014057B639: mov     rdx, [rcx+88B8h]
 * 000000014057B640: mov     eax, [rdx+14h]
 * 000000014057B643: and     eax, 0FFFF0007h
 * 000000014057B648: mov     [rdx+14h], eax
 * 000000014057B64B: jnz     short loc_14057B652
 * 000000014057B64D: call    KiRemoveSystemWorkPriorityKick
 * 000000014057B652: mov     cr8, rdi
 * 000000014057B656: mov     rax, gs:20h
 * 000000014057B65F: lea     rcx, KiProcessorIndexToNumberMappingTable
 * 000000014057B666: xor     edx, edx
 * 000000014057B668: mov     dword ptr [rsp+68h+Affinity.Reserved], edx
 * 000000014057B66C: mov     [rsp+68h+Affinity.Reserved+4], dx
 * 000000014057B671: lea     rdx, [rsp+68h+PreviousAffinity]; PreviousAffinity
 * 000000014057B676: mov     eax, [rax+24h]
 * 000000014057B679: mov     ecx, [rcx+rax*4]
 * 000000014057B67C: mov     eax, ecx
 * 000000014057B67E: shr     eax, 6
 * 000000014057B681: and     ecx, 3Fh
 * 000000014057B684: mov     [rsp+68h+Affinity.Group], ax
 * 000000014057B689: mov     rax, rbx
 * 000000014057B68C: shl     rax, cl
 * 000000014057B68F: lea     rcx, [rsp+68h+Affinity]; Affinity
 * 000000014057B694: mov     [rsp+68h+Affinity.Mask], rax
 * 000000014057B699: call    KeSetSystemGroupAffinityThread
 * 000000014057B69E: mov     ecx, cs:KiIrqlFlags
 * 000000014057B6A4: test    ecx, ecx
 * 000000014057B6A6: jz      short loc_14057B6D9
 * 000000014057B6A8: mov     rax, cr8
 * 000000014057B6AC: test    bl, cl
 * 000000014057B6AE: jz      short loc_14057B6D9
 * 000000014057B6B0: sub     al, dil
 * 000000014057B6B3: cmp     al, 0Dh
 * 000000014057B6B5: ja      short loc_14057B6D9
 * 000000014057B6B7: mov     rcx, gs:20h
 * 000000014057B6C0: mov     rdx, [rcx+88B8h]
 * 000000014057B6C7: mov     eax, [rdx+14h]
 * 000000014057B6CA: and     eax, 0FFFF0001h
 * 000000014057B6CF: mov     [rdx+14h], eax
 * 000000014057B6D2: jnz     short loc_14057B6D9
 * 000000014057B6D4: call    KiRemoveSystemWorkPriorityKick
 * 000000014057B6D9: mov     cr8, r14
 * 000000014057B6DD: or      cs:byte_140C41377, dil
 * 000000014057B6E4: lea     rcx, KiBugcheckBlockingEvent; Object
 * 000000014057B6EB: xor     r9d, r9d; Alertable
 * 000000014057B6EE: mov     [rsp+68h+Timeout], r14; Timeout
 * 000000014057B6F3: xor     r8d, r8d; WaitMode
 * 000000014057B6F6: xor     edx, edx; WaitReason
 * 000000014057B6F8: call    KeWaitForSingleObject
 * 000000014057B6FD: mov     rcx, cr8
 * 000000014057B701: mov     cr8, rdi
 * 000000014057B705: mov     eax, cs:KiIrqlFlags
 * 000000014057B70B: or      rbp, 0FFFFFFFFFFFFFFFFh
 * 000000014057B70F: test    eax, eax
 * 000000014057B711: jz      short loc_14057B753
 * 000000014057B713: test    bl, al
 * 000000014057B715: jz      short loc_14057B753
 * 000000014057B717: cmp     cl, 0Fh
 * 000000014057B71A: ja      short loc_14057B753
 * 000000014057B71C: mov     rax, gs:20h
 * 000000014057B725: mov     r9, [rax+88B8h]
 * 000000014057B72C: mov     r8d, [r9+14h]
 * 000000014057B730: cmp     cl, dil
 * 000000014057B733: jnz     short loc_14057B73A
 * 000000014057B735: lea     ecx, [rbp+5]
 * 000000014057B738: jmp     short loc_14057B74C
 * 000000014057B73A: movzx   ecx, cl
 * 000000014057B73D: mov     rdx, rbp
 * 000000014057B740: add     ecx, ebx
 * 000000014057B742: shl     rdx, cl
 * 000000014057B745: mov     ecx, 4
 * 000000014057B74A: and     ecx, edx
 * 000000014057B74C: or      r8d, ecx
 * 000000014057B74F: mov     [r9+14h], r8d
 * 000000014057B753: lea     rcx, [rsp+68h+PreviousAffinity]; PreviousAffinity
 * 000000014057B758: call    KeRevertToUserGroupAffinityThread
 * 000000014057B75D: cmp     sil, dil
 * 000000014057B760: jbe     short loc_14057B7CA
 * 000000014057B762: mov     r9, cr8
 * 000000014057B766: movzx   eax, sil
 * 000000014057B76A: mov     cr8, rax
 * 000000014057B76E: mov     eax, cs:KiIrqlFlags
 * 000000014057B774: test    eax, eax
 * 000000014057B776: jz      short loc_14057B7CA
 * 000000014057B778: test    bl, al
 * 000000014057B77A: jz      short loc_14057B7CA
 * 000000014057B77C: cmp     r9b, 0Fh
 * 000000014057B780: ja      short loc_14057B7CA
 * 000000014057B782: cmp     sil, 0Fh
 * 000000014057B786: ja      short loc_14057B7CA
 * 000000014057B788: mov     rax, gs:20h
 * 000000014057B791: movzx   ecx, sil
 * 000000014057B795: mov     r10, [rax+88B8h]
 * 000000014057B79C: mov     r8d, [r10+14h]
 * 000000014057B7A0: cmp     r9b, sil
 * 000000014057B7A3: jnz     short loc_14057B7A9
 * 000000014057B7A5: shl     ebx, cl
 * 000000014057B7A7: jmp     short loc_14057B7C3
 * 000000014057B7A9: inc     ecx
 * 000000014057B7AB: mov     rdx, rbx
 * 000000014057B7AE: shl     rdx, cl
 * 000000014057B7B1: sub     edx, ebx
 * 000000014057B7B3: movzx   ecx, r9b
 * 000000014057B7B7: add     ecx, ebx
 * 000000014057B7B9: shl     rbp, cl
 * 000000014057B7BC: and     edx, ebp
 * 000000014057B7BE: and     edx, 0FFFFFFFCh
 * 000000014057B7C1: mov     ebx, edx
 * 000000014057B7C3: or      r8d, ebx
 * 000000014057B7C6: mov     [r10+14h], r8d
 * 000000014057B7CA: mov     rcx, [rsp+68h+var_18]
 * 000000014057B7CF: xor     rcx, rsp; StackCookie
 * 000000014057B7D2: call    __security_check_cookie
 * 000000014057B7D7: lea     r11, [rsp+68h+var_8]
 * 000000014057B7DC: mov     rbx, [r11+10h]
 * 000000014057B7E0: mov     rbp, [r11+18h]
 * 000000014057B7E4: mov     rsi, [r11+20h]
 * 000000014057B7E8: mov     rdi, [r11+28h]
 * 000000014057B7EC: mov     rsp, r11
 * 000000014057B7EF: pop     r14
 * 000000014057B7F1: retn
 * 000000014057B7F3: cmp     al, bl
 * 000000014057B7F5: jnz     short loc_14057B869
 * 000000014057B7F7: mov     al, [rcx+33BAh]
 * 000000014057B7FD: test    al, al
 * 000000014057B7FF: jz      short loc_14057B869
 * 000000014057B801: mov     edi, 2
 * 000000014057B806: cmp     sil, dil
 * 000000014057B809: jbe     short loc_14057B84A
 * 000000014057B80B: mov     ecx, cs:KiIrqlFlags
 * 000000014057B811: test    ecx, ecx
 * 000000014057B813: jz      short loc_14057B846
 * 000000014057B815: mov     rax, cr8
 * 000000014057B819: test    bl, cl
 * 000000014057B81B: jz      short loc_14057B846
 * 000000014057B81D: sub     al, dil
 * 000000014057B820: cmp     al, 0Dh
 * 000000014057B822: ja      short loc_14057B846
 * 000000014057B824: mov     rcx, gs:20h
 * 000000014057B82D: mov     rdx, [rcx+88B8h]
 * 000000014057B834: mov     eax, [rdx+14h]
 * 000000014057B837: and     eax, 0FFFF0007h
 * 000000014057B83C: mov     [rdx+14h], eax
 * 000000014057B83F: jnz     short loc_14057B846
 * 000000014057B841: call    KiRemoveSystemWorkPriorityKick
 * 000000014057B846: mov     cr8, rdi
 * 000000014057B84A: mov     ecx, 4
 * 000000014057B84F: or      cs:byte_140C41377, cl
 * 000000014057B855: lea     rcx, KiRecoverableBugcheckException; "4"
 * 000000014057B85C: call    RtlRaiseException
 * 000000014057B861: int     3; Trap to Debugger
 * 000000014057B862: mov     ecx, 38h ; '8'
 * 000000014057B867: int     29h; Win8: RtlFailFast(ecx)
 * 000000014057B869: mov     ecx, 4
 * 000000014057B86E: int     29h; Win8: RtlFailFast(ecx)
 */
