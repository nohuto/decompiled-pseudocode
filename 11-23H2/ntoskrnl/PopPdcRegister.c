/*
 * XREFs of PopPdcRegister @ 0x14085A3DC
 * Callers:
 *     PopPdcInvocation @ 0x14085A38C (PopPdcInvocation.c)
 * Callees:
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopPdcRegister @ 0x14085A3DC
 * Reason: Hex-Rays returned no pseudocode for 0x14085A3DC
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014085A3DC: mov     [rsp+arg_0], rbx
 * 000000014085A3E1: mov     [rsp+arg_8], rsi
 * 000000014085A3E6: push    rdi
 * 000000014085A3E7: sub     rsp, 20h
 * 000000014085A3EB: xor     ebx, ebx
 * 000000014085A3ED: mov     rdi, rdx
 * 000000014085A3F0: mov     rsi, rcx
 * 000000014085A3F3: test    rdx, rdx
 * 000000014085A3F6: jz      loc_14091E2F8
 * 000000014085A3FC: call    PopAcquirePolicyLock
 * 000000014085A401: mov     cs:PopModernStandbyTransitionInfo, rbx
 * 000000014085A408: lea     rax, [rsi+8]
 * 000000014085A40C: movups  xmm0, xmmword ptr [rax]
 * 000000014085A40F: lea     rcx, PoPdcCallbacks
 * 000000014085A416: mov     edx, 80h
 * 000000014085A41B: movups  xmmword ptr [rcx], xmm0
 * 000000014085A41E: movups  xmm1, xmmword ptr [rax+10h]
 * 000000014085A422: movups  xmmword ptr [rcx+10h], xmm1
 * 000000014085A426: movups  xmm0, xmmword ptr [rax+20h]
 * 000000014085A42A: movups  xmmword ptr [rcx+20h], xmm0
 * 000000014085A42E: movups  xmm1, xmmword ptr [rax+30h]
 * 000000014085A432: movups  xmmword ptr [rcx+30h], xmm1
 * 000000014085A436: movups  xmm0, xmmword ptr [rax+40h]
 * 000000014085A43A: movups  xmmword ptr [rcx+40h], xmm0
 * 000000014085A43E: movups  xmm1, xmmword ptr [rax+50h]
 * 000000014085A442: movups  xmmword ptr [rcx+50h], xmm1
 * 000000014085A446: movups  xmm0, xmmword ptr [rax+60h]
 * 000000014085A44A: movups  xmmword ptr [rcx+60h], xmm0
 * 000000014085A44E: add     rcx, rdx
 * 000000014085A451: movups  xmm0, xmmword ptr [rax+70h]
 * 000000014085A455: add     rax, rdx
 * 000000014085A458: movups  xmmword ptr [rcx-10h], xmm0
 * 000000014085A45C: movups  xmm1, xmmword ptr [rax]
 * 000000014085A45F: movups  xmmword ptr [rcx], xmm1
 * 000000014085A462: movups  xmm0, xmmword ptr [rax+10h]
 * 000000014085A466: movups  xmmword ptr [rcx+10h], xmm0
 * 000000014085A46A: movups  xmm1, xmmword ptr [rax+20h]
 * 000000014085A46E: movups  xmmword ptr [rcx+20h], xmm1
 * 000000014085A472: movups  xmm0, xmmword ptr [rax+30h]
 * 000000014085A476: movups  xmmword ptr [rcx+30h], xmm0
 * 000000014085A47A: movups  xmm1, xmmword ptr [rax+40h]
 * 000000014085A47E: lea     rax, PdcPoResiliencyClient
 * 000000014085A485: movups  xmmword ptr [rcx+40h], xmm1
 * 000000014085A489: mov     [rdi], rax
 * 000000014085A48C: lea     rax, PdcPoLowPower
 * 000000014085A493: mov     [rdi+8], rax
 * 000000014085A497: lea     rax, PdcPoSetPowerAction
 * 000000014085A49E: mov     [rdi+10h], rax
 * 000000014085A4A2: lea     rax, PdcPoReportButton
 * 000000014085A4A9: mov     [rdi+18h], rax
 * 000000014085A4AD: lea     rax, PdcPoReportLidState
 * 000000014085A4B4: mov     [rdi+20h], rax
 * 000000014085A4B8: lea     rax, PdcPoRecordButton
 * 000000014085A4BF: mov     [rdi+28h], rax
 * 000000014085A4C3: lea     rax, PdcPoVerifyActionPolicy
 * 000000014085A4CA: mov     [rdi+30h], rax
 * 000000014085A4CE: lea     rax, PdcPoVerifyPowerState
 * 000000014085A4D5: mov     [rdi+38h], rax
 * 000000014085A4D9: lea     rax, PopBlockSessionSwitch
 * 000000014085A4E0: mov     [rdi+40h], rax
 * 000000014085A4E4: lea     rax, PopControlMonitor
 * 000000014085A4EB: mov     [rdi+48h], rax
 * 000000014085A4EF: lea     rax, PopNotifyCsStateExited
 * 000000014085A4F6: mov     [rdi+50h], rax
 * 000000014085A4FA: lea     rax, PdcPoCurrentPdcPhase
 * 000000014085A501: mov     [rdi+58h], rax
 * 000000014085A505: lea     rax, PdcPoIdleScanEnabled
 * 000000014085A50C: mov     [rdi+60h], rax
 * 000000014085A510: lea     rax, PdcPoPpmRegisterProfiles
 * 000000014085A517: mov     [rdi+68h], rax
 * 000000014085A51B: lea     rax, PdcPoPpmApplyProfile
 * 000000014085A522: mov     [rdi+70h], rax
 * 000000014085A526: lea     rax, PdcPoPpmResetProfile
 * 000000014085A52D: mov     [rdi+78h], rax
 * 000000014085A531: lea     rax, PdcPoNetworkResiliency
 * 000000014085A538: mov     [rdi+80h], rax
 * 000000014085A53F: lea     rax, PpmQueryDripsResidency
 * 000000014085A546: mov     [rdi+88h], rax
 * 000000014085A54D: lea     rax, PdcPoSleepStudyHelperSetPhaseActive
 * 000000014085A554: mov     [rdi+90h], rax
 * 000000014085A55B: lea     rax, PdcPoLidReliabilityUpdateCallback
 * 000000014085A562: mov     [rdi+98h], rax
 * 000000014085A569: call    PopReleasePolicyLock
 * 000000014085A56E: mov     rsi, [rsp+28h+arg_8]
 * 000000014085A573: mov     eax, ebx
 * 000000014085A575: mov     rbx, [rsp+28h+arg_0]
 * 000000014085A57A: add     rsp, 20h
 * 000000014085A57E: pop     rdi
 * 000000014085A57F: retn
 * 000000014091E2F8: mov     ebx, 0C000000Dh
 * 000000014091E2FD: jmp     loc_14085A56E
 */
