/*
 * XREFs of GetData @ 0x1C0131E60
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

/*
 * Hex-Rays decompilation failed for GetData @ 0x1C0131E60
 * Reason: Hex-Rays returned no pseudocode for 0x1C0131E60
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0131E60: push    rbx
 * 00000001C0131E62: sub     rsp, 50h
 * 00000001C0131E66: mov     rax, cs:gpxsGlobals
 * 00000001C0131E6D: lea     rdx, [rsp+58h+arg_8]
 * 00000001C0131E72: xor     ebx, ebx
 * 00000001C0131E74: mov     [rsp+58h+arg_8], rbx
 * 00000001C0131E79: mov     ecx, [rax+20h]
 * 00000001C0131E7C: call    cs:__imp_PsTlsGetValue
 * 00000001C0131E83: nop     dword ptr [rax+rax+00h]
 * 00000001C0131E88: test    eax, eax
 * 00000001C0131E8A: jns     short loc_1C0131EAC
 * 00000001C0131E8C: mov     [rsp+58h+arg_0], 20000h
 * 00000001C0131E94: lea     rcx, aIxptelassert; "IXPTelAssert"
 * 00000001C0131E9B: mov     edx, [rsp+58h+arg_0]
 * 00000001C0131E9F: mov     r8d, 895h
 * 00000001C0131EA5: call    MicrosoftTelemetryAssertTriggeredArgsKM
 * 00000001C0131EAA: jmp     short loc_1C0131EC4
 * 00000001C0131EAC: cmp     [rsp+58h+arg_8], rbx
 * 00000001C0131EB1: jnz     short loc_1C0131F25
 * 00000001C0131EB3: call    cs:__imp_PsGetCurrentThreadWin32Thread
 * 00000001C0131EBA: nop     dword ptr [rax+rax+00h]
 * 00000001C0131EBF: test    rax, rax
 * 00000001C0131EC2: jz      short loc_1C0131F25
 * 00000001C0131EC4: mov     eax, cs:gdwExtraInstrumentations
 * 00000001C0131ECA: xor     r9d, r9d; BugCheckParameter3
 * 00000001C0131ECD: test    al, 1
 * 00000001C0131ECF: jz      short loc_1C0131EEF
 * 00000001C0131ED1: xor     r8d, r8d; BugCheckParameter2
 * 00000001C0131ED4: mov     [rsp+58h+BugCheckParameter4], rbx; BugCheckParameter4
 * 00000001C0131ED9: lea     edx, [r9+2Ch]; BugCheckParameter1
 * 00000001C0131EDD: mov     ecx, 164h; BugCheckCode
 * 00000001C0131EE2: call    cs:__imp_KeBugCheckEx
 * 00000001C0131EEF: mov     [rsp+58h+var_18], ebx
 * 00000001C0131EF3: lea     rcx, aNtuser; "NTUSER"
 * 00000001C0131EFA: mov     [rsp+58h+var_20], rbx
 * 00000001C0131EFF: mov     edx, 190h
 * 00000001C0131F04: mov     [rsp+58h+var_28], rbx
 * 00000001C0131F09: mov     r8d, 2Ch ; ','
 * 00000001C0131F0F: mov     [rsp+58h+var_30], rbx
 * 00000001C0131F14: mov     [rsp+58h+BugCheckParameter4], rbx
 * 00000001C0131F19: call    cs:__imp_DbgkWerCaptureLiveKernelDump
 * 00000001C0131F20: nop     dword ptr [rax+rax+00h]
 * 00000001C0131F25: mov     rax, [rsp+58h+arg_8]
 * 00000001C0131F2A: add     rsp, 50h
 * 00000001C0131F2E: pop     rbx
 * 00000001C0131F2F: retn
 */
