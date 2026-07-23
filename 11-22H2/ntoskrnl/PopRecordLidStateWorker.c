/*
 * XREFs of PopRecordLidStateWorker @ 0x1409812D0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x14032D1F4 (PopBsdHandleRequest.c)
 *     PopOkayToQueueNextWorkItem @ 0x14032ED60 (PopOkayToQueueNextWorkItem.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopRecordLidStateWorker @ 0x1409812D0
 * Reason: Hex-Rays returned no pseudocode for 0x1409812D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001409812D0: push    rbx
 * 00000001409812D2: sub     rsp, 20h
 * 00000001409812D6: lea     rcx, PopRecordLidStateWorkItem
 * 00000001409812DD: call    PopOkayToQueueNextWorkItem
 * 00000001409812E2: cmp     cs:PopErrataReportingIncorrectLidState, 0
 * 00000001409812E9: jnz     short loc_140981340
 * 00000001409812EB: call    PopAcquirePolicyLock
 * 00000001409812F0: mov     al, cs:PopLidOpened
 * 00000001409812F6: neg     al
 * 00000001409812F8: sbb     bl, bl
 * 00000001409812FA: and     bl, 40h
 * 00000001409812FD: call    PopReleasePolicyLock
 * 0000000140981302: lea     rcx, PopBsdUpdateLock
 * 0000000140981309: call    PopAcquireRwLockExclusive
 * 000000014098130E: mov     al, byte ptr cs:PopBsdPowerTransition+0Bh
 * 0000000140981314: mov     ecx, 1
 * 0000000140981319: and     al, 3Fh
 * 000000014098131B: or      al, bl
 * 000000014098131D: movzx   edx, al
 * 0000000140981320: mov     byte ptr cs:PopBsdPowerTransition+0Bh, dl
 * 0000000140981326: shr     edx, 6
 * 0000000140981329: mov     cs:dword_140C3A06C, edx
 * 000000014098132F: call    PopBsdHandleRequest
 * 0000000140981334: lea     rcx, PopBsdUpdateLock
 * 000000014098133B: call    PopReleaseRwLock
 * 0000000140981340: add     rsp, 20h
 * 0000000140981344: pop     rbx
 * 0000000140981345: retn
 */
