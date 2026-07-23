/*
 * XREFs of PopPdcRegister @ 0x14085A96C
 * Callers:
 *     PopPdcInvocation @ 0x14085A91C (PopPdcInvocation.c)
 * Callees:
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopPdcRegister @ 0x14085A96C
 * Reason: Hex-Rays returned no pseudocode for 0x14085A96C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014085A96C: mov     [rsp+arg_0], rbx
 * 000000014085A971: mov     [rsp+arg_8], rsi
 * 000000014085A976: push    rdi
 * 000000014085A977: sub     rsp, 20h
 * 000000014085A97B: xor     ebx, ebx
 * 000000014085A97D: mov     rdi, rdx
 * 000000014085A980: mov     rsi, rcx
 * 000000014085A983: test    rdx, rdx
 * 000000014085A986: jz      loc_14091DFF4
 * 000000014085A98C: call    PopAcquirePolicyLock
 * 000000014085A991: mov     cs:PopModernStandbyTransitionInfo, rbx
 * 000000014085A998: lea     rax, [rsi+8]
 * 000000014085A99C: movups  xmm0, xmmword ptr [rax]
 * 000000014085A99F: lea     rcx, PoPdcCallbacks
 * 000000014085A9A6: mov     edx, 80h
 * 000000014085A9AB: movups  xmmword ptr [rcx], xmm0
 * 000000014085A9AE: movups  xmm1, xmmword ptr [rax+10h]
 * 000000014085A9B2: movups  xmmword ptr [rcx+10h], xmm1
 * 000000014085A9B6: movups  xmm0, xmmword ptr [rax+20h]
 * 000000014085A9BA: movups  xmmword ptr [rcx+20h], xmm0
 * 000000014085A9BE: movups  xmm1, xmmword ptr [rax+30h]
 * 000000014085A9C2: movups  xmmword ptr [rcx+30h], xmm1
 * 000000014085A9C6: movups  xmm0, xmmword ptr [rax+40h]
 * 000000014085A9CA: movups  xmmword ptr [rcx+40h], xmm0
 * 000000014085A9CE: movups  xmm1, xmmword ptr [rax+50h]
 * 000000014085A9D2: movups  xmmword ptr [rcx+50h], xmm1
 * 000000014085A9D6: movups  xmm0, xmmword ptr [rax+60h]
 * 000000014085A9DA: movups  xmmword ptr [rcx+60h], xmm0
 * 000000014085A9DE: add     rcx, rdx
 * 000000014085A9E1: movups  xmm0, xmmword ptr [rax+70h]
 * 000000014085A9E5: add     rax, rdx
 * 000000014085A9E8: movups  xmmword ptr [rcx-10h], xmm0
 * 000000014085A9EC: movups  xmm1, xmmword ptr [rax]
 * 000000014085A9EF: movups  xmmword ptr [rcx], xmm1
 * 000000014085A9F2: movups  xmm0, xmmword ptr [rax+10h]
 * 000000014085A9F6: movups  xmmword ptr [rcx+10h], xmm0
 * 000000014085A9FA: movups  xmm1, xmmword ptr [rax+20h]
 * 000000014085A9FE: movups  xmmword ptr [rcx+20h], xmm1
 * 000000014085AA02: movups  xmm0, xmmword ptr [rax+30h]
 * 000000014085AA06: movups  xmmword ptr [rcx+30h], xmm0
 * 000000014085AA0A: movups  xmm1, xmmword ptr [rax+40h]
 * 000000014085AA0E: lea     rax, PdcPoResiliencyClient
 * 000000014085AA15: movups  xmmword ptr [rcx+40h], xmm1
 * 000000014085AA19: mov     [rdi], rax
 * 000000014085AA1C: lea     rax, PdcPoLowPower
 * 000000014085AA23: mov     [rdi+8], rax
 * 000000014085AA27: lea     rax, PdcPoSetPowerAction
 * 000000014085AA2E: mov     [rdi+10h], rax
 * 000000014085AA32: lea     rax, PdcPoReportButton
 * 000000014085AA39: mov     [rdi+18h], rax
 * 000000014085AA3D: lea     rax, PdcPoReportLidState
 * 000000014085AA44: mov     [rdi+20h], rax
 * 000000014085AA48: lea     rax, PdcPoRecordButton
 * 000000014085AA4F: mov     [rdi+28h], rax
 * 000000014085AA53: lea     rax, PdcPoVerifyActionPolicy
 * 000000014085AA5A: mov     [rdi+30h], rax
 * 000000014085AA5E: lea     rax, PdcPoVerifyPowerState
 * 000000014085AA65: mov     [rdi+38h], rax
 * 000000014085AA69: lea     rax, PopBlockSessionSwitch
 * 000000014085AA70: mov     [rdi+40h], rax
 * 000000014085AA74: lea     rax, PopControlMonitor
 * 000000014085AA7B: mov     [rdi+48h], rax
 * 000000014085AA7F: lea     rax, PopNotifyCsStateExited
 * 000000014085AA86: mov     [rdi+50h], rax
 * 000000014085AA8A: lea     rax, PdcPoCurrentPdcPhase
 * 000000014085AA91: mov     [rdi+58h], rax
 * 000000014085AA95: lea     rax, PdcPoIdleScanEnabled
 * 000000014085AA9C: mov     [rdi+60h], rax
 * 000000014085AAA0: lea     rax, PdcPoPpmRegisterProfiles
 * 000000014085AAA7: mov     [rdi+68h], rax
 * 000000014085AAAB: lea     rax, PdcPoPpmApplyProfile
 * 000000014085AAB2: mov     [rdi+70h], rax
 * 000000014085AAB6: lea     rax, PdcPoPpmResetProfile
 * 000000014085AABD: mov     [rdi+78h], rax
 * 000000014085AAC1: lea     rax, PdcPoNetworkResiliency
 * 000000014085AAC8: mov     [rdi+80h], rax
 * 000000014085AACF: lea     rax, PpmQueryDripsResidency
 * 000000014085AAD6: mov     [rdi+88h], rax
 * 000000014085AADD: lea     rax, PdcPoSleepStudyHelperSetPhaseActive
 * 000000014085AAE4: mov     [rdi+90h], rax
 * 000000014085AAEB: lea     rax, PdcPoLidReliabilityUpdateCallback
 * 000000014085AAF2: mov     [rdi+98h], rax
 * 000000014085AAF9: call    PopReleasePolicyLock
 * 000000014085AAFE: mov     rsi, [rsp+28h+arg_8]
 * 000000014085AB03: mov     eax, ebx
 * 000000014085AB05: mov     rbx, [rsp+28h+arg_0]
 * 000000014085AB0A: add     rsp, 20h
 * 000000014085AB0E: pop     rdi
 * 000000014085AB0F: retn
 * 000000014091DFF4: mov     ebx, 0C000000Dh
 * 000000014091DFF9: jmp     loc_14085AAFE
 */
