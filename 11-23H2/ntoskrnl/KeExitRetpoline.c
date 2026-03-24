/*
 * XREFs of KeExitRetpoline @ 0x14034C0DC
 * Callers:
 *     KiLockServiceTable @ 0x14034BED0 (KiLockServiceTable.c)
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x140381840 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     CcBcbProfiler @ 0x1403E3340 (CcBcbProfiler.c)
 *     sub_1403E4570 @ 0x1403E4570 (sub_1403E4570.c)
 *     KiSwInterruptDispatch @ 0x1403E45D0 (KiSwInterruptDispatch.c)
 *     sub_1403E5550 @ 0x1403E5550 (sub_1403E5550.c)
 *     sub_1403F18C0 @ 0x1403F18C0 (sub_1403F18C0.c)
 *     RtlpComputeEpilogueOffset @ 0x1403F3228 (RtlpComputeEpilogueOffset.c)
 *     sub_14066CB10 @ 0x14066CB10 (sub_14066CB10.c)
 *     FsRtlTruncateSmallMcb @ 0x14066CF90 (FsRtlTruncateSmallMcb.c)
 *     KiDispatchCallout @ 0x14066D420 (KiDispatchCallout.c)
 *     sub_14067E010 @ 0x14067E010 (sub_14067E010.c)
 *     KeUserModeCallback @ 0x14076E880 (KeUserModeCallback.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 *     __guard_retpoline_exit @ 0x140AF9580 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for KeExitRetpoline @ 0x14034C0DC
 * Reason: Hex-Rays returned no pseudocode for 0x14034C0DC
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014034C0DC: mov     [rsp+arg_0], rbx
 * 000000014034C0E1: pushfq
 * 000000014034C0E3: sub     rsp, 20h
 * 000000014034C0E7: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014034C0EE: bt      rax, 29h ; ')'
 * 000000014034C0F3: jb      loc_14045727E
 * 000000014034C0F9: lfence
 * 000000014034C0FC: mov     rbx, [rsp+28h+arg_0]
 * 000000014034C101: add     rsp, 20h
 * 000000014034C105: pop     rcx
 * 000000014034C106: retn
 * 000000014045727E: mov     ebx, [rsp+28h+var_8]
 * 0000000140457282: cli
 * 0000000140457283: mov     rax, gs:20h
 * 000000014045728C: mov     rcx, [rax+88B8h]
 * 0000000140457293: test    rcx, rcx
 * 0000000140457296: jz      short loc_14045729F
 * 0000000140457298: lock or dword ptr [rcx], 200000h
 * 000000014045729F: mov     rax, gs:20h
 * 00000001404572A8: shr     ebx, 9
 * 00000001404572AB: and     bl, 1
 * 00000001404572AE: or      byte ptr [rax+6D6h], 1
 * 00000001404572B5: test    byte ptr [rax+6D6h], 2
 * 00000001404572BC: jnz     short loc_1404572C3
 * 00000001404572BE: call    __guard_retpoline_exit
 * 00000001404572C3: test    bl, bl
 * 00000001404572C5: jz      loc_14034C0F9
 * 00000001404572CB: mov     rcx, gs:20h
 * 00000001404572D4: mov     r8, [rcx+88B8h]
 * 00000001404572DB: test    r8, r8
 * 00000001404572DE: jz      short loc_1404572FF
 * 00000001404572E0: prefetchw byte ptr [r8]
 * 00000001404572E4: mov     eax, [r8]
 * 00000001404572E7: mov     edx, eax
 * 00000001404572E9: btr     edx, 15h
 * 00000001404572ED: lock cmpxchg [r8], edx
 * 00000001404572F2: jnz     short loc_1404572E7
 * 00000001404572F4: bt      eax, 15h
 * 00000001404572F8: jnb     short loc_1404572FF
 * 00000001404572FA: call    KiRemoveSystemWorkPriorityKick
 * 00000001404572FF: sti
 * 0000000140457300: jmp     loc_14034C0F9
 */
