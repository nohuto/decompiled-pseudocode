/*
 * XREFs of McGenEventWrite_EtwEventWriteTransfer @ 0x18008148A
 * Callers:
 *     ?BuildDeviceGraphForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@PEAUIDeviceGraphObjectsStore@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@6PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUMODE_PARAMS@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180043A3C (-BuildDeviceGraphForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUIAudioStreamInfo@@PEAU.c)
 *     ?CreateMicInjectionBridgeSourceStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@_JPEBUtWAVEFORMATEX@@PEAUIStreamInstanceProxy@@PEAPEAUIBridgeStreamInstanceProxy@@PEAUSystemAudioStream@@@Z @ 0x18006BA80 (-CreateMicInjectionBridgeSourceStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDes.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2PEAUIProcessSubmixProxy@@U8@PEAUSystemAudioStream@@@Z @ 0x18006CFA0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHHH_JPEA.c)
 *     wil::details::lambda_call__lambda_c61a441f3ee26b9d6c64e9fa4b346816___::_lambda_call__lambda_c61a441f3ee26b9d6c64e9fa4b346816___ @ 0x180083AE0 (wil--details--lambda_call__lambda_c61a441f3ee26b9d6c64e9fa4b346816___--_lambda_call__lambda_c61a.c)
 *     McTemplateU0zqttq_EtwEventWriteTransfer @ 0x180083B3C (McTemplateU0zqttq_EtwEventWriteTransfer.c)
 *     McTemplateU0z_EtwEventWriteTransfer @ 0x180084A1C (McTemplateU0z_EtwEventWriteTransfer.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUIBridgeStreamInstanceProxy@@PEAUSystemAudioStream@@@Z @ 0x1800D9228 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUIBrid.c)
 *     McTemplateU0zq_EtwEventWriteTransfer @ 0x1800F0FE0 (McTemplateU0zq_EtwEventWriteTransfer.c)
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x18011BA30 (McTemplateU0p_EtwEventWriteTransfer.c)
 *     McTemplateU0pq_EtwEventWriteTransfer @ 0x18011BA8C (McTemplateU0pq_EtwEventWriteTransfer.c)
 *     wil::details::lambda_call__lambda_2e636c8b0c21056e5525154b5d5db667___::_lambda_call__lambda_2e636c8b0c21056e5525154b5d5db667___ @ 0x18011C628 (wil--details--lambda_call__lambda_2e636c8b0c21056e5525154b5d5db667___--_lambda_call__lambda_2e63.c)
 *     AudioServerGetMixFormat @ 0x1801221C0 (AudioServerGetMixFormat.c)
 *     AudioServerIsFormatSupported @ 0x180123830 (AudioServerIsFormatSupported.c)
 *     McTemplateU0qzz_EtwEventWriteTransfer @ 0x18012FA9C (McTemplateU0qzz_EtwEventWriteTransfer.c)
 *     McTemplateU0zd_EtwEventWriteTransfer @ 0x180150E0C (McTemplateU0zd_EtwEventWriteTransfer.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for McGenEventWrite_EtwEventWriteTransfer @ 0x18008148A
 * Reason: Hex-Rays returned no pseudocode for 0x18008148A
 * Fallback: raw IDA disassembly follows.
 *
 * 000000018008148A: sub     rsp, 38h
 * 000000018008148E: mov     r8, cs:qword_1801CD278
 * 0000000180081495: xor     eax, eax
 * 0000000180081497: mov     rcx, [rsp+38h+arg_20]
 * 000000018008149C: test    r8, r8
 * 000000018008149F: jnz     short loc_1800814A9
 * 00000001800814A1: mov     [rcx], rax
 * 00000001800814A4: mov     r8d, eax
 * 00000001800814A7: jmp     short loc_1800814B5
 * 00000001800814A9: mov     [rcx], r8
 * 00000001800814AC: mov     eax, 2
 * 00000001800814B1: movzx   r8d, word ptr [r8]
 * 00000001800814B5: mov     [rcx+8], r8d
 * 00000001800814B9: xor     r8d, r8d
 * 00000001800814BC: mov     [rsp+38h+var_10], rcx
 * 00000001800814C1: mov     [rcx+0Ch], eax
 * 00000001800814C4: mov     rcx, cs:AUDIO_EVENT_PROVIDER_Context
 * 00000001800814CB: mov     [rsp+38h+var_18], r9d
 * 00000001800814D0: xor     r9d, r9d
 * 00000001800814D3: call    cs:__imp_EtwEventWriteTransfer
 * 00000001800814DA: nop     dword ptr [rax+rax+00h]
 * 00000001800814DF: add     rsp, 38h
 * 00000001800814E3: retn
 */
