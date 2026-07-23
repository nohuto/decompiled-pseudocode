/*
 * XREFs of PopPdcCsDeviceNotification @ 0x140997F1C
 * Callers:
 *     NtPowerInformation @ 0x140784430 (NtPowerInformation.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140B7685C (PopPdcCsCheckSystemVolumeDevice.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     PopNetUpdateCsConsumptionFlags @ 0x14085B520 (PopNetUpdateCsConsumptionFlags.c)
 *     PopNetCompliantNicUpdate @ 0x140996784 (PopNetCompliantNicUpdate.c)
 *     PopNetNonCompliantDeviceUpdate @ 0x140996944 (PopNetNonCompliantDeviceUpdate.c)
 *     PopPdcUpdateDeviceCompliance @ 0x140998234 (PopPdcUpdateDeviceCompliance.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

/*
 * Hex-Rays decompilation failed for PopPdcCsDeviceNotification @ 0x140997F1C
 * Reason: Hex-Rays returned no pseudocode for 0x140997F1C
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140997F1C: mov     [rsp+arg_0], rbx
 * 0000000140997F21: mov     [rsp+arg_8], rbp
 * 0000000140997F26: mov     [rsp+arg_10], rsi
 * 0000000140997F2B: push    rdi
 * 0000000140997F2C: sub     rsp, 20h
 * 0000000140997F30: xor     edi, edi
 * 0000000140997F32: mov     rsi, rcx
 * 0000000140997F35: cmp     cs:PopPlatformAoAc, dil
 * 0000000140997F3C: jz      loc_1409980DF
 * 0000000140997F42: cmp     dword ptr [rcx+8], 4
 * 0000000140997F46: ja      loc_1409980DA
 * 0000000140997F4C: mov     rax, gs:188h
 * 0000000140997F55: lea     rcx, PopPdcDeviceListLock; BugCheckParameter2
 * 0000000140997F5C: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 0000000140997F60: xor     edx, edx; BugCheckParameter1
 * 0000000140997F62: add     [rax+1E4h], bx
 * 0000000140997F69: nop
 * 0000000140997F6A: call    ExAcquirePushLockExclusiveEx
 * 0000000140997F6F: mov     rcx, cs:PopPdcDeviceList
 * 0000000140997F76: lea     rbp, PopPdcDeviceList
 * 0000000140997F7D: mov     r8d, edi
 * 0000000140997F80: mov     al, dil
 * 0000000140997F83: cmp     rcx, rbp
 * 0000000140997F86: jz      short loc_140997FA0
 * 0000000140997F88: mov     rdx, [rsi]
 * 0000000140997F8B: mov     r8, rcx
 * 0000000140997F8E: cmp     [rcx+10h], rdx
 * 0000000140997F92: jz      short loc_140997F9E
 * 0000000140997F94: mov     rcx, [rcx]
 * 0000000140997F97: cmp     rcx, rbp
 * 0000000140997F9A: jnz     short loc_140997F8B
 * 0000000140997F9C: jmp     short loc_140997FA0
 * 0000000140997F9E: mov     al, 1
 * 0000000140997FA0: cmp     [rsi+0Ch], dil
 * 0000000140997FA4: jz      short loc_140998017
 * 0000000140997FA6: test    al, al
 * 0000000140997FA8: jnz     short loc_14099800E
 * 0000000140997FAA: mov     edx, 28h ; '('
 * 0000000140997FAF: mov     ecx, 100h
 * 0000000140997FB4: mov     r8d, 6F435343h
 * 0000000140997FBA: call    ExAllocatePool2
 * 0000000140997FBF: mov     rcx, rax
 * 0000000140997FC2: test    rax, rax
 * 0000000140997FC5: jz      short loc_140998004
 * 0000000140997FC7: mov     rax, [rsi]
 * 0000000140997FCA: mov     [rcx+10h], rax
 * 0000000140997FCE: mov     eax, [rsi+8]
 * 0000000140997FD1: mov     [rcx+18h], eax
 * 0000000140997FD4: mov     al, [rsi+0Dh]
 * 0000000140997FD7: mov     [rcx+20h], al
 * 0000000140997FDA: mov     dword ptr [rcx+1Ch], 1
 * 0000000140997FE1: mov     rax, cs:off_140C091F0
 * 0000000140997FE8: cmp     [rax], rbp
 * 0000000140997FEB: jnz     loc_14099809E
 * 0000000140997FF1: mov     [rcx], rbp
 * 0000000140997FF4: mov     [rcx+8], rax
 * 0000000140997FF8: mov     [rax], rcx
 * 0000000140997FFB: mov     cs:off_140C091F0, rcx
 * 0000000140998002: jmp     short loc_140998051
 * 0000000140998004: mov     edi, 0C0000017h
 * 0000000140998009: jmp     loc_1409980AA
 * 000000014099800E: inc     dword ptr [r8+1Ch]
 * 0000000140998012: jmp     loc_1409980AA
 * 0000000140998017: test    al, al
 * 0000000140998019: jz      loc_1409980A5
 * 000000014099801F: add     [r8+1Ch], ebx
 * 0000000140998023: mov     eax, [r8+1Ch]
 * 0000000140998027: test    eax, eax
 * 0000000140998029: jg      short loc_1409980AA
 * 000000014099802B: mov     rdx, [rcx]
 * 000000014099802E: cmp     [rdx+8], rcx
 * 0000000140998032: jnz     short loc_14099809E
 * 0000000140998034: mov     rax, [rcx+8]
 * 0000000140998038: cmp     [rax], rcx
 * 000000014099803B: jnz     short loc_14099809E
 * 000000014099803D: mov     [rax], rdx
 * 0000000140998040: mov     rcx, r8; P
 * 0000000140998043: mov     [rdx+8], rax
 * 0000000140998047: mov     edx, 6F435343h; Tag
 * 000000014099804C: call    ExFreePoolWithTag
 * 0000000140998051: call    PopPdcUpdateDeviceCompliance
 * 0000000140998056: call    PopAcquirePolicyLock
 * 000000014099805B: movsxd  rdx, dword ptr [rsi+8]
 * 000000014099805F: lea     eax, [rdx-1]
 * 0000000140998062: test    eax, 0FFFFFFFCh
 * 0000000140998067: jnz     short loc_140998083
 * 0000000140998069: cmp     edx, 3
 * 000000014099806C: jz      short loc_140998083
 * 000000014099806E: cmp     [rsi+0Dh], dil
 * 0000000140998072: jz      short loc_14099807C
 * 0000000140998074: mov     cl, [rsi+0Ch]
 * 0000000140998077: call    PopNetCompliantNicUpdate
 * 000000014099807C: call    PopNetUpdateCsConsumptionFlags
 * 0000000140998081: jmp     short loc_140998097
 * 0000000140998083: lea     rcx, PopCsDeviceCompliance
 * 000000014099808A: cmp     [rcx+rdx*4], ebx
 * 000000014099808D: jnz     short loc_140998097
 * 000000014099808F: mov     cl, [rsi+0Ch]
 * 0000000140998092: call    PopNetNonCompliantDeviceUpdate
 * 0000000140998097: call    PopReleasePolicyLock
 * 000000014099809C: jmp     short loc_1409980AA
 * 000000014099809E: mov     ecx, 3
 * 00000001409980A3: int     29h; Win8: RtlFailFast(ecx)
 * 00000001409980A5: mov     edi, 0C000000Dh
 * 00000001409980AA: lock xadd cs:PopPdcDeviceListLock, rbx
 * 00000001409980B3: and     bl, 6
 * 00000001409980B6: cmp     bl, 2
 * 00000001409980B9: jnz     short loc_1409980C7
 * 00000001409980BB: lea     rcx, PopPdcDeviceListLock
 * 00000001409980C2: call    ExfTryToWakePushLock
 * 00000001409980C7: lea     rcx, PopPdcDeviceListLock; BugCheckParameter2
 * 00000001409980CE: call    KeAbPostRelease
 * 00000001409980D3: call    KeLeaveCriticalRegion
 * 00000001409980D8: jmp     short loc_1409980DF
 * 00000001409980DA: mov     edi, 0C000000Dh
 * 00000001409980DF: mov     rbx, [rsp+28h+arg_0]
 * 00000001409980E4: mov     eax, edi
 * 00000001409980E6: mov     rbp, [rsp+28h+arg_8]
 * 00000001409980EB: mov     rsi, [rsp+28h+arg_10]
 * 00000001409980F0: add     rsp, 20h
 * 00000001409980F4: pop     rdi
 * 00000001409980F5: retn
 */
