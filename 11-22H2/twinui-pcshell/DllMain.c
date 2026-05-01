/*
 * XREFs of DllMain @ 0x1801CF0E4
 * Callers:
 *     dllmain_dispatch @ 0x1801C659C (dllmain_dispatch.c)
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180172E78 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     McGenEventRegister_EventRegister @ 0x1801B9D14 (McGenEventRegister_EventRegister.c)
 *     ?SetResultLoggingCallback@wil@@YAXP6AXAEBUFailureInfo@1@@_E@Z @ 0x1801BAE2C (-SetResultLoggingCallback@wil@@YAXP6AXAEBUFailureInfo@1@@_E@Z.c)
 *     SHFusionUninitialize @ 0x1801BEB94 (SHFusionUninitialize.c)
 *     McGenEventUnregister_EventUnregister @ 0x1801BEC94 (McGenEventUnregister_EventUnregister.c)
 */

/*
 * Hex-Rays decompilation failed for DllMain @ 0x1801CF0E4
 * Reason: Hex-Rays returned no pseudocode for 0x1801CF0E4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001801CF0E4: push    rbx
 * 00000001801CF0E6: sub     rsp, 20h
 * 00000001801CF0EA: mov     rbx, rcx
 * 00000001801CF0ED: test    edx, edx
 * 00000001801CF0EF: jz      short loc_1801CF16E
 * 00000001801CF0F1: cmp     edx, 1
 * 00000001801CF0F4: jnz     loc_1801CF1A1
 * 00000001801CF0FA: lea     r9, MICROSOFT_TWINUI_PUBLISHER_Context
 * 00000001801CF101: lea     r8, MICROSOFT_TWINUI_PUBLISHER_Context
 * 00000001801CF108: call    McGenEventRegister_EventRegister
 * 00000001801CF10D: movzx   r9d, cs:?Traits@?1??EnableManifestedProviderForMicrosoftTelemetry@@YAK_K@Z@4QBEB; uchar const near * const `EnableManifestedProviderForMicrosoftTelemetry(unsigned __int64)'::`2'::Traits
 * 00000001801CF115: lea     r8, ?Traits@?1??EnableManifestedProviderForMicrosoftTelemetry@@YAK_K@Z@4QBEB; uchar const near * const `EnableManifestedProviderForMicrosoftTelemetry(unsigned __int64)'::`2'::Traits
 * 00000001801CF11C: mov     rcx, cs:MICROSOFT_TWINUI_PUBLISHER_Context
 * 00000001801CF123: mov     edx, 2
 * 00000001801CF128: call    cs:__imp_EventSetInformation
 * 00000001801CF12F: nop     dword ptr [rax+rax+00h]
 * 00000001801CF134: lea     rcx, dword_180986E18; CallbackContext
 * 00000001801CF13B: call    TraceLoggingRegisterEx_EventRegister_EventSetInformation
 * 00000001801CF140: mov     rcx, rbx; hLibModule
 * 00000001801CF143: mov     cs:qword_18098D510, rbx
 * 00000001801CF14A: mov     cs:dword_180992460, 7Bh ; '{'
 * 00000001801CF154: call    cs:__imp_DisableThreadLibraryCalls
 * 00000001801CF15B: nop     dword ptr [rax+rax+00h]
 * 00000001801CF160: lea     rcx, _lambda_3bb05d516453dedbcf2433e6b038ae19____lambda_invoker_cdecl_
 * 00000001801CF167: call    ?SetResultLoggingCallback@wil@@YAXP6AXAEBUFailureInfo@1@@_E@Z; wil::SetResultLoggingCallback(void (*)(wil::FailureInfo const &),...)
 * 00000001801CF16C: jmp     short loc_1801CF1A1
 * 00000001801CF16E: lea     rcx, MICROSOFT_TWINUI_PUBLISHER_Context
 * 00000001801CF175: call    McGenEventUnregister_EventUnregister
 * 00000001801CF17A: mov     rcx, cs:qword_180986E38; RegHandle
 * 00000001801CF181: and     cs:qword_180986E38, 0
 * 00000001801CF189: and     cs:dword_180986E18, 0
 * 00000001801CF190: call    cs:__imp_EventUnregister
 * 00000001801CF197: nop     dword ptr [rax+rax+00h]
 * 00000001801CF19C: call    SHFusionUninitialize
 * 00000001801CF1A1: mov     eax, 1
 * 00000001801CF1A6: add     rsp, 20h
 * 00000001801CF1AA: pop     rbx
 * 00000001801CF1AB: retn
 */
