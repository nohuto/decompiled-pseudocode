/*
 * XREFs of TestCreate @ 0x18006D430
 * Callers:
 *     ?start@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA?AU_GUID@@XZ @ 0x18006CEE0 (-start@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA-AU_GUID@@XZ.c)
 * Callees:
 *     tip_details_GetKernelBaseModuleHandle @ 0x18006D604 (tip_details_GetKernelBaseModuleHandle.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for TestCreate @ 0x18006D430
 * Reason: Hex-Rays returned no pseudocode for 0x18006D430
 * Fallback: raw IDA disassembly follows.
 *
 * 000000018006D430: mov     [rsp+arg_0], rbx
 * 000000018006D435: mov     [rsp+arg_8], rsi
 * 000000018006D43A: push    rdi
 * 000000018006D43B: sub     rsp, 40h
 * 000000018006D43F: mov     r11, cs:?s_pfnTestCreate@?1??TestCreate@@9@4P6APEAUHTIPTEST__@@IW4TestRetrievalOptions@@W4TestStorage@@W4TestProperties@@PEBDPEAU_GUID@@@ZEA; HTIPTEST__ * (*`TestCreate'::`2'::s_pfnTestCreate)(uint,TestRetrievalOptions,TestStorage,TestProperties,char const *,_GUID *)
 * 000000018006D446: mov     ebx, r9d
 * 000000018006D449: mov     dil, r8b
 * 000000018006D44C: mov     esi, ecx
 * 000000018006D44E: test    r11, r11
 * 000000018006D451: jnz     short loc_18006D48D
 * 000000018006D453: call    tip_details_GetKernelBaseModuleHandle
 * 000000018006D458: mov     rcx, rax; hModule
 * 000000018006D45B: lea     rdx, aTestcreate; "TestCreate"
 * 000000018006D462: call    cs:__imp_GetProcAddress
 * 000000018006D469: nop     dword ptr [rax+rax+00h]
 * 000000018006D46E: mov     cs:?s_pfnTestCreate@?1??TestCreate@@9@4P6APEAUHTIPTEST__@@IW4TestRetrievalOptions@@W4TestStorage@@W4TestProperties@@PEBDPEAU_GUID@@@ZEA, rax; HTIPTEST__ * (*`TestCreate'::`2'::s_pfnTestCreate)(uint,TestRetrievalOptions,TestStorage,TestProperties,char const *,_GUID *)
 * 000000018006D475: mov     r11, rax
 * 000000018006D478: test    rax, rax
 * 000000018006D47B: jnz     short loc_18006D48D
 * 000000018006D47D: mov     rax, [rsp+48h+arg_28]
 * 000000018006D482: xorps   xmm0, xmm0
 * 000000018006D485: movdqu  xmmword ptr [rax], xmm0
 * 000000018006D489: xor     eax, eax
 * 000000018006D48B: jmp     short loc_18006D4BE
 * 000000018006D48D: mov     r10, 0B13C969D7A57D870h
 * 000000018006D497: mov     rax, [rsp+48h+arg_28]
 * 000000018006D49C: mov     r9d, ebx
 * 000000018006D49F: mov     [rsp+48h+var_20], rax
 * 000000018006D4A4: mov     r8b, dil
 * 000000018006D4A7: mov     rax, [rsp+48h+arg_20]
 * 000000018006D4AC: xor     edx, edx
 * 000000018006D4AE: mov     [rsp+48h+var_28], rax
 * 000000018006D4B3: mov     ecx, esi
 * 000000018006D4B5: mov     rax, r11
 * 000000018006D4B8: call    cs:__guard_xfg_dispatch_icall_fptr
 * 000000018006D4BE: mov     rbx, [rsp+48h+arg_0]
 * 000000018006D4C3: mov     rsi, [rsp+48h+arg_8]
 * 000000018006D4C8: add     rsp, 40h
 * 000000018006D4CC: pop     rdi
 * 000000018006D4CD: retn
 */
