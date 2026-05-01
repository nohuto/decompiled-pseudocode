/*
 * XREFs of RmSubscriptionStart @ 0x180005DA4
 * Callers:
 *     RmpClientWnfCreateSubscription @ 0x180005CB0 (RmpClientWnfCreateSubscription.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for RmSubscriptionStart @ 0x180005DA4
 * Reason: Hex-Rays returned no pseudocode for 0x180005DA4
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180005DA4: mov     r11, rsp
 * 0000000180005DA7: mov     [r11+8], rbx
 * 0000000180005DAB: mov     [r11+10h], rsi
 * 0000000180005DAF: push    rdi
 * 0000000180005DB0: sub     rsp, 40h
 * 0000000180005DB4: lea     rax, [r11+18h]
 * 0000000180005DB8: mov     rbx, rdx
 * 0000000180005DBB: xor     esi, esi
 * 0000000180005DBD: mov     [r11-20h], rax
 * 0000000180005DC1: lea     r9, [r11+20h]
 * 0000000180005DC5: mov     [r11-28h], rsi
 * 0000000180005DC9: xor     r8d, r8d
 * 0000000180005DCC: mov     [rsp+48h+arg_10], esi
 * 0000000180005DD0: xor     edx, edx
 * 0000000180005DD2: mov     rdi, rcx
 * 0000000180005DD5: call    cs:__imp_NtQueryWnfStateData
 * 0000000180005DDC: nop     dword ptr [rax+rax+00h]
 * 0000000180005DE1: mov     edx, 80000000h
 * 0000000180005DE6: lea     ecx, [rax+rdx]
 * 0000000180005DE9: test    edx, ecx
 * 0000000180005DEB: jz      short loc_180005E33
 * 0000000180005DED: mov     r8d, [rsp+48h+arg_18]
 * 0000000180005DF2: lea     r9, RmpClientWnfSubscriptionWorker
 * 0000000180005DF9: mov     rdx, [rdi]
 * 0000000180005DFC: mov     rcx, rbx
 * 0000000180005DFF: mov     [rsp+48h+var_10], esi
 * 0000000180005E03: mov     [rsp+48h+var_18], esi
 * 0000000180005E07: mov     [rsp+48h+var_20], rsi
 * 0000000180005E0C: mov     [rsp+48h+var_28], rbx
 * 0000000180005E11: call    cs:__imp_RtlSubscribeWnfStateChangeNotification
 * 0000000180005E18: nop     dword ptr [rax+rax+00h]
 * 0000000180005E1D: test    eax, eax
 * 0000000180005E1F: cmovns  eax, esi
 * 0000000180005E22: mov     rbx, [rsp+48h+arg_0]
 * 0000000180005E27: mov     rsi, [rsp+48h+arg_8]
 * 0000000180005E2C: add     rsp, 40h
 * 0000000180005E30: pop     rdi
 * 0000000180005E31: retn
 * 0000000180005E33: cmp     eax, 0C0000023h
 * 0000000180005E38: jz      short loc_180005DED
 * 0000000180005E3A: jmp     short loc_180005E22
 */
