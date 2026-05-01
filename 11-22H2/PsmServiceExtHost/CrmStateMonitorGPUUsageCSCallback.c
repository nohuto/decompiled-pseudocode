/*
 * XREFs of CrmStateMonitorGPUUsageCSCallback @ 0x180008B70
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorGPUUsageQuery @ 0x180009374 (CrmStateMonitorGPUUsageQuery.c)
 *     CrmStateMonitorStateSet @ 0x180009B80 (CrmStateMonitorStateSet.c)
 */

/*
 * Hex-Rays decompilation failed for CrmStateMonitorGPUUsageCSCallback @ 0x180008B70
 * Reason: Hex-Rays returned no pseudocode for 0x180008B70
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180008B70: mov     [rsp+arg_8], rbx
 * 0000000180008B75: push    rdi
 * 0000000180008B76: sub     rsp, 20h
 * 0000000180008B7A: mov     eax, [r8]
 * 0000000180008B7D: lea     rbx, [rcx-40h]
 * 0000000180008B81: dec     eax
 * 0000000180008B83: cmp     eax, 0FFFFFFFDh
 * 0000000180008B86: ja      short loc_180008BD0
 * 0000000180008B88: mov     rcx, [rbx+58h]
 * 0000000180008B8C: xor     r9d, r9d
 * 0000000180008B8F: xor     r8d, r8d
 * 0000000180008B92: xor     edx, edx
 * 0000000180008B94: call    cs:__imp_TpSetTimer
 * 0000000180008B9B: nop     dword ptr [rax+rax+00h]
 * 0000000180008BA0: mov     rcx, [rbx+58h]
 * 0000000180008BA4: mov     edx, 1
 * 0000000180008BA9: call    cs:__imp_TpWaitForTimer
 * 0000000180008BB0: nop     dword ptr [rax+rax+00h]
 * 0000000180008BB5: and     [rsp+28h+arg_0], 0
 * 0000000180008BBA: lea     rdx, [rsp+28h+arg_0]
 * 0000000180008BBF: xor     r9d, r9d
 * 0000000180008BC2: mov     rcx, rbx
 * 0000000180008BC5: lea     r8d, [r9+4]
 * 0000000180008BC9: call    CrmStateMonitorStateSet
 * 0000000180008BCE: jmp     short loc_180008C38
 * 0000000180008BD0: lea     rcx, [rbx+68h]
 * 0000000180008BD4: call    CrmStateMonitorGPUUsageQuery
 * 0000000180008BD9: test    eax, eax
 * 0000000180008BDB: jns     short loc_180008BE2
 * 0000000180008BDD: or      qword ptr [rbx+68h], 0FFFFFFFFFFFFFFFFh
 * 0000000180008BE2: lea     rcx, [rbx+60h]
 * 0000000180008BE6: call    cs:__imp_RtlQueryUnbiasedInterruptTime
 * 0000000180008BED: nop     dword ptr [rax+rax+00h]
 * 0000000180008BF2: xor     r9d, r9d
 * 0000000180008BF5: mov     [rsp+28h+arg_0], 64h ; 'd'
 * 0000000180008BFD: lea     rdx, [rsp+28h+arg_0]
 * 0000000180008C02: mov     rcx, rbx
 * 0000000180008C05: lea     r8d, [r9+4]
 * 0000000180008C09: call    CrmStateMonitorStateSet
 * 0000000180008C0E: mov     rcx, [rbx+58h]
 * 0000000180008C12: lea     rdx, [rsp+28h+arg_10]
 * 0000000180008C17: mov     r9d, 7D0h
 * 0000000180008C1D: mov     [rsp+28h+arg_10], 0FFFFFFFFFA0A1F00h
 * 0000000180008C26: mov     r8d, 2710h
 * 0000000180008C2C: call    cs:__imp_TpSetTimer
 * 0000000180008C33: nop     dword ptr [rax+rax+00h]
 * 0000000180008C38: mov     rbx, [rsp+28h+arg_8]
 * 0000000180008C3D: add     rsp, 20h
 * 0000000180008C41: pop     rdi
 * 0000000180008C42: retn
 */
