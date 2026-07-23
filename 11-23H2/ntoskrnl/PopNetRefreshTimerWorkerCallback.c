/*
 * XREFs of PopNetRefreshTimerWorkerCallback @ 0x140996AF0
 * Callers:
 *     <none>
 * Callees:
 *     PopOkayToQueueNextWorkItem @ 0x14032F190 (PopOkayToQueueNextWorkItem.c)
 *     PopNetArmRefreshTimer @ 0x1409967C0 (PopNetArmRefreshTimer.c)
 *     PopNetDisengageNetworkRefresh @ 0x140996920 (PopNetDisengageNetworkRefresh.c)
 *     PopNetEngageNetworkRefresh @ 0x14099696C (PopNetEngageNetworkRefresh.c)
 *     PopNetGetNextDueRefreshTime @ 0x1409969B8 (PopNetGetNextDueRefreshTime.c)
 *     PopNetIsNetworkRefreshEnabled @ 0x140996A6C (PopNetIsNetworkRefreshEnabled.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopNetRefreshTimerWorkerCallback @ 0x140996AF0
 * Reason: Hex-Rays returned no pseudocode for 0x140996AF0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140996AF0: sub     rsp, 28h
 * 0000000140996AF4: call    PopAcquirePolicyLock
 * 0000000140996AF9: cmp     cs:PopNetInLpePhase, 0
 * 0000000140996B00: jz      short loc_140996B5B
 * 0000000140996B02: call    PopNetIsNetworkRefreshEnabled
 * 0000000140996B07: test    al, al
 * 0000000140996B09: jz      short loc_140996B5B
 * 0000000140996B0B: xor     eax, eax
 * 0000000140996B0D: lock xadd cs:PopNetRefreshTimerState, eax
 * 0000000140996B15: cmp     eax, 2
 * 0000000140996B18: jnz     short loc_140996B5B
 * 0000000140996B1A: cmp     cs:PopNetRefreshIntervalActive, 0
 * 0000000140996B21: jnz     short loc_140996B3C
 * 0000000140996B23: call    PopNetEngageNetworkRefresh
 * 0000000140996B28: mov     edx, 1
 * 0000000140996B2D: mov     ecx, 11E1A300h
 * 0000000140996B32: xchg    edx, cs:PopNetRefreshTimerState
 * 0000000140996B38: xor     edx, edx
 * 0000000140996B3A: jmp     short loc_140996B56
 * 0000000140996B3C: call    PopNetDisengageNetworkRefresh
 * 0000000140996B41: call    PopNetGetNextDueRefreshTime
 * 0000000140996B46: mov     edx, 1
 * 0000000140996B4B: mov     ecx, edx
 * 0000000140996B4D: xchg    ecx, cs:PopNetRefreshTimerState
 * 0000000140996B53: mov     rcx, rax
 * 0000000140996B56: call    PopNetArmRefreshTimer
 * 0000000140996B5B: lea     rcx, unk_140C3A228
 * 0000000140996B62: call    PopOkayToQueueNextWorkItem
 * 0000000140996B67: call    PopReleasePolicyLock
 * 0000000140996B6C: add     rsp, 28h
 * 0000000140996B70: retn
 */
