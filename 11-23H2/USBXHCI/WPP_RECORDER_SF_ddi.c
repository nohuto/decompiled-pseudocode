/*
 * XREFs of WPP_RECORDER_SF_DDi @ 0x1C00420BC
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0001EC0 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_Stage_Find @ 0x1C0002870 (Isoch_Stage_Find.c)
 *     Isoch_RetrieveNextStage @ 0x1C0003800 (Isoch_RetrieveNextStage.c)
 *     Isoch_TransferData_Initialize @ 0x1C0004940 (Isoch_TransferData_Initialize.c)
 *     Control_Transfer_ValidateBuffer @ 0x1C00072C0 (Control_Transfer_ValidateBuffer.c)
 *     TR_ValidateSecureTransferType @ 0x1C0012478 (TR_ValidateSecureTransferType.c)
 *     Control_ValidateED0TrbPointerOnMismatch @ 0x1C0042CE4 (Control_ValidateED0TrbPointerOnMismatch.c)
 *     Control_WdfEvtIoCanceledOnQueue @ 0x1C0042FB0 (Control_WdfEvtIoCanceledOnQueue.c)
 *     Control_WdfEvtRequestCancel @ 0x1C0043160 (Control_WdfEvtRequestCancel.c)
 *     Control_WdfEvtTimerForTransferTimeout @ 0x1C00432F0 (Control_WdfEvtTimerForTransferTimeout.c)
 *     Isoch_WdfEvtRequestCancel @ 0x1C0045CD0 (Isoch_WdfEvtRequestCancel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDi @ 0x1C00420BC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00420BC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00420BC: mov     r11, rsp
 * 00000001C00420BF: mov     [r11+8], rbx
 * 00000001C00420C3: mov     [r11+10h], rbp
 * 00000001C00420C7: mov     [r11+18h], rsi
 * 00000001C00420CB: push    rdi
 * 00000001C00420CC: sub     rsp, 60h
 * 00000001C00420D0: mov     rsi, rcx
 * 00000001C00420D3: movzx   edi, r9w
 * 00000001C00420D7: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00420DE: mov     ebp, 4
 * 00000001C00420E3: movzx   ebx, dl
 * 00000001C00420E6: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C00420ED: jz      short loc_1C0042140
 * 00000001C00420EF: cmp     [rcx+29h], bl
 * 00000001C00420F2: jb      short loc_1C0042140
 * 00000001C00420F4: and     qword ptr [r11-18h], 0
 * 00000001C00420F9: lea     rdx, [r11+40h]
 * 00000001C00420FD: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0042104: mov     r9d, edi
 * 00000001C0042107: mov     r8, [rsp+68h+arg_20]
 * 00000001C004210F: mov     rcx, [rcx+18h]
 * 00000001C0042113: mov     qword ptr [r11-20h], 8
 * 00000001C004211B: mov     [r11-28h], rdx
 * 00000001C004211F: lea     rdx, [r11+38h]
 * 00000001C0042123: mov     [r11-30h], rbp
 * 00000001C0042127: mov     [r11-38h], rdx
 * 00000001C004212B: lea     rdx, [r11+30h]
 * 00000001C004212F: mov     [r11-40h], rbp
 * 00000001C0042133: mov     [r11-48h], rdx
 * 00000001C0042137: lea     edx, [rbp+27h]
 * 00000001C004213A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0042140: and     [rsp+68h+var_10], 0
 * 00000001C0042146: lea     rax, [rsp+68h+arg_38]
 * 00000001C004214E: mov     r9, [rsp+68h+arg_20]
 * 00000001C0042156: mov     r8d, 0Eh
 * 00000001C004215C: mov     [rsp+68h+var_18], 8
 * 00000001C0042165: mov     edx, ebx
 * 00000001C0042167: mov     [rsp+68h+var_20], rax
 * 00000001C004216C: mov     rcx, rsi
 * 00000001C004216F: mov     [rsp+68h+var_28], rbp
 * 00000001C0042174: lea     rax, [rsp+68h+arg_30]
 * 00000001C004217C: mov     [rsp+68h+var_30], rax
 * 00000001C0042181: lea     rax, [rsp+68h+arg_28]
 * 00000001C0042189: mov     [rsp+68h+var_38], rbp
 * 00000001C004218E: mov     [rsp+68h+var_40], rax
 * 00000001C0042193: mov     [rsp+68h+var_48], di
 * 00000001C0042198: call    cs:__imp_WppAutoLogTrace
 * 00000001C004219F: nop     dword ptr [rax+rax+00h]
 * 00000001C00421A4: lea     r11, [rsp+68h+var_8]
 * 00000001C00421A9: mov     rbx, [r11+10h]
 * 00000001C00421AD: mov     rbp, [r11+18h]
 * 00000001C00421B1: mov     rsi, [r11+20h]
 * 00000001C00421B5: mov     rsp, r11
 * 00000001C00421B8: pop     rdi
 * 00000001C00421B9: retn
 */
