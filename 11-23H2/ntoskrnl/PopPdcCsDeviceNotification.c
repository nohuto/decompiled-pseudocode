/*
 * XREFs of PopPdcCsDeviceNotification @ 0x14099806C
 * Callers:
 *     NtPowerInformation @ 0x140784110 (NtPowerInformation.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140B758B0 (PopPdcCsCheckSystemVolumeDevice.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     PopNetUpdateCsConsumptionFlags @ 0x14085AF90 (PopNetUpdateCsConsumptionFlags.c)
 *     PopNetCompliantNicUpdate @ 0x1409968D4 (PopNetCompliantNicUpdate.c)
 *     PopNetNonCompliantDeviceUpdate @ 0x140996A94 (PopNetNonCompliantDeviceUpdate.c)
 *     PopPdcUpdateDeviceCompliance @ 0x140998384 (PopPdcUpdateDeviceCompliance.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

/*
 * Hex-Rays decompilation failed for PopPdcCsDeviceNotification @ 0x14099806C
 * Reason: Hex-Rays returned no pseudocode for 0x14099806C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014099806C: mov     [rsp+arg_0], rbx
 * 0000000140998071: mov     [rsp+arg_8], rbp
 * 0000000140998076: mov     [rsp+arg_10], rsi
 * 000000014099807B: push    rdi
 * 000000014099807C: sub     rsp, 20h
 * 0000000140998080: xor     edi, edi
 * 0000000140998082: mov     rsi, rcx
 * 0000000140998085: cmp     cs:PopPlatformAoAc, dil
 * 000000014099808C: jz      loc_14099822F
 * 0000000140998092: cmp     dword ptr [rcx+8], 4
 * 0000000140998096: ja      loc_14099822A
 * 000000014099809C: mov     rax, gs:188h
 * 00000001409980A5: lea     rcx, PopPdcDeviceListLock; BugCheckParameter2
 * 00000001409980AC: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001409980B0: xor     edx, edx; BugCheckParameter1
 * 00000001409980B2: add     [rax+1E4h], bx
 * 00000001409980B9: nop
 * 00000001409980BA: call    ExAcquirePushLockExclusiveEx
 * 00000001409980BF: mov     rcx, cs:PopPdcDeviceList
 * 00000001409980C6: lea     rbp, PopPdcDeviceList
 * 00000001409980CD: mov     r8d, edi
 * 00000001409980D0: mov     al, dil
 * 00000001409980D3: cmp     rcx, rbp
 * 00000001409980D6: jz      short loc_1409980F0
 * 00000001409980D8: mov     rdx, [rsi]
 * 00000001409980DB: mov     r8, rcx
 * 00000001409980DE: cmp     [rcx+10h], rdx
 * 00000001409980E2: jz      short loc_1409980EE
 * 00000001409980E4: mov     rcx, [rcx]
 * 00000001409980E7: cmp     rcx, rbp
 * 00000001409980EA: jnz     short loc_1409980DB
 * 00000001409980EC: jmp     short loc_1409980F0
 * 00000001409980EE: mov     al, 1
 * 00000001409980F0: cmp     [rsi+0Ch], dil
 * 00000001409980F4: jz      short loc_140998167
 * 00000001409980F6: test    al, al
 * 00000001409980F8: jnz     short loc_14099815E
 * 00000001409980FA: mov     edx, 28h ; '('
 * 00000001409980FF: mov     ecx, 100h
 * 0000000140998104: mov     r8d, 6F435343h
 * 000000014099810A: call    ExAllocatePool2
 * 000000014099810F: mov     rcx, rax
 * 0000000140998112: test    rax, rax
 * 0000000140998115: jz      short loc_140998154
 * 0000000140998117: mov     rax, [rsi]
 * 000000014099811A: mov     [rcx+10h], rax
 * 000000014099811E: mov     eax, [rsi+8]
 * 0000000140998121: mov     [rcx+18h], eax
 * 0000000140998124: mov     al, [rsi+0Dh]
 * 0000000140998127: mov     [rcx+20h], al
 * 000000014099812A: mov     dword ptr [rcx+1Ch], 1
 * 0000000140998131: mov     rax, cs:off_140C091F0
 * 0000000140998138: cmp     [rax], rbp
 * 000000014099813B: jnz     loc_1409981EE
 * 0000000140998141: mov     [rcx], rbp
 * 0000000140998144: mov     [rcx+8], rax
 * 0000000140998148: mov     [rax], rcx
 * 000000014099814B: mov     cs:off_140C091F0, rcx
 * 0000000140998152: jmp     short loc_1409981A1
 * 0000000140998154: mov     edi, 0C0000017h
 * 0000000140998159: jmp     loc_1409981FA
 * 000000014099815E: inc     dword ptr [r8+1Ch]
 * 0000000140998162: jmp     loc_1409981FA
 * 0000000140998167: test    al, al
 * 0000000140998169: jz      loc_1409981F5
 * 000000014099816F: add     [r8+1Ch], ebx
 * 0000000140998173: mov     eax, [r8+1Ch]
 * 0000000140998177: test    eax, eax
 * 0000000140998179: jg      short loc_1409981FA
 * 000000014099817B: mov     rdx, [rcx]
 * 000000014099817E: cmp     [rdx+8], rcx
 * 0000000140998182: jnz     short loc_1409981EE
 * 0000000140998184: mov     rax, [rcx+8]
 * 0000000140998188: cmp     [rax], rcx
 * 000000014099818B: jnz     short loc_1409981EE
 * 000000014099818D: mov     [rax], rdx
 * 0000000140998190: mov     rcx, r8; P
 * 0000000140998193: mov     [rdx+8], rax
 * 0000000140998197: mov     edx, 6F435343h; Tag
 * 000000014099819C: call    ExFreePoolWithTag
 * 00000001409981A1: call    PopPdcUpdateDeviceCompliance
 * 00000001409981A6: call    PopAcquirePolicyLock
 * 00000001409981AB: movsxd  rdx, dword ptr [rsi+8]
 * 00000001409981AF: lea     eax, [rdx-1]
 * 00000001409981B2: test    eax, 0FFFFFFFCh
 * 00000001409981B7: jnz     short loc_1409981D3
 * 00000001409981B9: cmp     edx, 3
 * 00000001409981BC: jz      short loc_1409981D3
 * 00000001409981BE: cmp     [rsi+0Dh], dil
 * 00000001409981C2: jz      short loc_1409981CC
 * 00000001409981C4: mov     cl, [rsi+0Ch]
 * 00000001409981C7: call    PopNetCompliantNicUpdate
 * 00000001409981CC: call    PopNetUpdateCsConsumptionFlags
 * 00000001409981D1: jmp     short loc_1409981E7
 * 00000001409981D3: lea     rcx, PopCsDeviceCompliance
 * 00000001409981DA: cmp     [rcx+rdx*4], ebx
 * 00000001409981DD: jnz     short loc_1409981E7
 * 00000001409981DF: mov     cl, [rsi+0Ch]
 * 00000001409981E2: call    PopNetNonCompliantDeviceUpdate
 * 00000001409981E7: call    PopReleasePolicyLock
 * 00000001409981EC: jmp     short loc_1409981FA
 * 00000001409981EE: mov     ecx, 3
 * 00000001409981F3: int     29h; Win8: RtlFailFast(ecx)
 * 00000001409981F5: mov     edi, 0C000000Dh
 * 00000001409981FA: lock xadd cs:PopPdcDeviceListLock, rbx
 * 0000000140998203: and     bl, 6
 * 0000000140998206: cmp     bl, 2
 * 0000000140998209: jnz     short loc_140998217
 * 000000014099820B: lea     rcx, PopPdcDeviceListLock
 * 0000000140998212: call    ExfTryToWakePushLock
 * 0000000140998217: lea     rcx, PopPdcDeviceListLock; BugCheckParameter2
 * 000000014099821E: call    KeAbPostRelease
 * 0000000140998223: call    KeLeaveCriticalRegion
 * 0000000140998228: jmp     short loc_14099822F
 * 000000014099822A: mov     edi, 0C000000Dh
 * 000000014099822F: mov     rbx, [rsp+28h+arg_0]
 * 0000000140998234: mov     eax, edi
 * 0000000140998236: mov     rbp, [rsp+28h+arg_8]
 * 000000014099823B: mov     rsi, [rsp+28h+arg_10]
 * 0000000140998240: add     rsp, 20h
 * 0000000140998244: pop     rdi
 * 0000000140998245: retn
 */
