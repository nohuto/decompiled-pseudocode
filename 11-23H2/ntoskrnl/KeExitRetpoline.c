/*
 * XREFs of KeExitRetpoline @ 0x14034C27C
 * Callers:
 *     KiLockServiceTable @ 0x14034C070 (KiLockServiceTable.c)
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1403819E0 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     CcBcbProfiler @ 0x1403E3520 (CcBcbProfiler.c)
 *     sub_1403E4750 @ 0x1403E4750 (sub_1403E4750.c)
 *     KiSwInterruptDispatch @ 0x1403E47B0 (KiSwInterruptDispatch.c)
 *     sub_1403E5730 @ 0x1403E5730 (sub_1403E5730.c)
 *     sub_1403F1AA0 @ 0x1403F1AA0 (sub_1403F1AA0.c)
 *     RtlpComputeEpilogueOffset @ 0x1403F3408 (RtlpComputeEpilogueOffset.c)
 *     sub_14066D060 @ 0x14066D060 (sub_14066D060.c)
 *     FsRtlTruncateSmallMcb @ 0x14066D4E0 (FsRtlTruncateSmallMcb.c)
 *     KiDispatchCallout @ 0x14066D970 (KiDispatchCallout.c)
 *     sub_14067E010 @ 0x14067E010 (sub_14067E010.c)
 *     KeUserModeCallback @ 0x14076EA70 (KeUserModeCallback.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     __guard_retpoline_exit @ 0x140AF9580 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for KeExitRetpoline @ 0x14034C27C
 * Reason: Hex-Rays returned no pseudocode for 0x14034C27C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014034C27C: mov     [rsp+arg_0], rbx
 * 000000014034C281: pushfq
 * 000000014034C283: sub     rsp, 20h
 * 000000014034C287: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014034C28E: bt      rax, 29h ; ')'
 * 000000014034C293: jb      loc_14045767E
 * 000000014034C299: lfence
 * 000000014034C29C: mov     rbx, [rsp+28h+arg_0]
 * 000000014034C2A1: add     rsp, 20h
 * 000000014034C2A5: pop     rcx
 * 000000014034C2A6: retn
 * 000000014045767E: mov     ebx, [rsp+28h+var_8]
 * 0000000140457682: cli
 * 0000000140457683: mov     rax, gs:20h
 * 000000014045768C: mov     rcx, [rax+88B8h]
 * 0000000140457693: test    rcx, rcx
 * 0000000140457696: jz      short loc_14045769F
 * 0000000140457698: lock or dword ptr [rcx], 200000h
 * 000000014045769F: mov     rax, gs:20h
 * 00000001404576A8: shr     ebx, 9
 * 00000001404576AB: and     bl, 1
 * 00000001404576AE: or      byte ptr [rax+6D6h], 1
 * 00000001404576B5: test    byte ptr [rax+6D6h], 2
 * 00000001404576BC: jnz     short loc_1404576C3
 * 00000001404576BE: call    __guard_retpoline_exit
 * 00000001404576C3: test    bl, bl
 * 00000001404576C5: jz      loc_14034C299
 * 00000001404576CB: mov     rcx, gs:20h
 * 00000001404576D4: mov     r8, [rcx+88B8h]
 * 00000001404576DB: test    r8, r8
 * 00000001404576DE: jz      short loc_1404576FF
 * 00000001404576E0: prefetchw byte ptr [r8]
 * 00000001404576E4: mov     eax, [r8]
 * 00000001404576E7: mov     edx, eax
 * 00000001404576E9: btr     edx, 15h
 * 00000001404576ED: lock cmpxchg [r8], edx
 * 00000001404576F2: jnz     short loc_1404576E7
 * 00000001404576F4: bt      eax, 15h
 * 00000001404576F8: jnb     short loc_1404576FF
 * 00000001404576FA: call    KiRemoveSystemWorkPriorityKick
 * 00000001404576FF: sti
 * 0000000140457700: jmp     loc_14034C299
 */
