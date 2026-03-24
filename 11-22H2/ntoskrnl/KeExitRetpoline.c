/*
 * XREFs of KeExitRetpoline @ 0x14034BADC
 * Callers:
 *     KiLockServiceTable @ 0x14034B8D0 (KiLockServiceTable.c)
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x140381E90 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     CcBcbProfiler @ 0x1403E2CE0 (CcBcbProfiler.c)
 *     sub_1403E3F10 @ 0x1403E3F10 (sub_1403E3F10.c)
 *     KiSwInterruptDispatch @ 0x1403E3F70 (KiSwInterruptDispatch.c)
 *     sub_1403E4EF0 @ 0x1403E4EF0 (sub_1403E4EF0.c)
 *     sub_1403F1260 @ 0x1403F1260 (sub_1403F1260.c)
 *     RtlpComputeEpilogueOffset @ 0x1403F2BC8 (RtlpComputeEpilogueOffset.c)
 *     sub_14066CB80 @ 0x14066CB80 (sub_14066CB80.c)
 *     FsRtlTruncateSmallMcb @ 0x14066D000 (FsRtlTruncateSmallMcb.c)
 *     KiDispatchCallout @ 0x14066D490 (KiDispatchCallout.c)
 *     sub_14067E010 @ 0x14067E010 (sub_14067E010.c)
 *     KeUserModeCallback @ 0x14076ED90 (KeUserModeCallback.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     __guard_retpoline_exit @ 0x140AFA580 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for KeExitRetpoline @ 0x14034BADC
 * Reason: Hex-Rays returned no pseudocode for 0x14034BADC
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014034BADC: mov     [rsp+arg_0], rbx
 * 000000014034BAE1: pushfq
 * 000000014034BAE3: sub     rsp, 20h
 * 000000014034BAE7: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014034BAEE: bt      rax, 29h ; ')'
 * 000000014034BAF3: jb      loc_140456C18
 * 000000014034BAF9: lfence
 * 000000014034BAFC: mov     rbx, [rsp+28h+arg_0]
 * 000000014034BB01: add     rsp, 20h
 * 000000014034BB05: pop     rcx
 * 000000014034BB06: retn
 * 0000000140456C18: mov     ebx, [rsp+28h+var_8]
 * 0000000140456C1C: cli
 * 0000000140456C1D: mov     rax, gs:20h
 * 0000000140456C26: mov     rcx, [rax+88B8h]
 * 0000000140456C2D: test    rcx, rcx
 * 0000000140456C30: jz      short loc_140456C39
 * 0000000140456C32: lock or dword ptr [rcx], 200000h
 * 0000000140456C39: mov     rax, gs:20h
 * 0000000140456C42: shr     ebx, 9
 * 0000000140456C45: and     bl, 1
 * 0000000140456C48: or      byte ptr [rax+6D6h], 1
 * 0000000140456C4F: test    byte ptr [rax+6D6h], 2
 * 0000000140456C56: jnz     short loc_140456C5D
 * 0000000140456C58: call    __guard_retpoline_exit
 * 0000000140456C5D: test    bl, bl
 * 0000000140456C5F: jz      loc_14034BAF9
 * 0000000140456C65: mov     rcx, gs:20h
 * 0000000140456C6E: mov     r8, [rcx+88B8h]
 * 0000000140456C75: test    r8, r8
 * 0000000140456C78: jz      short loc_140456C99
 * 0000000140456C7A: prefetchw byte ptr [r8]
 * 0000000140456C7E: mov     eax, [r8]
 * 0000000140456C81: mov     edx, eax
 * 0000000140456C83: btr     edx, 15h
 * 0000000140456C87: lock cmpxchg [r8], edx
 * 0000000140456C8C: jnz     short loc_140456C81
 * 0000000140456C8E: bt      eax, 15h
 * 0000000140456C92: jnb     short loc_140456C99
 * 0000000140456C94: call    KiRemoveSystemWorkPriorityKick
 * 0000000140456C99: sti
 * 0000000140456C9A: jmp     loc_14034BAF9
 */
