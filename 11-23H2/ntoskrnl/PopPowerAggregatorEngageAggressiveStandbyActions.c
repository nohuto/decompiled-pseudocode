/*
 * XREFs of PopPowerAggregatorEngageAggressiveStandbyActions @ 0x1409938A8
 * Callers:
 *     PopPowerAggregatorEngageModernStandby @ 0x140993934 (PopPowerAggregatorEngageModernStandby.c)
 * Callees:
 *     PopNetSetConnectivityConstraint @ 0x140864B38 (PopNetSetConnectivityConstraint.c)
 *     PopPdcEngagePhases @ 0x140877FFC (PopPdcEngagePhases.c)
 *     PopNetCheckAdaptiveCsState @ 0x140996834 (PopNetCheckAdaptiveCsState.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopPowerAggregatorEngageAggressiveStandbyActions @ 0x1409938A8
 * Reason: Hex-Rays returned no pseudocode for 0x1409938A8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001409938A8: push    rbx
 * 00000001409938AA: sub     rsp, 20h
 * 00000001409938AE: mov     ebx, 1Ah
 * 00000001409938B3: call    PopAcquirePolicyLock
 * 00000001409938B8: cmp     cs:dword_140C3D9B8, 0
 * 00000001409938BF: jnz     short loc_1409938C6
 * 00000001409938C1: lea     ecx, [rbx-19h]
 * 00000001409938C4: jmp     short loc_1409938D3
 * 00000001409938C6: call    PopNetCheckAdaptiveCsState
 * 00000001409938CB: cmp     eax, 1
 * 00000001409938CE: jnz     short loc_140993901
 * 00000001409938D0: lea     ecx, [rax+6]
 * 00000001409938D3: call    PopNetSetConnectivityConstraint
 * 00000001409938D8: cmp     cs:dword_140C3D9BC, 1
 * 00000001409938DF: mov     ebx, 12h
 * 00000001409938E4: jnz     short loc_140993901
 * 00000001409938E6: mov     eax, cs:PopAggressiveStandbyAppliedActions
 * 00000001409938EC: xor     ebx, ebx
 * 00000001409938EE: mov     edx, cs:PopAggressiveStandbyEnabledActions
 * 00000001409938F4: xor     edx, eax
 * 00000001409938F6: and     edx, 1
 * 00000001409938F9: xor     eax, edx
 * 00000001409938FB: mov     cs:PopAggressiveStandbyAppliedActions, eax
 * 0000000140993901: mov     eax, cs:PopAggressiveStandbyAppliedActions
 * 0000000140993907: mov     edx, cs:PopAggressiveStandbyEnabledActions
 * 000000014099390D: xor     edx, eax
 * 000000014099390F: and     edx, 4
 * 0000000140993912: xor     eax, edx
 * 0000000140993914: mov     cs:PopAggressiveStandbyAppliedActions, eax
 * 000000014099391A: call    PopReleasePolicyLock
 * 000000014099391F: mov     ecx, ebx
 * 0000000140993921: call    PopPdcEngagePhases
 * 0000000140993926: add     rsp, 20h
 * 000000014099392A: pop     rbx
 * 000000014099392B: retn
 */
