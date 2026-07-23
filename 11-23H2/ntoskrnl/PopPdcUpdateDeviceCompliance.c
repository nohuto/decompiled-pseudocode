/*
 * XREFs of PopPdcUpdateDeviceCompliance @ 0x140998384
 * Callers:
 *     PopPdcCsDeviceNotification @ 0x14099806C (PopPdcCsDeviceNotification.c)
 * Callees:
 *     PopDiagTraceDeviceComplianceUpdate @ 0x140592DB8 (PopDiagTraceDeviceComplianceUpdate.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopPdcUpdateDeviceCompliance @ 0x140998384
 * Reason: Hex-Rays returned no pseudocode for 0x140998384
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140998384: mov     [rsp+arg_0], rbx
 * 0000000140998389: mov     [rsp+arg_8], rbp
 * 000000014099838E: mov     [rsp+arg_10], rsi
 * 0000000140998393: push    rdi
 * 0000000140998394: sub     rsp, 20h
 * 0000000140998398: mov     r9, cs:PopPdcDeviceList
 * 000000014099839F: lea     r10, PopPdcDeviceList
 * 00000001409983A6: xor     ebx, ebx
 * 00000001409983A8: mov     edi, ebx
 * 00000001409983AA: mov     ebp, ebx
 * 00000001409983AC: jmp     short loc_1409983CB
 * 00000001409983AE: mov     ecx, [r9+18h]
 * 00000001409983B2: mov     r8d, edi
 * 00000001409983B5: mov     edx, 1
 * 00000001409983BA: shl     edx, cl
 * 00000001409983BC: or      edi, edx
 * 00000001409983BE: or      ebp, edx
 * 00000001409983C0: cmp     [r9+20h], bl
 * 00000001409983C4: mov     r9, [r9]
 * 00000001409983C7: cmovz   edi, r8d
 * 00000001409983CB: cmp     r9, r10
 * 00000001409983CE: jnz     short loc_1409983AE
 * 00000001409983D0: call    PopAcquirePolicyLock
 * 00000001409983D5: lea     rsi, PopCsDeviceCompliance
 * 00000001409983DC: mov     r8d, [rsi]
 * 00000001409983DF: mov     ecx, ebx
 * 00000001409983E1: mov     eax, 1
 * 00000001409983E6: shl     eax, cl
 * 00000001409983E8: test    edi, eax
 * 00000001409983EA: jz      short loc_1409983F3
 * 00000001409983EC: mov     edx, 1
 * 00000001409983F1: jmp     short loc_1409983F9
 * 00000001409983F3: and     eax, ebp
 * 00000001409983F5: neg     eax
 * 00000001409983F7: sbb     edx, edx
 * 00000001409983F9: cmp     edx, r8d
 * 00000001409983FC: jz      short loc_140998405
 * 00000001409983FE: mov     [rsi], edx
 * 0000000140998400: call    PopDiagTraceDeviceComplianceUpdate
 * 0000000140998405: inc     ebx
 * 0000000140998407: add     rsi, 4
 * 000000014099840B: cmp     ebx, 5
 * 000000014099840E: jb      short loc_1409983DC
 * 0000000140998410: call    PopReleasePolicyLock
 * 0000000140998415: mov     rbx, [rsp+28h+arg_0]
 * 000000014099841A: mov     rbp, [rsp+28h+arg_8]
 * 000000014099841F: mov     rsi, [rsp+28h+arg_10]
 * 0000000140998424: add     rsp, 20h
 * 0000000140998428: pop     rdi
 * 0000000140998429: retn
 */
