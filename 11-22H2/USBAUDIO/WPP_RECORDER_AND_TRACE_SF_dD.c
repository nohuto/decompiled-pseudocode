/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C000BD88
 * Callers:
 *     ?StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0005CA4 (-StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000633C (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetVolumeStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00075A4 (-GetVolumeStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     IsDeviceInSidebandMode @ 0x1C000BB98 (IsDeviceInSidebandMode.c)
 *     ?GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z @ 0x1C000D5AC (-GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z.c)
 *     ?IsPowerRequiredForIo@CSidebandDevice@@AEAA_NK@Z @ 0x1C0010A98 (-IsPowerRequiredForIo@CSidebandDevice@@AEAA_NK@Z.c)
 *     ?IsSupportedSidebandTopology@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@@Z @ 0x1C0010B94 (-IsSupportedSidebandTopology@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@@Z.c)
 *     ?GetDeviceDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00133C8 (-GetDeviceDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00136C0 (-GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetErrorStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0013D18 (-GetErrorStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetMutePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0013FC4 (-GetMutePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetMuteStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00141B4 (-GetMuteStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSidetoneStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0014344 (-GetSidetoneStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSidetoneVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00144D4 (-GetSidetoneVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00146C4 (-GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetStreamStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0014D04 (-GetStreamStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0014FB0 (-GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00157F4 (-GetVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00159E4 (-SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSidebandClaimed@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0015F6C (-SetSidebandClaimed@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00160EC (-SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00166A8 (-SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0016B28 (-SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00170B0 (-StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C001740C (-StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0017714 (-StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A000 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C000BD88
 * Reason: Hex-Rays returned no pseudocode for 0x1C000BD88
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000BD88: mov     r11, rsp
 * 00000001C000BD8B: mov     [r11+8], rbx
 * 00000001C000BD8F: mov     [r11+10h], rbp
 * 00000001C000BD93: mov     [r11+18h], rsi
 * 00000001C000BD97: push    rdi
 * 00000001C000BD98: sub     rsp, 50h
 * 00000001C000BD9C: movzx   ebx, [rsp+58h+arg_30]
 * 00000001C000BDA4: mov     rsi, r9
 * 00000001C000BDA7: mov     dil, r8b
 * 00000001C000BDAA: mov     ebp, 4
 * 00000001C000BDAF: test    dl, dl
 * 00000001C000BDB1: jz      short loc_1C000BDEB
 * 00000001C000BDB3: and     qword ptr [r11-18h], 0
 * 00000001C000BDB8: lea     rdx, [r11+50h]
 * 00000001C000BDBC: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000BDC3: mov     r9d, ebx
 * 00000001C000BDC6: mov     r8, [rsp+58h+arg_38]
 * 00000001C000BDCE: mov     [r11-20h], rbp
 * 00000001C000BDD2: mov     [r11-28h], rdx
 * 00000001C000BDD6: lea     rdx, [r11+48h]
 * 00000001C000BDDA: mov     [r11-30h], rbp
 * 00000001C000BDDE: mov     [r11-38h], rdx
 * 00000001C000BDE2: lea     edx, [rbp+27h]
 * 00000001C000BDE5: call    cs:__guard_dispatch_icall_fptr
 * 00000001C000BDEB: test    dil, dil
 * 00000001C000BDEE: jz      short loc_1C000BE3C
 * 00000001C000BDF0: and     [rsp+58h+var_10], 0
 * 00000001C000BDF6: lea     rax, [rsp+58h+arg_48]
 * 00000001C000BDFE: mov     r9, [rsp+58h+arg_38]
 * 00000001C000BE06: xor     edx, edx
 * 00000001C000BE08: mov     [rsp+58h+var_18], rbp
 * 00000001C000BE0D: mov     rcx, rsi
 * 00000001C000BE10: mov     [rsp+58h+var_20], rax
 * 00000001C000BE15: lea     rax, [rsp+58h+arg_40]
 * 00000001C000BE1D: mov     [rsp+58h+var_28], rbp
 * 00000001C000BE22: mov     [rsp+58h+var_30], rax
 * 00000001C000BE27: lea     r8d, [rdx+9]
 * 00000001C000BE2B: mov     [rsp+58h+var_38], bx
 * 00000001C000BE30: call    cs:__imp_WppAutoLogTrace
 * 00000001C000BE37: nop     dword ptr [rax+rax+00h]
 * 00000001C000BE3C: mov     rbx, [rsp+58h+arg_0]
 * 00000001C000BE41: mov     rbp, [rsp+58h+arg_8]
 * 00000001C000BE46: mov     rsi, [rsp+58h+arg_10]
 * 00000001C000BE4B: add     rsp, 50h
 * 00000001C000BE4F: pop     rdi
 * 00000001C000BE50: retn
 */
