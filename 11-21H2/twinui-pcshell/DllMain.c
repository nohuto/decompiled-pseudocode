/*
 * XREFs of DllMain @ 0x18018F894
 * Callers:
 *     dllmain_dispatch @ 0x18018803C (dllmain_dispatch.c)
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x18013B700 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     McGenEventRegister_EventRegister @ 0x18017D940 (McGenEventRegister_EventRegister.c)
 *     ?SetResultLoggingCallback@wil@@YAXP6AXAEBUFailureInfo@1@@_E@Z @ 0x18017E8B4 (-SetResultLoggingCallback@wil@@YAXP6AXAEBUFailureInfo@1@@_E@Z.c)
 *     SHFusionUninitialize @ 0x180181648 (SHFusionUninitialize.c)
 *     McGenEventUnregister_EventUnregister @ 0x180181684 (McGenEventUnregister_EventUnregister.c)
 */

/*
 * Hex-Rays decompilation failed for DllMain @ 0x18018F894
 * Reason: Hex-Rays returned no pseudocode for 0x18018F894
 * Fallback: raw IDA disassembly follows.
 *
 * 000000018018F894: push    rbx
 * 000000018018F896: sub     rsp, 20h
 * 000000018018F89A: mov     rbx, rcx
 * 000000018018F89D: test    edx, edx
 * 000000018018F89F: jz      short loc_18018F91E
 * 000000018018F8A1: cmp     edx, 1
 * 000000018018F8A4: jnz     loc_18018F951
 * 000000018018F8AA: lea     r9, MICROSOFT_TWINUI_PUBLISHER_Context
 * 000000018018F8B1: lea     r8, MICROSOFT_TWINUI_PUBLISHER_Context
 * 000000018018F8B8: call    McGenEventRegister_EventRegister
 * 000000018018F8BD: movzx   r9d, cs:?Traits@?1??EnableManifestedProviderForMicrosoftTelemetry@@YAK_K@Z@4QBEB; uchar const near * const `EnableManifestedProviderForMicrosoftTelemetry(unsigned __int64)'::`2'::Traits
 * 000000018018F8C5: lea     r8, ?Traits@?1??EnableManifestedProviderForMicrosoftTelemetry@@YAK_K@Z@4QBEB; uchar const near * const `EnableManifestedProviderForMicrosoftTelemetry(unsigned __int64)'::`2'::Traits
 * 000000018018F8CC: mov     rcx, cs:MICROSOFT_TWINUI_PUBLISHER_Context
 * 000000018018F8D3: mov     edx, 2
 * 000000018018F8D8: call    cs:__imp_EventSetInformation
 * 000000018018F8DF: nop     dword ptr [rax+rax+00h]
 * 000000018018F8E4: lea     rcx, dword_1807ABFF8; CallbackContext
 * 000000018018F8EB: call    TraceLoggingRegisterEx_EventRegister_EventSetInformation
 * 000000018018F8F0: mov     rcx, rbx; hLibModule
 * 000000018018F8F3: mov     cs:hModule, rbx
 * 000000018018F8FA: mov     cs:dword_1807B6F70, 7Bh ; '{'
 * 000000018018F904: call    cs:__imp_DisableThreadLibraryCalls
 * 000000018018F90B: nop     dword ptr [rax+rax+00h]
 * 000000018018F910: lea     rcx, _lambda_0685ab581f2af4afff478aa1d8b72a5b____lambda_invoker_cdecl_
 * 000000018018F917: call    ?SetResultLoggingCallback@wil@@YAXP6AXAEBUFailureInfo@1@@_E@Z; wil::SetResultLoggingCallback(void (*)(wil::FailureInfo const &),...)
 * 000000018018F91C: jmp     short loc_18018F951
 * 000000018018F91E: lea     rcx, MICROSOFT_TWINUI_PUBLISHER_Context
 * 000000018018F925: call    McGenEventUnregister_EventUnregister
 * 000000018018F92A: mov     rcx, cs:RegHandle; RegHandle
 * 000000018018F931: and     cs:RegHandle, 0
 * 000000018018F939: and     cs:dword_1807ABFF8, 0
 * 000000018018F940: call    cs:__imp_EventUnregister
 * 000000018018F947: nop     dword ptr [rax+rax+00h]
 * 000000018018F94C: call    SHFusionUninitialize
 * 000000018018F951: mov     eax, 1
 * 000000018018F956: add     rsp, 20h
 * 000000018018F95A: pop     rbx
 * 000000018018F95B: retn
 */
