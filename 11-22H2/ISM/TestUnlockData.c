/*
 * XREFs of TestUnlockData @ 0x18006D4D8
 * Callers:
 *     ?end_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAXXZ @ 0x18006B344 (-end_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAXXZ.c)
 * Callees:
 *     tip_details_GetKernelBaseModuleHandle @ 0x18006D604 (tip_details_GetKernelBaseModuleHandle.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for TestUnlockData @ 0x18006D4D8
 * Reason: Hex-Rays returned no pseudocode for 0x18006D4D8
 * Fallback: raw IDA disassembly follows.
 *
 * 000000018006D4D8: mov     [rsp+arg_0], rbx
 * 000000018006D4DD: mov     [rsp+arg_8], rsi
 * 000000018006D4E2: push    rdi
 * 000000018006D4E3: sub     rsp, 30h
 * 000000018006D4E7: mov     rax, cs:?s_pfnTestUnlockData@?1??TestUnlockData@@9@4P6AXPEAUHTIPTEST__@@W4TestUnlockOptions@@PEBDPEAUTestInfo@TestInfo_ODR_guard@@@ZEA; void (*`TestUnlockData'::`2'::s_pfnTestUnlockData)(HTIPTEST__ *,TestUnlockOptions,char const *,TestInfo_ODR_guard::TestInfo *)
 * 000000018006D4EE: mov     rbx, r9
 * 000000018006D4F1: mov     rdi, r8
 * 000000018006D4F4: mov     rsi, rcx
 * 000000018006D4F7: test    rax, rax
 * 000000018006D4FA: jnz     short loc_18006D533
 * 000000018006D4FC: call    tip_details_GetKernelBaseModuleHandle
 * 000000018006D501: mov     rcx, rax; hModule
 * 000000018006D504: lea     rdx, aTestunlockdata; "TestUnlockData"
 * 000000018006D50B: call    cs:__imp_GetProcAddress
 * 000000018006D512: nop     dword ptr [rax+rax+00h]
 * 000000018006D517: mov     cs:?s_pfnTestUnlockData@?1??TestUnlockData@@9@4P6AXPEAUHTIPTEST__@@W4TestUnlockOptions@@PEBDPEAUTestInfo@TestInfo_ODR_guard@@@ZEA, rax; void (*`TestUnlockData'::`2'::s_pfnTestUnlockData)(HTIPTEST__ *,TestUnlockOptions,char const *,TestInfo_ODR_guard::TestInfo *)
 * 000000018006D51E: test    rax, rax
 * 000000018006D521: jnz     short loc_18006D533
 * 000000018006D523: xorps   xmm0, xmm0
 * 000000018006D526: movups  xmmword ptr [rbx], xmm0
 * 000000018006D529: movups  xmmword ptr [rbx+10h], xmm0
 * 000000018006D52D: movups  xmmword ptr [rbx+20h], xmm0
 * 000000018006D531: jmp     short loc_18006D54E
 * 000000018006D533: mov     r10, 0FAB08FA156D56170h
 * 000000018006D53D: mov     r9, rbx
 * 000000018006D540: mov     r8, rdi
 * 000000018006D543: xor     edx, edx
 * 000000018006D545: mov     rcx, rsi
 * 000000018006D548: call    cs:__guard_xfg_dispatch_icall_fptr
 * 000000018006D54E: mov     rbx, [rsp+38h+arg_0]
 * 000000018006D553: mov     rsi, [rsp+38h+arg_8]
 * 000000018006D558: add     rsp, 30h
 * 000000018006D55C: pop     rdi
 * 000000018006D55D: retn
 */
