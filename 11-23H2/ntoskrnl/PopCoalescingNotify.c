/*
 * XREFs of PopCoalescingNotify @ 0x1409871E0
 * Callers:
 *     PopPolicyWorkerThread @ 0x140361F30 (PopPolicyWorkerThread.c)
 * Callees:
 *     KeCancelTimer @ 0x140252B60 (KeCancelTimer.c)
 *     PopPrintEx @ 0x14032A93C (PopPrintEx.c)
 *     PopDiagTraceEventNoPayload @ 0x1403677E0 (PopDiagTraceEventNoPayload.c)
 *     PopCoalescingSetTimer @ 0x14058DE70 (PopCoalescingSetTimer.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x14058DEF0 (PopEnsureCoalescingWorkerWillRun.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopCoalescingNotify @ 0x1409871E0
 * Reason: Hex-Rays returned no pseudocode for 0x1409871E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001409871E0: sub     rsp, 28h
 * 00000001409871E4: call    PopAcquirePolicyLock
 * 00000001409871E9: test    cs:PopCoalescingState, 2
 * 00000001409871F0: jz      short loc_140987240
 * 00000001409871F2: lea     rcx, PopCoalescingTimer; PKTIMER
 * 00000001409871F9: call    KeCancelTimer
 * 00000001409871FE: or      cs:PopCoalescingState, 4
 * 0000000140987205: call    PopEnsureCoalescingWorkerWillRun
 * 000000014098720A: lea     rdx, aPopcoalescingF; "PopCoalescing: FLUSH notification sent."...
 * 0000000140987211: mov     ecx, 3
 * 0000000140987216: call    PopPrintEx
 * 000000014098721B: lea     rcx, POP_ETW_IO_COALESCING_FLUSH; EventDescriptor
 * 0000000140987222: call    PopDiagTraceEventNoPayload
 * 0000000140987227: mov     rax, 0FFFFF78000000008h
 * 0000000140987231: mov     rax, [rax]
 * 0000000140987234: mov     cs:PopCoalescingLastFlushTime, rax
 * 000000014098723B: call    PopCoalescingSetTimer
 * 0000000140987240: call    PopReleasePolicyLock
 * 0000000140987245: mov     rax, gs:188h
 * 000000014098724E: cmp     dword ptr [rax+1E4h], 0
 * 0000000140987255: jz      short loc_14098725E
 * 0000000140987257: mov     ecx, 20h ; ' '
 * 000000014098725C: int     29h; Win8: RtlFailFast(ecx)
 * 000000014098725E: xor     eax, eax
 * 0000000140987260: add     rsp, 28h
 * 0000000140987264: retn
 */
