/*
 * XREFs of PopWnfAudioCallback @ 0x1408556A0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopGetDozeTimerSource @ 0x1403AAF30 (PopGetDozeTimerSource.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     PopAcquirePowerRequestPushLock @ 0x1407A70C4 (PopAcquirePowerRequestPushLock.c)
 *     ExQueryWnfStateData @ 0x1407E2490 (ExQueryWnfStateData.c)
 *     PopAudioAccountingCallback @ 0x140855788 (PopAudioAccountingCallback.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1408557C4 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopPowerRequestStatsNotifyScenarioStateChange @ 0x14085580C (PopPowerRequestStatsNotifyScenarioStateChange.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x14099C16C (PopUpdateSmartUserPresencePredictions.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopWnfAudioCallback @ 0x1408556A0
 * Reason: Hex-Rays returned no pseudocode for 0x1408556A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001408556A0: mov     r11, rsp
 * 00000001408556A3: mov     [r11+10h], rbx
 * 00000001408556A7: push    rdi
 * 00000001408556A8: sub     rsp, 40h
 * 00000001408556AC: mov     rax, cs:__security_cookie
 * 00000001408556B3: xor     rax, rsp
 * 00000001408556B6: mov     [rsp+48h+var_10], rax
 * 00000001408556BB: lea     r9, [r11-28h]
 * 00000001408556BF: mov     [rsp+48h+var_28], 8
 * 00000001408556C7: lea     r8, [r11-18h]
 * 00000001408556CB: lea     rdx, [r11-20h]
 * 00000001408556CF: call    ExQueryWnfStateData
 * 00000001408556D4: mov     edi, eax
 * 00000001408556D6: test    eax, eax
 * 00000001408556D8: js      short loc_140855739
 * 00000001408556DA: cmp     [rsp+48h+var_28], 8
 * 00000001408556DF: jb      loc_14085577E
 * 00000001408556E5: call    PopAcquirePolicyLock
 * 00000001408556EA: test    [rsp+48h+var_18], 2
 * 00000001408556EF: jnz     short loc_140855754
 * 00000001408556F1: xor     ecx, ecx
 * 00000001408556F3: mov     cs:byte_140C3D9AD, 0
 * 00000001408556FA: call    PopAudioAccountingCallback
 * 00000001408556FF: mov     bl, cs:byte_140C3D9AD
 * 0000000140855705: mov     cl, 1
 * 0000000140855707: call    PopAcquirePowerRequestPushLock
 * 000000014085570C: cmp     cs:byte_140C3F362, bl
 * 0000000140855712: jz      short loc_140855723
 * 0000000140855714: mov     dl, bl
 * 0000000140855716: mov     cs:byte_140C3F362, bl
 * 000000014085571C: xor     ecx, ecx
 * 000000014085571E: call    PopPowerRequestStatsNotifyScenarioStateChange
 * 0000000140855723: call    PopPowerRequestHandleExecutionEnablementUpdate
 * 0000000140855728: lea     rcx, PopPowerRequestLock
 * 000000014085572F: call    PopReleaseRwLock
 * 0000000140855734: call    PopReleasePolicyLock
 * 0000000140855739: mov     eax, edi
 * 000000014085573B: mov     rcx, [rsp+48h+var_10]
 * 0000000140855740: xor     rcx, rsp; StackCookie
 * 0000000140855743: call    __security_check_cookie
 * 0000000140855748: mov     rbx, [rsp+48h+arg_8]
 * 000000014085574D: add     rsp, 40h
 * 0000000140855751: pop     rdi
 * 0000000140855752: retn
 * 0000000140855754: mov     cs:byte_140C3D9AD, 1
 * 000000014085575B: mov     rax, 0FFFFF78000000008h
 * 0000000140855765: mov     rax, [rax]
 * 0000000140855768: mov     cs:qword_140CF7C58, rax
 * 000000014085576F: call    PopGetDozeTimerSource
 * 0000000140855774: cmp     eax, 2
 * 0000000140855777: jnz     short loc_1408556FF
 * 0000000140855779: jmp     loc_14091CF00
 * 000000014085577E: xor     edi, edi
 * 0000000140855780: jmp     short loc_140855739
 * 000000014091CF00: mov     edx, 5
 * 000000014091CF05: xor     ecx, ecx
 * 000000014091CF07: call    PopUpdateSmartUserPresencePredictions
 * 000000014091CF0C: nop
 * 000000014091CF0D: jmp     loc_1408556FF
 */
