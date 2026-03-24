/*
 * XREFs of WPP_RECORDER_SF_qq @ 0x1C001A2FC
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0008BE0 (Interrupter_DeferredWorkProcessor.c)
 *     Controller_StopTimeTrackingForHandle @ 0x1C0034944 (Controller_StopTimeTrackingForHandle.c)
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C0035660 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0036270 (Controller_UcxEvtStopTrackingForTimeSync.c)
 *     Interrupter_WdfEvtCleanupCallback @ 0x1C003E2A0 (Interrupter_WdfEvtCleanupCallback.c)
 *     Controller_WdfEvtDeviceFilterRemoveResourceRequirements @ 0x1C006EAF0 (Controller_WdfEvtDeviceFilterRemoveResourceRequirements.c)
 *     RootHub_Create @ 0x1C006F738 (RootHub_Create.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qq @ 0x1C001A2FC
 * Reason: Hex-Rays returned no pseudocode for 0x1C001A2FC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C001A2FC: mov     [rsp+arg_0], rbx
 * 00000001C001A301: mov     [rsp+arg_8], rbp
 * 00000001C001A306: mov     [rsp+arg_10], rsi
 * 00000001C001A30B: push    rdi
 * 00000001C001A30C: push    r14
 * 00000001C001A30E: push    r15
 * 00000001C001A310: sub     rsp, 50h
 * 00000001C001A314: mov     r14d, r8d
 * 00000001C001A317: mov     r15, rcx
 * 00000001C001A31A: mov     edi, r8d
 * 00000001C001A31D: shr     rdi, 10h
 * 00000001C001A321: movzx   esi, dl
 * 00000001C001A324: lea     ebx, [r14-1]
 * 00000001C001A328: movzx   ebp, r9w
 * 00000001C001A32C: mov     r10d, ebx
 * 00000001C001A32F: and     ebx, 1Fh
 * 00000001C001A332: shr     r10, 5
 * 00000001C001A336: lea     rax, [rdi+rdi*4]
 * 00000001C001A33A: and     r10d, 7FFh
 * 00000001C001A341: mov     edx, ebx
 * 00000001C001A343: mov     ebx, 8
 * 00000001C001A348: lea     r11, [r10+rax*4]
 * 00000001C001A34C: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C001A353: mov     eax, [r10+r11*4+2Ch]
 * 00000001C001A358: bt      eax, edx
 * 00000001C001A35B: jb      loc_1C0026C84
 * 00000001C001A361: and     [rsp+68h+var_20], 0
 * 00000001C001A367: lea     rax, [rsp+68h+arg_30]
 * 00000001C001A36F: mov     r9, [rsp+68h+arg_20]
 * 00000001C001A377: mov     r8d, r14d
 * 00000001C001A37A: mov     [rsp+68h+var_28], rbx
 * 00000001C001A37F: mov     edx, esi
 * 00000001C001A381: mov     [rsp+68h+var_30], rax
 * 00000001C001A386: mov     rcx, r15
 * 00000001C001A389: lea     rax, [rsp+68h+arg_28]
 * 00000001C001A391: mov     [rsp+68h+var_38], rbx
 * 00000001C001A396: mov     [rsp+68h+var_40], rax
 * 00000001C001A39B: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C001A3A0: call    cs:__imp_WppAutoLogTrace
 * 00000001C001A3A7: nop     dword ptr [rax+rax+00h]
 * 00000001C001A3AC: lea     r11, [rsp+68h+var_18]
 * 00000001C001A3B1: mov     rbx, [r11+20h]
 * 00000001C001A3B5: mov     rbp, [r11+28h]
 * 00000001C001A3B9: mov     rsi, [r11+30h]
 * 00000001C001A3BD: mov     rsp, r11
 * 00000001C001A3C0: pop     r15
 * 00000001C001A3C2: pop     r14
 * 00000001C001A3C4: pop     rdi
 * 00000001C001A3C5: retn
 * 00000001C0026C84: lea     rcx, [rdi+rdi*4]
 * 00000001C0026C88: add     rcx, rcx
 * 00000001C0026C8B: cmp     [r10+rcx*8+29h], sil
 * 00000001C0026C90: jb      loc_1C001A361
 * 00000001C0026C96: and     [rsp+68h+var_28], 0
 * 00000001C0026C9C: lea     rdx, [rsp+68h+arg_30]
 * 00000001C0026CA4: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0026CAB: mov     r9d, ebp
 * 00000001C0026CAE: mov     r8, [rsp+68h+arg_20]
 * 00000001C0026CB6: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0026CBB: mov     [rsp+68h+var_30], rbx
 * 00000001C0026CC0: mov     [rsp+68h+var_38], rdx
 * 00000001C0026CC5: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0026CCD: mov     [rsp+68h+var_40], rbx
 * 00000001C0026CD2: mov     [rsp+68h+var_48], rdx
 * 00000001C0026CD7: mov     edx, 2Bh ; '+'
 * 00000001C0026CDC: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0026CE2: nop
 * 00000001C0026CE3: jmp     loc_1C001A361
 */
