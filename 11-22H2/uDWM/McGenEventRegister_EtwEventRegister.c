/*
 * XREFs of McGenEventRegister_EtwEventRegister @ 0x180058414
 * Callers:
 *     DllMain @ 0x18005F354 (DllMain.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for McGenEventRegister_EtwEventRegister @ 0x180058414
 * Reason: Hex-Rays returned no pseudocode for 0x180058414
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180058414: sub     rsp, 28h
 * 0000000180058418: xor     eax, eax
 * 000000018005841A: cmp     cs:Microsoft_Windows_Dwm_Udwm_Provider_Context, rax
 * 0000000180058421: jnz     short loc_180058447
 * 0000000180058423: lea     r8, Microsoft_Windows_Dwm_Udwm_Provider_Context
 * 000000018005842A: mov     r9, r8
 * 000000018005842D: lea     rdx, McGenControlCallbackV2
 * 0000000180058434: lea     rcx, Microsoft_Windows_Dwm_Udwm_Provider
 * 000000018005843B: call    cs:__imp_EtwEventRegister
 * 0000000180058442: nop     dword ptr [rax+rax+00h]
 * 0000000180058447: add     rsp, 28h
 * 000000018005844B: retn
 */
