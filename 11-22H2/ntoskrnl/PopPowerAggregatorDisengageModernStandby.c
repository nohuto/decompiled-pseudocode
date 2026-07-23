/*
 * XREFs of PopPowerAggregatorDisengageModernStandby @ 0x14099362C
 * Callers:
 *     PopPowerAggregatorModernStandbyEnterStateHandler @ 0x140993B40 (PopPowerAggregatorModernStandbyEnterStateHandler.c)
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x140993B90 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x1403C733C (PopGetMonitorReasonFromPowerEventId.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     PopDirectedDripsNotify @ 0x1408759B4 (PopDirectedDripsNotify.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x1408781A4 (PopPowerAggregatorEnterScreenOff.c)
 *     PopSleepstudyStartNextSession @ 0x140878B14 (PopSleepstudyStartNextSession.c)
 *     PopSleepstudySnapModernStandbySessionData @ 0x1409934C8 (PopSleepstudySnapModernStandbySessionData.c)
 *     PopNetClearConnectivityConstraint @ 0x140996730 (PopNetClearConnectivityConstraint.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopPowerAggregatorDisengageModernStandby @ 0x14099362C
 * Reason: Hex-Rays returned no pseudocode for 0x14099362C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014099362C: mov     [rsp+arg_8], rbx
 * 0000000140993631: mov     [rsp+arg_10], rsi
 * 0000000140993636: push    rdi
 * 0000000140993637: sub     rsp, 20h
 * 000000014099363B: mov     rax, [rcx+40h]
 * 000000014099363F: mov     rdi, rcx
 * 0000000140993642: mov     esi, [rcx+4Ch]
 * 0000000140993645: cmp     [rcx+20h], rax
 * 0000000140993649: jnz     short loc_140993663
 * 000000014099364B: cmp     byte ptr [rcx+53h], 1
 * 000000014099364F: jnz     short loc_14099365C
 * 0000000140993651: mov     ebx, [rcx+50h]
 * 0000000140993654: test    ebx, 0FFFFFFh
 * 000000014099365A: jnz     short loc_140993673
 * 000000014099365C: mov     ebx, 32h ; '2'
 * 0000000140993661: jmp     short loc_140993673
 * 0000000140993663: mov     ecx, [rcx+18h]
 * 0000000140993666: call    PopGetMonitorReasonFromPowerEventId
 * 000000014099366B: mov     ebx, eax
 * 000000014099366D: and     ebx, 0FFFFFFh
 * 0000000140993673: mov     rcx, rdi
 * 0000000140993676: call    PopPowerAggregatorEnterScreenOff
 * 000000014099367B: lea     rcx, PopPowerAggregatorLock
 * 0000000140993682: call    PopReleaseRwLock
 * 0000000140993687: call    PopSleepstudySnapModernStandbySessionData
 * 000000014099368C: mov     eax, [rdi+10h]
 * 000000014099368F: test    eax, 0FFFFFFFCh
 * 0000000140993694: jnz     short loc_14099369B
 * 0000000140993696: cmp     eax, 1
 * 0000000140993699: jnz     short loc_1409936A7
 * 000000014099369B: mov     edx, ebx
 * 000000014099369D: mov     ecx, 1
 * 00000001409936A2: call    PopSleepstudyStartNextSession
 * 00000001409936A7: and     [rsp+28h+arg_0], 0
 * 00000001409936AD: lea     rdx, [rsp+28h+arg_0]
 * 00000001409936B2: mov     ebx, 7
 * 00000001409936B7: mov     ecx, ebx
 * 00000001409936B9: call    PopDirectedDripsNotify
 * 00000001409936BE: call    PopAcquirePolicyLock
 * 00000001409936C3: lea     ecx, [rbx-6]
 * 00000001409936C6: call    PopNetClearConnectivityConstraint
 * 00000001409936CB: mov     ecx, ebx
 * 00000001409936CD: call    PopNetClearConnectivityConstraint
 * 00000001409936D2: and     cs:PopAggressiveStandbyAppliedActions, 0
 * 00000001409936D9: call    PopReleasePolicyLock
 * 00000001409936DE: mov     rax, cs:qword_140C6B098
 * 00000001409936E5: mov     ecx, esi
 * 00000001409936E7: call    _guard_dispatch_icall
 * 00000001409936EC: lea     rcx, PopPowerAggregatorLock
 * 00000001409936F3: call    PopAcquireRwLockExclusive
 * 00000001409936F8: mov     rbx, [rsp+28h+arg_8]
 * 00000001409936FD: mov     rsi, [rsp+28h+arg_10]
 * 0000000140993702: add     rsp, 20h
 * 0000000140993706: pop     rdi
 * 0000000140993707: retn
 */
