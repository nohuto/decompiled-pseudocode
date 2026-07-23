/*
 * XREFs of PopNetRefreshTimerWorkerCallback @ 0x1409969A0
 * Callers:
 *     <none>
 * Callees:
 *     PopOkayToQueueNextWorkItem @ 0x14032ED60 (PopOkayToQueueNextWorkItem.c)
 *     PopNetArmRefreshTimer @ 0x140996670 (PopNetArmRefreshTimer.c)
 *     PopNetDisengageNetworkRefresh @ 0x1409967D0 (PopNetDisengageNetworkRefresh.c)
 *     PopNetEngageNetworkRefresh @ 0x14099681C (PopNetEngageNetworkRefresh.c)
 *     PopNetGetNextDueRefreshTime @ 0x140996868 (PopNetGetNextDueRefreshTime.c)
 *     PopNetIsNetworkRefreshEnabled @ 0x14099691C (PopNetIsNetworkRefreshEnabled.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopNetRefreshTimerWorkerCallback @ 0x1409969A0
 * Reason: Hex-Rays returned no pseudocode for 0x1409969A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001409969A0: sub     rsp, 28h
 * 00000001409969A4: call    PopAcquirePolicyLock
 * 00000001409969A9: cmp     cs:PopNetInLpePhase, 0
 * 00000001409969B0: jz      short loc_140996A0B
 * 00000001409969B2: call    PopNetIsNetworkRefreshEnabled
 * 00000001409969B7: test    al, al
 * 00000001409969B9: jz      short loc_140996A0B
 * 00000001409969BB: xor     eax, eax
 * 00000001409969BD: lock xadd cs:PopNetRefreshTimerState, eax
 * 00000001409969C5: cmp     eax, 2
 * 00000001409969C8: jnz     short loc_140996A0B
 * 00000001409969CA: cmp     cs:PopNetRefreshIntervalActive, 0
 * 00000001409969D1: jnz     short loc_1409969EC
 * 00000001409969D3: call    PopNetEngageNetworkRefresh
 * 00000001409969D8: mov     edx, 1
 * 00000001409969DD: mov     ecx, 11E1A300h
 * 00000001409969E2: xchg    edx, cs:PopNetRefreshTimerState
 * 00000001409969E8: xor     edx, edx
 * 00000001409969EA: jmp     short loc_140996A06
 * 00000001409969EC: call    PopNetDisengageNetworkRefresh
 * 00000001409969F1: call    PopNetGetNextDueRefreshTime
 * 00000001409969F6: mov     edx, 1
 * 00000001409969FB: mov     ecx, edx
 * 00000001409969FD: xchg    ecx, cs:PopNetRefreshTimerState
 * 0000000140996A03: mov     rcx, rax
 * 0000000140996A06: call    PopNetArmRefreshTimer
 * 0000000140996A0B: lea     rcx, unk_140C3A288
 * 0000000140996A12: call    PopOkayToQueueNextWorkItem
 * 0000000140996A17: call    PopReleasePolicyLock
 * 0000000140996A1C: add     rsp, 28h
 * 0000000140996A20: retn
 */
