/*
 * XREFs of PopRecordLidStateWorker @ 0x140981420
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x14032D618 (PopBsdHandleRequest.c)
 *     PopOkayToQueueNextWorkItem @ 0x14032F190 (PopOkayToQueueNextWorkItem.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopRecordLidStateWorker @ 0x140981420
 * Reason: Hex-Rays returned no pseudocode for 0x140981420
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140981420: push    rbx
 * 0000000140981422: sub     rsp, 20h
 * 0000000140981426: lea     rcx, PopRecordLidStateWorkItem
 * 000000014098142D: call    PopOkayToQueueNextWorkItem
 * 0000000140981432: cmp     cs:PopErrataReportingIncorrectLidState, 0
 * 0000000140981439: jnz     short loc_140981490
 * 000000014098143B: call    PopAcquirePolicyLock
 * 0000000140981440: mov     al, cs:PopLidOpened
 * 0000000140981446: neg     al
 * 0000000140981448: sbb     bl, bl
 * 000000014098144A: and     bl, 40h
 * 000000014098144D: call    PopReleasePolicyLock
 * 0000000140981452: lea     rcx, PopBsdUpdateLock
 * 0000000140981459: call    PopAcquireRwLockExclusive
 * 000000014098145E: mov     al, byte ptr cs:PopBsdPowerTransition+0Bh
 * 0000000140981464: mov     ecx, 1
 * 0000000140981469: and     al, 3Fh
 * 000000014098146B: or      al, bl
 * 000000014098146D: movzx   edx, al
 * 0000000140981470: mov     byte ptr cs:PopBsdPowerTransition+0Bh, dl
 * 0000000140981476: shr     edx, 6
 * 0000000140981479: mov     cs:dword_140C3A00C, edx
 * 000000014098147F: call    PopBsdHandleRequest
 * 0000000140981484: lea     rcx, PopBsdUpdateLock
 * 000000014098148B: call    PopReleaseRwLock
 * 0000000140981490: add     rsp, 20h
 * 0000000140981494: pop     rbx
 * 0000000140981495: retn
 */
