/*
 * XREFs of PopS0LowPowerIdleInfo @ 0x140984730
 * Callers:
 *     PopPowerInformationInternal @ 0x1407ED33C (PopPowerInformationInternal.c)
 * Callees:
 *     PopNetIsDisconnectStandbyActive @ 0x140878748 (PopNetIsDisconnectStandbyActive.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopS0LowPowerIdleInfo @ 0x140984730
 * Reason: Hex-Rays returned no pseudocode for 0x140984730
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140984730: mov     [rsp+arg_0], rbx
 * 0000000140984735: push    rdi
 * 0000000140984736: sub     rsp, 20h
 * 000000014098473A: xor     ebx, ebx
 * 000000014098473C: xor     eax, eax
 * 000000014098473E: cmp     cs:PopPlatformAoAc, bl
 * 0000000140984744: mov     rdi, rcx
 * 0000000140984747: mov     [rsp+28h+arg_8], ebx
 * 000000014098474B: mov     [rcx], rax
 * 000000014098474E: jnz     short loc_14098475A
 * 0000000140984750: mov     ebx, 0C00000BBh
 * 0000000140984755: jmp     loc_1409847F8
 * 000000014098475A: call    PopAcquirePolicyLock
 * 000000014098475F: lea     rcx, [rsp+28h+arg_8]
 * 0000000140984764: call    PopNetIsDisconnectStandbyActive
 * 0000000140984769: mov     cl, [rdi+4]
 * 000000014098476C: mov     r8b, al
 * 000000014098476F: mov     edx, [rsp+28h+arg_8]
 * 0000000140984773: mov     r9d, 1
 * 0000000140984779: mov     [rdi], edx
 * 000000014098477B: cmp     cs:PopCsDeviceCompliance, r9d
 * 0000000140984782: setz    al
 * 0000000140984785: and     cl, 0FEh
 * 0000000140984788: or      cl, al
 * 000000014098478A: mov     [rdi+4], cl
 * 000000014098478D: cmp     cs:dword_140D1BE0C, r9d
 * 0000000140984794: setnz   al
 * 0000000140984797: and     cl, 0FDh
 * 000000014098479A: sub     al, r9b
 * 000000014098479D: and     al, 2
 * 000000014098479F: or      cl, al
 * 00000001409847A1: mov     [rdi+4], cl
 * 00000001409847A4: cmp     cs:dword_140D1BE10, r9d
 * 00000001409847AB: setnz   al
 * 00000001409847AE: and     cl, 0FBh
 * 00000001409847B1: sub     al, r9b
 * 00000001409847B4: and     al, 4
 * 00000001409847B6: or      cl, al
 * 00000001409847B8: mov     [rdi+4], cl
 * 00000001409847BB: cmp     cs:dword_140D1BE18, r9d
 * 00000001409847C2: setnz   al
 * 00000001409847C5: and     cl, 0F7h
 * 00000001409847C8: sub     al, r9b
 * 00000001409847CB: and     al, 8
 * 00000001409847CD: or      cl, al
 * 00000001409847CF: mov     [rdi+4], cl
 * 00000001409847D2: test    r8b, r8b
 * 00000001409847D5: mov     cl, [rdi+5]
 * 00000001409847D8: setnz   al
 * 00000001409847DB: and     cl, 0FEh
 * 00000001409847DE: or      cl, al
 * 00000001409847E0: lea     eax, [rdx-3]
 * 00000001409847E3: cmp     eax, r9d
 * 00000001409847E6: jbe     short loc_1409847ED
 * 00000001409847E8: and     cl, 0FDh
 * 00000001409847EB: jmp     short loc_1409847F0
 * 00000001409847ED: or      cl, 2
 * 00000001409847F0: mov     [rdi+5], cl
 * 00000001409847F3: call    PopReleasePolicyLock
 * 00000001409847F8: mov     eax, ebx
 * 00000001409847FA: mov     rbx, [rsp+28h+arg_0]
 * 00000001409847FF: add     rsp, 20h
 * 0000000140984803: pop     rdi
 * 0000000140984804: retn
 */
