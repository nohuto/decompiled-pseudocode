/*
 * XREFs of WPP_RECORDER_SF_qq @ 0x1C001A34C
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0008C10 (Interrupter_DeferredWorkProcessor.c)
 *     Controller_StopTimeTrackingForHandle @ 0x1C0034804 (Controller_StopTimeTrackingForHandle.c)
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C0035520 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0036130 (Controller_UcxEvtStopTrackingForTimeSync.c)
 *     Interrupter_WdfEvtCleanupCallback @ 0x1C003E160 (Interrupter_WdfEvtCleanupCallback.c)
 *     Controller_WdfEvtDeviceFilterRemoveResourceRequirements @ 0x1C006EB30 (Controller_WdfEvtDeviceFilterRemoveResourceRequirements.c)
 *     RootHub_Create @ 0x1C006F778 (RootHub_Create.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qq @ 0x1C001A34C
 * Reason: Hex-Rays returned no pseudocode for 0x1C001A34C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C001A34C: mov     [rsp+arg_0], rbx
 * 00000001C001A351: mov     [rsp+arg_8], rbp
 * 00000001C001A356: mov     [rsp+arg_10], rsi
 * 00000001C001A35B: push    rdi
 * 00000001C001A35C: push    r14
 * 00000001C001A35E: push    r15
 * 00000001C001A360: sub     rsp, 50h
 * 00000001C001A364: mov     r14d, r8d
 * 00000001C001A367: mov     r15, rcx
 * 00000001C001A36A: mov     edi, r8d
 * 00000001C001A36D: shr     rdi, 10h
 * 00000001C001A371: movzx   esi, dl
 * 00000001C001A374: lea     ebx, [r14-1]
 * 00000001C001A378: movzx   ebp, r9w
 * 00000001C001A37C: mov     r10d, ebx
 * 00000001C001A37F: and     ebx, 1Fh
 * 00000001C001A382: shr     r10, 5
 * 00000001C001A386: lea     rax, [rdi+rdi*4]
 * 00000001C001A38A: and     r10d, 7FFh
 * 00000001C001A391: mov     edx, ebx
 * 00000001C001A393: mov     ebx, 8
 * 00000001C001A398: lea     r11, [r10+rax*4]
 * 00000001C001A39C: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C001A3A3: mov     eax, [r10+r11*4+2Ch]
 * 00000001C001A3A8: bt      eax, edx
 * 00000001C001A3AB: jb      loc_1C0026B44
 * 00000001C001A3B1: and     [rsp+68h+var_20], 0
 * 00000001C001A3B7: lea     rax, [rsp+68h+arg_30]
 * 00000001C001A3BF: mov     r9, [rsp+68h+arg_20]
 * 00000001C001A3C7: mov     r8d, r14d
 * 00000001C001A3CA: mov     [rsp+68h+var_28], rbx
 * 00000001C001A3CF: mov     edx, esi
 * 00000001C001A3D1: mov     [rsp+68h+var_30], rax
 * 00000001C001A3D6: mov     rcx, r15
 * 00000001C001A3D9: lea     rax, [rsp+68h+arg_28]
 * 00000001C001A3E1: mov     [rsp+68h+var_38], rbx
 * 00000001C001A3E6: mov     [rsp+68h+var_40], rax
 * 00000001C001A3EB: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C001A3F0: call    cs:__imp_WppAutoLogTrace
 * 00000001C001A3F7: nop     dword ptr [rax+rax+00h]
 * 00000001C001A3FC: lea     r11, [rsp+68h+var_18]
 * 00000001C001A401: mov     rbx, [r11+20h]
 * 00000001C001A405: mov     rbp, [r11+28h]
 * 00000001C001A409: mov     rsi, [r11+30h]
 * 00000001C001A40D: mov     rsp, r11
 * 00000001C001A410: pop     r15
 * 00000001C001A412: pop     r14
 * 00000001C001A414: pop     rdi
 * 00000001C001A415: retn
 * 00000001C0026B44: lea     rcx, [rdi+rdi*4]
 * 00000001C0026B48: add     rcx, rcx
 * 00000001C0026B4B: cmp     [r10+rcx*8+29h], sil
 * 00000001C0026B50: jb      loc_1C001A3B1
 * 00000001C0026B56: and     [rsp+68h+var_28], 0
 * 00000001C0026B5C: lea     rdx, [rsp+68h+arg_30]
 * 00000001C0026B64: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0026B6B: mov     r9d, ebp
 * 00000001C0026B6E: mov     r8, [rsp+68h+arg_20]
 * 00000001C0026B76: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0026B7B: mov     [rsp+68h+var_30], rbx
 * 00000001C0026B80: mov     [rsp+68h+var_38], rdx
 * 00000001C0026B85: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0026B8D: mov     [rsp+68h+var_40], rbx
 * 00000001C0026B92: mov     [rsp+68h+var_48], rdx
 * 00000001C0026B97: mov     edx, 2Bh ; '+'
 * 00000001C0026B9C: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0026BA2: nop
 * 00000001C0026BA3: jmp     loc_1C001A3B1
 */
