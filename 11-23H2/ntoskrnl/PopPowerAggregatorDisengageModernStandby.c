/*
 * XREFs of PopPowerAggregatorDisengageModernStandby @ 0x14099377C
 * Callers:
 *     PopPowerAggregatorModernStandbyEnterStateHandler @ 0x140993C90 (PopPowerAggregatorModernStandbyEnterStateHandler.c)
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x140993CE0 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x1403C7B7C (PopGetMonitorReasonFromPowerEventId.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     PopDirectedDripsNotify @ 0x140875724 (PopDirectedDripsNotify.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140877F14 (PopPowerAggregatorEnterScreenOff.c)
 *     PopSleepstudyStartNextSession @ 0x140878884 (PopSleepstudyStartNextSession.c)
 *     PopSleepstudySnapModernStandbySessionData @ 0x140993618 (PopSleepstudySnapModernStandbySessionData.c)
 *     PopNetClearConnectivityConstraint @ 0x140996880 (PopNetClearConnectivityConstraint.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopPowerAggregatorDisengageModernStandby @ 0x14099377C
 * Reason: Hex-Rays returned no pseudocode for 0x14099377C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014099377C: mov     [rsp+arg_8], rbx
 * 0000000140993781: mov     [rsp+arg_10], rsi
 * 0000000140993786: push    rdi
 * 0000000140993787: sub     rsp, 20h
 * 000000014099378B: mov     rax, [rcx+40h]
 * 000000014099378F: mov     rdi, rcx
 * 0000000140993792: mov     esi, [rcx+4Ch]
 * 0000000140993795: cmp     [rcx+20h], rax
 * 0000000140993799: jnz     short loc_1409937B3
 * 000000014099379B: cmp     byte ptr [rcx+53h], 1
 * 000000014099379F: jnz     short loc_1409937AC
 * 00000001409937A1: mov     ebx, [rcx+50h]
 * 00000001409937A4: test    ebx, 0FFFFFFh
 * 00000001409937AA: jnz     short loc_1409937C3
 * 00000001409937AC: mov     ebx, 32h ; '2'
 * 00000001409937B1: jmp     short loc_1409937C3
 * 00000001409937B3: mov     ecx, [rcx+18h]
 * 00000001409937B6: call    PopGetMonitorReasonFromPowerEventId
 * 00000001409937BB: mov     ebx, eax
 * 00000001409937BD: and     ebx, 0FFFFFFh
 * 00000001409937C3: mov     rcx, rdi
 * 00000001409937C6: call    PopPowerAggregatorEnterScreenOff
 * 00000001409937CB: lea     rcx, PopPowerAggregatorLock
 * 00000001409937D2: call    PopReleaseRwLock
 * 00000001409937D7: call    PopSleepstudySnapModernStandbySessionData
 * 00000001409937DC: mov     eax, [rdi+10h]
 * 00000001409937DF: test    eax, 0FFFFFFFCh
 * 00000001409937E4: jnz     short loc_1409937EB
 * 00000001409937E6: cmp     eax, 1
 * 00000001409937E9: jnz     short loc_1409937F7
 * 00000001409937EB: mov     edx, ebx
 * 00000001409937ED: mov     ecx, 1
 * 00000001409937F2: call    PopSleepstudyStartNextSession
 * 00000001409937F7: and     [rsp+28h+arg_0], 0
 * 00000001409937FD: lea     rdx, [rsp+28h+arg_0]
 * 0000000140993802: mov     ebx, 7
 * 0000000140993807: mov     ecx, ebx
 * 0000000140993809: call    PopDirectedDripsNotify
 * 000000014099380E: call    PopAcquirePolicyLock
 * 0000000140993813: lea     ecx, [rbx-6]
 * 0000000140993816: call    PopNetClearConnectivityConstraint
 * 000000014099381B: mov     ecx, ebx
 * 000000014099381D: call    PopNetClearConnectivityConstraint
 * 0000000140993822: and     cs:PopAggressiveStandbyAppliedActions, 0
 * 0000000140993829: call    PopReleasePolicyLock
 * 000000014099382E: mov     rax, cs:qword_140C6AFA8
 * 0000000140993835: mov     ecx, esi
 * 0000000140993837: call    _guard_dispatch_icall
 * 000000014099383C: lea     rcx, PopPowerAggregatorLock
 * 0000000140993843: call    PopAcquireRwLockExclusive
 * 0000000140993848: mov     rbx, [rsp+28h+arg_8]
 * 000000014099384D: mov     rsi, [rsp+28h+arg_10]
 * 0000000140993852: add     rsp, 20h
 * 0000000140993856: pop     rdi
 * 0000000140993857: retn
 */
