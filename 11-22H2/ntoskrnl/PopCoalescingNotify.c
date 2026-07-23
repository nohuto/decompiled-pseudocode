/*
 * XREFs of PopCoalescingNotify @ 0x140987090
 * Callers:
 *     PopPolicyWorkerThread @ 0x140361740 (PopPolicyWorkerThread.c)
 * Callees:
 *     KeCancelTimer @ 0x140252980 (KeCancelTimer.c)
 *     PopPrintEx @ 0x14032A4CC (PopPrintEx.c)
 *     PopDiagTraceEventNoPayload @ 0x140366FF0 (PopDiagTraceEventNoPayload.c)
 *     PopCoalescingSetTimer @ 0x14058DA10 (PopCoalescingSetTimer.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x14058DA90 (PopEnsureCoalescingWorkerWillRun.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopCoalescingNotify @ 0x140987090
 * Reason: Hex-Rays returned no pseudocode for 0x140987090
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140987090: sub     rsp, 28h
 * 0000000140987094: call    PopAcquirePolicyLock
 * 0000000140987099: test    cs:PopCoalescingState, 2
 * 00000001409870A0: jz      short loc_1409870F0
 * 00000001409870A2: lea     rcx, PopCoalescingTimer; PKTIMER
 * 00000001409870A9: call    KeCancelTimer
 * 00000001409870AE: or      cs:PopCoalescingState, 4
 * 00000001409870B5: call    PopEnsureCoalescingWorkerWillRun
 * 00000001409870BA: lea     rdx, aPopcoalescingF; "PopCoalescing: FLUSH notification sent."...
 * 00000001409870C1: mov     ecx, 3
 * 00000001409870C6: call    PopPrintEx
 * 00000001409870CB: lea     rcx, POP_ETW_IO_COALESCING_FLUSH; EventDescriptor
 * 00000001409870D2: call    PopDiagTraceEventNoPayload
 * 00000001409870D7: mov     rax, 0FFFFF78000000008h
 * 00000001409870E1: mov     rax, [rax]
 * 00000001409870E4: mov     cs:PopCoalescingLastFlushTime, rax
 * 00000001409870EB: call    PopCoalescingSetTimer
 * 00000001409870F0: call    PopReleasePolicyLock
 * 00000001409870F5: mov     rax, gs:188h
 * 00000001409870FE: cmp     dword ptr [rax+1E4h], 0
 * 0000000140987105: jz      short loc_14098710E
 * 0000000140987107: mov     ecx, 20h ; ' '
 * 000000014098710C: int     29h; Win8: RtlFailFast(ecx)
 * 000000014098710E: xor     eax, eax
 * 0000000140987110: add     rsp, 28h
 * 0000000140987114: retn
 */
