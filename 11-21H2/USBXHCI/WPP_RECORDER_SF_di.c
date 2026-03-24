/*
 * XREFs of WPP_RECORDER_SF_di @ 0x1C0015540
 * Callers:
 *     Controller_PopulateDeviceFlags @ 0x1C006DA94 (Controller_PopulateDeviceFlags.c)
 *     Controller_PopulateDeviceFlagsFromRegistry @ 0x1C006DBC8 (Controller_PopulateDeviceFlagsFromRegistry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_di @ 0x1C0015540
 * Reason: Hex-Rays returned no pseudocode for 0x1C0015540
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0015540: mov     [rsp+arg_0], rbx
 * 00000001C0015545: mov     [rsp+arg_8], rsi
 * 00000001C001554A: push    rdi
 * 00000001C001554B: sub     rsp, 50h
 * 00000001C001554F: mov     rsi, rcx
 * 00000001C0015552: movzx   edi, r9w
 * 00000001C0015556: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C001555D: movzx   ebx, dl
 * 00000001C0015560: mov     eax, [rcx+2Ch]
 * 00000001C0015563: test    al, 8
 * 00000001C0015565: jnz     loc_1C001E394
 * 00000001C001556B: and     [rsp+58h+var_10], 0
 * 00000001C0015571: lea     rax, [rsp+58h+arg_30]
 * 00000001C0015579: mov     [rsp+58h+var_18], 8
 * 00000001C0015582: lea     r9, WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids
 * 00000001C0015589: mov     [rsp+58h+var_20], rax
 * 00000001C001558E: mov     r8d, 4
 * 00000001C0015594: lea     rax, [rsp+58h+arg_28]
 * 00000001C001559C: mov     [rsp+58h+var_28], 4
 * 00000001C00155A5: mov     [rsp+58h+var_30], rax
 * 00000001C00155AA: mov     edx, ebx
 * 00000001C00155AC: mov     rcx, rsi
 * 00000001C00155AF: mov     word ptr [rsp+58h+var_38], di
 * 00000001C00155B4: call    cs:__imp_WppAutoLogTrace
 * 00000001C00155BB: nop     dword ptr [rax+rax+00h]
 * 00000001C00155C0: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00155C5: mov     rsi, [rsp+58h+arg_8]
 * 00000001C00155CA: add     rsp, 50h
 * 00000001C00155CE: pop     rdi
 * 00000001C00155CF: retn
 * 00000001C001E394: cmp     [rcx+29h], bl
 * 00000001C001E397: jb      loc_1C001556B
 * 00000001C001E39D: and     [rsp+58h+var_18], 0
 * 00000001C001E3A3: lea     rdx, [rsp+58h+arg_30]
 * 00000001C001E3AB: mov     rax, cs:pfnWppTraceMessage
 * 00000001C001E3B2: lea     r8, WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids
 * 00000001C001E3B9: mov     rcx, [rcx+18h]
 * 00000001C001E3BD: mov     r9d, edi
 * 00000001C001E3C0: mov     [rsp+58h+var_20], 8
 * 00000001C001E3C9: mov     [rsp+58h+var_28], rdx
 * 00000001C001E3CE: lea     rdx, [rsp+58h+arg_28]
 * 00000001C001E3D6: mov     [rsp+58h+var_30], 4
 * 00000001C001E3DF: mov     [rsp+58h+var_38], rdx
 * 00000001C001E3E4: mov     edx, 2Bh ; '+'
 * 00000001C001E3E9: call    cs:__guard_dispatch_icall_fptr
 * 00000001C001E3EF: nop
 * 00000001C001E3F0: jmp     loc_1C001556B
 */
