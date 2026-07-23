/*
 * XREFs of PopWnfAudioCallback @ 0x1408562B0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopGetDozeTimerSource @ 0x1403AA660 (PopGetDozeTimerSource.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     PopAcquirePowerRequestPushLock @ 0x1407A73E4 (PopAcquirePowerRequestPushLock.c)
 *     ExQueryWnfStateData @ 0x1407E2740 (ExQueryWnfStateData.c)
 *     PopAudioAccountingCallback @ 0x140856398 (PopAudioAccountingCallback.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1408563D4 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopPowerRequestStatsNotifyScenarioStateChange @ 0x14085641C (PopPowerRequestStatsNotifyScenarioStateChange.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x14099C01C (PopUpdateSmartUserPresencePredictions.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopWnfAudioCallback @ 0x1408562B0
 * Reason: Hex-Rays returned no pseudocode for 0x1408562B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001408562B0: mov     r11, rsp
 * 00000001408562B3: mov     [r11+10h], rbx
 * 00000001408562B7: push    rdi
 * 00000001408562B8: sub     rsp, 40h
 * 00000001408562BC: mov     rax, cs:__security_cookie
 * 00000001408562C3: xor     rax, rsp
 * 00000001408562C6: mov     [rsp+48h+var_10], rax
 * 00000001408562CB: lea     r9, [r11-28h]
 * 00000001408562CF: mov     [rsp+48h+var_28], 8
 * 00000001408562D7: lea     r8, [r11-18h]
 * 00000001408562DB: lea     rdx, [r11-20h]
 * 00000001408562DF: call    ExQueryWnfStateData
 * 00000001408562E4: mov     edi, eax
 * 00000001408562E6: test    eax, eax
 * 00000001408562E8: js      short loc_140856349
 * 00000001408562EA: cmp     [rsp+48h+var_28], 8
 * 00000001408562EF: jb      loc_14085638E
 * 00000001408562F5: call    PopAcquirePolicyLock
 * 00000001408562FA: test    [rsp+48h+var_18], 2
 * 00000001408562FF: jnz     short loc_140856364
 * 0000000140856301: xor     ecx, ecx
 * 0000000140856303: mov     cs:byte_140C3D94D, 0
 * 000000014085630A: call    PopAudioAccountingCallback
 * 000000014085630F: mov     bl, cs:byte_140C3D94D
 * 0000000140856315: mov     cl, 1
 * 0000000140856317: call    PopAcquirePowerRequestPushLock
 * 000000014085631C: cmp     cs:byte_140C3F692, bl
 * 0000000140856322: jz      short loc_140856333
 * 0000000140856324: mov     dl, bl
 * 0000000140856326: mov     cs:byte_140C3F692, bl
 * 000000014085632C: xor     ecx, ecx
 * 000000014085632E: call    PopPowerRequestStatsNotifyScenarioStateChange
 * 0000000140856333: call    PopPowerRequestHandleExecutionEnablementUpdate
 * 0000000140856338: lea     rcx, PopPowerRequestLock
 * 000000014085633F: call    PopReleaseRwLock
 * 0000000140856344: call    PopReleasePolicyLock
 * 0000000140856349: mov     eax, edi
 * 000000014085634B: mov     rcx, [rsp+48h+var_10]
 * 0000000140856350: xor     rcx, rsp; StackCookie
 * 0000000140856353: call    __security_check_cookie
 * 0000000140856358: mov     rbx, [rsp+48h+arg_8]
 * 000000014085635D: add     rsp, 40h
 * 0000000140856361: pop     rdi
 * 0000000140856362: retn
 * 0000000140856364: mov     cs:byte_140C3D94D, 1
 * 000000014085636B: mov     rax, 0FFFFF78000000008h
 * 0000000140856375: mov     rax, [rax]
 * 0000000140856378: mov     cs:qword_140CF7D18, rax
 * 000000014085637F: call    PopGetDozeTimerSource
 * 0000000140856384: cmp     eax, 2
 * 0000000140856387: jnz     short loc_14085630F
 * 0000000140856389: jmp     loc_14091CECE
 * 000000014085638E: xor     edi, edi
 * 0000000140856390: jmp     short loc_140856349
 * 000000014091CECE: mov     edx, 5
 * 000000014091CED3: xor     ecx, ecx
 * 000000014091CED5: call    PopUpdateSmartUserPresencePredictions
 * 000000014091CEDA: nop
 * 000000014091CEDB: jmp     loc_14085630F
 */
