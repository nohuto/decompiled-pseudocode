/*
 * XREFs of McGenEventRegister_EtwEventRegister @ 0x180014264
 * Callers:
 *     DllMain @ 0x180062AAC (DllMain.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for McGenEventRegister_EtwEventRegister @ 0x180014264
 * Reason: Hex-Rays returned no pseudocode for 0x180014264
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180014264: sub     rsp, 28h
 * 0000000180014268: xor     eax, eax
 * 000000018001426A: cmp     cs:Microsoft_Windows_Dwm_Udwm_Provider_Context, rax
 * 0000000180014271: jnz     short loc_180014297
 * 0000000180014273: lea     r8, Microsoft_Windows_Dwm_Udwm_Provider_Context
 * 000000018001427A: mov     r9, r8
 * 000000018001427D: lea     rdx, McGenControlCallbackV2
 * 0000000180014284: lea     rcx, Microsoft_Windows_Dwm_Udwm_Provider
 * 000000018001428B: call    cs:__imp_EtwEventRegister
 * 0000000180014292: nop     dword ptr [rax+rax+00h]
 * 0000000180014297: add     rsp, 28h
 * 000000018001429B: retn
 */
