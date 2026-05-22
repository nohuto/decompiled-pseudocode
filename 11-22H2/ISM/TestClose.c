/*
 * XREFs of TestClose @ 0x18006D3D4
 * Callers:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHTIPTEST__@@P6AXPEAU1@@Z$1?TestClose@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18006A28C (--1-$unique_storage@U-$resource_policy@PEAUHTIPTEST__@@P6AXPEAU1@@Z$1-TestClose@@YAX0@ZU-$integr.c)
 *     ?start@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA?AU_GUID@@XZ @ 0x18006CEE0 (-start@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA-AU_GUID@@XZ.c)
 * Callees:
 *     tip_details_GetKernelBaseModuleHandle @ 0x18006D604 (tip_details_GetKernelBaseModuleHandle.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for TestClose @ 0x18006D3D4
 * Reason: Hex-Rays returned no pseudocode for 0x18006D3D4
 * Fallback: raw IDA disassembly follows.
 *
 * 000000018006D3D4: push    rbx
 * 000000018006D3D6: sub     rsp, 20h
 * 000000018006D3DA: mov     rax, cs:?s_pfnTestClose@?1??TestClose@@9@4P6AXPEAUHTIPTEST__@@@ZEA; void (*`TestClose'::`2'::s_pfnTestClose)(HTIPTEST__ *)
 * 000000018006D3E1: mov     rbx, rcx
 * 000000018006D3E4: test    rax, rax
 * 000000018006D3E7: jnz     short loc_18006D410
 * 000000018006D3E9: call    tip_details_GetKernelBaseModuleHandle
 * 000000018006D3EE: mov     rcx, rax; hModule
 * 000000018006D3F1: lea     rdx, aTestclose; "TestClose"
 * 000000018006D3F8: call    cs:__imp_GetProcAddress
 * 000000018006D3FF: nop     dword ptr [rax+rax+00h]
 * 000000018006D404: mov     cs:?s_pfnTestClose@?1??TestClose@@9@4P6AXPEAUHTIPTEST__@@@ZEA, rax; void (*`TestClose'::`2'::s_pfnTestClose)(HTIPTEST__ *)
 * 000000018006D40B: test    rax, rax
 * 000000018006D40E: jz      short loc_18006D423
 * 000000018006D410: mov     r10, 8F6C07615A56F170h
 * 000000018006D41A: mov     rcx, rbx
 * 000000018006D41D: call    cs:__guard_xfg_dispatch_icall_fptr
 * 000000018006D423: add     rsp, 20h
 * 000000018006D427: pop     rbx
 * 000000018006D428: retn
 */
