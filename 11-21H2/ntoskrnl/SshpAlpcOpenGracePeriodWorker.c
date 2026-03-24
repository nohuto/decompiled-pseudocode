/*
 * XREFs of SshpAlpcOpenGracePeriodWorker @ 0x14081B2F0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     SSHSupportReleasePushLockExclusive @ 0x14036C0A0 (SSHSupportReleasePushLockExclusive.c)
 *     SshpAlpcSendMessage @ 0x14081B360 (SshpAlpcSendMessage.c)
 */

/*
 * Hex-Rays decompilation failed for SshpAlpcOpenGracePeriodWorker @ 0x14081B2F0
 * Reason: Hex-Rays returned no pseudocode for 0x14081B2F0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014081B2F0: push    rbx
 * 000000014081B2F2: sub     rsp, 30h
 * 000000014081B2F6: mov     rbx, rcx
 * 000000014081B2F9: xor     edx, edx; BugCheckParameter1
 * 000000014081B2FB: lea     rcx, stru_140C1C1E8; BugCheckParameter2
 * 000000014081B302: mov     [rsp+38h+arg_0], ebx
 * 000000014081B306: call    ExAcquirePushLockExclusiveEx
 * 000000014081B30B: movsxd  rax, ebx
 * 000000014081B30E: lea     rbx, [rax+rax*2]
 * 000000014081B312: shl     rbx, 6
 * 000000014081B316: lea     rax, dword_140C1C1F8
 * 000000014081B31D: add     rbx, rax
 * 000000014081B320: cmp     byte ptr [rbx+4], 0
 * 000000014081B324: jz      short loc_14081B347
 * 000000014081B326: cmp     dword ptr [rbx], 0
 * 000000014081B329: jnz     short loc_14081B347
 * 000000014081B32B: mov     edx, 2
 * 000000014081B330: mov     [rsp+38h+var_18], 0
 * 000000014081B335: lea     r9, [rsp+38h+arg_0]
 * 000000014081B33A: lea     r8d, [rdx+2]
 * 000000014081B33E: call    SshpAlpcSendMessage
 * 000000014081B343: mov     byte ptr [rbx+4], 0
 * 000000014081B347: lea     rcx, stru_140C1C1E8; BugCheckParameter2
 * 000000014081B34E: call    SSHSupportReleasePushLockExclusive
 * 000000014081B353: add     rsp, 30h
 * 000000014081B357: pop     rbx
 * 000000014081B358: retn
 */
