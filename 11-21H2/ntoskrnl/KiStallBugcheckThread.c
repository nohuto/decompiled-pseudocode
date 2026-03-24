/*
 * XREFs of KiStallBugcheckThread @ 0x1405798A8
 * Callers:
 *     KiScheduleBugcheckRecovery @ 0x140579780 (KiScheduleBugcheckRecovery.c)
 * Callees:
 *     RtlRaiseException @ 0x140294A60 (RtlRaiseException.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

/*
 * Hex-Rays decompilation failed for KiStallBugcheckThread @ 0x1405798A8
 * Reason: Hex-Rays returned no pseudocode for 0x1405798A8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001405798A8: mov     [rsp+arg_0], rbx
 * 00000001405798AD: mov     [rsp+arg_8], rbp
 * 00000001405798B2: mov     [rsp+arg_10], rsi
 * 00000001405798B7: push    rdi
 * 00000001405798B8: sub     rsp, 60h
 * 00000001405798BC: mov     rax, cs:__security_cookie
 * 00000001405798C3: xor     rax, rsp
 * 00000001405798C6: mov     [rsp+68h+var_18], rax
 * 00000001405798CB: mov     rcx, gs:20h
 * 00000001405798D4: xorps   xmm0, xmm0
 * 00000001405798D7: xorps   xmm1, xmm1
 * 00000001405798DA: movups  xmmword ptr [rsp+68h+Affinity.Mask], xmm0
 * 00000001405798DF: movups  xmmword ptr [rsp+68h+PreviousAffinity.Mask], xmm1
 * 00000001405798E4: mov     rsi, cr8
 * 00000001405798E8: mov     al, [rcx+20h]
 * 00000001405798EB: xor     ebp, ebp
 * 00000001405798ED: lea     edi, [rbp+1]
 * 00000001405798F0: test    al, al
 * 00000001405798F2: jnz     loc_140579AC5
 * 00000001405798F8: lea     ebx, [rbp+2]
 * 00000001405798FB: cmp     sil, bl
 * 00000001405798FE: jbe     short loc_14057993F
 * 0000000140579900: mov     eax, cs:KiIrqlFlags
 * 0000000140579906: test    eax, eax
 * 0000000140579908: jz      short loc_14057993B
 * 000000014057990A: test    dil, al
 * 000000014057990D: jz      short loc_14057993B
 * 000000014057990F: mov     rax, cr8
 * 0000000140579913: sub     al, bl
 * 0000000140579915: cmp     al, 0Dh
 * 0000000140579917: ja      short loc_14057993B
 * 0000000140579919: mov     rcx, gs:20h
 * 0000000140579922: mov     rdx, [rcx+88B8h]
 * 0000000140579929: mov     eax, [rdx+14h]
 * 000000014057992C: and     eax, 0FFFF0007h
 * 0000000140579931: mov     [rdx+14h], eax
 * 0000000140579934: jnz     short loc_14057993B
 * 0000000140579936: call    KiRemoveSystemWorkPriorityKick
 * 000000014057993B: mov     cr8, rbx
 * 000000014057993F: mov     rax, gs:20h
 * 0000000140579948: lea     rcx, KiProcessorIndexToNumberMappingTable
 * 000000014057994F: xor     edx, edx
 * 0000000140579951: mov     dword ptr [rsp+68h+Affinity.Reserved], edx
 * 0000000140579955: mov     [rsp+68h+Affinity.Reserved+4], dx
 * 000000014057995A: lea     rdx, [rsp+68h+PreviousAffinity]; PreviousAffinity
 * 000000014057995F: mov     eax, [rax+24h]
 * 0000000140579962: mov     ecx, [rcx+rax*4]
 * 0000000140579965: mov     eax, ecx
 * 0000000140579967: shr     eax, 6
 * 000000014057996A: and     ecx, 3Fh
 * 000000014057996D: mov     [rsp+68h+Affinity.Group], ax
 * 0000000140579972: mov     rax, rdi
 * 0000000140579975: shl     rax, cl
 * 0000000140579978: lea     rcx, [rsp+68h+Affinity]; Affinity
 * 000000014057997D: mov     [rsp+68h+Affinity.Mask], rax
 * 0000000140579982: call    KeSetSystemGroupAffinityThread
 * 0000000140579987: mov     eax, cs:KiIrqlFlags
 * 000000014057998D: test    eax, eax
 * 000000014057998F: jz      short loc_1405799C2
 * 0000000140579991: test    dil, al
 * 0000000140579994: jz      short loc_1405799C2
 * 0000000140579996: mov     rax, cr8
 * 000000014057999A: sub     al, bl
 * 000000014057999C: cmp     al, 0Dh
 * 000000014057999E: ja      short loc_1405799C2
 * 00000001405799A0: mov     rcx, gs:20h
 * 00000001405799A9: mov     rdx, [rcx+88B8h]
 * 00000001405799B0: mov     eax, [rdx+14h]
 * 00000001405799B3: and     eax, 0FFFF0001h
 * 00000001405799B8: mov     [rdx+14h], eax
 * 00000001405799BB: jnz     short loc_1405799C2
 * 00000001405799BD: call    KiRemoveSystemWorkPriorityKick
 * 00000001405799C2: mov     cr8, rbp
 * 00000001405799C6: or      cs:byte_140C2AA17, bl
 * 00000001405799CC: lea     rcx, KiBugcheckBlockingEvent; Object
 * 00000001405799D3: xor     r9d, r9d; Alertable
 * 00000001405799D6: mov     [rsp+68h+Timeout], rbp; Timeout
 * 00000001405799DB: xor     r8d, r8d; WaitMode
 * 00000001405799DE: xor     edx, edx; WaitReason
 * 00000001405799E0: call    KeWaitForSingleObject
 * 00000001405799E5: mov     rcx, cr8
 * 00000001405799E9: mov     cr8, rbx
 * 00000001405799ED: mov     eax, cs:KiIrqlFlags
 * 00000001405799F3: test    eax, eax
 * 00000001405799F5: jz      short loc_140579A2B
 * 00000001405799F7: test    dil, al
 * 00000001405799FA: jz      short loc_140579A2B
 * 00000001405799FC: cmp     cl, 0Fh
 * 00000001405799FF: ja      short loc_140579A2B
 * 0000000140579A01: mov     rax, gs:20h
 * 0000000140579A0A: or      rdx, 0FFFFFFFFFFFFFFFFh
 * 0000000140579A0E: movzx   ecx, cl
 * 0000000140579A11: add     ecx, edi
 * 0000000140579A13: shl     rdx, cl
 * 0000000140579A16: mov     r9, [rax+88B8h]
 * 0000000140579A1D: and     edx, 4
 * 0000000140579A20: mov     r8d, [r9+14h]
 * 0000000140579A24: or      r8d, edx
 * 0000000140579A27: mov     [r9+14h], r8d
 * 0000000140579A2B: lea     rcx, [rsp+68h+PreviousAffinity]; PreviousAffinity
 * 0000000140579A30: call    KeRevertToUserGroupAffinityThread
 * 0000000140579A35: cmp     sil, bl
 * 0000000140579A38: jbe     short loc_140579AA1
 * 0000000140579A3A: mov     rcx, cr8
 * 0000000140579A3E: movzx   eax, sil
 * 0000000140579A42: mov     cr8, rax
 * 0000000140579A46: mov     eax, cs:KiIrqlFlags
 * 0000000140579A4C: test    eax, eax
 * 0000000140579A4E: jz      short loc_140579AA1
 * 0000000140579A50: test    dil, al
 * 0000000140579A53: jz      short loc_140579AA1
 * 0000000140579A55: cmp     cl, 0Fh
 * 0000000140579A58: ja      short loc_140579AA1
 * 0000000140579A5A: cmp     sil, 0Fh
 * 0000000140579A5E: ja      short loc_140579AA1
 * 0000000140579A60: mov     rax, gs:20h
 * 0000000140579A69: mov     r8, rdi
 * 0000000140579A6C: movzx   ecx, cl
 * 0000000140579A6F: mov     rdx, rdi
 * 0000000140579A72: add     ecx, edi
 * 0000000140579A74: shl     r8, cl
 * 0000000140579A77: mov     r10, [rax+88B8h]
 * 0000000140579A7E: sub     r8d, edi
 * 0000000140579A81: not     r8d
 * 0000000140579A84: movzx   ecx, sil
 * 0000000140579A88: add     ecx, edi
 * 0000000140579A8A: shl     rdx, cl
 * 0000000140579A8D: mov     r9d, [r10+14h]
 * 0000000140579A91: sub     edx, edi
 * 0000000140579A93: and     r8d, edx
 * 0000000140579A96: and     r8d, 0FFFFFFFCh
 * 0000000140579A9A: or      r8d, r9d
 * 0000000140579A9D: mov     [r10+14h], r8d
 * 0000000140579AA1: mov     rcx, [rsp+68h+var_18]
 * 0000000140579AA6: xor     rcx, rsp; StackCookie
 * 0000000140579AA9: call    __security_check_cookie
 * 0000000140579AAE: lea     r11, [rsp+68h+var_8]
 * 0000000140579AB3: mov     rbx, [r11+10h]
 * 0000000140579AB7: mov     rbp, [r11+18h]
 * 0000000140579ABB: mov     rsi, [r11+20h]
 * 0000000140579ABF: mov     rsp, r11
 * 0000000140579AC2: pop     rdi
 * 0000000140579AC3: retn
 * 0000000140579AC5: cmp     al, dil
 * 0000000140579AC8: jnz     short loc_140579B38
 * 0000000140579ACA: mov     al, [rcx+33BAh]
 * 0000000140579AD0: test    al, al
 * 0000000140579AD2: jz      short loc_140579B38
 * 0000000140579AD4: mov     ebx, 2
 * 0000000140579AD9: cmp     sil, bl
 * 0000000140579ADC: jbe     short loc_140579B1D
 * 0000000140579ADE: mov     eax, cs:KiIrqlFlags
 * 0000000140579AE4: test    eax, eax
 * 0000000140579AE6: jz      short loc_140579B19
 * 0000000140579AE8: test    dil, al
 * 0000000140579AEB: jz      short loc_140579B19
 * 0000000140579AED: mov     rax, cr8
 * 0000000140579AF1: sub     al, bl
 * 0000000140579AF3: cmp     al, 0Dh
 * 0000000140579AF5: ja      short loc_140579B19
 * 0000000140579AF7: mov     rcx, gs:20h
 * 0000000140579B00: mov     rdx, [rcx+88B8h]
 * 0000000140579B07: mov     eax, [rdx+14h]
 * 0000000140579B0A: and     eax, 0FFFF0007h
 * 0000000140579B0F: mov     [rdx+14h], eax
 * 0000000140579B12: jnz     short loc_140579B19
 * 0000000140579B14: call    KiRemoveSystemWorkPriorityKick
 * 0000000140579B19: mov     cr8, rbx
 * 0000000140579B1D: or      cs:byte_140C2AA17, 4
 * 0000000140579B24: lea     rcx, KiRecoverableBugcheckException; "4"
 * 0000000140579B2B: call    RtlRaiseException
 * 0000000140579B30: int     3; Trap to Debugger
 * 0000000140579B31: mov     ecx, 38h ; '8'
 * 0000000140579B36: int     29h; Win8: RtlFailFast(ecx)
 * 0000000140579B38: mov     ecx, 4
 * 0000000140579B3D: int     29h; Win8: RtlFailFast(ecx)
 */
