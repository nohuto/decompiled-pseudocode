/*
 * XREFs of WPP_RECORDER_SF_DDi @ 0x1C0041F7C
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0001EC0 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_Stage_Find @ 0x1C0002870 (Isoch_Stage_Find.c)
 *     Isoch_RetrieveNextStage @ 0x1C0003800 (Isoch_RetrieveNextStage.c)
 *     Isoch_TransferData_Initialize @ 0x1C0004970 (Isoch_TransferData_Initialize.c)
 *     Control_Transfer_ValidateBuffer @ 0x1C00072F0 (Control_Transfer_ValidateBuffer.c)
 *     TR_ValidateSecureTransferType @ 0x1C00124A8 (TR_ValidateSecureTransferType.c)
 *     Control_ValidateED0TrbPointerOnMismatch @ 0x1C0042BA4 (Control_ValidateED0TrbPointerOnMismatch.c)
 *     Control_WdfEvtIoCanceledOnQueue @ 0x1C0042E70 (Control_WdfEvtIoCanceledOnQueue.c)
 *     Control_WdfEvtRequestCancel @ 0x1C0043020 (Control_WdfEvtRequestCancel.c)
 *     Control_WdfEvtTimerForTransferTimeout @ 0x1C00431B0 (Control_WdfEvtTimerForTransferTimeout.c)
 *     Isoch_WdfEvtRequestCancel @ 0x1C0045B90 (Isoch_WdfEvtRequestCancel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDi @ 0x1C0041F7C
 * Reason: Hex-Rays returned no pseudocode for 0x1C0041F7C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0041F7C: mov     r11, rsp
 * 00000001C0041F7F: mov     [r11+8], rbx
 * 00000001C0041F83: mov     [r11+10h], rbp
 * 00000001C0041F87: mov     [r11+18h], rsi
 * 00000001C0041F8B: push    rdi
 * 00000001C0041F8C: sub     rsp, 60h
 * 00000001C0041F90: mov     rsi, rcx
 * 00000001C0041F93: movzx   edi, r9w
 * 00000001C0041F97: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0041F9E: mov     ebp, 4
 * 00000001C0041FA3: movzx   ebx, dl
 * 00000001C0041FA6: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0041FAD: jz      short loc_1C0042000
 * 00000001C0041FAF: cmp     [rcx+29h], bl
 * 00000001C0041FB2: jb      short loc_1C0042000
 * 00000001C0041FB4: and     qword ptr [r11-18h], 0
 * 00000001C0041FB9: lea     rdx, [r11+40h]
 * 00000001C0041FBD: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0041FC4: mov     r9d, edi
 * 00000001C0041FC7: mov     r8, [rsp+68h+arg_20]
 * 00000001C0041FCF: mov     rcx, [rcx+18h]
 * 00000001C0041FD3: mov     qword ptr [r11-20h], 8
 * 00000001C0041FDB: mov     [r11-28h], rdx
 * 00000001C0041FDF: lea     rdx, [r11+38h]
 * 00000001C0041FE3: mov     [r11-30h], rbp
 * 00000001C0041FE7: mov     [r11-38h], rdx
 * 00000001C0041FEB: lea     rdx, [r11+30h]
 * 00000001C0041FEF: mov     [r11-40h], rbp
 * 00000001C0041FF3: mov     [r11-48h], rdx
 * 00000001C0041FF7: lea     edx, [rbp+27h]
 * 00000001C0041FFA: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0042000: and     [rsp+68h+var_10], 0
 * 00000001C0042006: lea     rax, [rsp+68h+arg_38]
 * 00000001C004200E: mov     r9, [rsp+68h+arg_20]
 * 00000001C0042016: mov     r8d, 0Eh
 * 00000001C004201C: mov     [rsp+68h+var_18], 8
 * 00000001C0042025: mov     edx, ebx
 * 00000001C0042027: mov     [rsp+68h+var_20], rax
 * 00000001C004202C: mov     rcx, rsi
 * 00000001C004202F: mov     [rsp+68h+var_28], rbp
 * 00000001C0042034: lea     rax, [rsp+68h+arg_30]
 * 00000001C004203C: mov     [rsp+68h+var_30], rax
 * 00000001C0042041: lea     rax, [rsp+68h+arg_28]
 * 00000001C0042049: mov     [rsp+68h+var_38], rbp
 * 00000001C004204E: mov     [rsp+68h+var_40], rax
 * 00000001C0042053: mov     [rsp+68h+var_48], di
 * 00000001C0042058: call    cs:__imp_WppAutoLogTrace
 * 00000001C004205F: nop     dword ptr [rax+rax+00h]
 * 00000001C0042064: lea     r11, [rsp+68h+var_8]
 * 00000001C0042069: mov     rbx, [r11+10h]
 * 00000001C004206D: mov     rbp, [r11+18h]
 * 00000001C0042071: mov     rsi, [r11+20h]
 * 00000001C0042075: mov     rsp, r11
 * 00000001C0042078: pop     rdi
 * 00000001C0042079: retn
 */
