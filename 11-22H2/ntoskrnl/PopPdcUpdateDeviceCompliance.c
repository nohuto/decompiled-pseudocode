/*
 * XREFs of PopPdcUpdateDeviceCompliance @ 0x140998234
 * Callers:
 *     PopPdcCsDeviceNotification @ 0x140997F1C (PopPdcCsDeviceNotification.c)
 * Callees:
 *     PopDiagTraceDeviceComplianceUpdate @ 0x140592958 (PopDiagTraceDeviceComplianceUpdate.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopPdcUpdateDeviceCompliance @ 0x140998234
 * Reason: Hex-Rays returned no pseudocode for 0x140998234
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140998234: mov     [rsp+arg_0], rbx
 * 0000000140998239: mov     [rsp+arg_8], rbp
 * 000000014099823E: mov     [rsp+arg_10], rsi
 * 0000000140998243: push    rdi
 * 0000000140998244: sub     rsp, 20h
 * 0000000140998248: mov     r9, cs:PopPdcDeviceList
 * 000000014099824F: lea     r10, PopPdcDeviceList
 * 0000000140998256: xor     ebx, ebx
 * 0000000140998258: mov     edi, ebx
 * 000000014099825A: mov     ebp, ebx
 * 000000014099825C: jmp     short loc_14099827B
 * 000000014099825E: mov     ecx, [r9+18h]
 * 0000000140998262: mov     r8d, edi
 * 0000000140998265: mov     edx, 1
 * 000000014099826A: shl     edx, cl
 * 000000014099826C: or      edi, edx
 * 000000014099826E: or      ebp, edx
 * 0000000140998270: cmp     [r9+20h], bl
 * 0000000140998274: mov     r9, [r9]
 * 0000000140998277: cmovz   edi, r8d
 * 000000014099827B: cmp     r9, r10
 * 000000014099827E: jnz     short loc_14099825E
 * 0000000140998280: call    PopAcquirePolicyLock
 * 0000000140998285: lea     rsi, PopCsDeviceCompliance
 * 000000014099828C: mov     r8d, [rsi]
 * 000000014099828F: mov     ecx, ebx
 * 0000000140998291: mov     eax, 1
 * 0000000140998296: shl     eax, cl
 * 0000000140998298: test    edi, eax
 * 000000014099829A: jz      short loc_1409982A3
 * 000000014099829C: mov     edx, 1
 * 00000001409982A1: jmp     short loc_1409982A9
 * 00000001409982A3: and     eax, ebp
 * 00000001409982A5: neg     eax
 * 00000001409982A7: sbb     edx, edx
 * 00000001409982A9: cmp     edx, r8d
 * 00000001409982AC: jz      short loc_1409982B5
 * 00000001409982AE: mov     [rsi], edx
 * 00000001409982B0: call    PopDiagTraceDeviceComplianceUpdate
 * 00000001409982B5: inc     ebx
 * 00000001409982B7: add     rsi, 4
 * 00000001409982BB: cmp     ebx, 5
 * 00000001409982BE: jb      short loc_14099828C
 * 00000001409982C0: call    PopReleasePolicyLock
 * 00000001409982C5: mov     rbx, [rsp+28h+arg_0]
 * 00000001409982CA: mov     rbp, [rsp+28h+arg_8]
 * 00000001409982CF: mov     rsi, [rsp+28h+arg_10]
 * 00000001409982D4: add     rsp, 20h
 * 00000001409982D8: pop     rdi
 * 00000001409982D9: retn
 */
