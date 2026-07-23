/*
 * XREFs of PopPowerAggregatorEngageAggressiveStandbyActions @ 0x140993758
 * Callers:
 *     PopPowerAggregatorEngageModernStandby @ 0x1409937E4 (PopPowerAggregatorEngageModernStandby.c)
 * Callees:
 *     PopNetSetConnectivityConstraint @ 0x140864D18 (PopNetSetConnectivityConstraint.c)
 *     PopPdcEngagePhases @ 0x14087828C (PopPdcEngagePhases.c)
 *     PopNetCheckAdaptiveCsState @ 0x1409966E4 (PopNetCheckAdaptiveCsState.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopPowerAggregatorEngageAggressiveStandbyActions @ 0x140993758
 * Reason: Hex-Rays returned no pseudocode for 0x140993758
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140993758: push    rbx
 * 000000014099375A: sub     rsp, 20h
 * 000000014099375E: mov     ebx, 1Ah
 * 0000000140993763: call    PopAcquirePolicyLock
 * 0000000140993768: cmp     cs:dword_140C3D958, 0
 * 000000014099376F: jnz     short loc_140993776
 * 0000000140993771: lea     ecx, [rbx-19h]
 * 0000000140993774: jmp     short loc_140993783
 * 0000000140993776: call    PopNetCheckAdaptiveCsState
 * 000000014099377B: cmp     eax, 1
 * 000000014099377E: jnz     short loc_1409937B1
 * 0000000140993780: lea     ecx, [rax+6]
 * 0000000140993783: call    PopNetSetConnectivityConstraint
 * 0000000140993788: cmp     cs:dword_140C3D95C, 1
 * 000000014099378F: mov     ebx, 12h
 * 0000000140993794: jnz     short loc_1409937B1
 * 0000000140993796: mov     eax, cs:PopAggressiveStandbyAppliedActions
 * 000000014099379C: xor     ebx, ebx
 * 000000014099379E: mov     edx, cs:PopAggressiveStandbyEnabledActions
 * 00000001409937A4: xor     edx, eax
 * 00000001409937A6: and     edx, 1
 * 00000001409937A9: xor     eax, edx
 * 00000001409937AB: mov     cs:PopAggressiveStandbyAppliedActions, eax
 * 00000001409937B1: mov     eax, cs:PopAggressiveStandbyAppliedActions
 * 00000001409937B7: mov     edx, cs:PopAggressiveStandbyEnabledActions
 * 00000001409937BD: xor     edx, eax
 * 00000001409937BF: and     edx, 4
 * 00000001409937C2: xor     eax, edx
 * 00000001409937C4: mov     cs:PopAggressiveStandbyAppliedActions, eax
 * 00000001409937CA: call    PopReleasePolicyLock
 * 00000001409937CF: mov     ecx, ebx
 * 00000001409937D1: call    PopPdcEngagePhases
 * 00000001409937D6: add     rsp, 20h
 * 00000001409937DA: pop     rbx
 * 00000001409937DB: retn
 */
