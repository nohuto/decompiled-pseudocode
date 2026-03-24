/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_s @ 0x1C00E6154
 * Callers:
 *     ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00C4624 (-dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00C4674 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     RIMConfigurePointerDevice @ 0x1C018A990 (RIMConfigurePointerDevice.c)
 *     ?DumpPointerEventInt@@YAXPEAUtagPOINTEREVENTINT@@@Z @ 0x1C01A50A8 (-DumpPointerEventInt@@YAXPEAUtagPOINTEREVENTINT@@@Z.c)
 *     tracePointerFlags @ 0x1C01A5AA4 (tracePointerFlags.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C01E11D4 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 *     UnpackMouseSettings @ 0x1C01E8C74 (UnpackMouseSettings.c)
 *     UnpackPenSettings @ 0x1C01E8EF0 (UnpackPenSettings.c)
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01ED550 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_s @ 0x1C00E6154
 * Reason: Hex-Rays returned no pseudocode for 0x1C00E6154
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00E6154: mov     [rsp+arg_0], rbx
 * 00000001C00E6159: mov     [rsp+arg_8], rbp
 * 00000001C00E615E: mov     [rsp+arg_10], rsi
 * 00000001C00E6163: push    rdi
 * 00000001C00E6164: push    r13
 * 00000001C00E6166: push    r14
 * 00000001C00E6168: sub     rsp, 40h
 * 00000001C00E616C: mov     rdi, [rsp+58h+arg_40]
 * 00000001C00E6174: lea     r13, aNull; "NULL"
 * 00000001C00E617B: movzx   ebp, [rsp+58h+arg_30]
 * 00000001C00E6183: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C00E6187: mov     r14, r9
 * 00000001C00E618A: mov     sil, r8b
 * 00000001C00E618D: mov     r11, rcx
 * 00000001C00E6190: test    dl, dl
 * 00000001C00E6192: jz      short loc_1C00E61EC
 * 00000001C00E6194: mov     r10, cs:pfnWppTraceMessage
 * 00000001C00E619B: test    rdi, rdi
 * 00000001C00E619E: jz      short loc_1C00E61B1
 * 00000001C00E61A0: mov     rax, rbx
 * 00000001C00E61A3: inc     rax
 * 00000001C00E61A6: cmp     byte ptr [rdi+rax], 0
 * 00000001C00E61AA: jnz     short loc_1C00E61A3
 * 00000001C00E61AC: inc     rax
 * 00000001C00E61AF: jmp     short loc_1C00E61B6
 * 00000001C00E61B1: mov     eax, 5
 * 00000001C00E61B6: mov     r8, [rsp+58h+arg_38]
 * 00000001C00E61BE: test    rdi, rdi
 * 00000001C00E61C1: mov     rcx, rdi
 * 00000001C00E61C4: mov     r9d, ebp
 * 00000001C00E61C7: cmovz   rcx, r13
 * 00000001C00E61CB: mov     edx, 2Bh ; '+'
 * 00000001C00E61D0: and     [rsp+58h+var_28], 0
 * 00000001C00E61D6: mov     [rsp+58h+var_30], rax
 * 00000001C00E61DB: mov     rax, r10
 * 00000001C00E61DE: mov     [rsp+58h+var_38], rcx
 * 00000001C00E61E3: mov     rcx, r11
 * 00000001C00E61E6: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00E61EC: test    sil, sil
 * 00000001C00E61EF: jz      short loc_1C00E6249
 * 00000001C00E61F1: test    rdi, rdi
 * 00000001C00E61F4: jz      short loc_1C00E6204
 * 00000001C00E61F6: inc     rbx
 * 00000001C00E61F9: cmp     byte ptr [rdi+rbx], 0
 * 00000001C00E61FD: jnz     short loc_1C00E61F6
 * 00000001C00E61FF: inc     rbx
 * 00000001C00E6202: jmp     short loc_1C00E6209
 * 00000001C00E6204: mov     ebx, 5
 * 00000001C00E6209: mov     r9, [rsp+58h+arg_38]
 * 00000001C00E6211: test    rdi, rdi
 * 00000001C00E6214: mov     r8d, [rsp+58h+arg_28]
 * 00000001C00E621C: mov     edx, 4
 * 00000001C00E6221: cmovz   rdi, r13
 * 00000001C00E6225: mov     rcx, r14
 * 00000001C00E6228: and     [rsp+58h+var_20], 0
 * 00000001C00E622E: mov     [rsp+58h+var_28], rbx
 * 00000001C00E6233: mov     [rsp+58h+var_30], rdi
 * 00000001C00E6238: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C00E623D: call    cs:__imp_WppAutoLogTrace
 * 00000001C00E6244: nop     dword ptr [rax+rax+00h]
 * 00000001C00E6249: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00E624E: mov     rbp, [rsp+58h+arg_8]
 * 00000001C00E6253: mov     rsi, [rsp+58h+arg_10]
 * 00000001C00E6258: add     rsp, 40h
 * 00000001C00E625C: pop     r14
 * 00000001C00E625E: pop     r13
 * 00000001C00E6260: pop     rdi
 * 00000001C00E6261: retn
 */
