/*
 * XREFs of McGenEventWrite_EtwEventWriteTransfer @ 0x1800814BA
 * Callers:
 *     ?BuildDeviceGraphForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@PEAUIDeviceGraphObjectsStore@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@6PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUMODE_PARAMS@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180043A3C (-BuildDeviceGraphForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUIAudioStreamInfo@@PEAU.c)
 *     ?CreateMicInjectionBridgeSourceStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@_JPEBUtWAVEFORMATEX@@PEAUIStreamInstanceProxy@@PEAPEAUIBridgeStreamInstanceProxy@@PEAUSystemAudioStream@@@Z @ 0x18006BA70 (-CreateMicInjectionBridgeSourceStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDes.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2PEAUIProcessSubmixProxy@@U8@PEAUSystemAudioStream@@@Z @ 0x18006CF90 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHHH_JPEA.c)
 *     wil::details::lambda_call__lambda_c61a441f3ee26b9d6c64e9fa4b346816___::_lambda_call__lambda_c61a441f3ee26b9d6c64e9fa4b346816___ @ 0x180083B10 (wil--details--lambda_call__lambda_c61a441f3ee26b9d6c64e9fa4b346816___--_lambda_call__lambda_c61a.c)
 *     McTemplateU0zqttq_EtwEventWriteTransfer @ 0x180083B6C (McTemplateU0zqttq_EtwEventWriteTransfer.c)
 *     McTemplateU0z_EtwEventWriteTransfer @ 0x180084A4C (McTemplateU0z_EtwEventWriteTransfer.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUIBridgeStreamInstanceProxy@@PEAUSystemAudioStream@@@Z @ 0x1800D9278 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUIBrid.c)
 *     McTemplateU0zq_EtwEventWriteTransfer @ 0x1800F1030 (McTemplateU0zq_EtwEventWriteTransfer.c)
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x18011BA80 (McTemplateU0p_EtwEventWriteTransfer.c)
 *     McTemplateU0pq_EtwEventWriteTransfer @ 0x18011BADC (McTemplateU0pq_EtwEventWriteTransfer.c)
 *     wil::details::lambda_call__lambda_2e636c8b0c21056e5525154b5d5db667___::_lambda_call__lambda_2e636c8b0c21056e5525154b5d5db667___ @ 0x18011C678 (wil--details--lambda_call__lambda_2e636c8b0c21056e5525154b5d5db667___--_lambda_call__lambda_2e63.c)
 *     AudioServerGetMixFormat @ 0x180122210 (AudioServerGetMixFormat.c)
 *     AudioServerIsFormatSupported @ 0x180123880 (AudioServerIsFormatSupported.c)
 *     McTemplateU0qzz_EtwEventWriteTransfer @ 0x18012FAEC (McTemplateU0qzz_EtwEventWriteTransfer.c)
 *     McTemplateU0zd_EtwEventWriteTransfer @ 0x180150E5C (McTemplateU0zd_EtwEventWriteTransfer.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for McGenEventWrite_EtwEventWriteTransfer @ 0x1800814BA
 * Reason: Hex-Rays returned no pseudocode for 0x1800814BA
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800814BA: sub     rsp, 38h
 * 00000001800814BE: mov     r8, cs:qword_1801CD278
 * 00000001800814C5: xor     eax, eax
 * 00000001800814C7: mov     rcx, [rsp+38h+arg_20]
 * 00000001800814CC: test    r8, r8
 * 00000001800814CF: jnz     short loc_1800814D9
 * 00000001800814D1: mov     [rcx], rax
 * 00000001800814D4: mov     r8d, eax
 * 00000001800814D7: jmp     short loc_1800814E5
 * 00000001800814D9: mov     [rcx], r8
 * 00000001800814DC: mov     eax, 2
 * 00000001800814E1: movzx   r8d, word ptr [r8]
 * 00000001800814E5: mov     [rcx+8], r8d
 * 00000001800814E9: xor     r8d, r8d
 * 00000001800814EC: mov     [rsp+38h+var_10], rcx
 * 00000001800814F1: mov     [rcx+0Ch], eax
 * 00000001800814F4: mov     rcx, cs:AUDIO_EVENT_PROVIDER_Context
 * 00000001800814FB: mov     [rsp+38h+var_18], r9d
 * 0000000180081500: xor     r9d, r9d
 * 0000000180081503: call    cs:__imp_EtwEventWriteTransfer
 * 000000018008150A: nop     dword ptr [rax+rax+00h]
 * 000000018008150F: add     rsp, 38h
 * 0000000180081513: retn
 */
