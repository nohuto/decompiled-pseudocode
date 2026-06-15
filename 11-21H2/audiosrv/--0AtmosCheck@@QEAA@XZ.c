/*
 * XREFs of ??0AtmosCheck@@QEAA@XZ @ 0x180059400
 * Callers:
 *     ??$Make@VAtmosCheck@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAtmosCheck@@@12@XZ @ 0x180059380 (--$Make@VAtmosCheck@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VAtmosCheck@@@12@XZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180008710 (--2@YAPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180025468 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@@Z @ 0x1800426C8 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18004CB1C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     RtlUIntAdd @ 0x180059694 (RtlUIntAdd.c)
 *     RtlULongLongAdd @ 0x1800596B4 (RtlULongLongAdd.c)
 *     StringCchLengthW @ 0x1800596D8 (StringCchLengthW.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIMMNotificationClient@@@WRL@Microsoft@@QEAA@XZ @ 0x180059980 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIMMNotificationClient@@@WRL@Microsoft.c)
 *     ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ @ 0x18005C5E4 (-Reset@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXXZ.c)
 *     ?Reset@?$SP@GV?$SP_MEM@G@@@@QEAAXXZ @ 0x18005CEEC (-Reset@-$SP@GV-$SP_MEM@G@@@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18005F038 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     _alloca_probe @ 0x18006A600 (_alloca_probe.c)
 *     wcscmp_0 @ 0x18006A657 (wcscmp_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x180119D8C (-Close@CHandle@ATL@@QEAAXXZ.c)
 *     ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ @ 0x180157E14 (-Reset@-$SP@PEAGV-$SP_MEM@PEAG@@@@QEAAXXZ.c)
 */

/*
 * Hex-Rays decompilation failed for ??0AtmosCheck@@QEAA@XZ @ 0x180059400
 * Reason: Hex-Rays returned no pseudocode for 0x180059400
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180059400: mov     [rsp-8+arg_8], rbx
 * 0000000180059405: mov     [rsp-8+arg_10], rsi
 * 000000018005940A: mov     [rsp-8+arg_18], rdi
 * 000000018005940F: mov     [rsp-8+arg_0], rcx
 * 0000000180059414: push    rbp
 * 0000000180059415: push    r12
 * 0000000180059417: push    r13
 * 0000000180059419: push    r14
 * 000000018005941B: push    r15
 * 000000018005941D: lea     rbp, [rsp-1160h]
 * 0000000180059425: mov     eax, 1260h
 * 000000018005942A: call    _alloca_probe
 * 000000018005942F: sub     rsp, rax
 * 0000000180059432: mov     rax, cs:__security_cookie
 * 0000000180059439: xor     rax, rsp
 * 000000018005943C: mov     [rbp+1180h+var_30], rax
 * 0000000180059443: mov     r15, rcx
 * 0000000180059446: mov     [rbp+1180h+var_1128], rcx
 * 000000018005944A: mov     [rbp+1180h+var_1150], rcx
 * 000000018005944E: call    ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIMMNotificationClient@@@WRL@Microsoft@@QEAA@XZ; Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IMMNotificationClient>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IMMNotificationClient>(void)
 * 0000000180059453: nop
 * 0000000180059454: lea     rax, ??_7AtmosCheck@@6B@; const AtmosCheck::`vftable'
 * 000000018005945B: mov     [r15], rax
 * 000000018005945E: lea     rax, ??_7AtmosCheck@@6BIMMNotificationClient@@@; const AtmosCheck::`vftable'{for `IMMNotificationClient'}
 * 0000000180059465: mov     [r15+8], rax
 * 0000000180059469: lea     rax, ??_7AtmosCheck@@6B?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@@Details@WRL@Microsoft@@@; const AtmosCheck::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'}
 * 0000000180059470: mov     [r15+10h], rax
 * 0000000180059474: xor     esi, esi
 * 0000000180059476: mov     [r15+28h], rsi
 * 000000018005947A: mov     [r15+30h], rsi
 * 000000018005947E: lea     rcx, [r15+38h]; lpCriticalSection
 * 0000000180059482: xor     r8d, r8d; Flags
 * 0000000180059485: xor     edx, edx; dwSpinCount
 * 0000000180059487: call    cs:__imp_InitializeCriticalSectionEx
 * 000000018005948E: nop     dword ptr [rax+rax+00h]
 * 0000000180059493: nop
 * 0000000180059494: mov     [r15+60h], sil
 * 0000000180059498: mov     [r15+61h], sil
 * 000000018005949C: mov     [r15+62h], sil
 * 00000001800594A0: mov     byte ptr [r15+63h], 1
 * 00000001800594A5: mov     [r15+64h], sil
 * 00000001800594A9: mov     [r15+68h], rsi
 * 00000001800594AD: mov     [r15+70h], rsi
 * 00000001800594B1: mov     [r15+78h], rsi
 * 00000001800594B5: mov     [r15+80h], rsi
 * 00000001800594BC: mov     [r15+88h], rsi
 * 00000001800594C3: xorps   xmm0, xmm0
 * 00000001800594C6: movups  xmmword ptr [r15+0A8h], xmm0
 * 00000001800594CE: mov     [r15+0B8h], esi
 * 00000001800594D5: mov     [r15+0BCh], esi
 * 00000001800594DC: lea     r12, [r15+0C0h]
 * 00000001800594E3: mov     [rbp+1180h+var_1168], r12
 * 00000001800594E7: mov     [r12], esi
 * 00000001800594EB: mov     [r15+0C8h], rsi
 * 00000001800594F2: mov     [r15+0D0h], rsi
 * 00000001800594F9: mov     [r15+0D8h], sil
 * 0000000180059500: mov     [r15+0D9h], sil
 * 0000000180059507: mov     [r15+0DAh], sil
 * 000000018005950E: mov     [r15+0DCh], esi
 * 0000000180059515: mov     [r15+0E0h], rsi
 * 000000018005951C: mov     [r15+0E8h], rsi
 * 0000000180059523: mov     [r15+0F0h], rsi
 * 000000018005952A: mov     [r15+0F8h], rsi
 * 0000000180059531: xor     eax, eax
 * 0000000180059533: mov     [r15+100h], rax
 * 000000018005953A: mov     [r15+108h], al
 * 0000000180059541: mov     [r15+109h], al
 * 0000000180059548: lea     rcx, [r15+110h]; void *
 * 000000018005954F: lea     rax, ??1CommonSpatialTechInfo@AtmosCheck@@QEAA@XZ; AtmosCheck::CommonSpatialTechInfo::~CommonSpatialTechInfo(void)
 * 0000000180059556: mov     [rsp+1280h+var_1260], rax; void (*)(void *)
 * 000000018005955B: lea     r9, ??0CommonSpatialTechInfo@AtmosCheck@@QEAA@XZ; void (*)(void *)
 * 0000000180059562: lea     edx, [rsi+30h]; unsigned __int64
 * 0000000180059565: lea     r8d, [rsi+7]; unsigned __int64
 * 0000000180059569: call    ??_L@YAXPEAX_K1P6AX0@Z2@Z; `eh vector constructor iterator'(void *,unsigned __int64,unsigned __int64,void (*)(void *),void (*)(void *))
 * 000000018005956E: nop
 * 000000018005956F: lea     rdi, [r15+260h]
 * 0000000180059576: mov     [rsp+1280h+lpMem], rdi
 * 000000018005957B: xorps   xmm0, xmm0
 * 000000018005957E: movss   [rbp+1180h+var_1118], xmm0
 * 0000000180059583: mov     eax, [rbp+1180h+var_1118]
 * 0000000180059586: mov     [rdi], eax
 * 0000000180059588: mov     [rdi+8], rsi
 * 000000018005958C: mov     [rdi+10h], rsi
 * 0000000180059590: mov     r14d, 38h ; '8'
 * 0000000180059596: mov     ecx, r14d
 * 0000000180059599: call    ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z; std::_Allocate<16,std::_Default_allocate_traits,0>(unsigned __int64)
 * 000000018005959E: mov     [rax], rax
 * 00000001800595A1: mov     [rax+8], rax
 * 00000001800595A5: mov     [rdi+8], rax
 * 00000001800595A9: lea     rcx, [rdi+18h]
 * 00000001800595AD: mov     [rcx], rsi
 * 00000001800595B0: mov     [rcx+8], rsi
 * 00000001800595B4: mov     [rcx+10h], rsi
 * 00000001800595B8: mov     qword ptr [rdi+30h], 7
 * 00000001800595C0: mov     qword ptr [rdi+38h], 8
 * 00000001800595C8: mov     dword ptr [rdi], 3F800000h
 * 00000001800595CE: mov     r8, [rdi+8]
 * 00000001800595D2: lea     edx, [rsi+10h]
 * 00000001800595D5: call    ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@@Z; std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>>>>>>::_Assign_grow(unsigned __int64,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>>>>)
 * 00000001800595DA: nop
 * 00000001800595DB: mov     [r15+2A0h], rsi
 * 00000001800595E2: mov     [r15+2A8h], rsi
 * 00000001800595E9: mov     [r15+2B0h], rsi
 * 00000001800595F0: mov     [r15+2B8h], sil
 * 00000001800595F7: mov     [r15+90h], rsi
 * 00000001800595FE: mov     [r15+98h], rsi
 * 0000000180059605: mov     [r15+0A0h], rsi
 * 000000018005960C: mov     [rbp+1180h+var_F88], rsi
 * 0000000180059613: test    r12, r12
 * 0000000180059616: jz      short loc_18005964C
 * 0000000180059618: mov     r13d, esi
 * 000000018005961B: mov     [rbp+1180h+var_10C8], esi
 * 0000000180059621: mov     [rbp+1180h+var_1148], rsi
 * 0000000180059625: mov     edi, esi
 * 0000000180059627: mov     [rbp+1180h+var_1138], esi
 * 000000018005962A: lea     ecx, [rsi+1]
 * 000000018005962D: jmp     loc_1800ABCB2
 * 0000000180059632: cmp     r13d, 4
 * 0000000180059636: jnz     short loc_18005964C
 * 0000000180059638: mov     rcx, [rbp+1180h+var_F88]
 * 000000018005963F: test    rcx, rcx
 * 0000000180059642: cmovz   rcx, r14
 * 0000000180059646: mov     edx, [rcx]
 * 0000000180059648: mov     [r12], edx
 * 000000018005964C: lea     rcx, [rbp+1180h+var_F88]
 * 0000000180059653: call    ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ; SP<uchar,SP_HLOCAL<uchar>>::Reset(void)
 * 0000000180059658: nop
 * 0000000180059659: mov     rax, r15
 * 000000018005965C: mov     rcx, [rbp+1180h+var_30]
 * 0000000180059663: xor     rcx, rsp; StackCookie
 * 0000000180059666: call    __security_check_cookie
 * 000000018005966B: lea     r11, [rsp+1280h+var_20]
 * 0000000180059673: mov     rbx, [r11+38h]
 * 0000000180059677: mov     rsi, [r11+40h]
 * 000000018005967B: mov     rdi, [r11+48h]
 * 000000018005967F: mov     rsp, r11
 * 0000000180059682: pop     r15
 * 0000000180059684: pop     r14
 * 0000000180059686: pop     r13
 * 0000000180059688: pop     r12
 * 000000018005968A: pop     rbp
 * 000000018005968B: retn
 * 00000001800ABCB2: xor     eax, eax
 * 00000001800ABCB4: lock cmpxchg cs:dword_1801C2A58, ecx
 * 00000001800ABCBC: jnz     short loc_1800ABCB2
 * 00000001800ABCBE: mov     ebx, 4
 * 00000001800ABCC3: mov     [rbp+1180h+var_EA0], rbx
 * 00000001800ABCCA: mov     [rbp+1180h+var_1134], 0FFFFFFFFh
 * 00000001800ABCD1: mov     eax, cs:dword_1801C23F0
 * 00000001800ABCD7: test    eax, eax
 * 00000001800ABCD9: jnz     loc_1800AC2D4
 * 00000001800ABCDF: mov     [rbp+1180h+var_11E8], esi
 * 00000001800ABCE2: mov     dword ptr [rbp+1180h+var_11B0], esi
 * 00000001800ABCE5: xor     eax, eax
 * 00000001800ABCE7: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ABCEA: mov     ecx, 338h; unsigned __int64
 * 00000001800ABCEF: call    ??2@YAPEAX_K@Z; operator new(unsigned __int64)
 * 00000001800ABCF4: mov     rbx, rax
 * 00000001800ABCF7: mov     [rsp+1280h+lpMem], rax
 * 00000001800ABCFC: test    rax, rax
 * 00000001800ABCFF: jz      loc_1800AC0D6
 * 00000001800ABD05: xor     eax, eax
 * 00000001800ABD07: mov     esi, eax
 * 00000001800ABD09: mov     [rbp+1180h+var_11D8], 0FFFFFFFFh
 * 00000001800ABD10: mov     r11d, eax
 * 00000001800ABD13: mov     r10d, eax
 * 00000001800ABD16: lea     r15, [rbx+7]
 * 00000001800ABD1A: lea     r12, unk_180181002
 * 00000001800ABD21: lea     r13d, [rax+67h]
 * 00000001800ABD25: mov     ebx, [rbp+1180h+var_11D8]
 * 00000001800ABD28: movzx   r9d, byte ptr [r12-2]
 * 00000001800ABD2E: shl     r9d, 8
 * 00000001800ABD32: movzx   eax, byte ptr [r12-1]
 * 00000001800ABD38: or      r9d, eax
 * 00000001800ABD3B: shl     r9d, 8
 * 00000001800ABD3F: movzx   eax, byte ptr [r12]
 * 00000001800ABD44: or      r9d, eax
 * 00000001800ABD47: shl     r9d, 8
 * 00000001800ABD4B: movzx   eax, byte ptr [r12+1]
 * 00000001800ABD51: or      r9d, eax
 * 00000001800ABD54: movzx   r8d, byte ptr [r12+2]
 * 00000001800ABD5A: shl     r8d, 8
 * 00000001800ABD5E: movzx   eax, byte ptr [r12+3]
 * 00000001800ABD64: or      r8d, eax
 * 00000001800ABD67: shl     r8d, 8
 * 00000001800ABD6B: movzx   eax, byte ptr [r12+4]
 * 00000001800ABD71: or      r8d, eax
 * 00000001800ABD74: shl     r8d, 8
 * 00000001800ABD78: movzx   eax, byte ptr [r12+5]
 * 00000001800ABD7E: or      r8d, eax
 * 00000001800ABD81: xor     r10d, r9d
 * 00000001800ABD84: lea     r12, [r12+8]
 * 00000001800ABD89: mov     edi, r8d
 * 00000001800ABD8C: xor     edi, r11d
 * 00000001800ABD8F: xor     edi, r10d
 * 00000001800ABD92: xor     edi, 0AC987321h
 * 00000001800ABD98: lea     eax, [rdi+54969FA2h]
 * 00000001800ABD9E: rol     eax, 5
 * 00000001800ABDA1: mov     ecx, edi
 * 00000001800ABDA3: rol     ecx, 0Ah
 * 00000001800ABDA6: imul    eax, 137Fh
 * 00000001800ABDAC: add     ecx, eax
 * 00000001800ABDAE: xor     r10d, ecx
 * 00000001800ABDB1: lea     ecx, [r10+7F1137Fh]
 * 00000001800ABDB8: ror     ecx, 9
 * 00000001800ABDBB: mov     eax, r10d
 * 00000001800ABDBE: rol     eax, 2
 * 00000001800ABDC1: imul    ecx, 0AB69h
 * 00000001800ABDC7: sub     ecx, eax
 * 00000001800ABDC9: xor     edi, ecx
 * 00000001800ABDCB: mov     eax, edi
 * 00000001800ABDCD: shr     eax, 0Dh
 * 00000001800ABDD0: imul    ecx, edi, 605Eh
 * 00000001800ABDD6: sub     ecx, eax
 * 00000001800ABDD8: sub     ecx, 756C8A2h
 * 00000001800ABDDE: xor     r10d, ecx
 * 00000001800ABDE1: mov     ecx, r10d
 * 00000001800ABDE4: xor     ecx, 0AB69h
 * 00000001800ABDEA: rol     ecx, 6
 * 00000001800ABDED: mov     eax, r10d
 * 00000001800ABDF0: rol     eax, 2
 * 00000001800ABDF3: imul    ecx, 7F1h
 * 00000001800ABDF9: sub     ecx, eax
 * 00000001800ABDFB: xor     edi, ecx
 * 00000001800ABDFD: mov     eax, edi
 * 00000001800ABDFF: xor     eax, 0AB69605Eh
 * 00000001800ABE04: mov     ecx, 7F1137Fh
 * 00000001800ABE09: sub     ecx, eax
 * 00000001800ABE0B: xor     r10d, ecx
 * 00000001800ABE0E: mov     edx, r10d
 * 00000001800ABE11: ror     edx, 6
 * 00000001800ABE14: mov     eax, r10d
 * 00000001800ABE17: xor     eax, 137Fh
 * 00000001800ABE1C: imul    ecx, eax, 0AB69h
 * 00000001800ABE22: xor     edx, ecx
 * 00000001800ABE24: xor     edi, edx
 * 00000001800ABE26: lea     eax, [rdi+7F1137Fh]
 * 00000001800ABE2C: ror     eax, 0Fh
 * 00000001800ABE2F: mov     ecx, edi
 * 00000001800ABE31: rol     ecx, 2
 * 00000001800ABE34: imul    eax, 605Eh
 * 00000001800ABE3A: add     ecx, eax
 * 00000001800ABE3C: xor     r10d, ecx
 * 00000001800ABE3F: lea     ecx, [r10+54969FA2h]
 * 00000001800ABE46: ror     ecx, 0Eh
 * 00000001800ABE49: mov     eax, r10d
 * 00000001800ABE4C: rol     eax, 8
 * 00000001800ABE4F: imul    ecx, 7F1h
 * 00000001800ABE55: sub     ecx, eax
 * 00000001800ABE57: xor     edi, ecx
 * 00000001800ABE59: mov     eax, edi
 * 00000001800ABE5B: xor     eax, 0AB69605Eh
 * 00000001800ABE60: ror     eax, 0Ch
 * 00000001800ABE63: mov     ecx, edi
 * 00000001800ABE65: ror     ecx, 0Ah
 * 00000001800ABE68: imul    eax, 137Fh
 * 00000001800ABE6E: xor     ecx, eax
 * 00000001800ABE70: xor     r10d, ecx
 * 00000001800ABE73: mov     eax, r10d
 * 00000001800ABE76: xor     eax, 7F1h
 * 00000001800ABE7B: imul    ecx, eax, 0AB69h
 * 00000001800ABE81: mov     eax, r10d
 * 00000001800ABE84: shr     eax, 0Ah
 * 00000001800ABE87: xor     ecx, eax
 * 00000001800ABE89: xor     ecx, edi
 * 00000001800ABE8B: mov     eax, ecx
 * 00000001800ABE8D: not     eax
 * 00000001800ABE8F: ror     eax, 5
 * 00000001800ABE92: add     eax, 605Eh
 * 00000001800ABE97: imul    eax, 7F1h
 * 00000001800ABE9D: xor     r10d, eax
 * 00000001800ABEA0: lea     r11d, [r10-7F1h]
 * 00000001800ABEA7: xor     r11d, ecx
 * 00000001800ABEAA: xor     r11d, 0AB69605Eh
 * 00000001800ABEB1: mov     eax, r11d
 * 00000001800ABEB4: xor     eax, 7F1h
 * 00000001800ABEB9: rol     eax, 2
 * 00000001800ABEBC: imul    ecx, eax, 137Fh
 * 00000001800ABEC2: mov     eax, r11d
 * 00000001800ABEC5: shr     eax, 2
 * 00000001800ABEC8: add     ecx, eax
 * 00000001800ABECA: xor     r10d, ecx
 * 00000001800ABECD: lea     eax, [r10-7F1137Fh]
 * 00000001800ABED4: ror     eax, 6
 * 00000001800ABED7: mov     ecx, r10d
 * 00000001800ABEDA: rol     ecx, 7
 * 00000001800ABEDD: imul    eax, 0AB69h
 * 00000001800ABEE3: add     ecx, eax
 * 00000001800ABEE5: xor     r11d, ecx
 * 00000001800ABEE8: mov     edx, r11d
 * 00000001800ABEEB: ror     edx, 9
 * 00000001800ABEEE: mov     eax, r11d
 * 00000001800ABEF1: xor     eax, 137Fh
 * 00000001800ABEF6: imul    ecx, eax, 605Eh
 * 00000001800ABEFC: add     edx, ecx
 * 00000001800ABEFE: xor     r10d, edx
 * 00000001800ABF01: mov     eax, r10d
 * 00000001800ABF04: xor     eax, 0AB69h
 * 00000001800ABF09: rol     eax, 5
 * 00000001800ABF0C: mov     ecx, r10d
 * 00000001800ABF0F: rol     ecx, 7
 * 00000001800ABF12: imul    eax, 7F1h
 * 00000001800ABF18: add     ecx, eax
 * 00000001800ABF1A: xor     r11d, ecx
 * 00000001800ABF1D: xor     r10d, r11d
 * 00000001800ABF20: xor     r10d, 0AC987321h
 * 00000001800ABF27: mov     eax, r10d
 * 00000001800ABF2A: ror     eax, 3
 * 00000001800ABF2D: imul    ecx, eax, 137Fh
 * 00000001800ABF33: sub     ecx, 0D0DD417h
 * 00000001800ABF39: xor     r11d, ecx
 * 00000001800ABF3C: lea     ecx, [r11-7F1137Fh]
 * 00000001800ABF43: ror     ecx, 1
 * 00000001800ABF45: mov     eax, r11d
 * 00000001800ABF48: ror     eax, 6
 * 00000001800ABF4B: imul    ecx, 605Eh
 * 00000001800ABF51: sub     ecx, eax
 * 00000001800ABF53: xor     r10d, ecx
 * 00000001800ABF56: lea     eax, [r10-54969FA2h]
 * 00000001800ABF5D: rol     eax, 3
 * 00000001800ABF60: mov     ecx, r10d
 * 00000001800ABF63: rol     ecx, 0Eh
 * 00000001800ABF66: imul    eax, 7F1h
 * 00000001800ABF6C: add     ecx, eax
 * 00000001800ABF6E: xor     r11d, ecx
 * 00000001800ABF71: lea     ecx, [r11-54969FA2h]
 * 00000001800ABF78: rol     ecx, 0Fh
 * 00000001800ABF7B: mov     eax, r11d
 * 00000001800ABF7E: ror     eax, 0Eh
 * 00000001800ABF81: imul    ecx, 137Fh
 * 00000001800ABF87: sub     ecx, eax
 * 00000001800ABF89: xor     r10d, ecx
 * 00000001800ABF8C: mov     eax, r10d
 * 00000001800ABF8F: xor     eax, 605Eh
 * 00000001800ABF94: imul    ecx, eax, 0AB69h
 * 00000001800ABF9A: mov     eax, r10d
 * 00000001800ABF9D: shr     eax, 3
 * 00000001800ABFA0: xor     ecx, eax
 * 00000001800ABFA2: xor     r11d, ecx
 * 00000001800ABFA5: mov     eax, r11d
 * 00000001800ABFA8: xor     eax, 7F1137Fh
 * 00000001800ABFAD: rol     eax, 4
 * 00000001800ABFB0: mov     ecx, r11d
 * 00000001800ABFB3: rol     ecx, 2
 * 00000001800ABFB6: imul    eax, 605Eh
 * 00000001800ABFBC: xor     ecx, eax
 * 00000001800ABFBE: xor     ecx, esi
 * 00000001800ABFC0: xor     r10d, ecx
 * 00000001800ABFC3: xor     r11d, ebx
 * 00000001800ABFC6: mov     [r15-4], r10b
 * 00000001800ABFCA: ror     r10d, 8
 * 00000001800ABFCE: mov     [r15], r11b
 * 00000001800ABFD1: ror     r11d, 8
 * 00000001800ABFD5: mov     [r15-5], r10b
 * 00000001800ABFD9: ror     r10d, 8
 * 00000001800ABFDD: mov     [r15-1], r11b
 * 00000001800ABFE1: ror     r11d, 8
 * 00000001800ABFE5: mov     [r15-6], r10b
 * 00000001800ABFE9: ror     r10d, 8
 * 00000001800ABFED: mov     [r15-2], r11b
 * 00000001800ABFF1: ror     r11d, 8
 * 00000001800ABFF5: mov     [r15-7], r10b
 * 00000001800ABFF9: mov     [r15-3], r11b
 * 00000001800ABFFD: ror     r10d, 8
 * 00000001800AC001: ror     r11d, 8
 * 00000001800AC005: mov     esi, r9d
 * 00000001800AC008: mov     ebx, r8d
 * 00000001800AC00B: lea     r15, [r15+8]
 * 00000001800AC00F: sub     r13, 1
 * 00000001800AC013: jnz     loc_1800ABD28
 * 00000001800AC019: xor     eax, eax
 * 00000001800AC01B: xorps   xmm1, xmm1
 * 00000001800AC01E: xorps   xmm2, xmm2
 * 00000001800AC021: mov     r15, [rbp+1180h+var_1128]
 * 00000001800AC025: mov     r12, [rbp+1180h+var_1168]
 * 00000001800AC029: mov     r13d, eax
 * 00000001800AC02C: mov     rbx, [rsp+1280h+lpMem]
 * 00000001800AC031: mov     esi, eax
 * 00000001800AC033: movdqu  xmm0, xmmword ptr [rax+rbx]
 * 00000001800AC038: pxor    xmm1, xmm0
 * 00000001800AC03C: movdqu  xmm0, xmmword ptr [rax+rbx+10h]
 * 00000001800AC042: pxor    xmm0, xmm2
 * 00000001800AC046: movdqa  xmm2, xmm0
 * 00000001800AC04A: add     rax, 20h ; ' '
 * 00000001800AC04E: cmp     rax, 320h
 * 00000001800AC054: jb      short loc_1800AC033
 * 00000001800AC056: pxor    xmm1, xmm0
 * 00000001800AC05A: movdqa  xmm0, xmm1
 * 00000001800AC05E: psrldq  xmm0, 8
 * 00000001800AC063: pxor    xmm1, xmm0
 * 00000001800AC067: movdqa  xmm0, xmm1
 * 00000001800AC06B: psrldq  xmm0, 4
 * 00000001800AC070: pxor    xmm1, xmm0
 * 00000001800AC074: movdqa  xmm0, xmm1
 * 00000001800AC078: psrldq  xmm0, 2
 * 00000001800AC07D: pxor    xmm1, xmm0
 * 00000001800AC081: movdqa  xmm0, xmm1
 * 00000001800AC085: psrldq  xmm0, 1
 * 00000001800AC08A: pxor    xmm1, xmm0
 * 00000001800AC08E: movd    ecx, xmm1
 * 00000001800AC092: cmp     rax, 338h
 * 00000001800AC098: jnb     short loc_1800AC0A8
 * 00000001800AC09A: xor     cl, [rax+rbx]
 * 00000001800AC09D: inc     rax
 * 00000001800AC0A0: cmp     rax, 338h
 * 00000001800AC0A6: jb      short loc_1800AC09A
 * 00000001800AC0A8: movzx   eax, cl
 * 00000001800AC0AB: cmp     rax, cs:qword_180181338
 * 00000001800AC0B2: jz      short loc_1800AC133
 * 00000001800AC0B4: call    cs:__imp_GetProcessHeap
 * 00000001800AC0BB: nop     dword ptr [rax+rax+00h]
 * 00000001800AC0C0: mov     rcx, rax; hHeap
 * 00000001800AC0C3: mov     r8, rbx; lpMem
 * 00000001800AC0C6: xor     edx, edx; dwFlags
 * 00000001800AC0C8: call    cs:__imp_HeapFree
 * 00000001800AC0CF: nop     dword ptr [rax+rax+00h]
 * 00000001800AC0D4: mov     edi, esi
 * 00000001800AC0D6: lea     rbx, unk_1801C29C0
 * 00000001800AC0DD: mov     esi, 4
 * 00000001800AC0E2: mov     rcx, [rbx]; hLibModule
 * 00000001800AC0E5: test    rcx, rcx
 * 00000001800AC0E8: jz      short loc_1800AC0F6
 * 00000001800AC0EA: call    cs:__imp_FreeLibrary
 * 00000001800AC0F1: nop     dword ptr [rax+rax+00h]
 * 00000001800AC0F6: add     rbx, 18h
 * 00000001800AC0FA: sub     rsi, 1
 * 00000001800AC0FE: jnz     short loc_1800AC0E2
 * 00000001800AC100: xor     edx, edx; Val
 * 00000001800AC102: lea     r8d, [rsi+60h]; Size
 * 00000001800AC106: lea     rcx, unk_1801C29C0; void *
 * 00000001800AC10D: call    memset_0
 * 00000001800AC112: mov     r8d, 170h; Size
 * 00000001800AC118: lea     rdx, off_18016CF50; Src
 * 00000001800AC11F: lea     rcx, off_1801C0000; void *
 * 00000001800AC126: call    memcpy_0
 * 00000001800AC12B: lea     ebx, [rsi+4]
 * 00000001800AC12E: jmp     loc_1800AC2DC
 * 00000001800AC133: mov     rdi, rbx
 * 00000001800AC136: mov     [rbx+337h], sil
 * 00000001800AC13D: xor     edx, edx; Val
 * 00000001800AC13F: lea     r8d, [rdx+60h]; Size
 * 00000001800AC143: lea     rcx, unk_1801C29C0; void *
 * 00000001800AC14A: call    memset_0
 * 00000001800AC14F: cmp     [rbx], sil
 * 00000001800AC152: jz      loc_1800AC29C
 * 00000001800AC158: mov     rdx, rdi; lpModuleName
 * 00000001800AC15B: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800AC162: lea     rax, [rax+1]
 * 00000001800AC166: cmp     [rdi+rax*2], r13w
 * 00000001800AC16B: jnz     short loc_1800AC162
 * 00000001800AC16D: lea     rdi, [rdi+rax*2]
 * 00000001800AC171: mov     eax, dword ptr [rbp+1180h+var_1140]
 * 00000001800AC174: lea     rcx, [rax+rax*2]
 * 00000001800AC178: lea     rax, unk_1801C29C0
 * 00000001800AC17F: lea     r8, [rax+rcx*8]; phModule
 * 00000001800AC183: mov     [rsp+1280h+lpMem], r8
 * 00000001800AC188: xor     ecx, ecx; dwFlags
 * 00000001800AC18A: call    cs:__imp_GetModuleHandleExW
 * 00000001800AC191: nop     dword ptr [rax+rax+00h]
 * 00000001800AC196: test    eax, eax
 * 00000001800AC198: jz      loc_1800AC297
 * 00000001800AC19E: xor     edx, edx
 * 00000001800AC1A0: mov     esi, edx
 * 00000001800AC1A2: mov     r8, [rsp+1280h+lpMem]
 * 00000001800AC1A7: mov     rax, [r8]
 * 00000001800AC1AA: mov     ecx, 5A4Dh
 * 00000001800AC1AF: cmp     [rax], cx
 * 00000001800AC1B2: jz      short loc_1800AC1BB
 * 00000001800AC1B4: mov     esi, 0C000007Bh
 * 00000001800AC1B9: jmp     short loc_1800AC21F
 * 00000001800AC1BB: movsxd  rcx, dword ptr [rax+3Ch]
 * 00000001800AC1BF: cmp     ecx, 10000000h
 * 00000001800AC1C5: jb      short loc_1800AC1CE
 * 00000001800AC1C7: mov     esi, 0C000007Bh
 * 00000001800AC1CC: jmp     short loc_1800AC21F
 * 00000001800AC1CE: add     rcx, [r8]
 * 00000001800AC1D1: cmp     rcx, [r8]
 * 00000001800AC1D4: jnb     short loc_1800AC1DD
 * 00000001800AC1D6: mov     esi, 0C000007Bh
 * 00000001800AC1DB: jmp     short loc_1800AC21F
 * 00000001800AC1DD: cmp     dword ptr [rcx], 4550h
 * 00000001800AC1E3: jz      short loc_1800AC1EC
 * 00000001800AC1E5: mov     esi, 0C000007Bh
 * 00000001800AC1EA: jmp     short loc_1800AC21F
 * 00000001800AC1EC: movzx   eax, word ptr [rcx+18h]
 * 00000001800AC1F0: mov     r9d, 10Bh
 * 00000001800AC1F6: sub     ax, r9w
 * 00000001800AC1FA: mov     r9d, 0FEFFh
 * 00000001800AC200: test    r9w, ax
 * 00000001800AC204: jz      short loc_1800AC20D
 * 00000001800AC206: mov     esi, 0C000000Dh
 * 00000001800AC20B: jmp     short loc_1800AC21F
 * 00000001800AC20D: mov     rax, [rcx+88h]
 * 00000001800AC214: mov     [r8+0Ch], rax
 * 00000001800AC218: mov     eax, [rcx+50h]
 * 00000001800AC21B: mov     [r8+8], eax
 * 00000001800AC21F: mov     eax, [rdi+2]
 * 00000001800AC222: mov     [rbp+1180h+var_11D8], eax
 * 00000001800AC225: add     rdi, 6
 * 00000001800AC229: mov     ecx, edx
 * 00000001800AC22B: mov     dword ptr [rbp+1180h+var_11B0], edx
 * 00000001800AC22E: test    eax, eax
 * 00000001800AC230: jz      short loc_1800AC289
 * 00000001800AC232: mov     rdx, rdi; lpProcName
 * 00000001800AC235: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800AC23C: inc     rax
 * 00000001800AC23F: cmp     [rdi+rax], r13b
 * 00000001800AC243: jnz     short loc_1800AC23C
 * 00000001800AC245: inc     rdi
 * 00000001800AC248: add     rdi, rax
 * 00000001800AC24B: test    esi, esi
 * 00000001800AC24D: js      short loc_1800AC27C
 * 00000001800AC24F: mov     rcx, [r8]; hModule
 * 00000001800AC252: call    cs:__imp_GetProcAddress
 * 00000001800AC259: nop     dword ptr [rax+rax+00h]
 * 00000001800AC25E: mov     rcx, rax
 * 00000001800AC261: test    rax, rax
 * 00000001800AC264: jz      short loc_1800AC29C
 * 00000001800AC266: mov     eax, [rbp+1180h+var_11E8]
 * 00000001800AC269: lea     rdx, off_1801C0000
 * 00000001800AC270: mov     [rdx+rax*8], rcx
 * 00000001800AC274: mov     r8, [rsp+1280h+lpMem]
 * 00000001800AC279: mov     ecx, dword ptr [rbp+1180h+var_11B0]
 * 00000001800AC27C: inc     [rbp+1180h+var_11E8]
 * 00000001800AC27F: inc     ecx
 * 00000001800AC281: mov     dword ptr [rbp+1180h+var_11B0], ecx
 * 00000001800AC284: cmp     ecx, [rbp+1180h+var_11D8]
 * 00000001800AC287: jb      short loc_1800AC232
 * 00000001800AC289: inc     dword ptr [rbp+1180h+var_1140]
 * 00000001800AC28C: cmp     [rdi], r13b
 * 00000001800AC28F: jnz     loc_1800AC158
 * 00000001800AC295: jmp     short loc_1800AC29C
 * 00000001800AC297: mov     esi, 0C000007Ah
 * 00000001800AC29C: call    cs:__imp_GetProcessHeap
 * 00000001800AC2A3: nop     dword ptr [rax+rax+00h]
 * 00000001800AC2A8: mov     r8, rbx; lpMem
 * 00000001800AC2AB: xor     edx, edx; dwFlags
 * 00000001800AC2AD: mov     rcx, rax; hHeap
 * 00000001800AC2B0: call    cs:__imp_HeapFree
 * 00000001800AC2B7: nop     dword ptr [rax+rax+00h]
 * 00000001800AC2BC: mov     edi, r13d
 * 00000001800AC2BF: test    esi, esi
 * 00000001800AC2C1: js      loc_1800AC0D6
 * 00000001800AC2C7: mov     eax, cs:dword_1801C23F0
 * 00000001800AC2CD: mov     ebx, 4
 * 00000001800AC2D2: xor     esi, esi
 * 00000001800AC2D4: inc     eax
 * 00000001800AC2D6: mov     cs:dword_1801C23F0, eax
 * 00000001800AC2DC: mov     eax, esi
 * 00000001800AC2DE: xchg    eax, cs:dword_1801C2A58
 * 00000001800AC2E4: mov     [rbp+1180h+String1], rsi
 * 00000001800AC2EB: mov     [rbp+1180h+var_FF8], rsi
 * 00000001800AC2F2: mov     [rbp+1180h+var_11D8], esi
 * 00000001800AC2F5: mov     rax, gs:60h
 * 00000001800AC2FE: cmp     dword ptr [rax+2C0h], 0
 * 00000001800AC305: jz      loc_1800AC64D
 * 00000001800AC30B: mov     r10, 0F6DDAF373053F870h
 * 00000001800AC315: mov     rax, cs:off_1801C0110
 * 00000001800AC31C: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800AC322: mov     [rsp+1280h+lpMem], rax
 * 00000001800AC327: test    rax, rax
 * 00000001800AC32A: jz      loc_1800AC625
 * 00000001800AC330: xor     esi, esi
 * 00000001800AC332: mov     [rbp+1180h+var_FF0], rsi
 * 00000001800AC339: mov     r9d, esi
 * 00000001800AC33C: mov     ebx, esi
 * 00000001800AC33E: test    rbx, rbx
 * 00000001800AC341: mov     r8, rsi
 * 00000001800AC344: jz      short loc_1800AC349
 * 00000001800AC346: mov     r8, rbx
 * 00000001800AC349: mov     r10, 0E8A8076F5454D170h
 * 00000001800AC353: lea     rcx, [rbp+1180h+var_10C4]
 * 00000001800AC35A: mov     [rsp+1280h+var_1260], rcx
 * 00000001800AC35F: mov     edx, 2
 * 00000001800AC364: mov     rcx, rax
 * 00000001800AC367: mov     rax, cs:off_1801C0130
 * 00000001800AC36E: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800AC374: test    eax, eax
 * 00000001800AC376: jnz     loc_1800AC44A
 * 00000001800AC37C: call    cs:__imp_GetLastError
 * 00000001800AC383: nop     dword ptr [rax+rax+00h]
 * 00000001800AC388: mov     esi, eax
 * 00000001800AC38A: cmp     eax, 7Ah ; 'z'
 * 00000001800AC38D: jnz     loc_1800AC415
 * 00000001800AC393: test    rbx, rbx
 * 00000001800AC396: jnz     short loc_1800AC3DA
 * 00000001800AC398: mov     ecx, dword ptr [rbp+1180h+var_10C4]; unsigned __int64
 * 00000001800AC39E: call    ??2@YAPEAX_K@Z; operator new(unsigned __int64)
 * 00000001800AC3A3: mov     rbx, rax
 * 00000001800AC3A6: lea     rcx, [rbp+1180h+var_FF0]
 * 00000001800AC3AD: call    ?Reset@?$SP@GV?$SP_MEM@G@@@@QEAAXXZ; SP<ushort,SP_MEM<ushort>>::Reset(void)
 * 00000001800AC3B2: xor     esi, esi
 * 00000001800AC3B4: test    rbx, rbx
 * 00000001800AC3B7: jz      short loc_1800AC3D1
 * 00000001800AC3B9: mov     [rbp+1180h+var_FF0], rbx
 * 00000001800AC3C0: mov     r9d, dword ptr [rbp+1180h+var_10C4]
 * 00000001800AC3C7: mov     rax, [rsp+1280h+lpMem]
 * 00000001800AC3CC: jmp     loc_1800AC33E
 * 00000001800AC3D1: mov     [rbp+1180h+var_FF0], rsi
 * 00000001800AC3D8: jmp     short loc_1800AC3DC
 * 00000001800AC3DA: xor     esi, esi
 * 00000001800AC3DC: lea     rcx, [rbp+1180h+var_FF0]
 * 00000001800AC3E3: jmp     short loc_1800AC3EE
 * 00000001800AC3E5: xor     esi, esi
 * 00000001800AC3E7: lea     rcx, [rbp+1180h+var_FE8]
 * 00000001800AC3EE: call    ?Reset@?$SP@GV?$SP_MEM@G@@@@QEAAXXZ; SP<ushort,SP_MEM<ushort>>::Reset(void)
 * 00000001800AC3F3: lea     rcx, [rbp+1180h+var_FF8]
 * 00000001800AC3FA: call    ?Reset@?$SP@GV?$SP_MEM@G@@@@QEAAXXZ; SP<ushort,SP_MEM<ushort>>::Reset(void)
 * 00000001800AC3FF: lea     rcx, [rbp+1180h+String1]
 * 00000001800AC406: call    ?Reset@?$SP@GV?$SP_MEM@G@@@@QEAAXXZ; SP<ushort,SP_MEM<ushort>>::Reset(void)
 * 00000001800AC40B: mov     ebx, 4
 * 00000001800AC410: jmp     loc_1800AC684
 * 00000001800AC415: test    eax, eax
 * 00000001800AC417: jnz     short loc_1800AC420
 * 00000001800AC419: mov     esi, 80004005h
 * 00000001800AC41E: jmp     short loc_1800AC42B
 * 00000001800AC420: jle     short loc_1800AC42B
 * 00000001800AC422: movzx   esi, ax
 * 00000001800AC425: or      esi, 80070000h
 * 00000001800AC42B: lea     rcx, [rbp+1180h+var_FF0]
 * 00000001800AC432: call    ?Reset@?$SP@GV?$SP_MEM@G@@@@QEAAXXZ; SP<ushort,SP_MEM<ushort>>::Reset(void)
 * 00000001800AC437: test    esi, esi
 * 00000001800AC439: js      loc_1800AC661
 * 00000001800AC43F: mov     rbx, [rbp+1180h+String1]
 * 00000001800AC446: xor     esi, esi
 * 00000001800AC448: jmp     short loc_1800AC464
 * 00000001800AC44A: mov     [rbp+1180h+var_FF0], rsi
 * 00000001800AC451: mov     [rbp+1180h+String1], rbx
 * 00000001800AC458: lea     rcx, [rbp+1180h+var_FF0]
 * 00000001800AC45F: call    ?Reset@?$SP@GV?$SP_MEM@G@@@@QEAAXXZ; SP<ushort,SP_MEM<ushort>>::Reset(void)
 * 00000001800AC464: mov     rdi, cs:off_1801C0128
 * 00000001800AC46B: call    cs:__imp_GetCurrentThreadId
 * 00000001800AC472: nop     dword ptr [rax+rax+00h]
 * 00000001800AC477: mov     ecx, eax
 * 00000001800AC479: mov     r10, 0CB9036C510D00B70h
 * 00000001800AC483: mov     rax, rdi
 * 00000001800AC486: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800AC48C: mov     [rsp+1280h+lpMem], rax
 * 00000001800AC491: test    rax, rax
 * 00000001800AC494: jnz     short loc_1800AC4AC
 * 00000001800AC496: call    cs:__imp_GetLastError
 * 00000001800AC49D: nop     dword ptr [rax+rax+00h]
 * 00000001800AC4A2: mov     ebx, 4
 * 00000001800AC4A7: jmp     loc_1800AC633
 * 00000001800AC4AC: mov     [rbp+1180h+var_FE8], rsi
 * 00000001800AC4B3: mov     r9d, esi
 * 00000001800AC4B6: mov     rdi, rsi
 * 00000001800AC4B9: test    rdi, rdi
 * 00000001800AC4BC: mov     r8, rsi
 * 00000001800AC4BF: jz      short loc_1800AC4C4
 * 00000001800AC4C1: mov     r8, rdi
 * 00000001800AC4C4: mov     r10, 0E8A8076F5454D170h
 * 00000001800AC4CE: lea     rcx, [rbp+1180h+var_10BC]
 * 00000001800AC4D5: mov     [rsp+1280h+var_1260], rcx
 * 00000001800AC4DA: mov     edx, 2
 * 00000001800AC4DF: mov     rcx, rax
 * 00000001800AC4E2: mov     rax, cs:off_1801C0130
 * 00000001800AC4E9: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800AC4EF: test    eax, eax
 * 00000001800AC4F1: jnz     loc_1800AC58B
 * 00000001800AC4F7: call    cs:__imp_GetLastError
 * 00000001800AC4FE: nop     dword ptr [rax+rax+00h]
 * 00000001800AC503: mov     esi, eax
 * 00000001800AC505: cmp     eax, 7Ah ; 'z'
 * 00000001800AC508: jnz     short loc_1800AC558
 * 00000001800AC50A: test    rdi, rdi
 * 00000001800AC50D: jnz     loc_1800AC3E5
 * 00000001800AC513: mov     ecx, dword ptr [rbp+1180h+var_10BC]; unsigned __int64
 * 00000001800AC519: call    ??2@YAPEAX_K@Z; operator new(unsigned __int64)
 * 00000001800AC51E: mov     rdi, rax
 * 00000001800AC521: lea     rcx, [rbp+1180h+var_FE8]
 * 00000001800AC528: call    ?Reset@?$SP@GV?$SP_MEM@G@@@@QEAAXXZ; SP<ushort,SP_MEM<ushort>>::Reset(void)
 * 00000001800AC52D: xor     esi, esi
 * 00000001800AC52F: test    rdi, rdi
 * 00000001800AC532: jz      short loc_1800AC54C
 * 00000001800AC534: mov     [rbp+1180h+var_FE8], rdi
 * 00000001800AC53B: mov     r9d, dword ptr [rbp+1180h+var_10BC]
 * 00000001800AC542: mov     rax, [rsp+1280h+lpMem]
 * 00000001800AC547: jmp     loc_1800AC4B9
 * 00000001800AC54C: mov     [rbp+1180h+var_FE8], rsi
 * 00000001800AC553: jmp     loc_1800AC3E7
 * 00000001800AC558: test    eax, eax
 * 00000001800AC55A: jnz     short loc_1800AC563
 * 00000001800AC55C: mov     esi, 80004005h
 * 00000001800AC561: jmp     short loc_1800AC56E
 * 00000001800AC563: jle     short loc_1800AC56E
 * 00000001800AC565: movzx   esi, ax
 * 00000001800AC568: or      esi, 80070000h
 * 00000001800AC56E: lea     rcx, [rbp+1180h+var_FE8]
 * 00000001800AC575: call    ?Reset@?$SP@GV?$SP_MEM@G@@@@QEAAXXZ; SP<ushort,SP_MEM<ushort>>::Reset(void)
 * 00000001800AC57A: test    esi, esi
 * 00000001800AC57C: js      loc_1800AC65E
 * 00000001800AC582: mov     rdi, [rbp+1180h+var_FF8]
 * 00000001800AC589: jmp     short loc_1800AC5A5
 * 00000001800AC58B: mov     [rbp+1180h+var_FE8], rsi
 * 00000001800AC592: mov     [rbp+1180h+var_FF8], rdi
 * 00000001800AC599: lea     rcx, [rbp+1180h+var_FE8]
 * 00000001800AC5A0: call    ?Reset@?$SP@GV?$SP_MEM@G@@@@QEAAXXZ; SP<ushort,SP_MEM<ushort>>::Reset(void)
 * 00000001800AC5A5: test    rbx, rbx
 * 00000001800AC5A8: jz      loc_1800AC651
 * 00000001800AC5AE: lea     rdx, aWinsta0; "WinSta0"
 * 00000001800AC5B5: mov     rcx, rbx; String1
 * 00000001800AC5B8: call    wcscmp_0
 * 00000001800AC5BD: test    eax, eax
 * 00000001800AC5BF: jnz     loc_1800AC651
 * 00000001800AC5C5: test    rdi, rdi
 * 00000001800AC5C8: jz      loc_1800AC651
 * 00000001800AC5CE: lea     rdx, aDefault; "Default"
 * 00000001800AC5D5: mov     rcx, rdi; String1
 * 00000001800AC5D8: call    wcscmp_0
 * 00000001800AC5DD: test    eax, eax
 * 00000001800AC5DF: jnz     short loc_1800AC651
 * 00000001800AC5E1: xor     eax, eax
 * 00000001800AC5E3: mov     [rbp+1180h+var_112C], eax
 * 00000001800AC5E6: call    cs:__imp_GetCurrentProcess
 * 00000001800AC5ED: nop     dword ptr [rax+rax+00h]
 * 00000001800AC5F2: mov     rcx, rax
 * 00000001800AC5F5: mov     ebx, 4
 * 00000001800AC5FA: mov     r9d, ebx
 * 00000001800AC5FD: lea     r8, [rbp+1180h+var_112C]
 * 00000001800AC601: lea     edx, [rbx+7]
 * 00000001800AC604: call    cs:__imp_GetProcessMitigationPolicy
 * 00000001800AC60B: nop     dword ptr [rax+rax+00h]
 * 00000001800AC610: test    eax, eax
 * 00000001800AC612: jz      short loc_1800AC625
 * 00000001800AC614: test    byte ptr [rbp+1180h+var_112C], 0Fh
 * 00000001800AC618: mov     edi, [rbp+1180h+var_11D8]
 * 00000001800AC61B: mov     eax, 1
 * 00000001800AC620: cmovz   edi, eax
 * 00000001800AC623: jmp     short loc_1800AC659
 * 00000001800AC625: call    cs:__imp_GetLastError
 * 00000001800AC62C: nop     dword ptr [rax+rax+00h]
 * 00000001800AC631: xor     esi, esi
 * 00000001800AC633: lea     rcx, [rbp+1180h+var_FF8]
 * 00000001800AC63A: call    ?Reset@?$SP@GV?$SP_MEM@G@@@@QEAAXXZ; SP<ushort,SP_MEM<ushort>>::Reset(void)
 * 00000001800AC63F: lea     rcx, [rbp+1180h+String1]
 * 00000001800AC646: call    ?Reset@?$SP@GV?$SP_MEM@G@@@@QEAAXXZ; SP<ushort,SP_MEM<ushort>>::Reset(void)
 * 00000001800AC64B: jmp     short loc_1800AC684
 * 00000001800AC64D: mov     edi, esi
 * 00000001800AC64F: jmp     short loc_1800AC659
 * 00000001800AC651: mov     ebx, 4
 * 00000001800AC656: mov     edi, [rbp+1180h+var_11D8]
 * 00000001800AC659: mov     [rbp+1180h+var_1138], edi
 * 00000001800AC65C: jmp     short loc_1800AC666
 * 00000001800AC65E: mov     edi, [rbp+1180h+var_1138]
 * 00000001800AC661: mov     ebx, 4
 * 00000001800AC666: lea     rcx, [rbp+1180h+var_FF8]
 * 00000001800AC66D: call    ?Reset@?$SP@GV?$SP_MEM@G@@@@QEAAXXZ; SP<ushort,SP_MEM<ushort>>::Reset(void)
 * 00000001800AC672: lea     rcx, [rbp+1180h+String1]
 * 00000001800AC679: call    ?Reset@?$SP@GV?$SP_MEM@G@@@@QEAAXXZ; SP<ushort,SP_MEM<ushort>>::Reset(void)
 * 00000001800AC67E: test    esi, esi
 * 00000001800AC680: jns     short loc_1800AC68B
 * 00000001800AC682: xor     esi, esi
 * 00000001800AC684: mov     edi, esi
 * 00000001800AC686: mov     [rbp+1180h+var_1138], esi
 * 00000001800AC689: jmp     short loc_1800AC68D
 * 00000001800AC68B: xor     esi, esi
 * 00000001800AC68D: mov     rdx, rbx; uBytes
 * 00000001800AC690: mov     ecx, 40h ; '@'; uFlags
 * 00000001800AC695: call    cs:__imp_LocalAlloc
 * 00000001800AC69C: nop     dword ptr [rax+rax+00h]
 * 00000001800AC6A1: mov     rbx, rax
 * 00000001800AC6A4: mov     [rbp+1180h+var_11A0], rax
 * 00000001800AC6A8: lea     rcx, [rbp+1180h+var_1148]
 * 00000001800AC6AC: call    ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ; SP<uchar,SP_HLOCAL<uchar>>::Reset(void)
 * 00000001800AC6B1: test    rbx, rbx
 * 00000001800AC6B4: jnz     short loc_1800AC6CB
 * 00000001800AC6B6: xor     r14d, r14d
 * 00000001800AC6B9: mov     [rbp+1180h+var_1148], r14
 * 00000001800AC6BD: mov     edi, 8007000Eh
 * 00000001800AC6C2: lea     r11d, [rbx+4]
 * 00000001800AC6C6: jmp     loc_1800BBE56
 * 00000001800AC6CB: mov     [rbp+1180h+var_1148], rbx
 * 00000001800AC6CF: mov     [rsp+1280h+lpMem], rsi
 * 00000001800AC6D4: mov     [rbp+1180h+var_11D0], rsi
 * 00000001800AC6D8: xorps   xmm0, xmm0
 * 00000001800AC6DB: movups  xmmword ptr [rbp+1180h+Src], xmm0
 * 00000001800AC6E2: xorps   xmm1, xmm1
 * 00000001800AC6E5: movups  [rbp+1180h+var_D68], xmm1
 * 00000001800AC6EC: call    cs:__imp_GetProcessHeap
 * 00000001800AC6F3: nop     dword ptr [rax+rax+00h]
 * 00000001800AC6F8: mov     rcx, rax; hHeap
 * 00000001800AC6FB: mov     edx, 8; dwFlags
 * 00000001800AC700: mov     r8d, 0A0h; dwBytes
 * 00000001800AC706: call    cs:__imp_HeapAlloc
 * 00000001800AC70D: nop     dword ptr [rax+rax+00h]
 * 00000001800AC712: mov     rdx, rax
 * 00000001800AC715: mov     [rbp+1180h+var_11C8], rax
 * 00000001800AC719: mov     [rbp+1180h+var_11D8], 0C004D501h
 * 00000001800AC720: mov     rbx, 0C81ECB17B1B54A58h
 * 00000001800AC72A: mov     rsi, 7F1137FAB69605Eh
 * 00000001800AC734: lea     r10, __ImageBase
 * 00000001800AC73B: test    rax, rax
 * 00000001800AC73E: jnz     short loc_1800AC751
 * 00000001800AC740: mov     eax, 0C0000017h
 * 00000001800AC745: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AC748: lea     r11d, [rdx+4]
 * 00000001800AC74C: jmp     loc_1800AFDD0
 * 00000001800AC751: lea     rax, rva unk_1801C1910[r10]
 * 00000001800AC758: movups  xmm0, xmmword ptr [rax]
 * 00000001800AC75B: movups  xmmword ptr [rdx], xmm0
 * 00000001800AC75E: movups  xmm1, xmmword ptr [rax+10h]
 * 00000001800AC762: movups  xmmword ptr [rdx+10h], xmm1
 * 00000001800AC766: movups  xmm0, xmmword ptr [rax+20h]
 * 00000001800AC76A: movups  xmmword ptr [rdx+20h], xmm0
 * 00000001800AC76E: movups  xmm1, xmmword ptr [rax+30h]
 * 00000001800AC772: movups  xmmword ptr [rdx+30h], xmm1
 * 00000001800AC776: movups  xmm0, xmmword ptr [rax+40h]
 * 00000001800AC77A: movups  xmmword ptr [rdx+40h], xmm0
 * 00000001800AC77E: movups  xmm1, xmmword ptr [rax+50h]
 * 00000001800AC782: movups  xmmword ptr [rdx+50h], xmm1
 * 00000001800AC786: movups  xmm0, xmmword ptr [rax+60h]
 * 00000001800AC78A: movups  xmmword ptr [rdx+60h], xmm0
 * 00000001800AC78E: movups  xmm1, xmmword ptr [rax+70h]
 * 00000001800AC792: movups  xmmword ptr [rdx+70h], xmm1
 * 00000001800AC796: movups  xmm0, xmmword ptr [rax+80h]
 * 00000001800AC79D: movups  xmmword ptr [rdx+80h], xmm0
 * 00000001800AC7A4: movups  xmm1, xmmword ptr [rax+90h]
 * 00000001800AC7AB: movups  xmmword ptr [rdx+90h], xmm1
 * 00000001800AC7B2: mov     [rsp+1280h+lpMem], rdx
 * 00000001800AC7B7: call    cs:__imp_GetProcessHeap
 * 00000001800AC7BE: nop     dword ptr [rax+rax+00h]
 * 00000001800AC7C3: mov     rcx, rax; hHeap
 * 00000001800AC7C6: mov     edx, 8; dwFlags
 * 00000001800AC7CB: mov     r8d, edx; dwBytes
 * 00000001800AC7CE: call    cs:__imp_HeapAlloc
 * 00000001800AC7D5: nop     dword ptr [rax+rax+00h]
 * 00000001800AC7DA: mov     rcx, rax
 * 00000001800AC7DD: mov     [rbp+1180h+var_1180], rax
 * 00000001800AC7E1: mov     r11d, 4
 * 00000001800AC7E7: test    rax, rax
 * 00000001800AC7EA: jnz     short loc_1800AC7F9
 * 00000001800AC7EC: mov     eax, 0C0000017h
 * 00000001800AC7F1: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AC7F4: jmp     loc_1800AFDC9
 * 00000001800AC7F9: mov     rax, cs:qword_1801C1858
 * 00000001800AC800: mov     [rcx], rax
 * 00000001800AC803: mov     [rbp+1180h+var_11D0], rcx
 * 00000001800AC807: rdtsc
 * 00000001800AC809: shl     rdx, 20h
 * 00000001800AC80D: or      rax, rdx
 * 00000001800AC810: mov     [rbp+1180h+psz], rax
 * 00000001800AC814: xor     eax, eax
 * 00000001800AC816: mov     dword ptr [rbp+1180h+var_10BC+4], eax
 * 00000001800AC81C: lea     r8, [rbp+0CCh]
 * 00000001800AC823: mov     edx, r11d
 * 00000001800AC826: mov     ecx, r11d
 * 00000001800AC829: call    RtlUIntAdd
 * 00000001800AC82E: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AC831: test    eax, eax
 * 00000001800AC833: js      loc_1800AFDC9
 * 00000001800AC839: lea     r8, [rbp+1180h+var_10BC+4]
 * 00000001800AC840: mov     edx, [rbp+0CCh]
 * 00000001800AC846: xor     ecx, ecx
 * 00000001800AC848: call    RtlUIntAdd
 * 00000001800AC84D: or      eax, 10000000h
 * 00000001800AC852: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AC855: jl      loc_1800AFDC9
 * 00000001800AC85B: lea     r8, [rbp+1180h+var_1074+4]
 * 00000001800AC862: mov     edx, 0A0h
 * 00000001800AC867: mov     ecx, r11d
 * 00000001800AC86A: call    RtlUIntAdd
 * 00000001800AC86F: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AC872: test    eax, eax
 * 00000001800AC874: js      loc_1800AFDC9
 * 00000001800AC87A: lea     r8, [rbp+1180h+var_10BC+4]
 * 00000001800AC881: mov     edx, dword ptr [rbp+1180h+var_1074+4]
 * 00000001800AC887: mov     ecx, dword ptr [rbp+1180h+var_10BC+4]
 * 00000001800AC88D: call    RtlUIntAdd
 * 00000001800AC892: or      eax, 10000000h
 * 00000001800AC897: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AC89A: jl      loc_1800AFDC9
 * 00000001800AC8A0: lea     r8, [rbp+1180h+var_1048]
 * 00000001800AC8A7: mov     edx, 8
 * 00000001800AC8AC: mov     ecx, r11d
 * 00000001800AC8AF: call    RtlUIntAdd
 * 00000001800AC8B4: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AC8B7: test    eax, eax
 * 00000001800AC8B9: js      loc_1800AFDC9
 * 00000001800AC8BF: lea     r8, [rbp+1180h+var_10BC+4]
 * 00000001800AC8C6: mov     edx, [rbp+1180h+var_1048]
 * 00000001800AC8CC: mov     ecx, dword ptr [rbp+1180h+var_10BC+4]
 * 00000001800AC8D2: call    RtlUIntAdd
 * 00000001800AC8D7: or      eax, 10000000h
 * 00000001800AC8DC: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AC8DF: jl      loc_1800AFDC9
 * 00000001800AC8E5: lea     r8, [rbp+1180h+var_1044]
 * 00000001800AC8EC: mov     edx, 8
 * 00000001800AC8F1: mov     ecx, r11d
 * 00000001800AC8F4: call    RtlUIntAdd
 * 00000001800AC8F9: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AC8FC: test    eax, eax
 * 00000001800AC8FE: js      loc_1800AFDC9
 * 00000001800AC904: lea     r8, [rbp+1180h+var_10BC+4]
 * 00000001800AC90B: mov     edx, [rbp+1180h+var_1044]
 * 00000001800AC911: mov     ecx, dword ptr [rbp+1180h+var_10BC+4]
 * 00000001800AC917: call    RtlUIntAdd
 * 00000001800AC91C: or      eax, 10000000h
 * 00000001800AC921: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AC924: jl      loc_1800AFDC9
 * 00000001800AC92A: lea     r8, [rbp+1180h+pcchLength]; pcchLength
 * 00000001800AC931: call    StringCchLengthW
 * 00000001800AC936: test    eax, eax
 * 00000001800AC938: jns     short loc_1800AC947
 * 00000001800AC93A: mov     eax, 0C000003Eh
 * 00000001800AC93F: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AC942: jmp     loc_1800AFDC9
 * 00000001800AC947: mov     rax, [rbp+1180h+pcchLength]
 * 00000001800AC94E: inc     rax
 * 00000001800AC951: mov     [rbp+1180h+pcchLength], rax
 * 00000001800AC958: lea     edx, [rax+rax]
 * 00000001800AC95B: lea     r8, [rbp+1180h+var_103C]
 * 00000001800AC962: mov     ecx, r11d
 * 00000001800AC965: call    RtlUIntAdd
 * 00000001800AC96A: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AC96D: test    eax, eax
 * 00000001800AC96F: js      loc_1800AFDC9
 * 00000001800AC975: lea     r8, [rbp+1180h+var_10BC+4]
 * 00000001800AC97C: mov     edx, [rbp+1180h+var_103C]
 * 00000001800AC982: mov     ecx, dword ptr [rbp+1180h+var_10BC+4]
 * 00000001800AC988: call    RtlUIntAdd
 * 00000001800AC98D: or      eax, 10000000h
 * 00000001800AC992: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AC995: jl      loc_1800AFDC9
 * 00000001800AC99B: lea     r8, [rbp+1180h+var_1038]
 * 00000001800AC9A2: mov     edx, r11d
 * 00000001800AC9A5: mov     ecx, r11d
 * 00000001800AC9A8: call    RtlUIntAdd
 * 00000001800AC9AD: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AC9B0: test    eax, eax
 * 00000001800AC9B2: js      loc_1800AFDC9
 * 00000001800AC9B8: lea     r8, [rbp+1180h+var_10BC+4]
 * 00000001800AC9BF: mov     edx, [rbp+1180h+var_1038]
 * 00000001800AC9C5: mov     ecx, dword ptr [rbp+1180h+var_10BC+4]
 * 00000001800AC9CB: call    RtlUIntAdd
 * 00000001800AC9D0: or      eax, 10000000h
 * 00000001800AC9D5: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AC9D8: jl      loc_1800AFDC9
 * 00000001800AC9DE: lea     r8, [rbp+1180h+var_1034]
 * 00000001800AC9E5: mov     edx, r11d
 * 00000001800AC9E8: mov     ecx, r11d
 * 00000001800AC9EB: call    RtlUIntAdd
 * 00000001800AC9F0: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AC9F3: test    eax, eax
 * 00000001800AC9F5: js      loc_1800AFDC9
 * 00000001800AC9FB: lea     r8, [rbp+1180h+var_10BC+4]
 * 00000001800ACA02: mov     edx, [rbp+1180h+var_1034]
 * 00000001800ACA08: mov     ecx, dword ptr [rbp+1180h+var_10BC+4]
 * 00000001800ACA0E: call    RtlUIntAdd
 * 00000001800ACA13: or      eax, 10000000h
 * 00000001800ACA18: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ACA1B: jl      loc_1800AFDC9
 * 00000001800ACA21: mov     eax, dword ptr [rbp+1180h+var_10BC+4]
 * 00000001800ACA27: mov     dword ptr [rbp+1180h+Src+4], eax
 * 00000001800ACA2D: mov     edi, eax
 * 00000001800ACA2F: call    cs:__imp_GetProcessHeap
 * 00000001800ACA36: nop     dword ptr [rax+rax+00h]
 * 00000001800ACA3B: mov     rcx, rax; hHeap
 * 00000001800ACA3E: mov     r8d, edi; dwBytes
 * 00000001800ACA41: mov     edx, 8; dwFlags
 * 00000001800ACA46: call    cs:__imp_HeapAlloc
 * 00000001800ACA4D: nop     dword ptr [rax+rax+00h]
 * 00000001800ACA52: mov     rdi, rax
 * 00000001800ACA55: mov     r11d, 4
 * 00000001800ACA5B: test    rax, rax
 * 00000001800ACA5E: jnz     short loc_1800ACA70
 * 00000001800ACA60: mov     eax, 0C0000017h
 * 00000001800ACA65: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ACA68: mov     edi, [rbp+1180h+var_1138]
 * 00000001800ACA6B: jmp     loc_1800AFDC9
 * 00000001800ACA70: mov     [rbp+1180h+Src+8], rdi
 * 00000001800ACA77: xor     eax, eax
 * 00000001800ACA79: mov     dword ptr [rbp+1180h+Src], eax
 * 00000001800ACA7F: lea     r8, [rbp+1180h+var_DC0]
 * 00000001800ACA86: mov     rdx, r11
 * 00000001800ACA89: mov     rcx, rdi
 * 00000001800ACA8C: call    RtlULongLongAdd
 * 00000001800ACA91: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ACA94: test    eax, eax
 * 00000001800ACA96: js      short loc_1800ACA68
 * 00000001800ACA98: mov     ecx, dword ptr [rbp+1180h+Src+4]
 * 00000001800ACA9E: add     rcx, rdi
 * 00000001800ACAA1: lea     rax, [rdi+8]
 * 00000001800ACAA5: cmp     rax, rcx
 * 00000001800ACAA8: jbe     short loc_1800ACABA
 * 00000001800ACAAA: mov     eax, 0C0000023h
 * 00000001800ACAAF: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ACAB2: mov     edi, [rbp+1180h+var_1138]
 * 00000001800ACAB5: jmp     loc_1800AFDC9
 * 00000001800ACABA: mov     [rdi], r11d
 * 00000001800ACABD: mov     rax, [rbp+1180h+var_DC0]
 * 00000001800ACAC4: xor     ecx, ecx
 * 00000001800ACAC6: mov     [rax], ecx
 * 00000001800ACAC8: mov     r10d, dword ptr [rbp+1180h+Src]
 * 00000001800ACACF: inc     r10d
 * 00000001800ACAD2: mov     dword ptr [rbp+1180h+Src], r10d
 * 00000001800ACAD9: cmp     [rbp+1180h+Src+8], rcx
 * 00000001800ACAE0: jnz     short loc_1800ACB30
 * 00000001800ACAE2: lea     r8, [rbp+1180h+var_1030]
 * 00000001800ACAE9: mov     edx, 0A0h
 * 00000001800ACAEE: mov     ecx, r11d
 * 00000001800ACAF1: call    RtlUIntAdd
 * 00000001800ACAF6: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ACAF9: test    eax, eax
 * 00000001800ACAFB: js      loc_1800ACA68
 * 00000001800ACB01: lea     r8, [rbp+1180h+Src+4]
 * 00000001800ACB08: mov     edx, [rbp+1180h+var_1030]
 * 00000001800ACB0E: mov     ecx, dword ptr [rbp+1180h+Src+4]
 * 00000001800ACB14: call    RtlUIntAdd
 * 00000001800ACB19: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ACB1C: mov     r10d, dword ptr [rbp+1180h+Src]
 * 00000001800ACB23: test    eax, eax
 * 00000001800ACB25: js      loc_1800ACA68
 * 00000001800ACB2B: jmp     loc_1800ACC49
 * 00000001800ACB30: mov     rdi, [rbp+1180h+Src+8]
 * 00000001800ACB37: mov     [rbp+1180h+var_FD8], rdi
 * 00000001800ACB3E: mov     r9d, ecx
 * 00000001800ACB41: test    r10d, r10d
 * 00000001800ACB44: jz      short loc_1800ACB91
 * 00000001800ACB46: lea     r8, [rbp+1180h+var_102C]
 * 00000001800ACB4D: mov     edx, [rdi]
 * 00000001800ACB4F: mov     ecx, r11d
 * 00000001800ACB52: call    RtlUIntAdd
 * 00000001800ACB57: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ACB5A: test    eax, eax
 * 00000001800ACB5C: js      loc_1800ACA68
 * 00000001800ACB62: mov     edx, [rbp+1180h+var_102C]
 * 00000001800ACB68: lea     r8, [rbp+1180h+var_FD8]
 * 00000001800ACB6F: mov     rcx, rdi
 * 00000001800ACB72: call    RtlULongLongAdd
 * 00000001800ACB77: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ACB7A: test    eax, eax
 * 00000001800ACB7C: js      loc_1800ACA68
 * 00000001800ACB82: inc     r9d
 * 00000001800ACB85: mov     rdi, [rbp+1180h+var_FD8]
 * 00000001800ACB8C: cmp     r9d, r10d
 * 00000001800ACB8F: jb      short loc_1800ACB46
 * 00000001800ACB91: lea     r8, [rbp+1180h+var_D40]
 * 00000001800ACB98: mov     rdx, r11
 * 00000001800ACB9B: mov     rcx, rdi
 * 00000001800ACB9E: call    RtlULongLongAdd
 * 00000001800ACBA3: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ACBA6: test    eax, eax
 * 00000001800ACBA8: js      loc_1800ACA68
 * 00000001800ACBAE: mov     ecx, dword ptr [rbp+1180h+Src+4]
 * 00000001800ACBB4: add     rcx, [rbp+1180h+Src+8]
 * 00000001800ACBBB: lea     rax, [rdi+0A4h]
 * 00000001800ACBC2: cmp     rax, rcx
 * 00000001800ACBC5: jbe     short loc_1800ACBD7
 * 00000001800ACBC7: mov     eax, 0C0000023h
 * 00000001800ACBCC: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ACBCF: mov     edi, [rbp+1180h+var_1138]
 * 00000001800ACBD2: jmp     loc_1800AFDC9
 * 00000001800ACBD7: mov     dword ptr [rdi], 0A0h
 * 00000001800ACBDD: mov     rax, [rbp+1180h+var_D40]
 * 00000001800ACBE4: mov     rcx, [rbp+1180h+var_11C8]
 * 00000001800ACBE8: movups  xmm0, xmmword ptr [rcx]
 * 00000001800ACBEB: movups  xmmword ptr [rax], xmm0
 * 00000001800ACBEE: movups  xmm1, xmmword ptr [rcx+10h]
 * 00000001800ACBF2: movups  xmmword ptr [rax+10h], xmm1
 * 00000001800ACBF6: movups  xmm0, xmmword ptr [rcx+20h]
 * 00000001800ACBFA: movups  xmmword ptr [rax+20h], xmm0
 * 00000001800ACBFE: movups  xmm1, xmmword ptr [rcx+30h]
 * 00000001800ACC02: movups  xmmword ptr [rax+30h], xmm1
 * 00000001800ACC06: movups  xmm0, xmmword ptr [rcx+40h]
 * 00000001800ACC0A: movups  xmmword ptr [rax+40h], xmm0
 * 00000001800ACC0E: movups  xmm1, xmmword ptr [rcx+50h]
 * 00000001800ACC12: movups  xmmword ptr [rax+50h], xmm1
 * 00000001800ACC16: movups  xmm0, xmmword ptr [rcx+60h]
 * 00000001800ACC1A: movups  xmmword ptr [rax+60h], xmm0
 * 00000001800ACC1E: movups  xmm1, xmmword ptr [rcx+70h]
 * 00000001800ACC22: movups  xmmword ptr [rax+70h], xmm1
 * 00000001800ACC26: movups  xmm0, xmmword ptr [rcx+80h]
 * 00000001800ACC2D: movups  xmmword ptr [rax+80h], xmm0
 * 00000001800ACC34: movups  xmm1, xmmword ptr [rcx+90h]
 * 00000001800ACC3B: movups  xmmword ptr [rax+90h], xmm1
 * 00000001800ACC42: mov     r10d, dword ptr [rbp+1180h+Src]
 * 00000001800ACC49: inc     r10d
 * 00000001800ACC4C: mov     dword ptr [rbp+1180h+Src], r10d
 * 00000001800ACC53: cmp     [rbp+1180h+Src+8], 0
 * 00000001800ACC5B: jnz     short loc_1800ACCAB
 * 00000001800ACC5D: lea     r8, [rbp+1180h+var_1028]
 * 00000001800ACC64: mov     edx, 8
 * 00000001800ACC69: mov     ecx, r11d
 * 00000001800ACC6C: call    RtlUIntAdd
 * 00000001800ACC71: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ACC74: test    eax, eax
 * 00000001800ACC76: js      loc_1800ACA68
 * 00000001800ACC7C: lea     r8, [rbp+1180h+Src+4]
 * 00000001800ACC83: mov     edx, [rbp+1180h+var_1028]
 * 00000001800ACC89: mov     ecx, dword ptr [rbp+1180h+Src+4]
 * 00000001800ACC8F: call    RtlUIntAdd
 * 00000001800ACC94: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ACC97: mov     r10d, dword ptr [rbp+1180h+Src]
 * 00000001800ACC9E: test    eax, eax
 * 00000001800ACCA0: js      loc_1800ACA68
 * 00000001800ACCA6: jmp     loc_1800ACD6F
 * 00000001800ACCAB: mov     rdi, [rbp+1180h+Src+8]
 * 00000001800ACCB2: mov     [rbp+1180h+var_FD0], rdi
 * 00000001800ACCB9: xor     eax, eax
 * 00000001800ACCBB: mov     r9d, eax
 * 00000001800ACCBE: test    r10d, r10d
 * 00000001800ACCC1: jz      short loc_1800ACD0E
 * 00000001800ACCC3: lea     r8, [rbp+1180h+var_1024]
 * 00000001800ACCCA: mov     edx, [rdi]
 * 00000001800ACCCC: mov     ecx, r11d
 * 00000001800ACCCF: call    RtlUIntAdd
 * 00000001800ACCD4: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ACCD7: test    eax, eax
 * 00000001800ACCD9: js      loc_1800ACA68
 * 00000001800ACCDF: mov     edx, [rbp+1180h+var_1024]
 * 00000001800ACCE5: lea     r8, [rbp+1180h+var_FD0]
 * 00000001800ACCEC: mov     rcx, rdi
 * 00000001800ACCEF: call    RtlULongLongAdd
 * 00000001800ACCF4: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ACCF7: test    eax, eax
 * 00000001800ACCF9: js      loc_1800ACA68
 * 00000001800ACCFF: inc     r9d
 * 00000001800ACD02: mov     rdi, [rbp+1180h+var_FD0]
 * 00000001800ACD09: cmp     r9d, r10d
 * 00000001800ACD0C: jb      short loc_1800ACCC3
 * 00000001800ACD0E: lea     r8, [rbp+1180h+var_D30]
 * 00000001800ACD15: mov     rdx, r11
 * 00000001800ACD18: mov     rcx, rdi
 * 00000001800ACD1B: call    RtlULongLongAdd
 * 00000001800ACD20: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ACD23: test    eax, eax
 * 00000001800ACD25: js      loc_1800ACA68
 * 00000001800ACD2B: mov     ecx, dword ptr [rbp+1180h+Src+4]
 * 00000001800ACD31: add     rcx, [rbp+1180h+Src+8]
 * 00000001800ACD38: lea     rax, [rdi+0Ch]
 * 00000001800ACD3C: cmp     rax, rcx
 * 00000001800ACD3F: jbe     short loc_1800ACD51
 * 00000001800ACD41: mov     eax, 0C0000023h
 * 00000001800ACD46: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ACD49: mov     edi, [rbp+1180h+var_1138]
 * 00000001800ACD4C: jmp     loc_1800AFDC9
 * 00000001800ACD51: mov     dword ptr [rdi], 8
 * 00000001800ACD57: mov     rcx, [rbp+1180h+var_1180]
 * 00000001800ACD5B: mov     rcx, [rcx]
 * 00000001800ACD5E: mov     rax, [rbp+1180h+var_D30]
 * 00000001800ACD65: mov     [rax], rcx
 * 00000001800ACD68: mov     r10d, dword ptr [rbp+1180h+Src]
 * 00000001800ACD6F: inc     r10d
 * 00000001800ACD72: mov     dword ptr [rbp+1180h+Src], r10d
 * 00000001800ACD79: cmp     [rbp+1180h+Src+8], 0
 * 00000001800ACD81: jnz     short loc_1800ACDD1
 * 00000001800ACD83: lea     r8, [rbp+1180h+var_1020]
 * 00000001800ACD8A: mov     edx, 8
 * 00000001800ACD8F: mov     ecx, r11d
 * 00000001800ACD92: call    RtlUIntAdd
 * 00000001800ACD97: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ACD9A: test    eax, eax
 * 00000001800ACD9C: js      loc_1800ACA68
 * 00000001800ACDA2: lea     r8, [rbp+1180h+Src+4]
 * 00000001800ACDA9: mov     edx, [rbp+1180h+var_1020]
 * 00000001800ACDAF: mov     ecx, dword ptr [rbp+1180h+Src+4]
 * 00000001800ACDB5: call    RtlUIntAdd
 * 00000001800ACDBA: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ACDBD: mov     r10d, dword ptr [rbp+1180h+Src]
 * 00000001800ACDC4: test    eax, eax
 * 00000001800ACDC6: js      loc_1800ACA68
 * 00000001800ACDCC: jmp     loc_1800ACE92
 * 00000001800ACDD1: mov     rdi, [rbp+1180h+Src+8]
 * 00000001800ACDD8: mov     [rbp+1180h+var_FC8], rdi
 * 00000001800ACDDF: xor     eax, eax
 * 00000001800ACDE1: mov     r9d, eax
 * 00000001800ACDE4: test    r10d, r10d
 * 00000001800ACDE7: jz      short loc_1800ACE34
 * 00000001800ACDE9: lea     r8, [rbp+1180h+var_101C]
 * 00000001800ACDF0: mov     edx, [rdi]
 * 00000001800ACDF2: mov     ecx, r11d
 * 00000001800ACDF5: call    RtlUIntAdd
 * 00000001800ACDFA: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ACDFD: test    eax, eax
 * 00000001800ACDFF: js      loc_1800ACA68
 * 00000001800ACE05: mov     edx, [rbp+1180h+var_101C]
 * 00000001800ACE0B: lea     r8, [rbp+1180h+var_FC8]
 * 00000001800ACE12: mov     rcx, rdi
 * 00000001800ACE15: call    RtlULongLongAdd
 * 00000001800ACE1A: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ACE1D: test    eax, eax
 * 00000001800ACE1F: js      loc_1800ACA68
 * 00000001800ACE25: inc     r9d
 * 00000001800ACE28: mov     rdi, [rbp+1180h+var_FC8]
 * 00000001800ACE2F: cmp     r9d, r10d
 * 00000001800ACE32: jb      short loc_1800ACDE9
 * 00000001800ACE34: lea     r8, [rbp+1180h+var_D20]
 * 00000001800ACE3B: mov     rdx, r11
 * 00000001800ACE3E: mov     rcx, rdi
 * 00000001800ACE41: call    RtlULongLongAdd
 * 00000001800ACE46: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ACE49: test    eax, eax
 * 00000001800ACE4B: js      loc_1800ACA68
 * 00000001800ACE51: mov     ecx, dword ptr [rbp+1180h+Src+4]
 * 00000001800ACE57: add     rcx, [rbp+1180h+Src+8]
 * 00000001800ACE5E: lea     rax, [rdi+0Ch]
 * 00000001800ACE62: cmp     rax, rcx
 * 00000001800ACE65: jbe     short loc_1800ACE77
 * 00000001800ACE67: mov     eax, 0C0000023h
 * 00000001800ACE6C: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ACE6F: mov     edi, [rbp+1180h+var_1138]
 * 00000001800ACE72: jmp     loc_1800AFDC9
 * 00000001800ACE77: mov     dword ptr [rdi], 8
 * 00000001800ACE7D: mov     rax, [rbp+1180h+var_D20]
 * 00000001800ACE84: mov     rcx, [rbp+1180h+psz]; psz
 * 00000001800ACE88: mov     [rax], rcx
 * 00000001800ACE8B: mov     r10d, dword ptr [rbp+1180h+Src]
 * 00000001800ACE92: inc     r10d
 * 00000001800ACE95: mov     dword ptr [rbp+1180h+Src], r10d
 * 00000001800ACE9C: lea     r8, [rbp+1180h+var_FC0]; pcchLength
 * 00000001800ACEA3: call    StringCchLengthW
 * 00000001800ACEA8: test    eax, eax
 * 00000001800ACEAA: jns     short loc_1800ACEBC
 * 00000001800ACEAC: mov     eax, 0C000003Eh
 * 00000001800ACEB1: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ACEB4: mov     edi, [rbp+1180h+var_1138]
 * 00000001800ACEB7: jmp     loc_1800AFDC9
 * 00000001800ACEBC: lea     r8, [rbp+1180h+var_FC0]
 * 00000001800ACEC3: mov     edx, 1
 * 00000001800ACEC8: mov     rcx, [rbp+1180h+var_FC0]
 * 00000001800ACECF: call    RtlULongLongAdd
 * 00000001800ACED4: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ACED7: test    eax, eax
 * 00000001800ACED9: js      loc_1800ACA68
 * 00000001800ACEDF: mov     eax, dword ptr [rbp+1180h+var_FC0]
 * 00000001800ACEE5: lea     r9d, [rax+rax]
 * 00000001800ACEE9: test    r9d, r9d
 * 00000001800ACEEC: jz      loc_1800AD032
 * 00000001800ACEF2: cmp     [rbp+1180h+Src+8], 0
 * 00000001800ACEFA: jnz     short loc_1800ACF54
 * 00000001800ACEFC: lea     r8, [rbp+1180h+var_1018]
 * 00000001800ACF03: mov     edx, r9d
 * 00000001800ACF06: mov     ecx, r11d
 * 00000001800ACF09: call    RtlUIntAdd
 * 00000001800ACF0E: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ACF11: test    eax, eax
 * 00000001800ACF13: js      loc_1800ACA68
 * 00000001800ACF19: lea     r8, [rbp+1180h+Src+4]
 * 00000001800ACF20: mov     edx, [rbp+1180h+var_1018]
 * 00000001800ACF26: mov     ecx, dword ptr [rbp+1180h+Src+4]
 * 00000001800ACF2C: call    RtlUIntAdd
 * 00000001800ACF31: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ACF34: mov     r10d, dword ptr [rbp+1180h+Src]
 * 00000001800ACF3B: test    eax, eax
 * 00000001800ACF3D: js      loc_1800ACA68
 * 00000001800ACF43: inc     r10d
 * 00000001800ACF46: mov     dword ptr [rbp+1180h+Src], r10d
 * 00000001800ACF4D: xor     eax, eax
 * 00000001800ACF4F: jmp     loc_1800AD037
 * 00000001800ACF54: mov     rdi, [rbp+1180h+Src+8]
 * 00000001800ACF5B: mov     [rbp+1180h+var_FB8], rdi
 * 00000001800ACF62: xor     eax, eax
 * 00000001800ACF64: mov     r11d, eax
 * 00000001800ACF67: test    r10d, r10d
 * 00000001800ACF6A: jz      short loc_1800ACFB5
 * 00000001800ACF6C: lea     r8, [rbp+1180h+var_1014]
 * 00000001800ACF73: mov     edx, [rdi]
 * 00000001800ACF75: mov     ecx, 4
 * 00000001800ACF7A: call    RtlUIntAdd
 * 00000001800ACF7F: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ACF82: test    eax, eax
 * 00000001800ACF84: js      short loc_1800ACFFB
 * 00000001800ACF86: mov     edx, [rbp+1180h+var_1014]
 * 00000001800ACF8C: lea     r8, [rbp+1180h+var_FB8]
 * 00000001800ACF93: mov     rcx, rdi
 * 00000001800ACF96: call    RtlULongLongAdd
 * 00000001800ACF9B: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ACF9E: test    eax, eax
 * 00000001800ACFA0: js      loc_1800AD02A
 * 00000001800ACFA6: inc     r11d
 * 00000001800ACFA9: mov     rdi, [rbp+1180h+var_FB8]
 * 00000001800ACFB0: cmp     r11d, r10d
 * 00000001800ACFB3: jb      short loc_1800ACF6C
 * 00000001800ACFB5: lea     r8, [rbp+1180h+var_D10]
 * 00000001800ACFBC: mov     r11d, 4
 * 00000001800ACFC2: mov     edx, r11d
 * 00000001800ACFC5: mov     rcx, rdi
 * 00000001800ACFC8: call    RtlULongLongAdd
 * 00000001800ACFCD: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ACFD0: test    eax, eax
 * 00000001800ACFD2: js      loc_1800ACA68
 * 00000001800ACFD8: mov     r8d, r9d; Size
 * 00000001800ACFDB: mov     ecx, dword ptr [rbp+1180h+Src+4]
 * 00000001800ACFE1: add     rcx, [rbp+1180h+Src+8]
 * 00000001800ACFE8: lea     rax, [r9+4]
 * 00000001800ACFEC: add     rax, rdi
 * 00000001800ACFEF: cmp     rax, rcx
 * 00000001800ACFF2: jbe     short loc_1800AD000
 * 00000001800ACFF4: mov     eax, 0C0000023h
 * 00000001800ACFF9: jmp     short loc_1800AD037
 * 00000001800ACFFB: mov     r11, rcx
 * 00000001800ACFFE: jmp     short loc_1800AD03A
 * 00000001800AD000: mov     [rdi], r9d
 * 00000001800AD003: lea     rdx, aKernelOnecoreD; "Kernel-OneCore-DeviceFamilyID"
 * 00000001800AD00A: mov     rcx, [rbp+1180h+var_D10]; void *
 * 00000001800AD011: call    memcpy_0
 * 00000001800AD016: mov     r10d, dword ptr [rbp+1180h+Src]
 * 00000001800AD01D: inc     r10d
 * 00000001800AD020: mov     dword ptr [rbp+1180h+Src], r10d
 * 00000001800AD027: mov     eax, dword ptr [rbp+1180h+var_1140]
 * 00000001800AD02A: mov     r11d, 4
 * 00000001800AD030: jmp     short loc_1800AD03A
 * 00000001800AD032: mov     eax, 0C000000Dh
 * 00000001800AD037: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AD03A: test    eax, eax
 * 00000001800AD03C: js      loc_1800ACA68
 * 00000001800AD042: cmp     [rbp+1180h+Src+8], 0
 * 00000001800AD04A: jnz     short loc_1800AD09F
 * 00000001800AD04C: lea     r8, [rbp+1180h+var_1120]
 * 00000001800AD050: mov     edx, r11d
 * 00000001800AD053: mov     ecx, r11d
 * 00000001800AD056: call    RtlUIntAdd
 * 00000001800AD05B: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AD05E: test    eax, eax
 * 00000001800AD060: js      loc_1800ACA68
 * 00000001800AD066: lea     r8, [rbp+1180h+Src+4]
 * 00000001800AD06D: mov     edx, [rbp+1180h+var_1120]
 * 00000001800AD070: mov     ecx, dword ptr [rbp+1180h+Src+4]
 * 00000001800AD076: call    RtlUIntAdd
 * 00000001800AD07B: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AD07E: mov     r10d, dword ptr [rbp+1180h+Src]
 * 00000001800AD085: test    eax, eax
 * 00000001800AD087: js      loc_1800ACA68
 * 00000001800AD08D: inc     r10d
 * 00000001800AD090: mov     dword ptr [rbp+1180h+Src], r10d
 * 00000001800AD097: mov     edi, [rbp+1180h+var_1138]
 * 00000001800AD09A: jmp     loc_1800AD15F
 * 00000001800AD09F: mov     rdi, [rbp+1180h+Src+8]
 * 00000001800AD0A6: mov     [rbp+1180h+var_FB0], rdi
 * 00000001800AD0AD: xor     eax, eax
 * 00000001800AD0AF: mov     r9d, eax
 * 00000001800AD0B2: test    r10d, r10d
 * 00000001800AD0B5: jz      short loc_1800AD0FC
 * 00000001800AD0B7: lea     r8, [rbp+1180h+var_111C]
 * 00000001800AD0BB: mov     edx, [rdi]
 * 00000001800AD0BD: mov     ecx, r11d
 * 00000001800AD0C0: call    RtlUIntAdd
 * 00000001800AD0C5: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AD0C8: test    eax, eax
 * 00000001800AD0CA: js      loc_1800ACA68
 * 00000001800AD0D0: mov     edx, [rbp+1180h+var_111C]
 * 00000001800AD0D3: lea     r8, [rbp+1180h+var_FB0]
 * 00000001800AD0DA: mov     rcx, rdi
 * 00000001800AD0DD: call    RtlULongLongAdd
 * 00000001800AD0E2: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AD0E5: test    eax, eax
 * 00000001800AD0E7: js      loc_1800ACA68
 * 00000001800AD0ED: inc     r9d
 * 00000001800AD0F0: mov     rdi, [rbp+1180h+var_FB0]
 * 00000001800AD0F7: cmp     r9d, r10d
 * 00000001800AD0FA: jb      short loc_1800AD0B7
 * 00000001800AD0FC: lea     r8, [rbp+1180h+var_D00]
 * 00000001800AD103: mov     rdx, r11
 * 00000001800AD106: mov     rcx, rdi
 * 00000001800AD109: call    RtlULongLongAdd
 * 00000001800AD10E: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AD111: test    eax, eax
 * 00000001800AD113: js      loc_1800ACA68
 * 00000001800AD119: mov     ecx, dword ptr [rbp+1180h+Src+4]
 * 00000001800AD11F: add     rcx, [rbp+1180h+Src+8]
 * 00000001800AD126: lea     rax, [rdi+8]
 * 00000001800AD12A: cmp     rax, rcx
 * 00000001800AD12D: jbe     short loc_1800AD13F
 * 00000001800AD12F: mov     eax, 0C0000023h
 * 00000001800AD134: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AD137: mov     edi, [rbp+1180h+var_1138]
 * 00000001800AD13A: jmp     loc_1800AFDC9
 * 00000001800AD13F: mov     [rdi], r11d
 * 00000001800AD142: mov     rax, [rbp+1180h+var_D00]
 * 00000001800AD149: mov     edi, [rbp+1180h+var_1138]
 * 00000001800AD14C: mov     [rax], edi
 * 00000001800AD14E: mov     r10d, dword ptr [rbp+1180h+Src]
 * 00000001800AD155: inc     r10d
 * 00000001800AD158: mov     dword ptr [rbp+1180h+Src], r10d
 * 00000001800AD15F: cmp     [rbp+1180h+Src+8], 0
 * 00000001800AD167: jnz     short loc_1800AD1AE
 * 00000001800AD169: lea     r8, [rbp+1180h+var_10C4+4]
 * 00000001800AD170: mov     edx, r11d
 * 00000001800AD173: mov     ecx, r11d
 * 00000001800AD176: call    RtlUIntAdd
 * 00000001800AD17B: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AD17E: test    eax, eax
 * 00000001800AD180: js      loc_1800AFDC9
 * 00000001800AD186: lea     r8, [rbp+1180h+Src+4]
 * 00000001800AD18D: mov     edx, dword ptr [rbp+1180h+var_10C4+4]
 * 00000001800AD193: mov     ecx, dword ptr [rbp+1180h+Src+4]
 * 00000001800AD199: call    RtlUIntAdd
 * 00000001800AD19E: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AD1A1: test    eax, eax
 * 00000001800AD1A3: jns     loc_1800AD265
 * 00000001800AD1A9: jmp     loc_1800AFDC9
 * 00000001800AD1AE: mov     r9, [rbp+1180h+Src+8]
 * 00000001800AD1B5: mov     [rbp+1180h+var_FA8], r9
 * 00000001800AD1BC: xor     eax, eax
 * 00000001800AD1BE: mov     r11d, eax
 * 00000001800AD1C1: test    r10d, r10d
 * 00000001800AD1C4: jz      short loc_1800AD20A
 * 00000001800AD1C6: lea     r8, [rbp+1180h+var_1114]
 * 00000001800AD1CA: mov     edx, [r9]
 * 00000001800AD1CD: mov     ecx, 4
 * 00000001800AD1D2: call    RtlUIntAdd
 * 00000001800AD1D7: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AD1DA: test    eax, eax
 * 00000001800AD1DC: js      short loc_1800AD250
 * 00000001800AD1DE: mov     edx, [rbp+1180h+var_1114]
 * 00000001800AD1E1: lea     r8, [rbp+1180h+var_FA8]
 * 00000001800AD1E8: mov     rcx, r9
 * 00000001800AD1EB: call    RtlULongLongAdd
 * 00000001800AD1F0: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AD1F3: test    eax, eax
 * 00000001800AD1F5: js      loc_1800AFDC3
 * 00000001800AD1FB: inc     r11d
 * 00000001800AD1FE: mov     r9, [rbp+1180h+var_FA8]
 * 00000001800AD205: cmp     r11d, r10d
 * 00000001800AD208: jb      short loc_1800AD1C6
 * 00000001800AD20A: lea     r8, [rbp+1180h+var_CF0]
 * 00000001800AD211: mov     r11d, 4
 * 00000001800AD217: mov     edx, r11d
 * 00000001800AD21A: mov     rcx, r9
 * 00000001800AD21D: call    RtlULongLongAdd
 * 00000001800AD222: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AD225: test    eax, eax
 * 00000001800AD227: js      loc_1800AFDC9
 * 00000001800AD22D: mov     ecx, dword ptr [rbp+1180h+Src+4]
 * 00000001800AD233: add     rcx, [rbp+1180h+Src+8]
 * 00000001800AD23A: lea     rax, [r9+8]
 * 00000001800AD23E: cmp     rax, rcx
 * 00000001800AD241: jbe     short loc_1800AD258
 * 00000001800AD243: mov     eax, 0C0000023h
 * 00000001800AD248: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AD24B: jmp     loc_1800AFDC9
 * 00000001800AD250: mov     r11, rcx
 * 00000001800AD253: jmp     loc_1800AFDC9
 * 00000001800AD258: mov     [r9], r11d
 * 00000001800AD25B: mov     rax, [rbp+1180h+var_CF0]
 * 00000001800AD262: mov     [rax], r11d
 * 00000001800AD265: inc     dword ptr [rbp+1180h+Src]
 * 00000001800AD26B: lea     r8, [rbp+1180h+var_1110]
 * 00000001800AD26F: mov     edx, r11d
 * 00000001800AD272: mov     ecx, r11d
 * 00000001800AD275: call    RtlUIntAdd
 * 00000001800AD27A: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AD27D: test    eax, eax
 * 00000001800AD27F: js      loc_1800AFDC9
 * 00000001800AD285: mov     r9d, [rbp+1180h+var_1110]
 * 00000001800AD289: mov     [rbp+1180h+var_110C], r9d
 * 00000001800AD28D: lea     r8, [rbp+1180h+var_1108]
 * 00000001800AD291: mov     edx, 8
 * 00000001800AD296: call    RtlUIntAdd
 * 00000001800AD29B: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AD29E: test    eax, eax
 * 00000001800AD2A0: js      loc_1800AFDC9
 * 00000001800AD2A6: lea     r8, [rbp+1180h+var_110C]
 * 00000001800AD2AA: mov     edx, [rbp+1180h+var_1108]
 * 00000001800AD2AD: mov     ecx, r9d
 * 00000001800AD2B0: call    RtlUIntAdd
 * 00000001800AD2B5: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AD2B8: test    eax, eax
 * 00000001800AD2BA: js      loc_1800AFDC9
 * 00000001800AD2C0: lea     r8, [rbp+1180h+var_1104]
 * 00000001800AD2C4: mov     edx, r11d
 * 00000001800AD2C7: mov     ecx, r11d
 * 00000001800AD2CA: call    RtlUIntAdd
 * 00000001800AD2CF: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AD2D2: test    eax, eax
 * 00000001800AD2D4: js      loc_1800AFDC9
 * 00000001800AD2DA: lea     r8, [rbp+1180h+var_110C]
 * 00000001800AD2DE: mov     edx, [rbp+1180h+var_1104]
 * 00000001800AD2E1: mov     ecx, [rbp+1180h+var_110C]
 * 00000001800AD2E4: call    RtlUIntAdd
 * 00000001800AD2E9: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AD2EC: test    eax, eax
 * 00000001800AD2EE: js      loc_1800AFDC9
 * 00000001800AD2F4: lea     r8, [rbp+1180h+var_1100]
 * 00000001800AD2FB: mov     edx, r11d
 * 00000001800AD2FE: mov     ecx, r11d
 * 00000001800AD301: call    RtlUIntAdd
 * 00000001800AD306: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AD309: test    eax, eax
 * 00000001800AD30B: js      loc_1800AFDC9
 * 00000001800AD311: lea     r8, [rbp+1180h+var_110C]
 * 00000001800AD315: mov     edx, [rbp+1180h+var_1100]
 * 00000001800AD31B: mov     ecx, [rbp+1180h+var_110C]
 * 00000001800AD31E: call    RtlUIntAdd
 * 00000001800AD323: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AD326: test    eax, eax
 * 00000001800AD328: js      loc_1800AFDC9
 * 00000001800AD32E: lea     r8, [rbp+1180h+var_10FC]
 * 00000001800AD335: mov     edx, r11d
 * 00000001800AD338: mov     ecx, r11d
 * 00000001800AD33B: call    RtlUIntAdd
 * 00000001800AD340: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AD343: test    eax, eax
 * 00000001800AD345: js      loc_1800AFDC9
 * 00000001800AD34B: lea     r8, [rbp+1180h+var_110C]
 * 00000001800AD34F: mov     edx, [rbp+1180h+var_10FC]
 * 00000001800AD355: mov     ecx, [rbp+1180h+var_110C]
 * 00000001800AD358: call    RtlUIntAdd
 * 00000001800AD35D: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AD360: test    eax, eax
 * 00000001800AD362: js      loc_1800AFDC9
 * 00000001800AD368: lea     r8, [rbp+1180h+var_1130]
 * 00000001800AD36C: mov     edx, r11d
 * 00000001800AD36F: mov     ecx, r11d
 * 00000001800AD372: call    RtlUIntAdd
 * 00000001800AD377: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AD37A: test    eax, eax
 * 00000001800AD37C: js      loc_1800AFDC9
 * 00000001800AD382: lea     r8, [rbp+1180h+var_110C]
 * 00000001800AD386: mov     edx, [rbp+1180h+var_1130]
 * 00000001800AD389: mov     ecx, [rbp+1180h+var_110C]
 * 00000001800AD38C: call    RtlUIntAdd
 * 00000001800AD391: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AD394: test    eax, eax
 * 00000001800AD396: js      loc_1800AFDC9
 * 00000001800AD39C: mov     eax, [rbp+1180h+var_110C]
 * 00000001800AD39F: mov     dword ptr [rbp+1180h+var_11B0], eax
 * 00000001800AD3A2: xor     ecx, ecx
 * 00000001800AD3A4: mov     [rbp+1180h+var_11C8], rcx
 * 00000001800AD3A8: mov     [rbp+1180h+var_11E8], ecx
 * 00000001800AD3AB: mov     r9d, ecx
 * 00000001800AD3AE: mov     [rbp+1180h+var_1180], rcx
 * 00000001800AD3B2: mov     r11d, ecx
 * 00000001800AD3B5: mov     [rbp+1180h+var_11E0], rcx
 * 00000001800AD3B9: mov     dword ptr [rbp+1180h+var_11C0], ecx
 * 00000001800AD3BC: mov     [rbp+1180h+lpModuleName], rcx
 * 00000001800AD3C0: mov     [rbp+1180h+var_11B8], rcx
 * 00000001800AD3C4: mov     [rbp+1180h+var_11A8], rcx
 * 00000001800AD3C8: rdtsc
 * 00000001800AD3CA: shl     rdx, 20h
 * 00000001800AD3CE: or      rax, rdx
 * 00000001800AD3D1: mov     [rbp+1180h+var_1200], rax
 * 00000001800AD3D5: mov     [rbp+1180h+var_10F8], 8
 * 00000001800AD3DF: lea     r8, [rbp+1180h+var_10F8]
 * 00000001800AD3E6: mov     edx, dword ptr [rbp+1180h+Src+4]
 * 00000001800AD3EC: lea     ecx, [r11+8]
 * 00000001800AD3F0: call    RtlUIntAdd
 * 00000001800AD3F5: test    eax, eax
 * 00000001800AD3F7: js      loc_1800AD51D
 * 00000001800AD3FD: mov     ecx, [rbp+1180h+var_10F8]
 * 00000001800AD403: lea     rdx, [rcx+7]
 * 00000001800AD407: and     edx, 0FFFFFFF8h
 * 00000001800AD40A: cmp     edx, ecx
 * 00000001800AD40C: jnb     short loc_1800AD418
 * 00000001800AD40E: mov     eax, 0D0000095h
 * 00000001800AD413: jmp     loc_1800AFDC0
 * 00000001800AD418: mov     [rbp+1180h+var_10F8], edx
 * 00000001800AD41E: mov     edi, edx
 * 00000001800AD420: call    cs:__imp_GetProcessHeap
 * 00000001800AD427: nop     dword ptr [rax+rax+00h]
 * 00000001800AD42C: mov     rcx, rax; hHeap
 * 00000001800AD42F: mov     r8d, edi; dwBytes
 * 00000001800AD432: mov     edx, 8; dwFlags
 * 00000001800AD437: call    cs:__imp_HeapAlloc
 * 00000001800AD43E: nop     dword ptr [rax+rax+00h]
 * 00000001800AD443: mov     rdi, rax
 * 00000001800AD446: test    rax, rax
 * 00000001800AD449: jnz     short loc_1800AD458
 * 00000001800AD44B: mov     eax, 0D0000017h
 * 00000001800AD450: mov     edi, [rbp+1180h+var_1138]
 * 00000001800AD453: jmp     loc_1800AFDC0
 * 00000001800AD458: mov     [rbp+1180h+var_FA0], rdi
 * 00000001800AD45F: mov     eax, dword ptr [rbp+1180h+Src]
 * 00000001800AD465: mov     [rdi], eax
 * 00000001800AD467: lea     r8, [rbp+1180h+var_FA0]
 * 00000001800AD46E: mov     r9d, 4
 * 00000001800AD474: mov     edx, r9d
 * 00000001800AD477: mov     rcx, rdi
 * 00000001800AD47A: call    RtlULongLongAdd
 * 00000001800AD47F: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AD482: test    eax, eax
 * 00000001800AD484: js      short loc_1800AD4F0
 * 00000001800AD486: mov     rcx, [rbp+1180h+var_FA0]
 * 00000001800AD48D: mov     eax, dword ptr [rbp+1180h+Src+4]
 * 00000001800AD493: mov     [rcx], eax
 * 00000001800AD495: lea     r8, [rbp+1180h+var_FA0]
 * 00000001800AD49C: mov     edx, r9d
 * 00000001800AD49F: call    RtlULongLongAdd
 * 00000001800AD4A4: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AD4A7: test    eax, eax
 * 00000001800AD4A9: js      short loc_1800AD4F0
 * 00000001800AD4AB: mov     eax, [rbp+1180h+var_10F8]
 * 00000001800AD4B1: mov     rcx, [rbp+1180h+var_1200]
 * 00000001800AD4B5: mov     [rax+rdi-8], rcx
 * 00000001800AD4BA: mov     r8d, dword ptr [rbp+1180h+Src+4]; Size
 * 00000001800AD4C1: mov     rdx, [rbp+1180h+Src+8]; Src
 * 00000001800AD4C8: mov     rcx, [rbp+1180h+var_FA0]; void *
 * 00000001800AD4CF: call    memcpy_0
 * 00000001800AD4D4: mov     [rbp+1180h+var_11C8], rdi
 * 00000001800AD4D8: mov     ecx, [rbp+1180h+var_10F8]
 * 00000001800AD4DE: mov     [rbp+1180h+var_11E8], ecx
 * 00000001800AD4E1: mov     edi, [rbp+1180h+var_1138]
 * 00000001800AD4E4: mov     eax, dword ptr [rbp+1180h+var_1140]
 * 00000001800AD4E7: mov     r9, [rbp+1180h+var_1180]
 * 00000001800AD4EB: mov     r11, r9
 * 00000001800AD4EE: jmp     short loc_1800AD520
 * 00000001800AD4F0: call    cs:__imp_GetProcessHeap
 * 00000001800AD4F7: nop     dword ptr [rax+rax+00h]
 * 00000001800AD4FC: mov     rcx, rax; hHeap
 * 00000001800AD4FF: mov     r8, rdi; lpMem
 * 00000001800AD502: xor     edx, edx; dwFlags
 * 00000001800AD504: call    cs:__imp_HeapFree
 * 00000001800AD50B: nop     dword ptr [rax+rax+00h]
 * 00000001800AD510: mov     edi, [rbp+1180h+var_1138]
 * 00000001800AD513: mov     eax, dword ptr [rbp+1180h+var_1140]
 * 00000001800AD516: mov     r9, [rbp+1180h+var_1180]
 * 00000001800AD51A: mov     r11, r9
 * 00000001800AD51D: mov     ecx, r9d
 * 00000001800AD520: or      eax, 10000000h
 * 00000001800AD525: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AD528: jl      loc_1800AE282
 * 00000001800AD52E: cmp     [rbp+1180h+var_11C8], 0
 * 00000001800AD533: jnz     short loc_1800AD53F
 * 00000001800AD535: mov     eax, 0D000000Dh
 * 00000001800AD53A: jmp     loc_1800AFDC0
 * 00000001800AD53F: mov     eax, ecx
 * 00000001800AD541: mov     [rsp+1280h+var_1220], rax
 * 00000001800AD546: test    ecx, ecx
 * 00000001800AD548: jz      loc_1800AF920
 * 00000001800AD54E: add     rax, 8
 * 00000001800AD552: mov     [rbp+1180h+Size], rax
 * 00000001800AD556: mov     rcx, rax; unsigned __int64
 * 00000001800AD559: call    ??2@YAPEAX_K@Z; operator new(unsigned __int64)
 * 00000001800AD55E: mov     rdx, rax
 * 00000001800AD561: mov     [rbp+1180h+var_1178], rax
 * 00000001800AD565: test    rax, rax
 * 00000001800AD568: jz      loc_1800AF920
 * 00000001800AD56E: xor     r8b, r8b
 * 00000001800AD571: mov     dword ptr [rbp+1180h+var_1140], r8d
 * 00000001800AD575: xor     r9d, r9d
 * 00000001800AD578: mov     ecx, r9d
 * 00000001800AD57B: mov     eax, [rbp+1180h+var_11E8]
 * 00000001800AD57E: mov     r11d, eax
 * 00000001800AD581: test    eax, eax
 * 00000001800AD583: mov     rax, [rbp+1180h+var_11C8]
 * 00000001800AD587: jz      loc_1800AD616
 * 00000001800AD58D: cmp     r11, 20h ; ' '
 * 00000001800AD591: jb      short loc_1800AD606
 * 00000001800AD593: mov     r8d, r11d
 * 00000001800AD596: and     r8, 0FFFFFFFFFFFFFFE0h
 * 00000001800AD59A: xorps   xmm1, xmm1
 * 00000001800AD59D: xorps   xmm2, xmm2
 * 00000001800AD5A0: movdqu  xmm0, xmmword ptr [rcx+rax]
 * 00000001800AD5A5: pxor    xmm1, xmm0
 * 00000001800AD5A9: movdqu  xmm0, xmmword ptr [rcx+rax+10h]
 * 00000001800AD5AF: pxor    xmm0, xmm2
 * 00000001800AD5B3: movdqa  xmm2, xmm0
 * 00000001800AD5B7: add     rcx, 20h ; ' '
 * 00000001800AD5BB: cmp     rcx, r8
 * 00000001800AD5BE: jb      short loc_1800AD5A0
 * 00000001800AD5C0: pxor    xmm1, xmm0
 * 00000001800AD5C4: movdqa  xmm0, xmm1
 * 00000001800AD5C8: psrldq  xmm0, 8
 * 00000001800AD5CD: pxor    xmm1, xmm0
 * 00000001800AD5D1: movdqa  xmm0, xmm1
 * 00000001800AD5D5: psrldq  xmm0, 4
 * 00000001800AD5DA: pxor    xmm1, xmm0
 * 00000001800AD5DE: movdqa  xmm0, xmm1
 * 00000001800AD5E2: psrldq  xmm0, 2
 * 00000001800AD5E7: pxor    xmm1, xmm0
 * 00000001800AD5EB: movdqa  xmm0, xmm1
 * 00000001800AD5EF: psrldq  xmm0, 1
 * 00000001800AD5F4: pxor    xmm1, xmm0
 * 00000001800AD5F8: movd    r8d, xmm1
 * 00000001800AD5FD: mov     dword ptr [rbp+1180h+var_1140], r8d
 * 00000001800AD601: cmp     rcx, r11
 * 00000001800AD604: jnb     short loc_1800AD616
 * 00000001800AD606: xor     r8b, [rcx+rax]
 * 00000001800AD60A: inc     rcx
 * 00000001800AD60D: cmp     rcx, r11
 * 00000001800AD610: jb      short loc_1800AD606
 * 00000001800AD612: mov     dword ptr [rbp+1180h+var_1140], r8d
 * 00000001800AD616: mov     [rbp+1180h+var_7E8], rbx
 * 00000001800AD61D: mov     r8, rax
 * 00000001800AD620: mov     rcx, rdx
 * 00000001800AD623: mov     [rbp+1180h+var_1200], rdx
 * 00000001800AD627: xor     edx, edx
 * 00000001800AD629: mov     r10d, 0FFFFFFFFh
 * 00000001800AD62F: mov     [rbp+1180h+var_11E8], edx
 * 00000001800AD632: mov     dword ptr [rbp+1180h+var_11F8], edx
 * 00000001800AD635: mov     rdx, r11
 * 00000001800AD638: and     edx, 7
 * 00000001800AD63B: jz      loc_1800AD752
 * 00000001800AD641: xor     ecx, ecx
 * 00000001800AD643: mov     r10d, ecx
 * 00000001800AD646: test    edx, edx
 * 00000001800AD648: jz      loc_1800AD732
 * 00000001800AD64E: mov     ebx, r14d
 * 00000001800AD651: mov     esi, dword ptr [rbp+1180h+var_11B0]
 * 00000001800AD654: mov     r13d, ecx
 * 00000001800AD657: movzx   ecx, byte ptr [r8]
 * 00000001800AD65B: mov     dword ptr [rbp+1180h+var_11F8], ecx
 * 00000001800AD65E: inc     r8
 * 00000001800AD661: cmp     r13d, 4
 * 00000001800AD665: jnb     short loc_1800AD673
 * 00000001800AD667: lea     ecx, [rbx-20h]
 * 00000001800AD66A: shl     dword ptr [rbp+1180h+var_11F8], cl
 * 00000001800AD66D: or      r9d, dword ptr [rbp+1180h+var_11F8]
 * 00000001800AD671: jmp     short loc_1800AD67C
 * 00000001800AD673: mov     ecx, ebx
 * 00000001800AD675: shl     dword ptr [rbp+1180h+var_11F8], cl
 * 00000001800AD678: or      r10d, dword ptr [rbp+1180h+var_11F8]
 * 00000001800AD67C: mov     [rbp+1180h+var_11E8], r10d
 * 00000001800AD680: mov     dword ptr [rbp+1180h+var_11F8], r9d
 * 00000001800AD684: inc     r13d
 * 00000001800AD687: sub     ebx, 8
 * 00000001800AD68A: cmp     r13d, edx
 * 00000001800AD68D: jl      short loc_1800AD657
 * 00000001800AD68F: xor     r9d, 0B17A307Ah
 * 00000001800AD696: xor     r10d, 42F6B18Dh
 * 00000001800AD69D: mov     ecx, r9d
 * 00000001800AD6A0: mov     [rbp+1180h+var_11C8], rax
 * 00000001800AD6A4: mov     eax, esi
 * 00000001800AD6A6: mov     dword ptr [rbp+1180h+var_11B0], eax
 * 00000001800AD6A9: mov     rbx, 0C81ECB17B1B54A58h
 * 00000001800AD6B3: mov     rsi, 7F1137FAB69605Eh
 * 00000001800AD6BD: mov     r13d, [rbp+1180h+var_10C8]
 * 00000001800AD6C4: mov     eax, r10d
 * 00000001800AD6C7: mov     r15, [rbp+1180h+var_1200]
 * 00000001800AD6CB: mov     r12d, r13d
 * 00000001800AD6CE: lea     rdi, [r15+1]
 * 00000001800AD6D2: mov     [rbp+1180h+var_1200], rdi
 * 00000001800AD6D6: cmp     r12d, 4
 * 00000001800AD6DA: jnb     short loc_1800AD6E3
 * 00000001800AD6DC: rol     ecx, 8
 * 00000001800AD6DF: mov     edi, ecx
 * 00000001800AD6E1: jmp     short loc_1800AD6E8
 * 00000001800AD6E3: rol     eax, 8
 * 00000001800AD6E6: mov     edi, eax
 * 00000001800AD6E8: mov     [r15], dil
 * 00000001800AD6EB: inc     r12d
 * 00000001800AD6EE: mov     rdi, [rbp+1180h+var_1200]
 * 00000001800AD6F2: mov     r15, rdi
 * 00000001800AD6F5: cmp     r12d, edx
 * 00000001800AD6F8: jl      short loc_1800AD6CE
 * 00000001800AD6FA: mov     rcx, rdi
 * 00000001800AD6FD: mov     [rbp+1180h+var_1200], rcx
 * 00000001800AD701: cmp     edx, 4
 * 00000001800AD704: mov     r15, [rbp+1180h+var_1128]
 * 00000001800AD708: lea     r12, [r15+0C0h]
 * 00000001800AD70F: mov     edi, [rbp+1180h+var_1138]
 * 00000001800AD712: jbe     short loc_1800AD726
 * 00000001800AD714: mov     ecx, 8
 * 00000001800AD719: sub     ecx, edx
 * 00000001800AD71B: shl     ecx, 3
 * 00000001800AD71E: shr     r10d, cl
 * 00000001800AD721: shl     r10d, cl
 * 00000001800AD724: jmp     short loc_1800AD74E
 * 00000001800AD726: xor     eax, eax
 * 00000001800AD728: mov     r10d, eax
 * 00000001800AD72B: cmp     edx, 4
 * 00000001800AD72E: jb      short loc_1800AD73E
 * 00000001800AD730: jmp     short loc_1800AD752
 * 00000001800AD732: mov     r9d, 0B17A307Ah
 * 00000001800AD738: mov     dword ptr [rbp+1180h+var_11F8], ecx
 * 00000001800AD73B: mov     [rbp+1180h+var_11E8], ecx
 * 00000001800AD73E: mov     ecx, 4
 * 00000001800AD743: sub     ecx, edx
 * 00000001800AD745: shl     ecx, 3
 * 00000001800AD748: shr     r9d, cl
 * 00000001800AD74B: shl     r9d, cl
 * 00000001800AD74E: mov     rcx, [rbp+1180h+var_1200]
 * 00000001800AD752: mov     rax, r11
 * 00000001800AD755: shr     rax, 3
 * 00000001800AD759: mov     [rbp+1180h+var_1188], rax
 * 00000001800AD75D: test    rax, rax
 * 00000001800AD760: jz      loc_1800ADAA6
 * 00000001800AD766: mov     edx, dword ptr [rbp+1180h+var_7E8+4]
 * 00000001800AD76C: mov     r15d, edx
 * 00000001800AD76F: shr     r15d, 10h
 * 00000001800AD773: movzx   eax, bx
 * 00000001800AD776: mov     dword ptr [rbp+1180h+var_1190], eax
 * 00000001800AD779: movzx   eax, word ptr [rbp+1180h+var_7E8+2]
 * 00000001800AD780: mov     dword ptr [rbp+1180h+var_1198], eax
 * 00000001800AD783: movzx   r14d, dx
 * 00000001800AD787: movzx   eax, bx
 * 00000001800AD78A: mov     dword ptr [rsp+1280h+var_1218], eax
 * 00000001800AD78E: mov     eax, ebx
 * 00000001800AD790: xor     eax, edx
 * 00000001800AD792: add     rcx, 7
 * 00000001800AD796: mov     [rsp+1280h+var_1208], rcx
 * 00000001800AD79B: lea     rcx, [r8+2]
 * 00000001800AD79F: mov     rsi, [rbp+1180h+var_1188]
 * 00000001800AD7A3: mov     r13d, eax
 * 00000001800AD7A6: mov     r12d, [rbp+1180h+var_11E8]
 * 00000001800AD7AA: mov     r11d, dword ptr [rbp+1180h+var_11F8]
 * 00000001800AD7AE: movzx   r8d, byte ptr [rcx-2]
 * 00000001800AD7B3: shl     r8d, 8
 * 00000001800AD7B7: movzx   eax, byte ptr [rcx-1]
 * 00000001800AD7BB: or      r8d, eax
 * 00000001800AD7BE: shl     r8d, 8
 * 00000001800AD7C2: movzx   eax, byte ptr [rcx]
 * 00000001800AD7C5: or      r8d, eax
 * 00000001800AD7C8: shl     r8d, 8
 * 00000001800AD7CC: movzx   eax, byte ptr [rcx+1]
 * 00000001800AD7D0: or      r8d, eax
 * 00000001800AD7D3: movzx   edi, byte ptr [rcx+2]
 * 00000001800AD7D7: shl     edi, 8
 * 00000001800AD7DA: movzx   eax, byte ptr [rcx+3]
 * 00000001800AD7DE: or      edi, eax
 * 00000001800AD7E0: shl     edi, 8
 * 00000001800AD7E3: movzx   eax, byte ptr [rcx+4]
 * 00000001800AD7E7: or      edi, eax
 * 00000001800AD7E9: shl     edi, 8
 * 00000001800AD7EC: movzx   eax, byte ptr [rcx+5]
 * 00000001800AD7F0: or      edi, eax
 * 00000001800AD7F2: xor     r10d, edi
 * 00000001800AD7F5: add     rcx, 8
 * 00000001800AD7F9: mov     [rbp+1180h+var_1188], rcx
 * 00000001800AD7FD: mov     eax, r10d
 * 00000001800AD800: sub     eax, dword ptr [rbp+1180h+var_1190]
 * 00000001800AD803: xor     eax, edx
 * 00000001800AD805: xor     eax, r8d
 * 00000001800AD808: xor     r9d, eax
 * 00000001800AD80B: mov     ecx, edx
 * 00000001800AD80D: xor     ecx, r9d
 * 00000001800AD810: ror     ecx, 0Fh
 * 00000001800AD813: mov     eax, r9d
 * 00000001800AD816: ror     eax, 7
 * 00000001800AD819: movzx   edx, word ptr [rbp+1180h+var_7E8+2]
 * 00000001800AD820: imul    ecx, edx
 * 00000001800AD823: add     eax, ecx
 * 00000001800AD825: xor     r10d, eax
 * 00000001800AD828: lea     ecx, [rbx+r10]
 * 00000001800AD82C: ror     ecx, 9
 * 00000001800AD82F: mov     eax, r10d
 * 00000001800AD832: ror     eax, 0Ah
 * 00000001800AD835: imul    ecx, r14d
 * 00000001800AD839: sub     ecx, eax
 * 00000001800AD83B: xor     r9d, ecx
 * 00000001800AD83E: mov     edx, r9d
 * 00000001800AD841: xor     edx, r14d
 * 00000001800AD844: rol     edx, 4
 * 00000001800AD847: mov     ecx, r9d
 * 00000001800AD84A: rol     ecx, 5
 * 00000001800AD84D: mov     eax, r15d
 * 00000001800AD850: imul    eax, edx
 * 00000001800AD853: add     ecx, eax
 * 00000001800AD855: xor     r10d, ecx
 * 00000001800AD858: mov     eax, ebx
 * 00000001800AD85A: xor     eax, r10d
 * 00000001800AD85D: mov     ecx, dword ptr [rbp+1180h+var_7E8+4]
 * 00000001800AD863: sub     ecx, eax
 * 00000001800AD865: xor     r9d, ecx
 * 00000001800AD868: mov     ecx, r9d
 * 00000001800AD86B: sub     ecx, dword ptr [rsp+1280h+var_1218]
 * 00000001800AD86F: movzx   eax, word ptr [rbp+1180h+var_7E8+2]
 * 00000001800AD876: imul    ecx, eax
 * 00000001800AD879: mov     eax, r9d
 * 00000001800AD87C: shr     eax, 6
 * 00000001800AD87F: sub     ecx, eax
 * 00000001800AD881: xor     r10d, ecx
 * 00000001800AD884: mov     eax, r10d
 * 00000001800AD887: ror     eax, 0Fh
 * 00000001800AD88A: xor     eax, r14d
 * 00000001800AD88D: imul    eax, dword ptr [rsp+1280h+var_1218]
 * 00000001800AD892: xor     r9d, eax
 * 00000001800AD895: mov     eax, r9d
 * 00000001800AD898: not     eax
 * 00000001800AD89A: ror     eax, 3
 * 00000001800AD89D: add     eax, r15d
 * 00000001800AD8A0: imul    eax, r14d
 * 00000001800AD8A4: xor     r10d, eax
 * 00000001800AD8A7: mov     eax, r10d
 * 00000001800AD8AA: sub     eax, dword ptr [rbp+1180h+var_7E8+4]
 * 00000001800AD8B0: sub     eax, dword ptr [rbp+1180h+var_1190]
 * 00000001800AD8B3: xor     r9d, eax
 * 00000001800AD8B6: mov     ecx, r9d
 * 00000001800AD8B9: ror     ecx, 0Ah
 * 00000001800AD8BC: mov     eax, r15d
 * 00000001800AD8BF: xor     eax, r9d
 * 00000001800AD8C2: movzx   edx, word ptr [rbp+1180h+var_7E8+2]
 * 00000001800AD8C9: imul    eax, edx
 * 00000001800AD8CC: xor     ecx, eax
 * 00000001800AD8CE: xor     r10d, ecx
 * 00000001800AD8D1: mov     ecx, dword ptr [rsp+1280h+var_1218]
 * 00000001800AD8D5: xor     ecx, r10d
 * 00000001800AD8D8: rol     ecx, 6
 * 00000001800AD8DB: mov     eax, r10d
 * 00000001800AD8DE: ror     eax, 3
 * 00000001800AD8E1: imul    ecx, r14d
 * 00000001800AD8E5: xor     eax, ecx
 * 00000001800AD8E7: xor     r9d, eax
 * 00000001800AD8EA: mov     eax, r9d
 * 00000001800AD8ED: ror     eax, 0Fh
 * 00000001800AD8F0: sub     eax, r15d
 * 00000001800AD8F3: imul    eax, dword ptr [rsp+1280h+var_1218]
 * 00000001800AD8F8: xor     r10d, eax
 * 00000001800AD8FB: mov     ecx, r15d
 * 00000001800AD8FE: xor     ecx, r10d
 * 00000001800AD901: imul    ecx, dword ptr [rbp+1180h+var_1190]
 * 00000001800AD905: mov     eax, r10d
 * 00000001800AD908: shr     eax, 1
 * 00000001800AD90A: xor     ecx, eax
 * 00000001800AD90C: xor     r9d, ecx
 * 00000001800AD90F: mov     eax, r10d
 * 00000001800AD912: sub     eax, r14d
 * 00000001800AD915: rol     eax, 3
 * 00000001800AD918: mov     ecx, dword ptr [rbp+1180h+var_1190]
 * 00000001800AD91B: imul    ecx, eax
 * 00000001800AD91E: mov     eax, r10d
 * 00000001800AD921: shr     eax, 0Fh
 * 00000001800AD924: xor     ecx, eax
 * 00000001800AD926: xor     r9d, ecx
 * 00000001800AD929: mov     ecx, r9d
 * 00000001800AD92C: sub     ecx, r14d
 * 00000001800AD92F: imul    ecx, edx
 * 00000001800AD932: mov     eax, r9d
 * 00000001800AD935: shr     eax, 0Dh
 * 00000001800AD938: sub     ecx, eax
 * 00000001800AD93A: xor     r10d, ecx
 * 00000001800AD93D: mov     ecx, ebx
 * 00000001800AD93F: sub     ecx, r10d
 * 00000001800AD942: ror     ecx, 9
 * 00000001800AD945: mov     eax, r10d
 * 00000001800AD948: ror     eax, 0Bh
 * 00000001800AD94B: imul    ecx, r14d
 * 00000001800AD94F: xor     eax, ecx
 * 00000001800AD951: xor     r9d, eax
 * 00000001800AD954: mov     eax, r9d
 * 00000001800AD957: sub     eax, r15d
 * 00000001800AD95A: sub     eax, ebx
 * 00000001800AD95C: xor     r10d, eax
 * 00000001800AD95F: mov     eax, r10d
 * 00000001800AD962: ror     eax, 7
 * 00000001800AD965: mov     ecx, r10d
 * 00000001800AD968: xor     ecx, edx
 * 00000001800AD96A: imul    ecx, dword ptr [rbp+1180h+var_1190]
 * 00000001800AD96E: sub     ecx, eax
 * 00000001800AD970: xor     r9d, ecx
 * 00000001800AD973: mov     ecx, r15d
 * 00000001800AD976: xor     ecx, r9d
 * 00000001800AD979: rol     ecx, 4
 * 00000001800AD97C: mov     eax, r9d
 * 00000001800AD97F: ror     eax, 10h
 * 00000001800AD982: imul    ecx, edx
 * 00000001800AD985: sub     ecx, eax
 * 00000001800AD987: xor     r10d, ecx
 * 00000001800AD98A: mov     ecx, ebx
 * 00000001800AD98C: sub     ecx, r10d
 * 00000001800AD98F: ror     ecx, 0Ah
 * 00000001800AD992: mov     eax, r10d
 * 00000001800AD995: ror     eax, 4
 * 00000001800AD998: imul    ecx, r14d
 * 00000001800AD99C: add     eax, ecx
 * 00000001800AD99E: xor     r9d, eax
 * 00000001800AD9A1: mov     edx, r9d
 * 00000001800AD9A4: sub     edx, ebx
 * 00000001800AD9A6: ror     edx, 4
 * 00000001800AD9A9: mov     ecx, r9d
 * 00000001800AD9AC: ror     ecx, 9
 * 00000001800AD9AF: mov     eax, r15d
 * 00000001800AD9B2: imul    eax, edx
 * 00000001800AD9B5: xor     ecx, eax
 * 00000001800AD9B7: xor     r10d, ecx
 * 00000001800AD9BA: mov     edx, dword ptr [rbp+1180h+var_7E8+4]
 * 00000001800AD9C0: xor     edx, r10d
 * 00000001800AD9C3: rol     edx, 8
 * 00000001800AD9C6: mov     eax, r10d
 * 00000001800AD9C9: rol     eax, 2
 * 00000001800AD9CC: mov     ecx, dword ptr [rbp+1180h+var_1190]
 * 00000001800AD9CF: imul    ecx, edx
 * 00000001800AD9D2: sub     ecx, eax
 * 00000001800AD9D4: xor     r9d, ecx
 * 00000001800AD9D7: mov     edx, dword ptr [rbp+1180h+var_7E8+4]
 * 00000001800AD9DD: mov     ecx, edx
 * 00000001800AD9DF: sub     ecx, r9d
 * 00000001800AD9E2: ror     ecx, 0Bh
 * 00000001800AD9E5: mov     eax, r9d
 * 00000001800AD9E8: ror     eax, 0Ch
 * 00000001800AD9EB: imul    ecx, dword ptr [rbp+1180h+var_1198]
 * 00000001800AD9EF: sub     ecx, eax
 * 00000001800AD9F1: xor     r10d, ecx
 * 00000001800AD9F4: mov     ecx, r10d
 * 00000001800AD9F7: movzx   eax, word ptr [rbp+1180h+var_7E8+2]
 * 00000001800AD9FE: xor     ecx, eax
 * 00000001800ADA00: imul    ecx, r14d
 * 00000001800ADA04: mov     eax, r10d
 * 00000001800ADA07: shr     eax, 8
 * 00000001800ADA0A: xor     ecx, eax
 * 00000001800ADA0C: xor     r9d, ecx
 * 00000001800ADA0F: mov     eax, r13d
 * 00000001800ADA12: xor     eax, r9d
 * 00000001800ADA15: xor     r10d, eax
 * 00000001800ADA18: xor     r9d, r11d
 * 00000001800ADA1B: xor     r10d, r12d
 * 00000001800ADA1E: mov     rax, [rsp+1280h+var_1208]
 * 00000001800ADA23: mov     [rax-4], r9b
 * 00000001800ADA27: ror     r9d, 8
 * 00000001800ADA2B: mov     [rax], r10b
 * 00000001800ADA2E: ror     r10d, 8
 * 00000001800ADA32: mov     [rax-5], r9b
 * 00000001800ADA36: ror     r9d, 8
 * 00000001800ADA3A: mov     [rax-1], r10b
 * 00000001800ADA3E: ror     r10d, 8
 * 00000001800ADA42: mov     [rax-6], r9b
 * 00000001800ADA46: ror     r9d, 8
 * 00000001800ADA4A: mov     [rax-2], r10b
 * 00000001800ADA4E: ror     r10d, 8
 * 00000001800ADA52: mov     [rax-7], r9b
 * 00000001800ADA56: mov     [rax-3], r10b
 * 00000001800ADA5A: ror     r9d, 8
 * 00000001800ADA5E: ror     r10d, 8
 * 00000001800ADA62: mov     r11d, r8d
 * 00000001800ADA65: mov     r12d, edi
 * 00000001800ADA68: add     rax, 8
 * 00000001800ADA6C: mov     [rsp+1280h+var_1208], rax
 * 00000001800ADA71: sub     rsi, 1
 * 00000001800ADA75: mov     rcx, [rbp+1180h+var_1188]
 * 00000001800ADA79: jnz     loc_1800AD7AE
 * 00000001800ADA7F: mov     rsi, 7F1137FAB69605Eh
 * 00000001800ADA89: mov     r15, [rbp+1180h+var_1128]
 * 00000001800ADA8D: mov     r12, [rbp+1180h+var_1168]
 * 00000001800ADA91: mov     r13d, [rbp+1180h+var_10C8]
 * 00000001800ADA98: mov     r14d, 38h ; '8'
 * 00000001800ADA9E: mov     edi, [rbp+1180h+var_1138]
 * 00000001800ADAA1: mov     r11, [rsp+1280h+var_1220]
 * 00000001800ADAA6: movzx   eax, byte ptr [rbp+1180h+var_1140]
 * 00000001800ADAAA: mov     rcx, [rbp+1180h+var_1178]
 * 00000001800ADAAE: mov     [rcx+r11], rax
 * 00000001800ADAB2: lea     rax, [r11+8]
 * 00000001800ADAB6: mov     [rbp+1180h+var_F78], rax
 * 00000001800ADABD: mov     [rbp+1180h+var_F70], 8
 * 00000001800ADAC8: mov     [rbp+1180h+var_F68], 0A0h
 * 00000001800ADAD3: call    cs:__imp_GetProcessHeap
 * 00000001800ADADA: nop     dword ptr [rax+rax+00h]
 * 00000001800ADADF: mov     rcx, rax; hHeap
 * 00000001800ADAE2: mov     edx, 8; dwFlags
 * 00000001800ADAE7: lea     r8d, [rdx+28h]; dwBytes
 * 00000001800ADAEB: call    cs:__imp_HeapAlloc
 * 00000001800ADAF2: nop     dword ptr [rax+rax+00h]
 * 00000001800ADAF7: mov     [rsp+1280h+var_1208], rax
 * 00000001800ADAFC: test    rax, rax
 * 00000001800ADAFF: jz      loc_1800ADD33
 * 00000001800ADB05: mov     rcx, [rbp+1180h+Size]
 * 00000001800ADB09: mov     ecx, ecx
 * 00000001800ADB0B: mov     [rax], ecx
 * 00000001800ADB0D: call    cs:__imp_GetProcessHeap
 * 00000001800ADB14: nop     dword ptr [rax+rax+00h]
 * 00000001800ADB19: mov     rcx, rax; hHeap
 * 00000001800ADB1C: mov     r8, [rbp+1180h+Size]
 * 00000001800ADB20: mov     r8d, r8d; dwBytes
 * 00000001800ADB23: mov     edx, 8; dwFlags
 * 00000001800ADB28: call    cs:__imp_HeapAlloc
 * 00000001800ADB2F: nop     dword ptr [rax+rax+00h]
 * 00000001800ADB34: mov     rcx, rax; void *
 * 00000001800ADB37: test    rax, rax
 * 00000001800ADB3A: jz      loc_1800ADC61
 * 00000001800ADB40: mov     rax, [rsp+1280h+var_1208]
 * 00000001800ADB45: mov     [rax+8], rcx
 * 00000001800ADB49: mov     r8, [rbp+1180h+Size]
 * 00000001800ADB4D: mov     r8d, r8d; Size
 * 00000001800ADB50: mov     rdx, [rbp+1180h+var_1178]; Src
 * 00000001800ADB54: call    memcpy_0
 * 00000001800ADB59: mov     rax, [rsp+1280h+var_1208]
 * 00000001800ADB5E: mov     dword ptr [rax+10h], 0A0h
 * 00000001800ADB65: call    cs:__imp_GetProcessHeap
 * 00000001800ADB6C: nop     dword ptr [rax+rax+00h]
 * 00000001800ADB71: mov     rcx, rax; hHeap
 * 00000001800ADB74: mov     edx, 8; dwFlags
 * 00000001800ADB79: mov     r8d, 0A0h; dwBytes
 * 00000001800ADB7F: call    cs:__imp_HeapAlloc
 * 00000001800ADB86: nop     dword ptr [rax+rax+00h]
 * 00000001800ADB8B: mov     rdx, rax
 * 00000001800ADB8E: test    rax, rax
 * 00000001800ADB91: jz      loc_1800ADC61
 * 00000001800ADB97: mov     rax, [rsp+1280h+var_1208]
 * 00000001800ADB9C: mov     [rax+18h], rdx
 * 00000001800ADBA0: lea     rcx, __ImageBase
 * 00000001800ADBA7: lea     rcx, rva unk_1801C1860[rcx]
 * 00000001800ADBAE: movups  xmm0, xmmword ptr [rcx]
 * 00000001800ADBB1: movups  xmmword ptr [rdx], xmm0
 * 00000001800ADBB4: movups  xmm1, xmmword ptr [rcx+10h]
 * 00000001800ADBB8: movups  xmmword ptr [rdx+10h], xmm1
 * 00000001800ADBBC: movups  xmm0, xmmword ptr [rcx+20h]
 * 00000001800ADBC0: movups  xmmword ptr [rdx+20h], xmm0
 * 00000001800ADBC4: movups  xmm1, xmmword ptr [rcx+30h]
 * 00000001800ADBC8: movups  xmmword ptr [rdx+30h], xmm1
 * 00000001800ADBCC: movups  xmm0, xmmword ptr [rcx+40h]
 * 00000001800ADBD0: movups  xmmword ptr [rdx+40h], xmm0
 * 00000001800ADBD4: movups  xmm1, xmmword ptr [rcx+50h]
 * 00000001800ADBD8: movups  xmmword ptr [rdx+50h], xmm1
 * 00000001800ADBDC: movups  xmm0, xmmword ptr [rcx+60h]
 * 00000001800ADBE0: movups  xmmword ptr [rdx+60h], xmm0
 * 00000001800ADBE4: movups  xmm1, xmmword ptr [rcx+70h]
 * 00000001800ADBE8: movups  xmmword ptr [rdx+70h], xmm1
 * 00000001800ADBEC: movups  xmm0, xmmword ptr [rcx+80h]
 * 00000001800ADBF3: movups  xmmword ptr [rdx+80h], xmm0
 * 00000001800ADBFA: movups  xmm1, xmmword ptr [rcx+90h]
 * 00000001800ADC01: movups  xmmword ptr [rdx+90h], xmm1
 * 00000001800ADC08: mov     dword ptr [rax+20h], 8
 * 00000001800ADC0F: call    cs:__imp_GetProcessHeap
 * 00000001800ADC16: nop     dword ptr [rax+rax+00h]
 * 00000001800ADC1B: mov     rcx, rax; hHeap
 * 00000001800ADC1E: mov     edx, 8; dwFlags
 * 00000001800ADC23: mov     r8d, edx; dwBytes
 * 00000001800ADC26: call    cs:__imp_HeapAlloc
 * 00000001800ADC2D: nop     dword ptr [rax+rax+00h]
 * 00000001800ADC32: mov     rdx, rax
 * 00000001800ADC35: test    rax, rax
 * 00000001800ADC38: jz      short loc_1800ADC61
 * 00000001800ADC3A: mov     rcx, [rsp+1280h+var_1208]
 * 00000001800ADC3F: mov     [rcx+28h], rax
 * 00000001800ADC43: mov     rax, cs:qword_1801C1900
 * 00000001800ADC4A: mov     [rdx], rax
 * 00000001800ADC4D: mov     [rbp+1180h+var_1180], rcx
 * 00000001800ADC51: xor     ecx, ecx
 * 00000001800ADC53: mov     dword ptr [rbp+1180h+var_1140], ecx
 * 00000001800ADC56: mov     ecx, dword ptr [rbp+1180h+var_11B0]
 * 00000001800ADC59: mov     dword ptr [rbp+1180h+var_11B0], ecx
 * 00000001800ADC5C: jmp     loc_1800ADD3B
 * 00000001800ADC61: mov     rax, [rsp+1280h+var_1208]
 * 00000001800ADC66: mov     rcx, [rax+8]
 * 00000001800ADC6A: mov     [rbp+1180h+var_1188], rcx
 * 00000001800ADC6E: test    rcx, rcx
 * 00000001800ADC71: jz      short loc_1800ADC9F
 * 00000001800ADC73: call    cs:__imp_GetProcessHeap
 * 00000001800ADC7A: nop     dword ptr [rax+rax+00h]
 * 00000001800ADC7F: mov     rcx, rax; hHeap
 * 00000001800ADC82: mov     r8, [rbp+1180h+var_1188]; lpMem
 * 00000001800ADC86: xor     edx, edx; dwFlags
 * 00000001800ADC88: call    cs:__imp_HeapFree
 * 00000001800ADC8F: nop     dword ptr [rax+rax+00h]
 * 00000001800ADC94: mov     rax, [rsp+1280h+var_1208]
 * 00000001800ADC99: xor     ecx, ecx
 * 00000001800ADC9B: mov     [rax+8], rcx
 * 00000001800ADC9F: mov     rcx, [rax+18h]
 * 00000001800ADCA3: mov     [rbp+1180h+var_1188], rcx
 * 00000001800ADCA7: test    rcx, rcx
 * 00000001800ADCAA: jz      short loc_1800ADCD8
 * 00000001800ADCAC: call    cs:__imp_GetProcessHeap
 * 00000001800ADCB3: nop     dword ptr [rax+rax+00h]
 * 00000001800ADCB8: mov     rcx, rax; hHeap
 * 00000001800ADCBB: mov     r8, [rbp+1180h+var_1188]; lpMem
 * 00000001800ADCBF: xor     edx, edx; dwFlags
 * 00000001800ADCC1: call    cs:__imp_HeapFree
 * 00000001800ADCC8: nop     dword ptr [rax+rax+00h]
 * 00000001800ADCCD: mov     rax, [rsp+1280h+var_1208]
 * 00000001800ADCD2: xor     ecx, ecx
 * 00000001800ADCD4: mov     [rax+18h], rcx
 * 00000001800ADCD8: mov     rax, [rax+28h]
 * 00000001800ADCDC: mov     [rbp+1180h+var_1188], rax
 * 00000001800ADCE0: test    rax, rax
 * 00000001800ADCE3: jz      short loc_1800ADD11
 * 00000001800ADCE5: call    cs:__imp_GetProcessHeap
 * 00000001800ADCEC: nop     dword ptr [rax+rax+00h]
 * 00000001800ADCF1: mov     rcx, rax; hHeap
 * 00000001800ADCF4: mov     r8, [rbp+1180h+var_1188]; lpMem
 * 00000001800ADCF8: xor     edx, edx; dwFlags
 * 00000001800ADCFA: call    cs:__imp_HeapFree
 * 00000001800ADD01: nop     dword ptr [rax+rax+00h]
 * 00000001800ADD06: mov     rax, [rsp+1280h+var_1208]
 * 00000001800ADD0B: xor     ecx, ecx
 * 00000001800ADD0D: mov     [rax+28h], rcx
 * 00000001800ADD11: call    cs:__imp_GetProcessHeap
 * 00000001800ADD18: nop     dword ptr [rax+rax+00h]
 * 00000001800ADD1D: mov     rcx, rax; hHeap
 * 00000001800ADD20: mov     r8, [rsp+1280h+var_1208]; lpMem
 * 00000001800ADD25: xor     edx, edx; dwFlags
 * 00000001800ADD27: call    cs:__imp_HeapFree
 * 00000001800ADD2E: nop     dword ptr [rax+rax+00h]
 * 00000001800ADD33: mov     eax, 0C0000017h
 * 00000001800ADD38: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ADD3B: mov     rax, [rbp+1180h+var_11C8]
 * 00000001800ADD3F: mov     [rbp+1180h+var_11C8], rax
 * 00000001800ADD43: mov     rax, [rbp+1180h+var_1180]
 * 00000001800ADD47: mov     [rbp+1180h+var_1180], rax
 * 00000001800ADD4B: call    cs:__imp_GetProcessHeap
 * 00000001800ADD52: nop     dword ptr [rax+rax+00h]
 * 00000001800ADD57: mov     rcx, rax; hHeap
 * 00000001800ADD5A: mov     r8, [rbp+1180h+var_1178]; lpMem
 * 00000001800ADD5E: xor     edx, edx; dwFlags
 * 00000001800ADD60: call    cs:__imp_HeapFree
 * 00000001800ADD67: nop     dword ptr [rax+rax+00h]
 * 00000001800ADD6C: mov     eax, dword ptr [rbp+1180h+var_1140]
 * 00000001800ADD6F: mov     r9, [rbp+1180h+var_1180]
 * 00000001800ADD73: mov     r10, [rbp+1180h+var_11C8]
 * 00000001800ADD77: or      eax, 10000000h
 * 00000001800ADD7C: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ADD7F: jl      loc_1800AF913
 * 00000001800ADD85: mov     r11d, 4
 * 00000001800ADD8B: mov     dword ptr [rbp+1180h+var_10F4], r11d
 * 00000001800ADD92: lea     r8, [rbp+1180h+var_10F4]
 * 00000001800ADD99: mov     edx, [r9]
 * 00000001800ADD9C: mov     ecx, r11d
 * 00000001800ADD9F: call    RtlUIntAdd
 * 00000001800ADDA4: test    eax, eax
 * 00000001800ADDA6: js      loc_1800ADFD5
 * 00000001800ADDAC: lea     r8, [rbp+1180h+var_10F4]
 * 00000001800ADDB3: mov     edx, r11d
 * 00000001800ADDB6: mov     ecx, dword ptr [rbp+1180h+var_10F4]
 * 00000001800ADDBC: call    RtlUIntAdd
 * 00000001800ADDC1: test    eax, eax
 * 00000001800ADDC3: js      loc_1800ADFD5
 * 00000001800ADDC9: lea     r8, [rbp+1180h+var_10F4]
 * 00000001800ADDD0: mov     edx, [r9+10h]
 * 00000001800ADDD4: mov     ecx, dword ptr [rbp+1180h+var_10F4]
 * 00000001800ADDDA: call    RtlUIntAdd
 * 00000001800ADDDF: test    eax, eax
 * 00000001800ADDE1: js      loc_1800ADFD5
 * 00000001800ADDE7: lea     r8, [rbp+1180h+var_10F4]
 * 00000001800ADDEE: mov     edx, r11d
 * 00000001800ADDF1: mov     ecx, dword ptr [rbp+1180h+var_10F4]
 * 00000001800ADDF7: call    RtlUIntAdd
 * 00000001800ADDFC: test    eax, eax
 * 00000001800ADDFE: js      loc_1800ADFD5
 * 00000001800ADE04: lea     r8, [rbp+1180h+var_10F4]
 * 00000001800ADE0B: mov     edx, [r9+20h]
 * 00000001800ADE0F: mov     ecx, dword ptr [rbp+1180h+var_10F4]
 * 00000001800ADE15: call    RtlUIntAdd
 * 00000001800ADE1A: test    eax, eax
 * 00000001800ADE1C: js      loc_1800ADFD5
 * 00000001800ADE22: mov     eax, dword ptr [rbp+1180h+var_10F4]
 * 00000001800ADE28: mov     dword ptr [rbp+1180h+var_1200], eax
 * 00000001800ADE2B: mov     edi, eax
 * 00000001800ADE2D: call    cs:__imp_GetProcessHeap
 * 00000001800ADE34: nop     dword ptr [rax+rax+00h]
 * 00000001800ADE39: mov     rcx, rax; hHeap
 * 00000001800ADE3C: mov     r8d, edi; dwBytes
 * 00000001800ADE3F: mov     edx, 8; dwFlags
 * 00000001800ADE44: call    cs:__imp_HeapAlloc
 * 00000001800ADE4B: nop     dword ptr [rax+rax+00h]
 * 00000001800ADE50: mov     rcx, rax
 * 00000001800ADE53: mov     [rsp+1280h+var_1208], rax
 * 00000001800ADE58: test    rax, rax
 * 00000001800ADE5B: jnz     short loc_1800ADE78
 * 00000001800ADE5D: mov     eax, 0D0000017h
 * 00000001800ADE62: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ADE65: mov     edi, [rbp+1180h+var_1138]
 * 00000001800ADE68: mov     r9, [rbp+1180h+var_1180]
 * 00000001800ADE6C: mov     r11, [rbp+1180h+var_11E0]
 * 00000001800ADE70: mov     rcx, r11
 * 00000001800ADE73: jmp     loc_1800AE286
 * 00000001800ADE78: mov     [rbp+1180h+var_F60], rcx
 * 00000001800ADE7F: mov     rdi, [rbp+1180h+var_1180]
 * 00000001800ADE83: mov     eax, [rdi]
 * 00000001800ADE85: mov     [rcx], eax
 * 00000001800ADE87: lea     r8, [rbp+1180h+var_F60]
 * 00000001800ADE8E: mov     edx, 4
 * 00000001800ADE93: call    RtlULongLongAdd
 * 00000001800ADE98: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ADE9B: test    eax, eax
 * 00000001800ADE9D: js      loc_1800ADFA5
 * 00000001800ADEA3: mov     r8d, [rdi]; Size
 * 00000001800ADEA6: mov     rdx, [rdi+8]; Src
 * 00000001800ADEAA: mov     rcx, [rbp+1180h+var_F60]; void *
 * 00000001800ADEB1: call    memcpy_0
 * 00000001800ADEB6: mov     r9, rdi
 * 00000001800ADEB9: mov     edx, [rdi]
 * 00000001800ADEBB: lea     r8, [rbp+1180h+var_F60]
 * 00000001800ADEC2: mov     rcx, [rbp+1180h+var_F60]
 * 00000001800ADEC9: call    RtlULongLongAdd
 * 00000001800ADECE: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ADED1: test    eax, eax
 * 00000001800ADED3: js      loc_1800ADFA5
 * 00000001800ADED9: mov     eax, [rdi+10h]
 * 00000001800ADEDC: mov     rcx, [rbp+1180h+var_F60]
 * 00000001800ADEE3: mov     [rcx], eax
 * 00000001800ADEE5: lea     r8, [rbp+1180h+var_F60]
 * 00000001800ADEEC: mov     edx, 4
 * 00000001800ADEF1: call    RtlULongLongAdd
 * 00000001800ADEF6: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ADEF9: test    eax, eax
 * 00000001800ADEFB: js      loc_1800ADFA5
 * 00000001800ADF01: mov     r8d, [rdi+10h]; Size
 * 00000001800ADF05: mov     rdx, [rdi+18h]; Src
 * 00000001800ADF09: mov     rcx, [rbp+1180h+var_F60]; void *
 * 00000001800ADF10: call    memcpy_0
 * 00000001800ADF15: mov     r9, rdi
 * 00000001800ADF18: mov     edx, [rdi+10h]
 * 00000001800ADF1B: lea     r8, [rbp+1180h+var_F60]
 * 00000001800ADF22: mov     rcx, [rbp+1180h+var_F60]
 * 00000001800ADF29: call    RtlULongLongAdd
 * 00000001800ADF2E: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ADF31: test    eax, eax
 * 00000001800ADF33: js      short loc_1800ADFA5
 * 00000001800ADF35: mov     eax, [rdi+20h]
 * 00000001800ADF38: mov     rcx, [rbp+1180h+var_F60]
 * 00000001800ADF3F: mov     [rcx], eax
 * 00000001800ADF41: lea     r8, [rbp+1180h+var_F60]
 * 00000001800ADF48: mov     edx, 4
 * 00000001800ADF4D: call    RtlULongLongAdd
 * 00000001800ADF52: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ADF55: test    eax, eax
 * 00000001800ADF57: js      short loc_1800ADFA5
 * 00000001800ADF59: mov     r8d, [rdi+20h]; Size
 * 00000001800ADF5D: mov     rdx, [rdi+28h]; Src
 * 00000001800ADF61: mov     rcx, [rbp+1180h+var_F60]; void *
 * 00000001800ADF68: call    memcpy_0
 * 00000001800ADF6D: mov     r9, rdi
 * 00000001800ADF70: mov     edx, [rdi+20h]
 * 00000001800ADF73: lea     r8, [rbp+1180h+var_F60]
 * 00000001800ADF7A: mov     rcx, [rbp+1180h+var_F60]
 * 00000001800ADF81: call    RtlULongLongAdd
 * 00000001800ADF86: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ADF89: test    eax, eax
 * 00000001800ADF8B: js      short loc_1800ADFA5
 * 00000001800ADF8D: mov     r11, [rsp+1280h+var_1208]
 * 00000001800ADF92: mov     [rbp+1180h+var_11E0], r11
 * 00000001800ADF96: mov     ecx, dword ptr [rbp+1180h+var_1200]
 * 00000001800ADF99: mov     dword ptr [rbp+1180h+var_11C0], ecx
 * 00000001800ADF9C: mov     edi, [rbp+1180h+var_1138]
 * 00000001800ADF9F: mov     r10, [rbp+1180h+var_11C8]
 * 00000001800ADFA3: jmp     short loc_1800ADFD9
 * 00000001800ADFA5: call    cs:__imp_GetProcessHeap
 * 00000001800ADFAC: nop     dword ptr [rax+rax+00h]
 * 00000001800ADFB1: mov     rcx, rax; hHeap
 * 00000001800ADFB4: mov     r8, [rsp+1280h+var_1208]; lpMem
 * 00000001800ADFB9: xor     edx, edx; dwFlags
 * 00000001800ADFBB: call    cs:__imp_HeapFree
 * 00000001800ADFC2: nop     dword ptr [rax+rax+00h]
 * 00000001800ADFC7: mov     edi, [rbp+1180h+var_1138]
 * 00000001800ADFCA: mov     eax, dword ptr [rbp+1180h+var_1140]
 * 00000001800ADFCD: mov     r9, [rbp+1180h+var_1180]
 * 00000001800ADFD1: mov     r10, [rbp+1180h+var_11C8]
 * 00000001800ADFD5: mov     r11, [rbp+1180h+var_11E0]
 * 00000001800ADFD9: or      eax, 10000000h
 * 00000001800ADFDE: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800ADFE1: jl      loc_1800AF917
 * 00000001800ADFE7: mov     [rbp+1180h+var_10EC], 8
 * 00000001800ADFF1: lea     r8, [rbp+1180h+var_10EC]
 * 00000001800ADFF8: mov     edx, dword ptr [rbp+1180h+var_11B0]
 * 00000001800ADFFB: mov     ecx, 8
 * 00000001800AE000: call    RtlUIntAdd
 * 00000001800AE005: or      eax, 10000000h
 * 00000001800AE00A: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AE00D: jl      loc_1800AE575
 * 00000001800AE013: mov     eax, [rbp+1180h+var_10EC]
 * 00000001800AE019: lea     rcx, [rax+7]
 * 00000001800AE01D: and     ecx, 0FFFFFFF8h
 * 00000001800AE020: cmp     ecx, eax
 * 00000001800AE022: jnb     short loc_1800AE035
 * 00000001800AE024: mov     eax, 0C0000095h
 * 00000001800AE029: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AE02C: mov     rcx, [rbp+1180h+lpModuleName]
 * 00000001800AE030: jmp     loc_1800AE28A
 * 00000001800AE035: mov     [rbp+1180h+var_10E8], ecx
 * 00000001800AE03B: lea     r8, [rbp+1180h+var_10E8]
 * 00000001800AE042: mov     edx, 8
 * 00000001800AE047: call    RtlUIntAdd
 * 00000001800AE04C: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AE04F: test    eax, eax
 * 00000001800AE051: js      short loc_1800AE02C
 * 00000001800AE053: cmp     [rbp+1180h+Src+8], 0
 * 00000001800AE05B: jnz     short loc_1800AE06E
 * 00000001800AE05D: mov     eax, 0C000000Dh
 * 00000001800AE062: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AE065: mov     rcx, [rbp+1180h+lpModuleName]
 * 00000001800AE069: jmp     loc_1800AE28A
 * 00000001800AE06E: cmp     dword ptr [rbp+1180h+Src], 1
 * 00000001800AE075: ja      short loc_1800AE088
 * 00000001800AE077: mov     eax, 0C000000Dh
 * 00000001800AE07C: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AE07F: mov     rcx, [rbp+1180h+lpModuleName]
 * 00000001800AE083: jmp     loc_1800AE28A
 * 00000001800AE088: mov     rcx, [rbp+1180h+Src+8]
 * 00000001800AE08F: mov     [rbp+1180h+var_F58], rcx
 * 00000001800AE096: mov     eax, [rcx]
 * 00000001800AE098: mov     dword ptr [rbp+1180h+var_1200], eax
 * 00000001800AE09B: lea     r8, [rbp+1180h+var_F58]
 * 00000001800AE0A2: mov     edx, 4
 * 00000001800AE0A7: call    RtlULongLongAdd
 * 00000001800AE0AC: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AE0AF: test    eax, eax
 * 00000001800AE0B1: js      loc_1800AE55C
 * 00000001800AE0B7: mov     edx, dword ptr [rbp+1180h+var_1200]
 * 00000001800AE0BA: lea     r8, [rbp+1180h+var_F58]
 * 00000001800AE0C1: mov     rcx, [rbp+1180h+var_F58]
 * 00000001800AE0C8: call    RtlULongLongAdd
 * 00000001800AE0CD: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AE0D0: test    eax, eax
 * 00000001800AE0D2: js      loc_1800AE55C
 * 00000001800AE0D8: mov     rcx, [rbp+1180h+var_F58]
 * 00000001800AE0DF: mov     eax, [rcx]
 * 00000001800AE0E1: mov     dword ptr [rbp+1180h+var_1200], eax
 * 00000001800AE0E4: lea     r8, [rbp+1180h+var_F58]
 * 00000001800AE0EB: mov     edx, 4
 * 00000001800AE0F0: call    RtlULongLongAdd
 * 00000001800AE0F5: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AE0F8: test    eax, eax
 * 00000001800AE0FA: js      loc_1800AE55C
 * 00000001800AE100: mov     [rbp+1180h+var_11E0], r11
 * 00000001800AE104: mov     [rbp+1180h+var_1180], r9
 * 00000001800AE108: cmp     dword ptr [rbp+1180h+Src], 2
 * 00000001800AE10F: ja      short loc_1800AE126
 * 00000001800AE111: mov     eax, 0C000000Dh
 * 00000001800AE116: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AE119: mov     [rbp+1180h+var_11C8], r10
 * 00000001800AE11D: mov     rcx, [rbp+1180h+lpModuleName]
 * 00000001800AE121: jmp     loc_1800AE28A
 * 00000001800AE126: mov     rcx, [rbp+1180h+Src+8]
 * 00000001800AE12D: mov     [rbp+1180h+var_F50], rcx
 * 00000001800AE134: xor     eax, eax
 * 00000001800AE136: mov     r10d, eax
 * 00000001800AE139: mov     eax, dword ptr [rbp+1180h+var_11C0]
 * 00000001800AE13C: mov     dword ptr [rbp+1180h+var_11C0], eax
 * 00000001800AE13F: mov     rax, [rbp+1180h+var_11C8]
 * 00000001800AE143: mov     [rbp+1180h+var_11C8], rax
 * 00000001800AE147: mov     eax, [rcx]
 * 00000001800AE149: mov     dword ptr [rsp+1280h+var_1218], eax
 * 00000001800AE14D: lea     r8, [rbp+1180h+var_F50]
 * 00000001800AE154: mov     edx, 4
 * 00000001800AE159: call    RtlULongLongAdd
 * 00000001800AE15E: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AE161: test    eax, eax
 * 00000001800AE163: js      loc_1800AE282
 * 00000001800AE169: mov     edx, dword ptr [rsp+1280h+var_1218]
 * 00000001800AE16D: lea     r8, [rbp+1180h+var_F50]
 * 00000001800AE174: mov     rcx, [rbp+1180h+var_F50]
 * 00000001800AE17B: call    RtlULongLongAdd
 * 00000001800AE180: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AE183: test    eax, eax
 * 00000001800AE185: js      loc_1800AE282
 * 00000001800AE18B: inc     r10d
 * 00000001800AE18E: mov     rcx, [rbp+1180h+var_F50]
 * 00000001800AE195: cmp     r10d, 2
 * 00000001800AE199: jb      short loc_1800AE147
 * 00000001800AE19B: mov     r10d, [rcx]
 * 00000001800AE19E: lea     r8, [rbp+1180h+var_F50]
 * 00000001800AE1A5: mov     edx, 4
 * 00000001800AE1AA: call    RtlULongLongAdd
 * 00000001800AE1AF: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AE1B2: test    eax, eax
 * 00000001800AE1B4: js      loc_1800AE282
 * 00000001800AE1BA: mov     eax, 4
 * 00000001800AE1BF: mov     dword ptr [rbp+1180h+var_10E0], eax
 * 00000001800AE1C5: lea     r8, [rbp+1180h+var_10E0]
 * 00000001800AE1CC: mov     edx, [rbp+1180h+var_10E8]
 * 00000001800AE1D2: mov     ecx, eax
 * 00000001800AE1D4: call    RtlUIntAdd
 * 00000001800AE1D9: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AE1DC: test    eax, eax
 * 00000001800AE1DE: js      loc_1800AE571
 * 00000001800AE1E4: lea     r8, [rbp+1180h+var_10E0]
 * 00000001800AE1EB: mov     edx, ecx
 * 00000001800AE1ED: mov     ecx, dword ptr [rbp+1180h+var_10E0]
 * 00000001800AE1F3: call    RtlUIntAdd
 * 00000001800AE1F8: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AE1FB: test    eax, eax
 * 00000001800AE1FD: js      loc_1800AE571
 * 00000001800AE203: lea     r8, [rbp+1180h+var_10E0]
 * 00000001800AE20A: mov     edx, dword ptr [rbp+1180h+var_1200]
 * 00000001800AE20D: mov     ecx, dword ptr [rbp+1180h+var_10E0]
 * 00000001800AE213: call    RtlUIntAdd
 * 00000001800AE218: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AE21B: test    eax, eax
 * 00000001800AE21D: js      loc_1800AE571
 * 00000001800AE223: lea     r8, [rbp+1180h+var_10E0]
 * 00000001800AE22A: mov     edx, 4
 * 00000001800AE22F: mov     ecx, dword ptr [rbp+1180h+var_10E0]
 * 00000001800AE235: call    RtlUIntAdd
 * 00000001800AE23A: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AE23D: test    eax, eax
 * 00000001800AE23F: js      loc_1800AE571
 * 00000001800AE245: lea     r8, [rbp+1180h+var_10E0]
 * 00000001800AE24C: mov     edx, r10d
 * 00000001800AE24F: mov     ecx, dword ptr [rbp+1180h+var_10E0]
 * 00000001800AE255: call    RtlUIntAdd
 * 00000001800AE25A: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AE25D: test    eax, eax
 * 00000001800AE25F: js      loc_1800AE571
 * 00000001800AE265: mov     ecx, dword ptr [rbp+1180h+var_10E0]
 * 00000001800AE26B: mov     dword ptr [rbp+1180h+var_1200], ecx
 * 00000001800AE26E: cmp     ecx, 400000h
 * 00000001800AE274: jbe     loc_1800AE582
 * 00000001800AE27A: mov     eax, 8000FFFFh
 * 00000001800AE27F: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AE282: mov     rcx, [rbp+1180h+lpModuleName]
 * 00000001800AE286: mov     r10, [rbp+1180h+var_11C8]
 * 00000001800AE28A: mov     rdx, rcx
 * 00000001800AE28D: mov     r8, rcx
 * 00000001800AE290: test    r10, r10
 * 00000001800AE293: jz      short loc_1800AE2CD
 * 00000001800AE295: call    cs:__imp_GetProcessHeap
 * 00000001800AE29C: nop     dword ptr [rax+rax+00h]
 * 00000001800AE2A1: mov     rcx, rax; hHeap
 * 00000001800AE2A4: mov     r8, [rbp+1180h+var_11C8]; lpMem
 * 00000001800AE2A8: xor     edx, edx; dwFlags
 * 00000001800AE2AA: call    cs:__imp_HeapFree
 * 00000001800AE2B1: nop     dword ptr [rax+rax+00h]
 * 00000001800AE2B6: mov     eax, dword ptr [rbp+1180h+var_1140]
 * 00000001800AE2B9: mov     r9, [rbp+1180h+var_1180]
 * 00000001800AE2BD: mov     r11, [rbp+1180h+var_11E0]
 * 00000001800AE2C1: mov     rcx, [rbp+1180h+lpModuleName]
 * 00000001800AE2C5: mov     rdx, [rbp+1180h+var_11B8]
 * 00000001800AE2C9: mov     r8, [rbp+1180h+var_11A8]
 * 00000001800AE2CD: test    r9, r9
 * 00000001800AE2D0: jz      loc_1800AE3B8
 * 00000001800AE2D6: mov     rax, [r9+8]
 * 00000001800AE2DA: mov     [rsp+1280h+var_1208], rax
 * 00000001800AE2DF: test    rax, rax
 * 00000001800AE2E2: jz      short loc_1800AE310
 * 00000001800AE2E4: call    cs:__imp_GetProcessHeap
 * 00000001800AE2EB: nop     dword ptr [rax+rax+00h]
 * 00000001800AE2F0: mov     rcx, rax; hHeap
 * 00000001800AE2F3: mov     r8, [rsp+1280h+var_1208]; lpMem
 * 00000001800AE2F8: xor     edx, edx; dwFlags
 * 00000001800AE2FA: call    cs:__imp_HeapFree
 * 00000001800AE301: nop     dword ptr [rax+rax+00h]
 * 00000001800AE306: mov     r9, [rbp+1180h+var_1180]
 * 00000001800AE30A: xor     eax, eax
 * 00000001800AE30C: mov     [r9+8], rax
 * 00000001800AE310: mov     rax, [r9+18h]
 * 00000001800AE314: mov     [rsp+1280h+var_1208], rax
 * 00000001800AE319: test    rax, rax
 * 00000001800AE31C: jz      short loc_1800AE34A
 * 00000001800AE31E: call    cs:__imp_GetProcessHeap
 * 00000001800AE325: nop     dword ptr [rax+rax+00h]
 * 00000001800AE32A: mov     rcx, rax; hHeap
 * 00000001800AE32D: mov     r8, [rsp+1280h+var_1208]; lpMem
 * 00000001800AE332: xor     edx, edx; dwFlags
 * 00000001800AE334: call    cs:__imp_HeapFree
 * 00000001800AE33B: nop     dword ptr [rax+rax+00h]
 * 00000001800AE340: mov     r9, [rbp+1180h+var_1180]
 * 00000001800AE344: xor     eax, eax
 * 00000001800AE346: mov     [r9+18h], rax
 * 00000001800AE34A: mov     rax, [r9+28h]
 * 00000001800AE34E: mov     [rsp+1280h+var_1208], rax
 * 00000001800AE353: test    rax, rax
 * 00000001800AE356: jz      short loc_1800AE384
 * 00000001800AE358: call    cs:__imp_GetProcessHeap
 * 00000001800AE35F: nop     dword ptr [rax+rax+00h]
 * 00000001800AE364: mov     rcx, rax; hHeap
 * 00000001800AE367: mov     r8, [rsp+1280h+var_1208]; lpMem
 * 00000001800AE36C: xor     edx, edx; dwFlags
 * 00000001800AE36E: call    cs:__imp_HeapFree
 * 00000001800AE375: nop     dword ptr [rax+rax+00h]
 * 00000001800AE37A: mov     rax, [rbp+1180h+var_1180]
 * 00000001800AE37E: xor     ecx, ecx
 * 00000001800AE380: mov     [rax+28h], rcx
 * 00000001800AE384: call    cs:__imp_GetProcessHeap
 * 00000001800AE38B: nop     dword ptr [rax+rax+00h]
 * 00000001800AE390: mov     rcx, rax; hHeap
 * 00000001800AE393: mov     r8, [rbp+1180h+var_1180]; lpMem
 * 00000001800AE397: xor     edx, edx; dwFlags
 * 00000001800AE399: call    cs:__imp_HeapFree
 * 00000001800AE3A0: nop     dword ptr [rax+rax+00h]
 * 00000001800AE3A5: mov     eax, dword ptr [rbp+1180h+var_1140]
 * 00000001800AE3A8: mov     r11, [rbp+1180h+var_11E0]
 * 00000001800AE3AC: mov     rcx, [rbp+1180h+lpModuleName]
 * 00000001800AE3B0: mov     rdx, [rbp+1180h+var_11B8]
 * 00000001800AE3B4: mov     r8, [rbp+1180h+var_11A8]
 * 00000001800AE3B8: test    r11, r11
 * 00000001800AE3BB: jz      short loc_1800AE3ED
 * 00000001800AE3BD: call    cs:__imp_GetProcessHeap
 * 00000001800AE3C4: nop     dword ptr [rax+rax+00h]
 * 00000001800AE3C9: mov     rcx, rax; hHeap
 * 00000001800AE3CC: mov     r8, [rbp+1180h+var_11E0]; lpMem
 * 00000001800AE3D0: xor     edx, edx; dwFlags
 * 00000001800AE3D2: call    cs:__imp_HeapFree
 * 00000001800AE3D9: nop     dword ptr [rax+rax+00h]
 * 00000001800AE3DE: mov     eax, dword ptr [rbp+1180h+var_1140]
 * 00000001800AE3E1: mov     rcx, [rbp+1180h+lpModuleName]
 * 00000001800AE3E5: mov     rdx, [rbp+1180h+var_11B8]
 * 00000001800AE3E9: mov     r8, [rbp+1180h+var_11A8]
 * 00000001800AE3ED: test    rcx, rcx
 * 00000001800AE3F0: jz      short loc_1800AE41E
 * 00000001800AE3F2: call    cs:__imp_GetProcessHeap
 * 00000001800AE3F9: nop     dword ptr [rax+rax+00h]
 * 00000001800AE3FE: mov     rcx, rax; hHeap
 * 00000001800AE401: mov     r8, [rbp+1180h+lpModuleName]; lpMem
 * 00000001800AE405: xor     edx, edx; dwFlags
 * 00000001800AE407: call    cs:__imp_HeapFree
 * 00000001800AE40E: nop     dword ptr [rax+rax+00h]
 * 00000001800AE413: mov     eax, dword ptr [rbp+1180h+var_1140]
 * 00000001800AE416: mov     rdx, [rbp+1180h+var_11B8]
 * 00000001800AE41A: mov     r8, [rbp+1180h+var_11A8]
 * 00000001800AE41E: test    rdx, rdx
 * 00000001800AE421: jz      loc_1800AE4FD
 * 00000001800AE427: mov     rax, [rdx+8]
 * 00000001800AE42B: mov     [rsp+1280h+var_1208], rax
 * 00000001800AE430: test    rax, rax
 * 00000001800AE433: jz      short loc_1800AE461
 * 00000001800AE435: call    cs:__imp_GetProcessHeap
 * 00000001800AE43C: nop     dword ptr [rax+rax+00h]
 * 00000001800AE441: mov     rcx, rax; hHeap
 * 00000001800AE444: mov     r8, [rsp+1280h+var_1208]; lpMem
 * 00000001800AE449: xor     edx, edx; dwFlags
 * 00000001800AE44B: call    cs:__imp_HeapFree
 * 00000001800AE452: nop     dword ptr [rax+rax+00h]
 * 00000001800AE457: mov     rdx, [rbp+1180h+var_11B8]
 * 00000001800AE45B: xor     eax, eax
 * 00000001800AE45D: mov     [rdx+8], rax
 * 00000001800AE461: mov     rax, [rdx+18h]
 * 00000001800AE465: mov     [rsp+1280h+var_1208], rax
 * 00000001800AE46A: test    rax, rax
 * 00000001800AE46D: jz      short loc_1800AE49B
 * 00000001800AE46F: call    cs:__imp_GetProcessHeap
 * 00000001800AE476: nop     dword ptr [rax+rax+00h]
 * 00000001800AE47B: mov     rcx, rax; hHeap
 * 00000001800AE47E: mov     r8, [rsp+1280h+var_1208]; lpMem
 * 00000001800AE483: xor     edx, edx; dwFlags
 * 00000001800AE485: call    cs:__imp_HeapFree
 * 00000001800AE48C: nop     dword ptr [rax+rax+00h]
 * 00000001800AE491: mov     rdx, [rbp+1180h+var_11B8]
 * 00000001800AE495: xor     eax, eax
 * 00000001800AE497: mov     [rdx+18h], rax
 * 00000001800AE49B: mov     rax, [rdx+28h]
 * 00000001800AE49F: mov     [rsp+1280h+var_1208], rax
 * 00000001800AE4A4: test    rax, rax
 * 00000001800AE4A7: jz      short loc_1800AE4D5
 * 00000001800AE4A9: call    cs:__imp_GetProcessHeap
 * 00000001800AE4B0: nop     dword ptr [rax+rax+00h]
 * 00000001800AE4B5: mov     rcx, rax; hHeap
 * 00000001800AE4B8: mov     r8, [rsp+1280h+var_1208]; lpMem
 * 00000001800AE4BD: xor     edx, edx; dwFlags
 * 00000001800AE4BF: call    cs:__imp_HeapFree
 * 00000001800AE4C6: nop     dword ptr [rax+rax+00h]
 * 00000001800AE4CB: mov     rax, [rbp+1180h+var_11B8]
 * 00000001800AE4CF: xor     ecx, ecx
 * 00000001800AE4D1: mov     [rax+28h], rcx
 * 00000001800AE4D5: call    cs:__imp_GetProcessHeap
 * 00000001800AE4DC: nop     dword ptr [rax+rax+00h]
 * 00000001800AE4E1: mov     rcx, rax; hHeap
 * 00000001800AE4E4: mov     r8, [rbp+1180h+var_11B8]; lpMem
 * 00000001800AE4E8: xor     edx, edx; dwFlags
 * 00000001800AE4EA: call    cs:__imp_HeapFree
 * 00000001800AE4F1: nop     dword ptr [rax+rax+00h]
 * 00000001800AE4F6: mov     eax, dword ptr [rbp+1180h+var_1140]
 * 00000001800AE4F9: mov     r8, [rbp+1180h+var_11A8]
 * 00000001800AE4FD: test    r8, r8
 * 00000001800AE500: jz      short loc_1800AE526
 * 00000001800AE502: call    cs:__imp_GetProcessHeap
 * 00000001800AE509: nop     dword ptr [rax+rax+00h]
 * 00000001800AE50E: mov     rcx, rax; hHeap
 * 00000001800AE511: mov     r8, [rbp+1180h+var_11A8]; lpMem
 * 00000001800AE515: xor     edx, edx; dwFlags
 * 00000001800AE517: call    cs:__imp_HeapFree
 * 00000001800AE51E: nop     dword ptr [rax+rax+00h]
 * 00000001800AE523: mov     eax, dword ptr [rbp+1180h+var_1140]
 * 00000001800AE526: test    eax, eax
 * 00000001800AE528: js      loc_1800AFDC3
 * 00000001800AE52E: cmp     dword ptr [rbp+1180h+var_D68], 1
 * 00000001800AE535: jb      loc_1800AF92D
 * 00000001800AE53B: mov     r11d, 4
 * 00000001800AE541: cmp     qword ptr [rbp+1180h+var_D68+8], 0
 * 00000001800AE549: jnz     loc_1800AF935
 * 00000001800AE54F: mov     eax, 0C000000Dh
 * 00000001800AE554: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AE557: jmp     loc_1800AFDC9
 * 00000001800AE55C: mov     [rbp+1180h+var_11E0], r11
 * 00000001800AE560: mov     [rbp+1180h+var_1180], r9
 * 00000001800AE564: mov     [rbp+1180h+var_11C8], r10
 * 00000001800AE568: mov     rcx, [rbp+1180h+lpModuleName]
 * 00000001800AE56C: jmp     loc_1800AE28A
 * 00000001800AE571: mov     r10, [rbp+1180h+var_11C8]
 * 00000001800AE575: xor     ecx, ecx
 * 00000001800AE577: mov     dword ptr [rbp+1180h+var_1200], ecx
 * 00000001800AE57A: test    eax, eax
 * 00000001800AE57C: js      loc_1800AE28A
 * 00000001800AE582: mov     rax, [rbp+1180h+var_11C8]
 * 00000001800AE586: mov     [rsp+1280h+var_1208], rax
 * 00000001800AE58B: mov     [rbp+1180h+var_1188], r9
 * 00000001800AE58F: mov     [rbp+1180h+var_1178], r11
 * 00000001800AE593: mov     edi, ecx
 * 00000001800AE595: call    cs:__imp_GetProcessHeap
 * 00000001800AE59C: nop     dword ptr [rax+rax+00h]
 * 00000001800AE5A1: mov     rcx, rax; hHeap
 * 00000001800AE5A4: mov     r8d, edi; dwBytes
 * 00000001800AE5A7: mov     edx, 8; dwFlags
 * 00000001800AE5AC: call    cs:__imp_HeapAlloc
 * 00000001800AE5B3: nop     dword ptr [rax+rax+00h]
 * 00000001800AE5B8: mov     rdi, rax
 * 00000001800AE5BB: mov     [rbp+1180h+Size], rax
 * 00000001800AE5BF: test    rax, rax
 * 00000001800AE5C2: jnz     short loc_1800AE5DC
 * 00000001800AE5C4: mov     eax, 0D0000017h
 * 00000001800AE5C9: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AE5CC: mov     edi, [rbp+1180h+var_1138]
 * 00000001800AE5CF: mov     r9, [rbp+1180h+var_1180]
 * 00000001800AE5D3: mov     r11, [rbp+1180h+var_11E0]
 * 00000001800AE5D7: jmp     loc_1800AE282
 * 00000001800AE5DC: mov     rdx, [rbp+1180h+var_1178]
 * 00000001800AE5E0: test    rdx, rdx
 * 00000001800AE5E3: jnz     short loc_1800AE5F9
 * 00000001800AE5E5: mov     eax, 80070057h
 * 00000001800AE5EA: mov     rcx, rdi
 * 00000001800AE5ED: mov     r11, rdx
 * 00000001800AE5F0: mov     [rbp+1180h+var_11E0], rdx
 * 00000001800AE5F4: jmp     loc_1800AE77A
 * 00000001800AE5F9: mov     [rbp+1180h+var_C98], rdx
 * 00000001800AE600: mov     eax, dword ptr [rbp+1180h+var_11C0]
 * 00000001800AE603: mov     [rbp+1180h+var_C88], eax
 * 00000001800AE609: mov     [rbp+1180h+var_C90], rdi
 * 00000001800AE610: mov     eax, dword ptr [rbp+1180h+var_1200]
 * 00000001800AE613: mov     [rbp+1180h+var_C84], eax
 * 00000001800AE619: xor     eax, eax
 * 00000001800AE61B: mov     [rbp+1180h+var_C80], eax
 * 00000001800AE621: lea     r8, [rbp+1180h+phModule]; phModule
 * 00000001800AE628: lea     rdx, aNtdllDll_1; "ntdll.dll"
 * 00000001800AE62F: lea     ecx, [rax+1]; dwFlags
 * 00000001800AE632: call    cs:__imp_GetModuleHandleExW
 * 00000001800AE639: nop     dword ptr [rax+rax+00h]
 * 00000001800AE63E: test    eax, eax
 * 00000001800AE640: jnz     short loc_1800AE66B
 * 00000001800AE642: call    cs:__imp_GetLastError
 * 00000001800AE649: nop     dword ptr [rax+rax+00h]
 * 00000001800AE64E: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AE651: test    eax, eax
 * 00000001800AE653: jle     short loc_1800AE662
 * 00000001800AE655: movzx   eax, ax
 * 00000001800AE658: or      eax, 80070000h
 * 00000001800AE65D: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AE660: test    eax, eax
 * 00000001800AE662: js      short loc_1800AE6B9
 * 00000001800AE664: mov     eax, 80004005h
 * 00000001800AE669: jmp     short loc_1800AE6C9
 * 00000001800AE66B: lea     rdx, aNtquerysystemi; "NtQuerySystemInformation"
 * 00000001800AE672: mov     rcx, [rbp+1180h+phModule]; hModule
 * 00000001800AE679: call    cs:__imp_GetProcAddress
 * 00000001800AE680: nop     dword ptr [rax+rax+00h]
 * 00000001800AE685: test    rax, rax
 * 00000001800AE688: jnz     short loc_1800AE6D1
 * 00000001800AE68A: call    cs:__imp_GetLastError
 * 00000001800AE691: nop     dword ptr [rax+rax+00h]
 * 00000001800AE696: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AE699: test    eax, eax
 * 00000001800AE69B: jle     short loc_1800AE6AA
 * 00000001800AE69D: movzx   eax, ax
 * 00000001800AE6A0: or      eax, 80070000h
 * 00000001800AE6A5: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AE6A8: test    eax, eax
 * 00000001800AE6AA: js      short loc_1800AE6B3
 * 00000001800AE6AC: mov     eax, 80004005h
 * 00000001800AE6B1: jmp     short loc_1800AE6C9
 * 00000001800AE6B3: mov     ecx, dword ptr [rbp+1180h+var_1200]
 * 00000001800AE6B6: mov     dword ptr [rbp+1180h+var_1200], ecx
 * 00000001800AE6B9: cmp     eax, 0D0000023h
 * 00000001800AE6BE: jnz     loc_1800AE7CC
 * 00000001800AE6C4: mov     eax, 8007007Ah
 * 00000001800AE6C9: mov     rcx, rdi
 * 00000001800AE6CC: jmp     loc_1800AE772
 * 00000001800AE6D1: mov     r10, 86712EA7345E2B70h
 * 00000001800AE6DB: xor     r9d, r9d
 * 00000001800AE6DE: lea     r8d, [r9+20h]
 * 00000001800AE6E2: lea     rdx, [rbp+1180h+var_C98]
 * 00000001800AE6E9: lea     ecx, [r8+66h]
 * 00000001800AE6ED: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800AE6F3: or      eax, 10000000h
 * 00000001800AE6F8: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AE6FB: mov     ecx, dword ptr [rbp+1180h+var_1200]
 * 00000001800AE6FE: mov     dword ptr [rbp+1180h+var_1200], ecx
 * 00000001800AE701: jl      short loc_1800AE6B9
 * 00000001800AE703: mov     eax, [rbp+1180h+var_C84]
 * 00000001800AE709: mov     dword ptr [rbp+1180h+var_1200], eax
 * 00000001800AE70C: mov     r10, rdi
 * 00000001800AE70F: mov     rdi, [rbp+1180h+var_1178]
 * 00000001800AE713: mov     rdx, [rsp+1280h+var_1208]
 * 00000001800AE718: mov     r8, [rbp+1180h+var_1188]
 * 00000001800AE71C: jmp     loc_1800AE7FC
 * 00000001800AE721: call    cs:__imp_GetProcessHeap
 * 00000001800AE728: nop     dword ptr [rax+rax+00h]
 * 00000001800AE72D: mov     rcx, rax; hHeap
 * 00000001800AE730: mov     r8, [rsp+1280h+var_1220]; lpMem
 * 00000001800AE735: xor     edx, edx; dwFlags
 * 00000001800AE737: call    cs:__imp_HeapFree
 * 00000001800AE73E: nop     dword ptr [rax+rax+00h]
 * 00000001800AE743: xor     eax, eax
 * 00000001800AE745: mov     [rdi+28h], rax
 * 00000001800AE749: call    cs:__imp_GetProcessHeap
 * 00000001800AE750: nop     dword ptr [rax+rax+00h]
 * 00000001800AE755: mov     rcx, rax; hHeap
 * 00000001800AE758: mov     r8, rdi; lpMem
 * 00000001800AE75B: xor     edx, edx; dwFlags
 * 00000001800AE75D: call    cs:__imp_HeapFree
 * 00000001800AE764: nop     dword ptr [rax+rax+00h]
 * 00000001800AE769: mov     eax, 0D0000017h
 * 00000001800AE76E: mov     rcx, [rbp+1180h+Size]
 * 00000001800AE772: mov     r11, [rbp+1180h+var_1178]
 * 00000001800AE776: mov     [rbp+1180h+var_11E0], r11
 * 00000001800AE77A: mov     [rbp+1180h+lpModuleName], rcx
 * 00000001800AE77E: mov     r9, [rbp+1180h+var_1188]
 * 00000001800AE782: mov     [rbp+1180h+var_1180], r9
 * 00000001800AE786: mov     rdi, [rsp+1280h+var_1208]
 * 00000001800AE78B: mov     [rbp+1180h+var_11C8], rdi
 * 00000001800AE78F: jmp     short loc_1800AE796
 * 00000001800AE791: mov     eax, 0D000000Dh
 * 00000001800AE796: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AE799: mov     r10, [rbp+1180h+var_11C8]
 * 00000001800AE79D: jmp     short loc_1800AE7BD
 * 00000001800AE79F: mov     rcx, r10
 * 00000001800AE7A2: mov     eax, 0D000003Eh
 * 00000001800AE7A7: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AE7AA: mov     [rbp+1180h+lpModuleName], rcx
 * 00000001800AE7AE: mov     [rbp+1180h+var_11E0], rdx
 * 00000001800AE7B2: mov     [rbp+1180h+var_1180], r9
 * 00000001800AE7B6: mov     [rbp+1180h+var_11C8], r8
 * 00000001800AE7BA: mov     r10, r8
 * 00000001800AE7BD: mov     edi, [rbp+1180h+var_1138]
 * 00000001800AE7C0: mov     rdx, [rbp+1180h+var_11B8]
 * 00000001800AE7C4: mov     r8, rdx
 * 00000001800AE7C7: jmp     loc_1800AE290
 * 00000001800AE7CC: mov     r10, rdi
 * 00000001800AE7CF: mov     rcx, rdi
 * 00000001800AE7D2: mov     [rbp+1180h+lpModuleName], rcx
 * 00000001800AE7D6: mov     rdi, [rbp+1180h+var_1178]
 * 00000001800AE7DA: mov     r11, rdi
 * 00000001800AE7DD: mov     [rbp+1180h+var_11E0], rdi
 * 00000001800AE7E1: mov     r8, [rbp+1180h+var_1188]
 * 00000001800AE7E5: mov     r9, r8
 * 00000001800AE7E8: mov     [rbp+1180h+var_1180], r8
 * 00000001800AE7EC: mov     rdx, [rsp+1280h+var_1208]
 * 00000001800AE7F1: mov     [rbp+1180h+var_11C8], rdx
 * 00000001800AE7F5: test    eax, eax
 * 00000001800AE7F7: js      short loc_1800AE799
 * 00000001800AE7F9: mov     eax, dword ptr [rbp+1180h+var_1200]
 * 00000001800AE7FC: xor     ecx, ecx
 * 00000001800AE7FE: mov     [rbp+1180h+var_10D8], ecx
 * 00000001800AE804: mov     [rbp+1180h+var_F40], r10
 * 00000001800AE80B: mov     rcx, r10
 * 00000001800AE80E: cmp     eax, 4
 * 00000001800AE811: jnb     short loc_1800AE836
 * 00000001800AE813: mov     eax, 0D000003Eh
 * 00000001800AE818: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AE81B: mov     [rbp+1180h+lpModuleName], rcx
 * 00000001800AE81F: mov     r11, rdi
 * 00000001800AE822: mov     [rbp+1180h+var_11E0], rdi
 * 00000001800AE826: mov     r9, r8
 * 00000001800AE829: mov     [rbp+1180h+var_1180], r8
 * 00000001800AE82D: mov     [rbp+1180h+var_11C8], rdx
 * 00000001800AE831: mov     r10, rdx
 * 00000001800AE834: jmp     short loc_1800AE7BD
 * 00000001800AE836: mov     eax, [r10]
 * 00000001800AE839: mov     dword ptr [rsp+1280h+var_1218], eax
 * 00000001800AE83D: lea     r8, [rbp+1180h+var_F40]
 * 00000001800AE844: mov     edx, 4
 * 00000001800AE849: call    RtlULongLongAdd
 * 00000001800AE84E: mov     [rbp+1180h+lpModuleName], rcx
 * 00000001800AE852: mov     r11, rdi
 * 00000001800AE855: mov     [rbp+1180h+var_11E0], rdi
 * 00000001800AE859: mov     r9, [rbp+1180h+var_1188]
 * 00000001800AE85D: mov     [rbp+1180h+var_1180], r9
 * 00000001800AE861: mov     rdi, [rsp+1280h+var_1208]
 * 00000001800AE866: mov     [rbp+1180h+var_11C8], rdi
 * 00000001800AE86A: test    eax, eax
 * 00000001800AE86C: js      loc_1800AEDE4
 * 00000001800AE872: lea     r8, [rbp+1180h+var_10D8]
 * 00000001800AE879: mov     edx, 4
 * 00000001800AE87E: xor     ecx, ecx
 * 00000001800AE880: call    RtlUIntAdd
 * 00000001800AE885: mov     rcx, r10
 * 00000001800AE888: mov     [rbp+1180h+lpModuleName], rcx
 * 00000001800AE88C: mov     rdx, [rbp+1180h+var_1178]
 * 00000001800AE890: mov     r11, rdx
 * 00000001800AE893: mov     [rbp+1180h+var_11E0], rdx
 * 00000001800AE897: mov     [rbp+1180h+var_1180], r9
 * 00000001800AE89B: mov     r8, rdi
 * 00000001800AE89E: mov     [rbp+1180h+var_11C8], rdi
 * 00000001800AE8A2: test    eax, eax
 * 00000001800AE8A4: js      loc_1800AEDE4
 * 00000001800AE8AA: mov     eax, dword ptr [rbp+1180h+var_1200]
 * 00000001800AE8AD: sub     eax, [rbp+1180h+var_10D8]
 * 00000001800AE8B3: mov     ecx, dword ptr [rsp+1280h+var_1218]
 * 00000001800AE8B7: cmp     eax, ecx
 * 00000001800AE8B9: jb      loc_1800AE79F
 * 00000001800AE8BF: mov     rax, [rbp+1180h+var_F40]
 * 00000001800AE8C6: mov     [rsp+1280h+var_1220], rax
 * 00000001800AE8CB: mov     [rbp+1180h+var_11F8], rcx
 * 00000001800AE8CF: lea     r8, [rbp+1180h+var_F40]
 * 00000001800AE8D6: mov     edx, ecx
 * 00000001800AE8D8: mov     rcx, rax
 * 00000001800AE8DB: call    RtlULongLongAdd
 * 00000001800AE8E0: mov     rcx, r10
 * 00000001800AE8E3: mov     [rbp+1180h+lpModuleName], rcx
 * 00000001800AE8E7: mov     [rbp+1180h+var_11E0], r11
 * 00000001800AE8EB: mov     [rbp+1180h+var_1180], r9
 * 00000001800AE8EF: mov     [rbp+1180h+var_11C8], rdi
 * 00000001800AE8F3: test    eax, eax
 * 00000001800AE8F5: js      loc_1800AEDE4
 * 00000001800AE8FB: lea     r8, [rbp+1180h+var_10D8]
 * 00000001800AE902: mov     edx, dword ptr [rsp+1280h+var_1218]
 * 00000001800AE906: mov     ecx, [rbp+1180h+var_10D8]
 * 00000001800AE90C: call    RtlUIntAdd
 * 00000001800AE911: mov     rcx, r10
 * 00000001800AE914: mov     [rbp+1180h+lpModuleName], rcx
 * 00000001800AE918: mov     rdx, r11
 * 00000001800AE91B: mov     [rbp+1180h+var_11E0], r11
 * 00000001800AE91F: mov     [rbp+1180h+var_1180], r9
 * 00000001800AE923: mov     r8, rdi
 * 00000001800AE926: mov     [rbp+1180h+var_11C8], rdi
 * 00000001800AE92A: test    eax, eax
 * 00000001800AE92C: js      loc_1800AEDE4
 * 00000001800AE932: mov     eax, dword ptr [rbp+1180h+var_1200]
 * 00000001800AE935: sub     eax, [rbp+1180h+var_10D8]
 * 00000001800AE93B: cmp     eax, 4
 * 00000001800AE93E: jb      loc_1800AE7A2
 * 00000001800AE944: mov     rcx, [rbp+1180h+var_F40]
 * 00000001800AE94B: mov     eax, [rcx]
 * 00000001800AE94D: mov     dword ptr [rbp+1180h+var_1198], eax
 * 00000001800AE950: lea     r8, [rbp+1180h+var_F40]
 * 00000001800AE957: mov     edx, 4
 * 00000001800AE95C: call    RtlULongLongAdd
 * 00000001800AE961: mov     rcx, r10
 * 00000001800AE964: mov     [rbp+1180h+lpModuleName], rcx
 * 00000001800AE968: mov     [rbp+1180h+var_11E0], r11
 * 00000001800AE96C: mov     [rbp+1180h+var_1180], r9
 * 00000001800AE970: mov     [rbp+1180h+var_11C8], rdi
 * 00000001800AE974: test    eax, eax
 * 00000001800AE976: js      loc_1800AEDE4
 * 00000001800AE97C: lea     r8, [rbp+1180h+var_10D8]
 * 00000001800AE983: mov     edx, 4
 * 00000001800AE988: mov     ecx, [rbp+1180h+var_10D8]
 * 00000001800AE98E: call    RtlUIntAdd
 * 00000001800AE993: mov     rcx, r10
 * 00000001800AE996: mov     [rbp+1180h+lpModuleName], rcx
 * 00000001800AE99A: mov     rdx, r11
 * 00000001800AE99D: mov     [rbp+1180h+var_11E0], r11
 * 00000001800AE9A1: mov     [rbp+1180h+var_1180], r9
 * 00000001800AE9A5: mov     r8, rdi
 * 00000001800AE9A8: mov     [rbp+1180h+var_11C8], rdi
 * 00000001800AE9AC: test    eax, eax
 * 00000001800AE9AE: js      loc_1800AEDE4
 * 00000001800AE9B4: mov     eax, dword ptr [rbp+1180h+var_1200]
 * 00000001800AE9B7: sub     eax, [rbp+1180h+var_10D8]
 * 00000001800AE9BD: mov     ecx, dword ptr [rbp+1180h+var_1198]
 * 00000001800AE9C0: cmp     eax, ecx
 * 00000001800AE9C2: jb      loc_1800AE79F
 * 00000001800AE9C8: mov     rax, [rbp+1180h+var_F40]
 * 00000001800AE9CF: mov     [rbp+1180h+var_11C0], rax
 * 00000001800AE9D3: mov     edx, ecx
 * 00000001800AE9D5: lea     r8, [rbp+1180h+var_F40]
 * 00000001800AE9DC: mov     rcx, rax
 * 00000001800AE9DF: call    RtlULongLongAdd
 * 00000001800AE9E4: mov     rcx, r10
 * 00000001800AE9E7: mov     [rbp+1180h+lpModuleName], rcx
 * 00000001800AE9EB: mov     [rbp+1180h+var_11E0], r11
 * 00000001800AE9EF: mov     [rbp+1180h+var_1180], r9
 * 00000001800AE9F3: mov     [rbp+1180h+var_11C8], rdi
 * 00000001800AE9F7: test    eax, eax
 * 00000001800AE9F9: js      loc_1800AEDE4
 * 00000001800AE9FF: lea     r8, [rbp+1180h+var_10D8]
 * 00000001800AEA06: mov     edx, dword ptr [rbp+1180h+var_1198]
 * 00000001800AEA09: mov     ecx, [rbp+1180h+var_10D8]
 * 00000001800AEA0F: call    RtlUIntAdd
 * 00000001800AEA14: mov     rcx, r10
 * 00000001800AEA17: mov     [rbp+1180h+lpModuleName], rcx
 * 00000001800AEA1B: mov     rdx, r11
 * 00000001800AEA1E: mov     [rbp+1180h+var_11E0], r11
 * 00000001800AEA22: mov     [rbp+1180h+var_1180], r9
 * 00000001800AEA26: mov     r8, rdi
 * 00000001800AEA29: mov     [rbp+1180h+var_11C8], rdi
 * 00000001800AEA2D: test    eax, eax
 * 00000001800AEA2F: js      loc_1800AEDE4
 * 00000001800AEA35: mov     eax, dword ptr [rbp+1180h+var_1200]
 * 00000001800AEA38: sub     eax, [rbp+1180h+var_10D8]
 * 00000001800AEA3E: cmp     eax, 4
 * 00000001800AEA41: jb      loc_1800AE7A2
 * 00000001800AEA47: mov     rcx, [rbp+1180h+var_F40]
 * 00000001800AEA4E: mov     eax, [rcx]
 * 00000001800AEA50: mov     dword ptr [rbp+1180h+var_1190], eax
 * 00000001800AEA53: lea     r8, [rbp+1180h+var_F40]
 * 00000001800AEA5A: mov     edx, 4
 * 00000001800AEA5F: call    RtlULongLongAdd
 * 00000001800AEA64: mov     rcx, r10
 * 00000001800AEA67: mov     [rbp+1180h+lpModuleName], rcx
 * 00000001800AEA6B: mov     [rbp+1180h+var_11E0], r11
 * 00000001800AEA6F: mov     [rbp+1180h+var_1180], r9
 * 00000001800AEA73: mov     [rbp+1180h+var_11C8], rdi
 * 00000001800AEA77: test    eax, eax
 * 00000001800AEA79: js      loc_1800AEDE4
 * 00000001800AEA7F: lea     r8, [rbp+1180h+var_10D8]
 * 00000001800AEA86: mov     edx, 4
 * 00000001800AEA8B: mov     ecx, [rbp+1180h+var_10D8]
 * 00000001800AEA91: call    RtlUIntAdd
 * 00000001800AEA96: mov     rcx, r10
 * 00000001800AEA99: mov     [rbp+1180h+lpModuleName], rcx
 * 00000001800AEA9D: mov     rdx, r11
 * 00000001800AEAA0: mov     [rbp+1180h+var_11E0], r11
 * 00000001800AEAA4: mov     [rbp+1180h+var_1180], r9
 * 00000001800AEAA8: mov     r8, rdi
 * 00000001800AEAAB: mov     [rbp+1180h+var_11C8], rdi
 * 00000001800AEAAF: test    eax, eax
 * 00000001800AEAB1: js      loc_1800AEDE4
 * 00000001800AEAB7: mov     eax, dword ptr [rbp+1180h+var_1200]
 * 00000001800AEABA: mov     edi, [rbp+1180h+var_10D8]
 * 00000001800AEAC0: sub     eax, edi
 * 00000001800AEAC2: mov     ecx, dword ptr [rbp+1180h+var_1190]
 * 00000001800AEAC5: cmp     eax, ecx
 * 00000001800AEAC7: jb      loc_1800AE79F
 * 00000001800AEACD: lea     r8, [rbp+1180h+var_10D8]
 * 00000001800AEAD4: mov     edx, ecx
 * 00000001800AEAD6: mov     ecx, edi
 * 00000001800AEAD8: call    RtlUIntAdd
 * 00000001800AEADD: mov     rcx, r10
 * 00000001800AEAE0: mov     [rbp+1180h+lpModuleName], rcx
 * 00000001800AEAE4: mov     rdx, r11
 * 00000001800AEAE7: mov     [rbp+1180h+var_11E0], r11
 * 00000001800AEAEB: mov     [rbp+1180h+var_1180], r9
 * 00000001800AEAEF: mov     r8, [rsp+1280h+var_1208]
 * 00000001800AEAF4: mov     [rbp+1180h+var_11C8], r8
 * 00000001800AEAF8: test    eax, eax
 * 00000001800AEAFA: js      loc_1800AEDE4
 * 00000001800AEB00: mov     edi, dword ptr [rbp+1180h+var_1200]
 * 00000001800AEB03: cmp     edi, [rbp+1180h+var_10D8]
 * 00000001800AEB09: jnz     loc_1800AE7A2
 * 00000001800AEB0F: mov     ecx, dword ptr [rbp+1180h+var_1190]
 * 00000001800AEB12: add     ecx, dword ptr [rbp+1180h+var_1198]
 * 00000001800AEB15: add     ecx, dword ptr [rsp+1280h+var_1218]
 * 00000001800AEB19: add     rcx, 0Ch
 * 00000001800AEB1D: cmp     rcx, rdi
 * 00000001800AEB20: jnz     loc_1800AE79F
 * 00000001800AEB26: call    cs:__imp_GetProcessHeap
 * 00000001800AEB2D: nop     dword ptr [rax+rax+00h]
 * 00000001800AEB32: mov     rcx, rax; hHeap
 * 00000001800AEB35: mov     edx, 8; dwFlags
 * 00000001800AEB3A: lea     r8d, [rdx+28h]; dwBytes
 * 00000001800AEB3E: call    cs:__imp_HeapAlloc
 * 00000001800AEB45: nop     dword ptr [rax+rax+00h]
 * 00000001800AEB4A: mov     rdi, rax
 * 00000001800AEB4D: test    rax, rax
 * 00000001800AEB50: jnz     short loc_1800AEB60
 * 00000001800AEB52: mov     eax, 0D0000017h
 * 00000001800AEB57: mov     rcx, [rbp+1180h+Size]
 * 00000001800AEB5B: jmp     loc_1800AE772
 * 00000001800AEB60: cmp     [rsp+1280h+var_1220], 0
 * 00000001800AEB66: jz      short loc_1800AEBB4
 * 00000001800AEB68: mov     eax, dword ptr [rsp+1280h+var_1218]
 * 00000001800AEB6C: mov     [rdi], eax
 * 00000001800AEB6E: call    cs:__imp_GetProcessHeap
 * 00000001800AEB75: nop     dword ptr [rax+rax+00h]
 * 00000001800AEB7A: mov     rcx, rax; hHeap
 * 00000001800AEB7D: mov     r8, [rbp+1180h+var_11F8]; dwBytes
 * 00000001800AEB81: mov     edx, 8; dwFlags
 * 00000001800AEB86: call    cs:__imp_HeapAlloc
 * 00000001800AEB8D: nop     dword ptr [rax+rax+00h]
 * 00000001800AEB92: test    rax, rax
 * 00000001800AEB95: jz      loc_1800AEC7C
 * 00000001800AEB9B: mov     [rdi+8], rax
 * 00000001800AEB9F: mov     r8, [rbp+1180h+var_11F8]; Size
 * 00000001800AEBA3: mov     rdx, [rsp+1280h+var_1220]; Src
 * 00000001800AEBA8: mov     rcx, rax; void *
 * 00000001800AEBAB: call    memcpy_0
 * 00000001800AEBB0: xor     eax, eax
 * 00000001800AEBB2: jmp     short loc_1800AEBBC
 * 00000001800AEBB4: xor     eax, eax
 * 00000001800AEBB6: mov     [rdi], eax
 * 00000001800AEBB8: mov     [rdi+8], rax
 * 00000001800AEBBC: cmp     [rbp+1180h+var_11C0], 0
 * 00000001800AEBC1: jz      short loc_1800AEC15
 * 00000001800AEBC3: mov     eax, dword ptr [rbp+1180h+var_1198]
 * 00000001800AEBC6: mov     [rdi+10h], eax
 * 00000001800AEBC9: mov     [rsp+1280h+var_1220], rax
 * 00000001800AEBCE: call    cs:__imp_GetProcessHeap
 * 00000001800AEBD5: nop     dword ptr [rax+rax+00h]
 * 00000001800AEBDA: mov     rcx, rax; hHeap
 * 00000001800AEBDD: mov     r8, [rsp+1280h+var_1220]; dwBytes
 * 00000001800AEBE2: mov     edx, 8; dwFlags
 * 00000001800AEBE7: call    cs:__imp_HeapAlloc
 * 00000001800AEBEE: nop     dword ptr [rax+rax+00h]
 * 00000001800AEBF3: test    rax, rax
 * 00000001800AEBF6: jz      loc_1800AEC7C
 * 00000001800AEBFC: mov     [rdi+18h], rax
 * 00000001800AEC00: mov     r8, [rsp+1280h+var_1220]; Size
 * 00000001800AEC05: mov     rdx, [rbp+1180h+var_11C0]; Src
 * 00000001800AEC09: mov     rcx, rax; void *
 * 00000001800AEC0C: call    memcpy_0
 * 00000001800AEC11: xor     eax, eax
 * 00000001800AEC13: jmp     short loc_1800AEC1C
 * 00000001800AEC15: mov     [rdi+10h], eax
 * 00000001800AEC18: mov     [rdi+18h], rax
 * 00000001800AEC1C: cmp     [rbp+1180h+var_F40], 0
 * 00000001800AEC24: jz      loc_1800AECFF
 * 00000001800AEC2A: mov     eax, dword ptr [rbp+1180h+var_1190]
 * 00000001800AEC2D: mov     [rdi+20h], eax
 * 00000001800AEC30: mov     [rsp+1280h+var_1220], rax
 * 00000001800AEC35: call    cs:__imp_GetProcessHeap
 * 00000001800AEC3C: nop     dword ptr [rax+rax+00h]
 * 00000001800AEC41: mov     rcx, rax; hHeap
 * 00000001800AEC44: mov     r8, [rsp+1280h+var_1220]; dwBytes
 * 00000001800AEC49: mov     edx, 8; dwFlags
 * 00000001800AEC4E: call    cs:__imp_HeapAlloc
 * 00000001800AEC55: nop     dword ptr [rax+rax+00h]
 * 00000001800AEC5A: test    rax, rax
 * 00000001800AEC5D: jz      short loc_1800AEC7C
 * 00000001800AEC5F: mov     [rdi+28h], rax
 * 00000001800AEC63: mov     r8, [rsp+1280h+var_1220]; Size
 * 00000001800AEC68: mov     rdx, [rbp+1180h+var_F40]; Src
 * 00000001800AEC6F: mov     rcx, rax; void *
 * 00000001800AEC72: call    memcpy_0
 * 00000001800AEC77: jmp     loc_1800AED06
 * 00000001800AEC7C: mov     rax, [rdi+8]
 * 00000001800AEC80: mov     [rsp+1280h+var_1220], rax
 * 00000001800AEC85: test    rax, rax
 * 00000001800AEC88: jz      short loc_1800AECB2
 * 00000001800AEC8A: call    cs:__imp_GetProcessHeap
 * 00000001800AEC91: nop     dword ptr [rax+rax+00h]
 * 00000001800AEC96: mov     rcx, rax; hHeap
 * 00000001800AEC99: mov     r8, [rsp+1280h+var_1220]; lpMem
 * 00000001800AEC9E: xor     edx, edx; dwFlags
 * 00000001800AECA0: call    cs:__imp_HeapFree
 * 00000001800AECA7: nop     dword ptr [rax+rax+00h]
 * 00000001800AECAC: xor     eax, eax
 * 00000001800AECAE: mov     [rdi+8], rax
 * 00000001800AECB2: mov     rax, [rdi+18h]
 * 00000001800AECB6: mov     [rsp+1280h+var_1220], rax
 * 00000001800AECBB: test    rax, rax
 * 00000001800AECBE: jz      short loc_1800AECE8
 * 00000001800AECC0: call    cs:__imp_GetProcessHeap
 * 00000001800AECC7: nop     dword ptr [rax+rax+00h]
 * 00000001800AECCC: mov     rcx, rax; hHeap
 * 00000001800AECCF: mov     r8, [rsp+1280h+var_1220]; lpMem
 * 00000001800AECD4: xor     edx, edx; dwFlags
 * 00000001800AECD6: call    cs:__imp_HeapFree
 * 00000001800AECDD: nop     dword ptr [rax+rax+00h]
 * 00000001800AECE2: xor     eax, eax
 * 00000001800AECE4: mov     [rdi+18h], rax
 * 00000001800AECE8: mov     rax, [rdi+28h]
 * 00000001800AECEC: mov     [rsp+1280h+var_1220], rax
 * 00000001800AECF1: test    rax, rax
 * 00000001800AECF4: jz      loc_1800AE749
 * 00000001800AECFA: jmp     loc_1800AE721
 * 00000001800AECFF: mov     [rdi+20h], eax
 * 00000001800AED02: mov     [rdi+28h], rax
 * 00000001800AED06: mov     rdx, rdi
 * 00000001800AED09: mov     [rbp+1180h+var_11B8], rdx
 * 00000001800AED0D: mov     rcx, [rbp+1180h+Size]
 * 00000001800AED11: mov     [rbp+1180h+lpModuleName], rcx
 * 00000001800AED15: mov     r11, [rbp+1180h+var_1178]
 * 00000001800AED19: mov     [rbp+1180h+var_11E0], r11
 * 00000001800AED1D: mov     r9, [rbp+1180h+var_1188]
 * 00000001800AED21: mov     [rbp+1180h+var_1180], r9
 * 00000001800AED25: mov     rdi, [rsp+1280h+var_1208]
 * 00000001800AED2A: mov     [rbp+1180h+var_11C8], rdi
 * 00000001800AED2E: mov     rax, [rdx+8]
 * 00000001800AED32: mov     [rsp+1280h+var_1208], rax
 * 00000001800AED37: test    rax, rax
 * 00000001800AED3A: jz      loc_1800AEDF7
 * 00000001800AED40: mov     eax, [rdx]
 * 00000001800AED42: test    eax, eax
 * 00000001800AED44: jz      loc_1800AEDF7
 * 00000001800AED4A: add     rax, 0FFFFFFFFFFFFFFF8h
 * 00000001800AED4E: mov     [rbp+1180h+var_1188], rax
 * 00000001800AED52: mov     rcx, rax; unsigned __int64
 * 00000001800AED55: call    ??2@YAPEAX_K@Z; operator new(unsigned __int64)
 * 00000001800AED5A: mov     rcx, rax
 * 00000001800AED5D: mov     [rbp+1180h+var_1178], rax
 * 00000001800AED61: test    rax, rax
 * 00000001800AED64: jz      loc_1800AEE1F
 * 00000001800AED6A: mov     byte ptr [rbp+1180h+var_1200], 0
 * 00000001800AED6E: mov     [rbp+1180h+var_7D8], rsi
 * 00000001800AED75: mov     rax, [rsp+1280h+var_1208]
 * 00000001800AED7A: mov     [rbp+1180h+Size], rax
 * 00000001800AED7E: mov     [rsp+1280h+var_1220], rcx
 * 00000001800AED83: mov     r8, [rbp+1180h+var_1188]
 * 00000001800AED87: mov     r11, r8
 * 00000001800AED8A: and     r11d, 7
 * 00000001800AED8E: mov     [rbp+1180h+var_1140], r11
 * 00000001800AED92: mov     r9, [rbp+1180h+var_11E0]
 * 00000001800AED96: mov     r10, [rbp+1180h+lpModuleName]
 * 00000001800AED9A: jz      loc_1800AF3D8
 * 00000001800AEDA0: xor     ecx, ecx
 * 00000001800AEDA2: mov     dword ptr [rbp+1180h+var_1190], ecx
 * 00000001800AEDA5: mov     rax, [rbp+1180h+var_1180]
 * 00000001800AEDA9: mov     rdx, [rbp+1180h+var_11B8]
 * 00000001800AEDAD: test    r11d, r11d
 * 00000001800AEDB0: jz      loc_1800AF3B2
 * 00000001800AEDB6: mov     r8, [rbp+1180h+Size]
 * 00000001800AEDBA: mov     r12d, r14d
 * 00000001800AEDBD: mov     r14d, ecx
 * 00000001800AEDC0: mov     r13d, ecx
 * 00000001800AEDC3: movzx   ecx, byte ptr [r8]
 * 00000001800AEDC7: mov     dword ptr [rsp+1280h+var_1218], ecx
 * 00000001800AEDCB: inc     r8
 * 00000001800AEDCE: cmp     dword ptr [rbp+1180h+var_1190], 4
 * 00000001800AEDD2: jnb     short loc_1800AEE47
 * 00000001800AEDD4: lea     ecx, [r12-20h]
 * 00000001800AEDD9: shl     dword ptr [rsp+1280h+var_1218], cl
 * 00000001800AEDDD: or      r14d, dword ptr [rsp+1280h+var_1218]
 * 00000001800AEDE2: jmp     short loc_1800AEE53
 * 00000001800AEDE4: or      eax, 10000000h
 * 00000001800AEDE9: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AEDEC: jl      loc_1800AE799
 * 00000001800AEDF2: jmp     loc_1800AE791
 * 00000001800AEDF7: mov     eax, 0D000000Dh
 * 00000001800AEDFC: jmp     short loc_1800AEE34
 * 00000001800AEDFE: call    cs:__imp_GetProcessHeap
 * 00000001800AEE05: nop     dword ptr [rax+rax+00h]
 * 00000001800AEE0A: mov     rcx, rax; hHeap
 * 00000001800AEE0D: mov     r8, [rbp+1180h+var_1178]; lpMem
 * 00000001800AEE11: xor     edx, edx; dwFlags
 * 00000001800AEE13: call    cs:__imp_HeapFree
 * 00000001800AEE1A: nop     dword ptr [rax+rax+00h]
 * 00000001800AEE1F: mov     eax, 0D0000001h
 * 00000001800AEE24: mov     r9, [rbp+1180h+var_1180]
 * 00000001800AEE28: mov     r11, [rbp+1180h+var_11E0]
 * 00000001800AEE2C: mov     rcx, [rbp+1180h+lpModuleName]
 * 00000001800AEE30: mov     rdx, [rbp+1180h+var_11B8]
 * 00000001800AEE34: mov     r10, [rbp+1180h+var_11C8]
 * 00000001800AEE38: mov     edi, [rbp+1180h+var_1138]
 * 00000001800AEE3B: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AEE3E: mov     r8, [rbp+1180h+var_11A8]
 * 00000001800AEE42: jmp     loc_1800AE290
 * 00000001800AEE47: mov     ecx, r12d
 * 00000001800AEE4A: shl     dword ptr [rsp+1280h+var_1218], cl
 * 00000001800AEE4E: or      r13d, dword ptr [rsp+1280h+var_1218]
 * 00000001800AEE53: mov     ecx, dword ptr [rbp+1180h+var_1190]
 * 00000001800AEE56: inc     ecx
 * 00000001800AEE58: mov     dword ptr [rbp+1180h+var_1190], ecx
 * 00000001800AEE5B: sub     r12d, 8
 * 00000001800AEE5F: cmp     ecx, r11d
 * 00000001800AEE62: jl      loc_1800AEDC3
 * 00000001800AEE68: mov     dword ptr [rsp+1280h+var_1218], r13d
 * 00000001800AEE6D: mov     dword ptr [rbp+1180h+var_1198], r14d
 * 00000001800AEE71: mov     r11d, r14d
 * 00000001800AEE74: xor     r11d, 92F65A5h
 * 00000001800AEE7B: mov     ecx, r13d
 * 00000001800AEE7E: xor     ecx, 699A899Ch
 * 00000001800AEE84: mov     dword ptr [rbp+1180h+var_1190], ecx
 * 00000001800AEE87: mov     [rbp+1180h+Size], r8
 * 00000001800AEE8B: mov     dword ptr [rbp+1180h+var_11C0], ecx
 * 00000001800AEE8E: mov     [rbp+1180h+var_11B8], rdx
 * 00000001800AEE92: mov     [rbp+1180h+lpModuleName], r10
 * 00000001800AEE96: mov     [rbp+1180h+var_11E0], r9
 * 00000001800AEE9A: mov     [rbp+1180h+var_1180], rax
 * 00000001800AEE9E: mov     [rbp+1180h+var_11C8], rdi
 * 00000001800AEEA2: mov     rbx, 0C81ECB17B1B54A58h
 * 00000001800AEEAC: mov     r12, [rbp+1180h+var_1168]
 * 00000001800AEEB0: mov     r13d, [rbp+1180h+var_10C8]
 * 00000001800AEEB7: mov     r14d, 38h ; '8'
 * 00000001800AEEBD: mov     r8, [rbp+1180h+var_1188]
 * 00000001800AEEC1: mov     rcx, [rbp+1180h+var_1140]
 * 00000001800AEEC5: mov     esi, r11d
 * 00000001800AEEC8: mov     r15d, dword ptr [rbp+1180h+var_11C0]
 * 00000001800AEECC: mov     rdi, [rsp+1280h+var_1220]
 * 00000001800AEED1: mov     edx, r13d
 * 00000001800AEED4: lea     r10, [rdi+1]
 * 00000001800AEED8: mov     [rsp+1280h+var_1220], r10
 * 00000001800AEEDD: cmp     edx, 4
 * 00000001800AEEE0: jnb     short loc_1800AEEEA
 * 00000001800AEEE2: rol     esi, 8
 * 00000001800AEEE5: mov     r10d, esi
 * 00000001800AEEE8: jmp     short loc_1800AEEF1
 * 00000001800AEEEA: rol     r15d, 8
 * 00000001800AEEEE: mov     r10d, r15d
 * 00000001800AEEF1: mov     [rdi], r10b
 * 00000001800AEEF4: inc     edx
 * 00000001800AEEF6: mov     r10, [rsp+1280h+var_1220]
 * 00000001800AEEFB: mov     rdi, r10
 * 00000001800AEEFE: cmp     edx, ecx
 * 00000001800AEF00: jl      short loc_1800AEED4
 * 00000001800AEF02: mov     [rsp+1280h+var_1220], r10
 * 00000001800AEF07: cmp     ecx, 4
 * 00000001800AEF0A: mov     rsi, 7F1137FAB69605Eh
 * 00000001800AEF14: mov     r15, [rbp+1180h+var_1128]
 * 00000001800AEF18: mov     rdi, [rbp+1180h+var_11C8]
 * 00000001800AEF1C: mov     r10, [rbp+1180h+lpModuleName]
 * 00000001800AEF20: mov     rdx, [rbp+1180h+var_11B8]
 * 00000001800AEF24: jbe     loc_1800AF3A7
 * 00000001800AEF2A: mov     ecx, 8
 * 00000001800AEF2F: sub     ecx, dword ptr [rbp+1180h+var_1140]
 * 00000001800AEF32: shl     ecx, 3
 * 00000001800AEF35: shr     dword ptr [rbp+1180h+var_1190], cl
 * 00000001800AEF38: shl     dword ptr [rbp+1180h+var_1190], cl
 * 00000001800AEF3B: mov     rcx, [rbp+1180h+var_1178]
 * 00000001800AEF3F: mov     [rbp+1180h+var_11B0], r8
 * 00000001800AEF43: shr     [rbp+1180h+var_11B0], 3
 * 00000001800AEF48: cmp     [rbp+1180h+var_11B0], 0
 * 00000001800AEF4D: jbe     loc_1800AF28B
 * 00000001800AEF53: mov     eax, dword ptr [rbp+1180h+var_7D8+4]
 * 00000001800AEF59: mov     ecx, eax
 * 00000001800AEF5B: shr     ecx, 10h
 * 00000001800AEF5E: mov     dword ptr [rbp+1180h+var_11F8], ecx
 * 00000001800AEF61: mov     r14d, eax
 * 00000001800AEF64: xor     r14d, esi
 * 00000001800AEF67: movzx   eax, ax
 * 00000001800AEF6A: mov     dword ptr [rbp+1180h+var_11C0], eax
 * 00000001800AEF6D: movzx   eax, si
 * 00000001800AEF70: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AEF73: mov     rcx, [rsp+1280h+var_1220]
 * 00000001800AEF78: add     rcx, 7
 * 00000001800AEF7C: mov     [rsp+1280h+var_1220], rcx
 * 00000001800AEF81: mov     rcx, [rbp+1180h+Size]
 * 00000001800AEF85: add     rcx, 2
 * 00000001800AEF89: mov     ebx, dword ptr [rbp+1180h+var_1190]
 * 00000001800AEF8C: mov     r12d, dword ptr [rbp+1180h+var_1198]
 * 00000001800AEF90: mov     r13d, dword ptr [rsp+1280h+var_1218]
 * 00000001800AEF95: mov     r10, [rbp+1180h+var_11B0]
 * 00000001800AEF99: mov     r9d, dword ptr [rbp+1180h+var_7D8+4]
 * 00000001800AEFA0: mov     r15d, dword ptr [rbp+1180h+var_11F8]
 * 00000001800AEFA4: movzx   r8d, byte ptr [rcx-2]
 * 00000001800AEFA9: shl     r8d, 8
 * 00000001800AEFAD: movzx   eax, byte ptr [rcx-1]
 * 00000001800AEFB1: or      r8d, eax
 * 00000001800AEFB4: shl     r8d, 8
 * 00000001800AEFB8: movzx   eax, byte ptr [rcx]
 * 00000001800AEFBB: or      r8d, eax
 * 00000001800AEFBE: shl     r8d, 8
 * 00000001800AEFC2: movzx   eax, byte ptr [rcx+1]
 * 00000001800AEFC6: or      r8d, eax
 * 00000001800AEFC9: movzx   edi, byte ptr [rcx+2]
 * 00000001800AEFCD: shl     edi, 8
 * 00000001800AEFD0: movzx   eax, byte ptr [rcx+3]
 * 00000001800AEFD4: or      edi, eax
 * 00000001800AEFD6: shl     edi, 8
 * 00000001800AEFD9: movzx   eax, byte ptr [rcx+4]
 * 00000001800AEFDD: or      edi, eax
 * 00000001800AEFDF: shl     edi, 8
 * 00000001800AEFE2: movzx   eax, byte ptr [rcx+5]
 * 00000001800AEFE6: or      edi, eax
 * 00000001800AEFE8: xor     r11d, r8d
 * 00000001800AEFEB: xor     ebx, edi
 * 00000001800AEFED: add     rcx, 8
 * 00000001800AEFF1: mov     [rbp+1180h+Size], rcx
 * 00000001800AEFF5: mov     eax, r14d
 * 00000001800AEFF8: xor     eax, r11d
 * 00000001800AEFFB: xor     ebx, eax
 * 00000001800AEFFD: mov     edx, ebx
 * 00000001800AEFFF: sub     edx, esi
 * 00000001800AF001: rol     edx, 5
 * 00000001800AF004: mov     ecx, ebx
 * 00000001800AF006: rol     ecx, 0Ah
 * 00000001800AF009: mov     eax, dword ptr [rbp+1180h+var_11C0]
 * 00000001800AF00C: imul    eax, edx
 * 00000001800AF00F: add     ecx, eax
 * 00000001800AF011: xor     r11d, ecx
 * 00000001800AF014: lea     edx, [r11+r9]
 * 00000001800AF018: ror     edx, 9
 * 00000001800AF01B: mov     eax, r11d
 * 00000001800AF01E: rol     eax, 2
 * 00000001800AF021: movzx   ecx, word ptr [rbp+1180h+var_7D8+2]
 * 00000001800AF028: imul    ecx, edx
 * 00000001800AF02B: sub     ecx, eax
 * 00000001800AF02D: xor     ebx, ecx
 * 00000001800AF02F: mov     ecx, ebx
 * 00000001800AF031: sub     ecx, dword ptr [rbp+1180h+var_11C0]
 * 00000001800AF034: imul    ecx, dword ptr [rbp+1180h+var_1140]
 * 00000001800AF038: mov     eax, ebx
 * 00000001800AF03A: shr     eax, 0Dh
 * 00000001800AF03D: sub     ecx, eax
 * 00000001800AF03F: xor     r11d, ecx
 * 00000001800AF042: movzx   edx, word ptr [rbp+1180h+var_7D8+2]
 * 00000001800AF049: xor     edx, r11d
 * 00000001800AF04C: rol     edx, 6
 * 00000001800AF04F: mov     eax, r11d
 * 00000001800AF052: rol     eax, 2
 * 00000001800AF055: mov     ecx, r15d
 * 00000001800AF058: imul    ecx, edx
 * 00000001800AF05B: sub     ecx, eax
 * 00000001800AF05D: xor     ebx, ecx
 * 00000001800AF05F: mov     eax, esi
 * 00000001800AF061: xor     eax, ebx
 * 00000001800AF063: mov     ecx, r9d
 * 00000001800AF066: sub     ecx, eax
 * 00000001800AF068: xor     r11d, ecx
 * 00000001800AF06B: mov     ecx, r11d
 * 00000001800AF06E: ror     ecx, 6
 * 00000001800AF071: mov     eax, dword ptr [rbp+1180h+var_11C0]
 * 00000001800AF074: xor     eax, r11d
 * 00000001800AF077: movzx   edx, word ptr [rbp+1180h+var_7D8+2]
 * 00000001800AF07E: imul    eax, edx
 * 00000001800AF081: xor     ecx, eax
 * 00000001800AF083: xor     ebx, ecx
 * 00000001800AF085: lea     ecx, [rbx+r9]
 * 00000001800AF089: ror     ecx, 0Fh
 * 00000001800AF08C: mov     edx, ebx
 * 00000001800AF08E: rol     edx, 2
 * 00000001800AF091: mov     eax, dword ptr [rbp+1180h+var_1140]
 * 00000001800AF094: imul    eax, ecx
 * 00000001800AF097: add     edx, eax
 * 00000001800AF099: xor     r11d, edx
 * 00000001800AF09C: mov     edx, r11d
 * 00000001800AF09F: sub     edx, esi
 * 00000001800AF0A1: ror     edx, 0Eh
 * 00000001800AF0A4: mov     eax, r11d
 * 00000001800AF0A7: rol     eax, 8
 * 00000001800AF0AA: mov     ecx, r15d
 * 00000001800AF0AD: imul    ecx, edx
 * 00000001800AF0B0: sub     ecx, eax
 * 00000001800AF0B2: xor     ebx, ecx
 * 00000001800AF0B4: mov     edx, esi
 * 00000001800AF0B6: xor     edx, ebx
 * 00000001800AF0B8: ror     edx, 0Ch
 * 00000001800AF0BB: mov     ecx, ebx
 * 00000001800AF0BD: ror     ecx, 0Ah
 * 00000001800AF0C0: mov     eax, dword ptr [rbp+1180h+var_11C0]
 * 00000001800AF0C3: imul    eax, edx
 * 00000001800AF0C6: xor     ecx, eax
 * 00000001800AF0C8: xor     r11d, ecx
 * 00000001800AF0CB: mov     ecx, r15d
 * 00000001800AF0CE: xor     ecx, r11d
 * 00000001800AF0D1: movzx   eax, word ptr [rbp+1180h+var_7D8+2]
 * 00000001800AF0D8: imul    ecx, eax
 * 00000001800AF0DB: mov     eax, r11d
 * 00000001800AF0DE: shr     eax, 0Ah
 * 00000001800AF0E1: xor     ecx, eax
 * 00000001800AF0E3: xor     ebx, ecx
 * 00000001800AF0E5: mov     eax, ebx
 * 00000001800AF0E7: not     eax
 * 00000001800AF0E9: ror     eax, 5
 * 00000001800AF0EC: add     eax, dword ptr [rbp+1180h+var_1140]
 * 00000001800AF0EF: imul    eax, r15d
 * 00000001800AF0F3: xor     r11d, eax
 * 00000001800AF0F6: mov     eax, r11d
 * 00000001800AF0F9: sub     eax, r15d
 * 00000001800AF0FC: xor     eax, esi
 * 00000001800AF0FE: xor     ebx, eax
 * 00000001800AF100: mov     eax, r15d
 * 00000001800AF103: xor     eax, ebx
 * 00000001800AF105: rol     eax, 2
 * 00000001800AF108: mov     ecx, dword ptr [rbp+1180h+var_11C0]
 * 00000001800AF10B: imul    ecx, eax
 * 00000001800AF10E: mov     eax, ebx
 * 00000001800AF110: shr     eax, 2
 * 00000001800AF113: add     ecx, eax
 * 00000001800AF115: xor     r11d, ecx
 * 00000001800AF118: mov     edx, r11d
 * 00000001800AF11B: sub     edx, r9d
 * 00000001800AF11E: ror     edx, 6
 * 00000001800AF121: mov     ecx, r11d
 * 00000001800AF124: rol     ecx, 7
 * 00000001800AF127: movzx   eax, word ptr [rbp+1180h+var_7D8+2]
 * 00000001800AF12E: imul    eax, edx
 * 00000001800AF131: add     ecx, eax
 * 00000001800AF133: xor     ebx, ecx
 * 00000001800AF135: mov     ecx, ebx
 * 00000001800AF137: ror     ecx, 9
 * 00000001800AF13A: mov     edx, dword ptr [rbp+1180h+var_11C0]
 * 00000001800AF13D: mov     eax, edx
 * 00000001800AF13F: xor     eax, ebx
 * 00000001800AF141: imul    eax, dword ptr [rbp+1180h+var_1140]
 * 00000001800AF145: add     ecx, eax
 * 00000001800AF147: xor     r11d, ecx
 * 00000001800AF14A: movzx   ecx, word ptr [rbp+1180h+var_7D8+2]
 * 00000001800AF151: xor     ecx, r11d
 * 00000001800AF154: rol     ecx, 5
 * 00000001800AF157: mov     eax, r11d
 * 00000001800AF15A: rol     eax, 7
 * 00000001800AF15D: imul    ecx, r15d
 * 00000001800AF161: add     eax, ecx
 * 00000001800AF163: xor     ebx, eax
 * 00000001800AF165: mov     eax, r14d
 * 00000001800AF168: xor     eax, ebx
 * 00000001800AF16A: xor     r11d, eax
 * 00000001800AF16D: mov     eax, r11d
 * 00000001800AF170: ror     eax, 3
 * 00000001800AF173: movzx   ecx, word ptr [rbp+1180h+var_7D8+2]
 * 00000001800AF17A: sub     eax, ecx
 * 00000001800AF17C: imul    eax, edx
 * 00000001800AF17F: xor     ebx, eax
 * 00000001800AF181: mov     ecx, ebx
 * 00000001800AF183: sub     ecx, r9d
 * 00000001800AF186: ror     ecx, 1
 * 00000001800AF188: mov     eax, ebx
 * 00000001800AF18A: ror     eax, 6
 * 00000001800AF18D: imul    ecx, dword ptr [rbp+1180h+var_1140]
 * 00000001800AF191: sub     ecx, eax
 * 00000001800AF193: xor     r11d, ecx
 * 00000001800AF196: lea     ecx, [rsi+r11]
 * 00000001800AF19A: rol     ecx, 3
 * 00000001800AF19D: mov     eax, r11d
 * 00000001800AF1A0: rol     eax, 0Eh
 * 00000001800AF1A3: imul    ecx, r15d
 * 00000001800AF1A7: add     eax, ecx
 * 00000001800AF1A9: xor     ebx, eax
 * 00000001800AF1AB: lea     ecx, [rsi+rbx]
 * 00000001800AF1AE: rol     ecx, 0Fh
 * 00000001800AF1B1: mov     eax, ebx
 * 00000001800AF1B3: ror     eax, 0Eh
 * 00000001800AF1B6: imul    ecx, edx
 * 00000001800AF1B9: sub     ecx, eax
 * 00000001800AF1BB: xor     r11d, ecx
 * 00000001800AF1BE: mov     ecx, dword ptr [rbp+1180h+var_1140]
 * 00000001800AF1C1: xor     ecx, r11d
 * 00000001800AF1C4: movzx   eax, word ptr [rbp+1180h+var_7D8+2]
 * 00000001800AF1CB: imul    ecx, eax
 * 00000001800AF1CE: mov     eax, r11d
 * 00000001800AF1D1: shr     eax, 3
 * 00000001800AF1D4: xor     ecx, eax
 * 00000001800AF1D6: xor     ebx, ecx
 * 00000001800AF1D8: mov     ecx, ebx
 * 00000001800AF1DA: xor     ecx, r9d
 * 00000001800AF1DD: rol     ecx, 4
 * 00000001800AF1E0: mov     eax, ebx
 * 00000001800AF1E2: rol     eax, 2
 * 00000001800AF1E5: imul    ecx, dword ptr [rbp+1180h+var_1140]
 * 00000001800AF1E9: xor     eax, ecx
 * 00000001800AF1EB: xor     eax, r12d
 * 00000001800AF1EE: xor     r11d, eax
 * 00000001800AF1F1: xor     ebx, r13d
 * 00000001800AF1F4: mov     rax, [rsp+1280h+var_1220]
 * 00000001800AF1F9: mov     [rax-4], r11b
 * 00000001800AF1FD: ror     r11d, 8
 * 00000001800AF201: mov     [rax], bl
 * 00000001800AF203: ror     ebx, 8
 * 00000001800AF206: mov     [rax-5], r11b
 * 00000001800AF20A: ror     r11d, 8
 * 00000001800AF20E: mov     [rax-1], bl
 * 00000001800AF211: ror     ebx, 8
 * 00000001800AF214: mov     [rax-6], r11b
 * 00000001800AF218: ror     r11d, 8
 * 00000001800AF21C: mov     [rax-2], bl
 * 00000001800AF21F: ror     ebx, 8
 * 00000001800AF222: mov     [rax-7], r11b
 * 00000001800AF226: mov     [rax-3], bl
 * 00000001800AF229: ror     r11d, 8
 * 00000001800AF22D: ror     ebx, 8
 * 00000001800AF230: mov     r12d, r8d
 * 00000001800AF233: mov     r13d, edi
 * 00000001800AF236: add     rax, 8
 * 00000001800AF23A: mov     [rsp+1280h+var_1220], rax
 * 00000001800AF23F: sub     r10, 1
 * 00000001800AF243: mov     rcx, [rbp+1180h+Size]
 * 00000001800AF247: jnz     loc_1800AEFA4
 * 00000001800AF24D: mov     rbx, 0C81ECB17B1B54A58h
 * 00000001800AF257: mov     r15, [rbp+1180h+var_1128]
 * 00000001800AF25B: lea     r12, [r15+0C0h]
 * 00000001800AF262: mov     r13d, [rbp+1180h+var_10C8]
 * 00000001800AF269: mov     r14d, 38h ; '8'
 * 00000001800AF26F: mov     rax, [rbp+1180h+var_1180]
 * 00000001800AF273: mov     rdi, [rbp+1180h+var_11C8]
 * 00000001800AF277: mov     r9, [rbp+1180h+var_11E0]
 * 00000001800AF27B: mov     r10, [rbp+1180h+lpModuleName]
 * 00000001800AF27F: mov     rcx, [rbp+1180h+var_1178]
 * 00000001800AF283: mov     rdx, [rbp+1180h+var_11B8]
 * 00000001800AF287: mov     r8, [rbp+1180h+var_1188]
 * 00000001800AF28B: xor     r11d, r11d
 * 00000001800AF28E: test    r8, r8
 * 00000001800AF291: jz      loc_1800AF337
 * 00000001800AF297: cmp     r8, 20h ; ' '
 * 00000001800AF29B: jb      short loc_1800AF31B
 * 00000001800AF29D: mov     [rbp+1180h+Size], r8
 * 00000001800AF2A1: and     [rbp+1180h+Size], 0FFFFFFFFFFFFFFE0h
 * 00000001800AF2A6: xorps   xmm1, xmm1
 * 00000001800AF2A9: xorps   xmm2, xmm2
 * 00000001800AF2AC: movdqu  xmm0, xmmword ptr [r11+rcx]
 * 00000001800AF2B2: pxor    xmm1, xmm0
 * 00000001800AF2B6: movdqu  xmm0, xmmword ptr [r11+rcx+10h]
 * 00000001800AF2BD: pxor    xmm0, xmm2
 * 00000001800AF2C1: movdqa  xmm2, xmm0
 * 00000001800AF2C5: add     r11, 20h ; ' '
 * 00000001800AF2C9: cmp     r11, [rbp+1180h+Size]
 * 00000001800AF2CD: jb      short loc_1800AF2AC
 * 00000001800AF2CF: pxor    xmm1, xmm0
 * 00000001800AF2D3: movdqa  xmm0, xmm1
 * 00000001800AF2D7: psrldq  xmm0, 8
 * 00000001800AF2DC: pxor    xmm1, xmm0
 * 00000001800AF2E0: movdqa  xmm0, xmm1
 * 00000001800AF2E4: psrldq  xmm0, 4
 * 00000001800AF2E9: pxor    xmm1, xmm0
 * 00000001800AF2ED: movdqa  xmm0, xmm1
 * 00000001800AF2F1: psrldq  xmm0, 2
 * 00000001800AF2F6: pxor    xmm1, xmm0
 * 00000001800AF2FA: movdqa  xmm0, xmm1
 * 00000001800AF2FE: psrldq  xmm0, 1
 * 00000001800AF303: pxor    xmm1, xmm0
 * 00000001800AF307: movd    dword ptr [rbp+1180h+var_1200], xmm1
 * 00000001800AF30C: cmp     r11, r8
 * 00000001800AF30F: mov     rsi, 7F1137FAB69605Eh
 * 00000001800AF319: jnb     short loc_1800AF337
 * 00000001800AF31B: mov     esi, dword ptr [rbp+1180h+var_1200]
 * 00000001800AF31E: xor     sil, [r11+rcx]
 * 00000001800AF322: inc     r11
 * 00000001800AF325: cmp     r11, r8
 * 00000001800AF328: jb      short loc_1800AF31E
 * 00000001800AF32A: mov     dword ptr [rbp+1180h+var_1200], esi
 * 00000001800AF32D: mov     rsi, 7F1137FAB69605Eh
 * 00000001800AF337: mov     r8, rdi
 * 00000001800AF33A: mov     [rbp+1180h+Size], rdi
 * 00000001800AF33E: mov     [rsp+1280h+var_1220], rax
 * 00000001800AF343: mov     [rbp+1180h+var_1190], r9
 * 00000001800AF347: mov     [rbp+1180h+var_11F8], r10
 * 00000001800AF34B: mov     r11, rdx
 * 00000001800AF34E: mov     [rbp+1180h+var_11C0], rdx
 * 00000001800AF352: movzx   eax, byte ptr [rbp+1180h+var_1200]
 * 00000001800AF356: mov     rcx, [rbp+1180h+var_1188]
 * 00000001800AF35A: mov     rdx, [rsp+1280h+var_1208]
 * 00000001800AF35F: cmp     rax, [rcx+rdx]
 * 00000001800AF363: jnz     loc_1800AEDFE
 * 00000001800AF369: mov     [rbp+1180h+var_F38], rcx
 * 00000001800AF370: xor     eax, eax
 * 00000001800AF372: mov     [rbp+1180h+var_10D4], eax
 * 00000001800AF378: mov     rdi, [rbp+1180h+var_1178]
 * 00000001800AF37C: mov     [rbp+1180h+var_F30], rdi
 * 00000001800AF383: cmp     ecx, 4
 * 00000001800AF386: jnb     short loc_1800AF3F9
 * 00000001800AF388: mov     rdx, r11
 * 00000001800AF38B: mov     rcx, r10
 * 00000001800AF38E: mov     r11, r9
 * 00000001800AF391: mov     [rbp+1180h+var_11E0], r9
 * 00000001800AF395: mov     r9, [rsp+1280h+var_1220]
 * 00000001800AF39A: mov     [rbp+1180h+var_1180], r9
 * 00000001800AF39E: mov     [rbp+1180h+var_11C8], r8
 * 00000001800AF3A2: jmp     loc_1800AF8EC
 * 00000001800AF3A7: mov     dword ptr [rbp+1180h+var_1190], r13d
 * 00000001800AF3AB: jb      short loc_1800AF3C2
 * 00000001800AF3AD: jmp     loc_1800AEF3B
 * 00000001800AF3B2: mov     r11d, 92F65A5h
 * 00000001800AF3B8: mov     dword ptr [rbp+1180h+var_1198], ecx
 * 00000001800AF3BB: mov     dword ptr [rsp+1280h+var_1218], ecx
 * 00000001800AF3BF: mov     dword ptr [rbp+1180h+var_1190], ecx
 * 00000001800AF3C2: mov     ecx, 4
 * 00000001800AF3C7: sub     ecx, dword ptr [rbp+1180h+var_1140]
 * 00000001800AF3CA: shl     ecx, 3
 * 00000001800AF3CD: shr     r11d, cl
 * 00000001800AF3D0: shl     r11d, cl
 * 00000001800AF3D3: jmp     loc_1800AEF3B
 * 00000001800AF3D8: xor     edx, edx
 * 00000001800AF3DA: mov     dword ptr [rbp+1180h+var_1198], edx
 * 00000001800AF3DD: mov     eax, 0FFFFFFFFh
 * 00000001800AF3E2: mov     dword ptr [rsp+1280h+var_1218], eax
 * 00000001800AF3E6: mov     dword ptr [rbp+1180h+var_1190], edx
 * 00000001800AF3E9: mov     r11d, edx
 * 00000001800AF3EC: mov     rax, [rbp+1180h+var_1180]
 * 00000001800AF3F0: mov     rdx, [rbp+1180h+var_11B8]
 * 00000001800AF3F4: jmp     loc_1800AEF3F
 * 00000001800AF3F9: mov     eax, [rdi]
 * 00000001800AF3FB: mov     dword ptr [rbp+1180h+var_1200], eax
 * 00000001800AF3FE: lea     r8, [rbp+1180h+var_F30]
 * 00000001800AF405: mov     edx, 4
 * 00000001800AF40A: mov     rcx, rdi
 * 00000001800AF40D: call    RtlULongLongAdd
 * 00000001800AF412: mov     r8, rdi
 * 00000001800AF415: mov     [rbp+1180h+var_11A8], rdi
 * 00000001800AF419: mov     rdx, r11
 * 00000001800AF41C: mov     [rbp+1180h+var_11B8], rdx
 * 00000001800AF420: mov     rcx, r10
 * 00000001800AF423: mov     [rbp+1180h+lpModuleName], rcx
 * 00000001800AF427: mov     r11, r9
 * 00000001800AF42A: mov     [rbp+1180h+var_11E0], r9
 * 00000001800AF42E: mov     r9, [rsp+1280h+var_1220]
 * 00000001800AF433: mov     [rbp+1180h+var_1180], r9
 * 00000001800AF437: mov     r10, [rbp+1180h+Size]
 * 00000001800AF43B: mov     [rbp+1180h+var_11C8], r10
 * 00000001800AF43F: test    eax, eax
 * 00000001800AF441: js      loc_1800AF900
 * 00000001800AF447: lea     r8, [rbp+1180h+var_10D4]
 * 00000001800AF44E: mov     edx, 4
 * 00000001800AF453: xor     ecx, ecx
 * 00000001800AF455: call    RtlUIntAdd
 * 00000001800AF45A: mov     [rbp+1180h+var_11A8], rdi
 * 00000001800AF45E: mov     rdx, [rbp+1180h+var_11C0]
 * 00000001800AF462: mov     [rbp+1180h+var_11B8], rdx
 * 00000001800AF466: mov     rcx, [rbp+1180h+var_11F8]
 * 00000001800AF46A: mov     [rbp+1180h+lpModuleName], rcx
 * 00000001800AF46E: mov     [rbp+1180h+var_11E0], r11
 * 00000001800AF472: mov     r8, r9
 * 00000001800AF475: mov     [rbp+1180h+var_1180], r9
 * 00000001800AF479: mov     [rbp+1180h+var_11C8], r10
 * 00000001800AF47D: test    eax, eax
 * 00000001800AF47F: js      loc_1800AF8FD
 * 00000001800AF485: mov     eax, dword ptr [rbp+1180h+var_1188]
 * 00000001800AF488: sub     eax, [rbp+1180h+var_10D4]
 * 00000001800AF48E: cmp     eax, 4
 * 00000001800AF491: jb      loc_1800AF8E0
 * 00000001800AF497: mov     rcx, [rbp+1180h+var_F30]
 * 00000001800AF49E: mov     eax, [rcx]
 * 00000001800AF4A0: mov     dword ptr [rsp+1280h+var_1218], eax
 * 00000001800AF4A4: lea     r8, [rbp+1180h+var_F30]
 * 00000001800AF4AB: mov     edx, 4
 * 00000001800AF4B0: call    RtlULongLongAdd
 * 00000001800AF4B5: mov     r8, rdi
 * 00000001800AF4B8: mov     [rbp+1180h+var_11A8], rdi
 * 00000001800AF4BC: mov     rdx, [rbp+1180h+var_11C0]
 * 00000001800AF4C0: mov     [rbp+1180h+var_11B8], rdx
 * 00000001800AF4C4: mov     rcx, [rbp+1180h+var_11F8]
 * 00000001800AF4C8: mov     [rbp+1180h+lpModuleName], rcx
 * 00000001800AF4CC: mov     [rbp+1180h+var_11E0], r11
 * 00000001800AF4D0: mov     [rbp+1180h+var_1180], r9
 * 00000001800AF4D4: mov     [rbp+1180h+var_11C8], r10
 * 00000001800AF4D8: test    eax, eax
 * 00000001800AF4DA: js      loc_1800AF900
 * 00000001800AF4E0: lea     r8, [rbp+1180h+var_10D4]
 * 00000001800AF4E7: mov     edx, 4
 * 00000001800AF4EC: mov     ecx, [rbp+1180h+var_10D4]
 * 00000001800AF4F2: call    RtlUIntAdd
 * 00000001800AF4F7: mov     [rbp+1180h+var_11A8], rdi
 * 00000001800AF4FB: mov     rdx, [rbp+1180h+var_11C0]
 * 00000001800AF4FF: mov     [rbp+1180h+var_11B8], rdx
 * 00000001800AF503: mov     rcx, [rbp+1180h+var_11F8]
 * 00000001800AF507: mov     [rbp+1180h+lpModuleName], rcx
 * 00000001800AF50B: mov     [rbp+1180h+var_11E0], r11
 * 00000001800AF50F: mov     r8, r9
 * 00000001800AF512: mov     [rbp+1180h+var_1180], r9
 * 00000001800AF516: mov     [rbp+1180h+var_11C8], r10
 * 00000001800AF51A: test    eax, eax
 * 00000001800AF51C: js      loc_1800AF8FD
 * 00000001800AF522: mov     eax, dword ptr [rbp+1180h+var_1188]
 * 00000001800AF525: mov     r9d, [rbp+1180h+var_10D4]
 * 00000001800AF52C: sub     eax, r9d
 * 00000001800AF52F: mov     ecx, dword ptr [rsp+1280h+var_1218]
 * 00000001800AF533: cmp     eax, ecx
 * 00000001800AF535: jb      loc_1800AF8D9
 * 00000001800AF53B: lea     r8, [rbp+1180h+var_10D4]
 * 00000001800AF542: mov     edx, ecx
 * 00000001800AF544: mov     ecx, r9d
 * 00000001800AF547: call    RtlUIntAdd
 * 00000001800AF54C: mov     [rbp+1180h+var_11A8], rdi
 * 00000001800AF550: mov     rdx, [rbp+1180h+var_11C0]
 * 00000001800AF554: mov     [rbp+1180h+var_11B8], rdx
 * 00000001800AF558: mov     rcx, [rbp+1180h+var_11F8]
 * 00000001800AF55C: mov     [rbp+1180h+lpModuleName], rcx
 * 00000001800AF560: mov     [rbp+1180h+var_11E0], r11
 * 00000001800AF564: mov     r8, [rsp+1280h+var_1220]
 * 00000001800AF569: mov     r9, r8
 * 00000001800AF56C: mov     [rbp+1180h+var_1180], r8
 * 00000001800AF570: mov     [rbp+1180h+var_11C8], r10
 * 00000001800AF574: test    eax, eax
 * 00000001800AF576: js      loc_1800AF8FD
 * 00000001800AF57C: mov     edx, dword ptr [rbp+1180h+var_1188]
 * 00000001800AF57F: mov     r11d, dword ptr [rsp+1280h+var_1218]
 * 00000001800AF584: mov     r9, [rbp+1180h+var_F30]
 * 00000001800AF58B: lea     rcx, [r11+r9]
 * 00000001800AF58F: lea     rax, [rdx+rdi]
 * 00000001800AF593: cmp     rax, rcx
 * 00000001800AF596: jb      loc_1800AF8D1
 * 00000001800AF59C: sub     rdx, r11
 * 00000001800AF59F: sub     rdx, r9
 * 00000001800AF5A2: add     rdx, rdi
 * 00000001800AF5A5: cmp     rdx, 8
 * 00000001800AF5A9: jnb     loc_1800AF8D1
 * 00000001800AF5AF: xor     ecx, ecx
 * 00000001800AF5B1: mov     [rsp+1280h+var_1208], rcx
 * 00000001800AF5B6: mov     eax, ecx
 * 00000001800AF5B8: mov     dword ptr [rbp+1180h+var_1140], ecx
 * 00000001800AF5BB: mov     dword ptr [rbp+1180h+var_1198], ecx
 * 00000001800AF5BE: mov     [rbp+1180h+var_11A8], rdi
 * 00000001800AF5C2: mov     rdx, [rbp+1180h+var_11C0]
 * 00000001800AF5C6: mov     [rbp+1180h+var_11B8], rdx
 * 00000001800AF5CA: mov     rcx, [rbp+1180h+var_11F8]
 * 00000001800AF5CE: mov     [rbp+1180h+lpModuleName], rcx
 * 00000001800AF5D2: mov     r11, [rbp+1180h+var_1190]
 * 00000001800AF5D6: mov     [rbp+1180h+var_11E0], r11
 * 00000001800AF5DA: mov     r9, r8
 * 00000001800AF5DD: mov     [rbp+1180h+var_1180], r8
 * 00000001800AF5E1: mov     [rbp+1180h+var_11C8], r10
 * 00000001800AF5E5: cmp     [rbp+1180h+var_F30], rax
 * 00000001800AF5EC: jz      loc_1800AF811
 * 00000001800AF5F2: mov     rax, [rbp+1180h+var_F30]
 * 00000001800AF5F9: mov     [rbp+1180h+var_1188], rax
 * 00000001800AF5FD: lea     r8, [rbp+1180h+var_F28]
 * 00000001800AF604: mov     edx, dword ptr [rsp+1280h+var_1218]
 * 00000001800AF608: mov     rcx, rax
 * 00000001800AF60B: call    RtlULongLongAdd
 * 00000001800AF610: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AF613: mov     [rbp+1180h+var_11A8], rdi
 * 00000001800AF617: mov     rdx, [rbp+1180h+var_11C0]
 * 00000001800AF61B: mov     [rbp+1180h+var_11B8], rdx
 * 00000001800AF61F: mov     rcx, [rbp+1180h+var_11F8]
 * 00000001800AF623: mov     [rbp+1180h+lpModuleName], rcx
 * 00000001800AF627: mov     [rbp+1180h+var_11E0], r11
 * 00000001800AF62B: mov     r8, r9
 * 00000001800AF62E: mov     [rbp+1180h+var_1180], r9
 * 00000001800AF632: mov     [rbp+1180h+var_11C8], r10
 * 00000001800AF636: test    eax, eax
 * 00000001800AF638: js      loc_1800AF809
 * 00000001800AF63E: mov     [rbp+1180h+var_11A8], rdi
 * 00000001800AF642: mov     [rbp+1180h+var_11B8], rdx
 * 00000001800AF646: mov     [rbp+1180h+lpModuleName], rcx
 * 00000001800AF64A: mov     [rbp+1180h+var_11E0], r11
 * 00000001800AF64E: mov     [rbp+1180h+var_1180], r9
 * 00000001800AF652: mov     [rbp+1180h+var_11C8], r10
 * 00000001800AF656: mov     r10, [rbp+1180h+var_1188]
 * 00000001800AF65A: cmp     r10, [rbp+1180h+var_F28]
 * 00000001800AF661: jnb     loc_1800AF7E2
 * 00000001800AF667: mov     rdx, rdi
 * 00000001800AF66A: mov     [rbp+1180h+var_11A8], rdx
 * 00000001800AF66E: mov     rcx, [rbp+1180h+var_11C0]
 * 00000001800AF672: mov     [rbp+1180h+var_11B8], rcx
 * 00000001800AF676: mov     r10, [rbp+1180h+var_11F8]
 * 00000001800AF67A: mov     [rbp+1180h+lpModuleName], r10
 * 00000001800AF67E: mov     [rbp+1180h+var_11E0], r11
 * 00000001800AF682: mov     [rbp+1180h+var_1180], r9
 * 00000001800AF686: mov     rdi, [rbp+1180h+Size]
 * 00000001800AF68A: mov     [rbp+1180h+var_11C8], rdi
 * 00000001800AF68E: mov     [rbp+1180h+var_1178], rdi
 * 00000001800AF692: mov     [rbp+1180h+var_1190], r10
 * 00000001800AF696: mov     [rbp+1180h+var_11F8], rcx
 * 00000001800AF69A: mov     [rbp+1180h+var_11C0], rdx
 * 00000001800AF69E: lea     r8, [rbp+1180h+var_F20]
 * 00000001800AF6A5: mov     edx, 4
 * 00000001800AF6AA: mov     rdi, [rbp+1180h+var_1188]
 * 00000001800AF6AE: mov     rcx, rdi
 * 00000001800AF6B1: call    RtlULongLongAdd
 * 00000001800AF6B6: test    eax, eax
 * 00000001800AF6B8: js      loc_1800AF7FC
 * 00000001800AF6BE: mov     rax, [rbp+1180h+var_F28]
 * 00000001800AF6C5: cmp     [rbp+1180h+var_F20], rax
 * 00000001800AF6CC: ja      loc_1800AF7CC
 * 00000001800AF6D2: lea     r8, [rbp+1180h+var_10D0]
 * 00000001800AF6D9: mov     edx, [rdi]
 * 00000001800AF6DB: mov     ecx, 4
 * 00000001800AF6E0: call    RtlUIntAdd
 * 00000001800AF6E5: test    eax, eax
 * 00000001800AF6E7: js      loc_1800AF7D1
 * 00000001800AF6ED: mov     edx, [rbp+1180h+var_10D0]
 * 00000001800AF6F3: lea     r8, [rbp+1180h+var_F18]
 * 00000001800AF6FA: mov     rcx, rdi
 * 00000001800AF6FD: call    RtlULongLongAdd
 * 00000001800AF702: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AF705: mov     r8, [rbp+1180h+var_11C0]
 * 00000001800AF709: mov     [rbp+1180h+var_11A8], r8
 * 00000001800AF70D: mov     rdx, [rbp+1180h+var_11F8]
 * 00000001800AF711: mov     [rbp+1180h+var_11B8], rdx
 * 00000001800AF715: mov     rcx, r10
 * 00000001800AF718: mov     [rbp+1180h+lpModuleName], rcx
 * 00000001800AF71C: mov     [rbp+1180h+var_11E0], r11
 * 00000001800AF720: mov     r10, r9
 * 00000001800AF723: mov     [rbp+1180h+var_1180], r9
 * 00000001800AF727: mov     rdi, [rbp+1180h+var_1178]
 * 00000001800AF72B: mov     [rbp+1180h+var_11C8], rdi
 * 00000001800AF72F: test    eax, eax
 * 00000001800AF731: js      loc_1800AF900
 * 00000001800AF737: mov     rdx, [rbp+1180h+var_F18]
 * 00000001800AF73E: mov     [rbp+1180h+var_1188], rdx
 * 00000001800AF742: mov     r8, [rbp+1180h+var_F28]
 * 00000001800AF749: mov     [rbp+1180h+var_11C8], rdi
 * 00000001800AF74D: mov     [rbp+1180h+var_11E0], r11
 * 00000001800AF751: cmp     rdx, r8
 * 00000001800AF754: ja      short loc_1800AF7AA
 * 00000001800AF756: inc     dword ptr [rbp+1180h+var_1198]
 * 00000001800AF759: mov     rcx, [rbp+1180h+var_11C0]
 * 00000001800AF75D: mov     [rbp+1180h+var_11A8], rcx
 * 00000001800AF761: mov     rcx, [rbp+1180h+var_11F8]
 * 00000001800AF765: mov     [rbp+1180h+var_11B8], rcx
 * 00000001800AF769: mov     r10, [rbp+1180h+var_1190]
 * 00000001800AF76D: mov     [rbp+1180h+lpModuleName], r10
 * 00000001800AF771: mov     [rbp+1180h+var_1180], r9
 * 00000001800AF775: cmp     rdx, r8
 * 00000001800AF778: mov     rdx, [rbp+1180h+var_11A8]
 * 00000001800AF77C: jb      loc_1800AF68E
 * 00000001800AF782: mov     rcx, rdx
 * 00000001800AF785: mov     [rbp+1180h+var_11A8], rdx
 * 00000001800AF789: mov     rdx, [rbp+1180h+var_11F8]
 * 00000001800AF78D: mov     [rbp+1180h+var_11B8], rdx
 * 00000001800AF791: mov     rcx, r10
 * 00000001800AF794: mov     [rbp+1180h+lpModuleName], rcx
 * 00000001800AF798: mov     [rbp+1180h+var_11E0], r11
 * 00000001800AF79C: mov     [rbp+1180h+var_1180], r9
 * 00000001800AF7A0: mov     [rbp+1180h+var_11C8], rdi
 * 00000001800AF7A4: mov     r10, [rbp+1180h+var_1188]
 * 00000001800AF7A8: jmp     short loc_1800AF7E9
 * 00000001800AF7AA: mov     eax, 0C000000Dh
 * 00000001800AF7AF: mov     r8, [rbp+1180h+var_11C0]
 * 00000001800AF7B3: mov     [rbp+1180h+var_11A8], r8
 * 00000001800AF7B7: mov     rdx, [rbp+1180h+var_11F8]
 * 00000001800AF7BB: mov     [rbp+1180h+var_11B8], rdx
 * 00000001800AF7BF: mov     [rbp+1180h+lpModuleName], rcx
 * 00000001800AF7C3: mov     [rbp+1180h+var_1180], r10
 * 00000001800AF7C7: jmp     loc_1800AF900
 * 00000001800AF7CC: mov     eax, 0C000000Dh
 * 00000001800AF7D1: mov     rcx, [rbp+1180h+lpModuleName]
 * 00000001800AF7D5: mov     rdx, [rbp+1180h+var_11B8]
 * 00000001800AF7D9: mov     r8, [rbp+1180h+var_11A8]
 * 00000001800AF7DD: jmp     loc_1800AF900
 * 00000001800AF7E2: mov     r8, [rbp+1180h+var_F28]
 * 00000001800AF7E9: cmp     r10, r8
 * 00000001800AF7EC: jz      short loc_1800AF811
 * 00000001800AF7EE: mov     eax, 0C000000Dh
 * 00000001800AF7F3: mov     r8, [rbp+1180h+var_11A8]
 * 00000001800AF7F7: jmp     loc_1800AF900
 * 00000001800AF7FC: mov     rcx, [rbp+1180h+lpModuleName]
 * 00000001800AF800: mov     rdx, [rbp+1180h+var_11B8]
 * 00000001800AF804: jmp     loc_1800AF8B7
 * 00000001800AF809: mov     r8, rdi
 * 00000001800AF80C: jmp     loc_1800AF8BB
 * 00000001800AF811: mov     edi, dword ptr [rsp+1280h+var_1218]
 * 00000001800AF815: test    edi, edi
 * 00000001800AF817: jz      short loc_1800AF86E
 * 00000001800AF819: call    cs:__imp_GetProcessHeap
 * 00000001800AF820: nop     dword ptr [rax+rax+00h]
 * 00000001800AF825: mov     rcx, rax; hHeap
 * 00000001800AF828: mov     r8d, edi; dwBytes
 * 00000001800AF82B: mov     edx, 8; dwFlags
 * 00000001800AF830: call    cs:__imp_HeapAlloc
 * 00000001800AF837: nop     dword ptr [rax+rax+00h]
 * 00000001800AF83C: mov     r10, rax
 * 00000001800AF83F: mov     [rsp+1280h+var_1208], rax
 * 00000001800AF844: mov     r9, [rbp+1180h+var_1180]
 * 00000001800AF848: mov     r11, [rbp+1180h+var_11E0]
 * 00000001800AF84C: mov     rcx, [rbp+1180h+lpModuleName]
 * 00000001800AF850: mov     rdx, [rbp+1180h+var_11B8]
 * 00000001800AF854: test    rax, rax
 * 00000001800AF857: jnz     short loc_1800AF867
 * 00000001800AF859: mov     eax, 0C0000017h
 * 00000001800AF85E: mov     r8, [rbp+1180h+var_11A8]
 * 00000001800AF862: jmp     loc_1800AF900
 * 00000001800AF867: xor     eax, eax
 * 00000001800AF869: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AF86C: jmp     short loc_1800AF873
 * 00000001800AF86E: mov     r10, [rsp+1280h+var_1208]
 * 00000001800AF873: mov     rdi, [rbp+1180h+var_F30]
 * 00000001800AF87A: test    rdi, rdi
 * 00000001800AF87D: jz      short loc_1800AF8A7
 * 00000001800AF87F: mov     r8d, dword ptr [rsp+1280h+var_1218]; Size
 * 00000001800AF884: mov     rdx, rdi; Src
 * 00000001800AF887: mov     rcx, r10; void *
 * 00000001800AF88A: call    memcpy_0
 * 00000001800AF88F: mov     eax, dword ptr [rbp+1180h+var_1140]
 * 00000001800AF892: mov     r9, [rbp+1180h+var_1180]
 * 00000001800AF896: mov     r11, [rbp+1180h+var_11E0]
 * 00000001800AF89A: mov     rcx, [rbp+1180h+lpModuleName]
 * 00000001800AF89E: mov     rdx, [rbp+1180h+var_11B8]
 * 00000001800AF8A2: mov     r10, [rsp+1280h+var_1208]
 * 00000001800AF8A7: mov     qword ptr [rbp+1180h+var_D68+8], r10
 * 00000001800AF8AE: mov     edi, dword ptr [rbp+1180h+var_1198]
 * 00000001800AF8B1: mov     dword ptr [rbp+1180h+var_D68], edi
 * 00000001800AF8B7: mov     r8, [rbp+1180h+var_11A8]
 * 00000001800AF8BB: test    eax, eax
 * 00000001800AF8BD: js      short loc_1800AF900
 * 00000001800AF8BF: mov     edi, dword ptr [rbp+1180h+var_1200]
 * 00000001800AF8C2: cmp     edi, dword ptr [rbp+1180h+var_D68]
 * 00000001800AF8C8: jz      short loc_1800AF900
 * 00000001800AF8CA: mov     eax, 0C000003Eh
 * 00000001800AF8CF: jmp     short loc_1800AF900
 * 00000001800AF8D1: mov     rdx, [rbp+1180h+var_11C0]
 * 00000001800AF8D5: mov     r11, [rbp+1180h+var_1190]
 * 00000001800AF8D9: mov     r9, r8
 * 00000001800AF8DC: mov     rcx, [rbp+1180h+var_11F8]
 * 00000001800AF8E0: mov     [rbp+1180h+var_11E0], r11
 * 00000001800AF8E4: mov     [rbp+1180h+var_1180], r8
 * 00000001800AF8E8: mov     [rbp+1180h+var_11C8], r10
 * 00000001800AF8EC: mov     [rbp+1180h+lpModuleName], rcx
 * 00000001800AF8F0: mov     [rbp+1180h+var_11B8], rdx
 * 00000001800AF8F4: mov     [rbp+1180h+var_11A8], rdi
 * 00000001800AF8F8: mov     eax, 0C000003Eh
 * 00000001800AF8FD: mov     r8, rdi
 * 00000001800AF900: bts     eax, 1Ch
 * 00000001800AF904: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AF907: mov     edi, [rbp+1180h+var_1138]
 * 00000001800AF90A: mov     r10, [rbp+1180h+var_11C8]
 * 00000001800AF90E: jmp     loc_1800AE290
 * 00000001800AF913: mov     r11, [rbp+1180h+var_11E0]
 * 00000001800AF917: mov     rcx, [rbp+1180h+lpModuleName]
 * 00000001800AF91B: jmp     loc_1800AE28A
 * 00000001800AF920: mov     eax, 0D0000001h
 * 00000001800AF925: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AF928: jmp     loc_1800AE295
 * 00000001800AF92D: mov     eax, [rbp+1180h+var_11D8]
 * 00000001800AF930: jmp     loc_1800AFDC0
 * 00000001800AF935: cmp     dword ptr [rbp+1180h+var_D68], 0
 * 00000001800AF93C: ja      short loc_1800AF94B
 * 00000001800AF93E: mov     eax, 0C000000Dh
 * 00000001800AF943: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AF946: jmp     loc_1800AFDC9
 * 00000001800AF94B: mov     rax, qword ptr [rbp+1180h+var_D68+8]
 * 00000001800AF952: mov     [rbp+1180h+var_F10], rax
 * 00000001800AF959: mov     r9d, [rax]
 * 00000001800AF95C: lea     r8, [rbp+1180h+var_F10]
 * 00000001800AF963: mov     rdx, r11
 * 00000001800AF966: mov     rcx, rax
 * 00000001800AF969: call    RtlULongLongAdd
 * 00000001800AF96E: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AF971: test    eax, eax
 * 00000001800AF973: js      loc_1800AFDC9
 * 00000001800AF979: mov     rax, [rbp+1180h+var_F10]
 * 00000001800AF980: test    r9d, r9d
 * 00000001800AF983: mov     r10d, 0
 * 00000001800AF989: cmovz   rax, r10
 * 00000001800AF98D: mov     [rbp+1180h+var_F10], rax
 * 00000001800AF994: cmp     r9d, r11d
 * 00000001800AF997: jz      short loc_1800AF9A6
 * 00000001800AF999: mov     eax, 0C0000023h
 * 00000001800AF99E: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AF9A1: jmp     loc_1800AFDC9
 * 00000001800AF9A6: mov     eax, [rax]
 * 00000001800AF9A8: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AF9AB: cmp     eax, 0D0000023h
 * 00000001800AF9B0: jnz     short loc_1800AF9BB
 * 00000001800AF9B2: mov     dword ptr [rbp+1180h+var_1200], 8007007Ah
 * 00000001800AF9B9: jmp     short loc_1800AF9D0
 * 00000001800AF9BB: mov     dword ptr [rbp+1180h+var_1200], eax
 * 00000001800AF9BE: cmp     eax, 8007007Ah
 * 00000001800AF9C3: jz      short loc_1800AF9D0
 * 00000001800AF9C5: mov     dword ptr [rbp+1180h+var_1200], eax
 * 00000001800AF9C8: test    eax, eax
 * 00000001800AF9CA: js      loc_1800AFDC9
 * 00000001800AF9D0: cmp     dword ptr [rbp+1180h+var_D68], 6
 * 00000001800AF9D7: jz      short loc_1800AF9E4
 * 00000001800AF9D9: mov     eax, [rbp+1180h+var_11D8]
 * 00000001800AF9DC: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AF9DF: jmp     loc_1800AFDC9
 * 00000001800AF9E4: cmp     qword ptr [rbp+1180h+var_D68+8], r10
 * 00000001800AF9EB: jnz     short loc_1800AF9FA
 * 00000001800AF9ED: mov     eax, 0C000000Dh
 * 00000001800AF9F2: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AF9F5: jmp     loc_1800AFDC9
 * 00000001800AF9FA: mov     rcx, qword ptr [rbp+1180h+var_D68+8]
 * 00000001800AFA01: mov     [rbp+1180h+var_F08], rcx
 * 00000001800AFA08: mov     r9d, [rcx]
 * 00000001800AFA0B: lea     r8, [rbp+1180h+var_F08]
 * 00000001800AFA12: mov     rdx, r11
 * 00000001800AFA15: call    RtlULongLongAdd
 * 00000001800AFA1A: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AFA1D: test    eax, eax
 * 00000001800AFA1F: js      loc_1800AFDC9
 * 00000001800AFA25: mov     edx, r9d
 * 00000001800AFA28: lea     r8, [rbp+1180h+var_F08]
 * 00000001800AFA2F: mov     rcx, [rbp+1180h+var_F08]
 * 00000001800AFA36: call    RtlULongLongAdd
 * 00000001800AFA3B: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AFA3E: test    eax, eax
 * 00000001800AFA40: js      loc_1800AFDC9
 * 00000001800AFA46: mov     rcx, [rbp+1180h+var_F08]
 * 00000001800AFA4D: mov     r9d, [rcx]
 * 00000001800AFA50: lea     r8, [rbp+1180h+var_F08]
 * 00000001800AFA57: mov     rdx, r11
 * 00000001800AFA5A: call    RtlULongLongAdd
 * 00000001800AFA5F: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AFA62: test    eax, eax
 * 00000001800AFA64: js      loc_1800AFDC9
 * 00000001800AFA6A: mov     rax, [rbp+1180h+var_F08]
 * 00000001800AFA71: test    r9d, r9d
 * 00000001800AFA74: cmovz   rax, r10
 * 00000001800AFA78: mov     [rbp+1180h+var_F08], rax
 * 00000001800AFA7F: cmp     r9d, 8
 * 00000001800AFA83: jz      short loc_1800AFA92
 * 00000001800AFA85: mov     eax, 0C0000023h
 * 00000001800AFA8A: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AFA8D: jmp     loc_1800AFDC9
 * 00000001800AFA92: mov     rax, [rax]
 * 00000001800AFA95: mov     [rsp+1280h+var_1208], rax
 * 00000001800AFA9A: cmp     qword ptr [rbp+1180h+var_D68+8], r10
 * 00000001800AFAA1: jnz     short loc_1800AFAB0
 * 00000001800AFAA3: mov     eax, 0C000000Dh
 * 00000001800AFAA8: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AFAAB: jmp     loc_1800AFDC9
 * 00000001800AFAB0: mov     rcx, qword ptr [rbp+1180h+var_D68+8]
 * 00000001800AFAB7: mov     [rbp+1180h+var_F00], rcx
 * 00000001800AFABE: xor     eax, eax
 * 00000001800AFAC0: mov     r9d, eax
 * 00000001800AFAC3: mov     r10d, [rcx]
 * 00000001800AFAC6: lea     r8, [rbp+1180h+var_F00]
 * 00000001800AFACD: mov     rdx, r11
 * 00000001800AFAD0: call    RtlULongLongAdd
 * 00000001800AFAD5: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AFAD8: test    eax, eax
 * 00000001800AFADA: js      loc_1800AFDC9
 * 00000001800AFAE0: mov     edx, r10d
 * 00000001800AFAE3: lea     r8, [rbp+1180h+var_F00]
 * 00000001800AFAEA: mov     rcx, [rbp+1180h+var_F00]
 * 00000001800AFAF1: call    RtlULongLongAdd
 * 00000001800AFAF6: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AFAF9: test    eax, eax
 * 00000001800AFAFB: js      loc_1800AFDC9
 * 00000001800AFB01: inc     r9d
 * 00000001800AFB04: mov     rcx, [rbp+1180h+var_F00]
 * 00000001800AFB0B: cmp     r9d, 2
 * 00000001800AFB0F: jb      short loc_1800AFAC3
 * 00000001800AFB11: mov     r9d, [rcx]
 * 00000001800AFB14: lea     r8, [rbp+1180h+var_F00]
 * 00000001800AFB1B: mov     rdx, r11
 * 00000001800AFB1E: call    RtlULongLongAdd
 * 00000001800AFB23: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AFB26: test    eax, eax
 * 00000001800AFB28: js      loc_1800AFDC9
 * 00000001800AFB2E: mov     rax, [rbp+1180h+var_F00]
 * 00000001800AFB35: test    r9d, r9d
 * 00000001800AFB38: mov     ecx, 0
 * 00000001800AFB3D: cmovz   rax, rcx
 * 00000001800AFB41: mov     [rbp+1180h+var_F00], rax
 * 00000001800AFB48: cmp     r9d, r11d
 * 00000001800AFB4B: jz      short loc_1800AFB5A
 * 00000001800AFB4D: mov     eax, 0C0000023h
 * 00000001800AFB52: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AFB55: jmp     loc_1800AFDC9
 * 00000001800AFB5A: mov     eax, [rax]
 * 00000001800AFB5C: mov     dword ptr [rsp+1280h+var_1218], eax
 * 00000001800AFB60: cmp     qword ptr [rbp+1180h+var_D68+8], rcx
 * 00000001800AFB67: jnz     short loc_1800AFB76
 * 00000001800AFB69: mov     eax, 0C000000Dh
 * 00000001800AFB6E: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AFB71: jmp     loc_1800AFDC9
 * 00000001800AFB76: mov     rcx, qword ptr [rbp+1180h+var_D68+8]
 * 00000001800AFB7D: mov     [rbp+1180h+var_EF8], rcx
 * 00000001800AFB84: xor     eax, eax
 * 00000001800AFB86: mov     r9d, eax
 * 00000001800AFB89: mov     r10d, [rcx]
 * 00000001800AFB8C: lea     r8, [rbp+1180h+var_EF8]
 * 00000001800AFB93: mov     rdx, r11
 * 00000001800AFB96: call    RtlULongLongAdd
 * 00000001800AFB9B: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AFB9E: test    eax, eax
 * 00000001800AFBA0: js      loc_1800AFDC9
 * 00000001800AFBA6: mov     edx, r10d
 * 00000001800AFBA9: lea     r8, [rbp+1180h+var_EF8]
 * 00000001800AFBB0: mov     rcx, [rbp+1180h+var_EF8]
 * 00000001800AFBB7: call    RtlULongLongAdd
 * 00000001800AFBBC: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AFBBF: test    eax, eax
 * 00000001800AFBC1: js      loc_1800AFDC9
 * 00000001800AFBC7: inc     r9d
 * 00000001800AFBCA: mov     rcx, [rbp+1180h+var_EF8]
 * 00000001800AFBD1: cmp     r9d, 3
 * 00000001800AFBD5: jb      short loc_1800AFB89
 * 00000001800AFBD7: mov     r11d, [rcx]
 * 00000001800AFBDA: lea     r8, [rbp+1180h+var_EF8]
 * 00000001800AFBE1: mov     edx, 4
 * 00000001800AFBE6: call    RtlULongLongAdd
 * 00000001800AFBEB: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AFBEE: test    eax, eax
 * 00000001800AFBF0: js      loc_1800AFDC3
 * 00000001800AFBF6: mov     r9, [rbp+1180h+var_EF8]
 * 00000001800AFBFD: test    r11d, r11d
 * 00000001800AFC00: mov     eax, 0
 * 00000001800AFC05: cmovz   r9, rax
 * 00000001800AFC09: mov     [rbp+1180h+var_EF8], r9
 * 00000001800AFC10: mov     rcx, qword ptr [rbp+1180h+var_D68+8]
 * 00000001800AFC17: mov     [rbp+1180h+var_EF0], rcx
 * 00000001800AFC1E: mov     r10d, eax
 * 00000001800AFC21: mov     eax, [rcx]
 * 00000001800AFC23: mov     dword ptr [rbp+1180h+var_1198], eax
 * 00000001800AFC26: lea     r8, [rbp+1180h+var_EF0]
 * 00000001800AFC2D: mov     edx, 4
 * 00000001800AFC32: call    RtlULongLongAdd
 * 00000001800AFC37: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AFC3A: test    eax, eax
 * 00000001800AFC3C: js      loc_1800AFDC3
 * 00000001800AFC42: mov     edx, dword ptr [rbp+1180h+var_1198]
 * 00000001800AFC45: lea     r8, [rbp+1180h+var_EF0]
 * 00000001800AFC4C: mov     rcx, [rbp+1180h+var_EF0]
 * 00000001800AFC53: call    RtlULongLongAdd
 * 00000001800AFC58: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AFC5B: test    eax, eax
 * 00000001800AFC5D: js      loc_1800AFDC3
 * 00000001800AFC63: inc     r10d
 * 00000001800AFC66: mov     rcx, [rbp+1180h+var_EF0]
 * 00000001800AFC6D: cmp     r10d, 4
 * 00000001800AFC71: jb      short loc_1800AFC21
 * 00000001800AFC73: mov     r10d, [rcx]
 * 00000001800AFC76: lea     r8, [rbp+1180h+var_EF0]
 * 00000001800AFC7D: mov     edx, 4
 * 00000001800AFC82: call    RtlULongLongAdd
 * 00000001800AFC87: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AFC8A: test    eax, eax
 * 00000001800AFC8C: js      loc_1800AFDC3
 * 00000001800AFC92: mov     rax, [rbp+1180h+var_EF0]
 * 00000001800AFC99: test    r10d, r10d
 * 00000001800AFC9C: mov     edx, 0
 * 00000001800AFCA1: cmovz   rax, rdx
 * 00000001800AFCA5: mov     [rbp+1180h+var_EF0], rax
 * 00000001800AFCAC: cmp     r10d, 4
 * 00000001800AFCB0: jnz     loc_1800AFDAF
 * 00000001800AFCB6: mov     rcx, qword ptr [rbp+1180h+var_D68+8]
 * 00000001800AFCBD: mov     [rbp+1180h+var_EE8], rcx
 * 00000001800AFCC4: mov     r10d, edx
 * 00000001800AFCC7: mov     eax, [rax]
 * 00000001800AFCC9: mov     dword ptr [rbp+1180h+var_1198], eax
 * 00000001800AFCCC: mov     eax, [rcx]
 * 00000001800AFCCE: mov     dword ptr [rbp+1180h+var_1190], eax
 * 00000001800AFCD1: lea     r8, [rbp+1180h+var_EE8]
 * 00000001800AFCD8: mov     edx, 4
 * 00000001800AFCDD: call    RtlULongLongAdd
 * 00000001800AFCE2: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AFCE5: test    eax, eax
 * 00000001800AFCE7: js      loc_1800AFDC3
 * 00000001800AFCED: mov     edx, dword ptr [rbp+1180h+var_1190]
 * 00000001800AFCF0: lea     r8, [rbp+1180h+var_EE8]
 * 00000001800AFCF7: mov     rcx, [rbp+1180h+var_EE8]
 * 00000001800AFCFE: call    RtlULongLongAdd
 * 00000001800AFD03: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AFD06: test    eax, eax
 * 00000001800AFD08: js      loc_1800AFDC3
 * 00000001800AFD0E: inc     r10d
 * 00000001800AFD11: mov     rcx, [rbp+1180h+var_EE8]
 * 00000001800AFD18: cmp     r10d, 5
 * 00000001800AFD1C: jb      short loc_1800AFCCC
 * 00000001800AFD1E: mov     r10d, [rcx]
 * 00000001800AFD21: lea     r8, [rbp+1180h+var_EE8]
 * 00000001800AFD28: mov     edx, 4
 * 00000001800AFD2D: call    RtlULongLongAdd
 * 00000001800AFD32: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AFD35: test    eax, eax
 * 00000001800AFD37: js      loc_1800AFDC0
 * 00000001800AFD3D: mov     rax, [rbp+1180h+var_EE8]
 * 00000001800AFD44: test    r10d, r10d
 * 00000001800AFD47: mov     ecx, 0
 * 00000001800AFD4C: cmovz   rax, rcx
 * 00000001800AFD50: mov     [rbp+1180h+var_EE8], rax
 * 00000001800AFD57: cmp     r10d, 4
 * 00000001800AFD5B: jnz     short loc_1800AFDAF
 * 00000001800AFD5D: mov     ecx, [rax]
 * 00000001800AFD5F: mov     rax, [rbp+1180h+psz]
 * 00000001800AFD63: cmp     rax, [rsp+1280h+var_1208]
 * 00000001800AFD68: jnz     loc_1800AF92D
 * 00000001800AFD6E: mov     edi, ecx
 * 00000001800AFD70: mov     r13d, dword ptr [rsp+1280h+var_1218]
 * 00000001800AFD75: mov     [rbp+1180h+var_10C8], r13d
 * 00000001800AFD7C: cmp     dword ptr [rbp+1180h+var_1198], r10d
 * 00000001800AFD80: ja      short loc_1800AFDBB
 * 00000001800AFD82: cmp     r11d, r10d
 * 00000001800AFD85: ja      short loc_1800AFDBB
 * 00000001800AFD87: mov     r8, r11; Size
 * 00000001800AFD8A: mov     rdx, r9; Src
 * 00000001800AFD8D: mov     rcx, [rbp+1180h+var_11A0]; void *
 * 00000001800AFD91: call    memcpy_0
 * 00000001800AFD96: mov     eax, dword ptr [rbp+1180h+var_1200]
 * 00000001800AFD99: mov     r11d, 4
 * 00000001800AFD9F: lea     r10, __ImageBase
 * 00000001800AFDA6: test    eax, eax
 * 00000001800AFDA8: jz      short loc_1800AFDB6
 * 00000001800AFDAA: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AFDAD: jmp     short loc_1800AFDD0
 * 00000001800AFDAF: mov     eax, 0C0000023h
 * 00000001800AFDB4: jmp     short loc_1800AFDC0
 * 00000001800AFDB6: mov     eax, dword ptr [rbp+1180h+var_1140]
 * 00000001800AFDB9: jmp     short loc_1800AFDD0
 * 00000001800AFDBB: mov     eax, 8007007Ah
 * 00000001800AFDC0: mov     dword ptr [rbp+1180h+var_1140], eax
 * 00000001800AFDC3: mov     r11d, 4
 * 00000001800AFDC9: lea     r10, __ImageBase
 * 00000001800AFDD0: xor     r9d, r9d
 * 00000001800AFDD3: mov     dword ptr [rbp+1180h+Src+4], r9d
 * 00000001800AFDDA: mov     dword ptr [rbp+1180h+Src], r9d
 * 00000001800AFDE1: mov     rcx, [rbp+1180h+Src+8]
 * 00000001800AFDE8: mov     [rsp+1280h+var_1208], rcx
 * 00000001800AFDED: test    rcx, rcx
 * 00000001800AFDF0: jz      short loc_1800AFE2B
 * 00000001800AFDF2: call    cs:__imp_GetProcessHeap
 * 00000001800AFDF9: nop     dword ptr [rax+rax+00h]
 * 00000001800AFDFE: mov     rcx, rax; hHeap
 * 00000001800AFE01: mov     r8, [rsp+1280h+var_1208]; lpMem
 * 00000001800AFE06: xor     edx, edx; dwFlags
 * 00000001800AFE08: call    cs:__imp_HeapFree
 * 00000001800AFE0F: nop     dword ptr [rax+rax+00h]
 * 00000001800AFE14: xor     ecx, ecx
 * 00000001800AFE16: mov     [rbp+1180h+Src+8], rcx
 * 00000001800AFE1D: mov     eax, dword ptr [rbp+1180h+var_1140]
 * 00000001800AFE20: lea     r11d, [rcx+4]
 * 00000001800AFE24: lea     r10, __ImageBase
 * 00000001800AFE2B: mov     dword ptr [rbp+1180h+var_D68+4], ecx
 * 00000001800AFE31: mov     dword ptr [rbp+1180h+var_D68], ecx
 * 00000001800AFE37: mov     rcx, qword ptr [rbp+1180h+var_D68+8]
 * 00000001800AFE3E: mov     [rsp+1280h+var_1208], rcx
 * 00000001800AFE43: test    rcx, rcx
 * 00000001800AFE46: jz      short loc_1800AFE81
 * 00000001800AFE48: call    cs:__imp_GetProcessHeap
 * 00000001800AFE4F: nop     dword ptr [rax+rax+00h]
 * 00000001800AFE54: mov     rcx, rax; hHeap
 * 00000001800AFE57: mov     r8, [rsp+1280h+var_1208]; lpMem
 * 00000001800AFE5C: xor     edx, edx; dwFlags
 * 00000001800AFE5E: call    cs:__imp_HeapFree
 * 00000001800AFE65: nop     dword ptr [rax+rax+00h]
 * 00000001800AFE6A: xor     ecx, ecx
 * 00000001800AFE6C: mov     qword ptr [rbp+1180h+var_D68+8], rcx
 * 00000001800AFE73: mov     eax, dword ptr [rbp+1180h+var_1140]
 * 00000001800AFE76: lea     r11d, [rcx+4]
 * 00000001800AFE7A: lea     r10, __ImageBase
 * 00000001800AFE81: cmp     [rsp+1280h+lpMem], 0
 * 00000001800AFE87: jz      short loc_1800AFEBB
 * 00000001800AFE89: call    cs:__imp_GetProcessHeap
 * 00000001800AFE90: nop     dword ptr [rax+rax+00h]
 * 00000001800AFE95: mov     rcx, rax; hHeap
 * 00000001800AFE98: mov     r8, [rsp+1280h+lpMem]; lpMem
 * 00000001800AFE9D: xor     edx, edx; dwFlags
 * 00000001800AFE9F: call    cs:__imp_HeapFree
 * 00000001800AFEA6: nop     dword ptr [rax+rax+00h]
 * 00000001800AFEAB: mov     eax, dword ptr [rbp+1180h+var_1140]
 * 00000001800AFEAE: xor     ecx, ecx
 * 00000001800AFEB0: lea     r11d, [rcx+4]
 * 00000001800AFEB4: lea     r10, __ImageBase
 * 00000001800AFEBB: cmp     [rbp+1180h+var_11D0], 0
 * 00000001800AFEC0: jz      short loc_1800AFEF3
 * 00000001800AFEC2: call    cs:__imp_GetProcessHeap
 * 00000001800AFEC9: nop     dword ptr [rax+rax+00h]
 * 00000001800AFECE: mov     rcx, rax; hHeap
 * 00000001800AFED1: mov     r8, [rbp+1180h+var_11D0]; lpMem
 * 00000001800AFED5: xor     edx, edx; dwFlags
 * 00000001800AFED7: call    cs:__imp_HeapFree
 * 00000001800AFEDE: nop     dword ptr [rax+rax+00h]
 * 00000001800AFEE3: mov     eax, dword ptr [rbp+1180h+var_1140]
 * 00000001800AFEE6: xor     ecx, ecx
 * 00000001800AFEE8: lea     r11d, [rcx+4]
 * 00000001800AFEEC: lea     r10, __ImageBase
 * 00000001800AFEF3: test    eax, eax
 * 00000001800AFEF5: js      loc_1800BBE50
 * 00000001800AFEFB: test    edi, edi
 * 00000001800AFEFD: jz      loc_1800BBE39
 * 00000001800AFF03: mov     [rbp+1180h+var_EE0], rcx
 * 00000001800AFF0A: mov     cs:dword_1801C23E0, edi
 * 00000001800AFF10: mov     r8d, 104h; nSize
 * 00000001800AFF16: lea     rdx, [rbp+1180h+Filename]; lpFilename
 * 00000001800AFF1D: mov     rcx, r10; hModule
 * 00000001800AFF20: call    cs:__imp_GetModuleFileNameW
 * 00000001800AFF27: nop     dword ptr [rax+rax+00h]
 * 00000001800AFF2C: test    eax, eax
 * 00000001800AFF2E: jz      short loc_1800AFF83
 * 00000001800AFF30: cmp     eax, 104h
 * 00000001800AFF35: jnz     short loc_1800AFF48
 * 00000001800AFF37: call    cs:__imp_GetLastError
 * 00000001800AFF3E: nop     dword ptr [rax+rax+00h]
 * 00000001800AFF43: cmp     eax, 7Ah ; 'z'
 * 00000001800AFF46: jz      short loc_1800AFF83
 * 00000001800AFF48: mov     r10, 9B61A6A01AD19370h
 * 00000001800AFF52: xor     edx, edx
 * 00000001800AFF54: xor     ecx, ecx
 * 00000001800AFF56: mov     r8d, 403h
 * 00000001800AFF5C: mov     rax, cs:off_1801C00F8
 * 00000001800AFF63: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800AFF69: mov     [rsp+1280h+var_1208], rax
 * 00000001800AFF6E: test    rax, rax
 * 00000001800AFF71: jnz     loc_1800B028A
 * 00000001800AFF77: call    cs:__imp_GetLastError
 * 00000001800AFF7E: nop     dword ptr [rax+rax+00h]
 * 00000001800AFF83: xor     edi, edi
 * 00000001800AFF85: lea     rcx, [rbp+1180h+var_EE0]; this
 * 00000001800AFF8C: call    ?Close@CHandle@ATL@@QEAAXXZ; ATL::CHandle::Close(void)
 * 00000001800AFF91: mov     [rsp+1280h+var_1208], rdi
 * 00000001800AFF96: mov     [rbp+1180h+var_1188], rdi
 * 00000001800AFF9A: mov     [rbp+1180h+var_CE4+4], rdi
 * 00000001800AFFA1: xorps   xmm0, xmm0
 * 00000001800AFFA4: movups  xmmword ptr [rbp+1180h+var_CB8], xmm0
 * 00000001800AFFAB: call    cs:__imp_GetProcessHeap
 * 00000001800AFFB2: nop     dword ptr [rax+rax+00h]
 * 00000001800AFFB7: mov     rcx, rax; hHeap
 * 00000001800AFFBA: mov     edx, 8; dwFlags
 * 00000001800AFFBF: mov     r8d, 0A0h; dwBytes
 * 00000001800AFFC5: call    cs:__imp_HeapAlloc
 * 00000001800AFFCC: nop     dword ptr [rax+rax+00h]
 * 00000001800AFFD1: mov     [rbp+1180h+var_1178], rax
 * 00000001800AFFD5: test    rax, rax
 * 00000001800AFFD8: jz      loc_1800BBD43
 * 00000001800AFFDE: lea     rcx, __ImageBase
 * 00000001800AFFE5: lea     rcx, rva unk_1801C1910[rcx]
 * 00000001800AFFEC: movups  xmm0, xmmword ptr [rcx]
 * 00000001800AFFEF: movups  xmmword ptr [rax], xmm0
 * 00000001800AFFF2: movups  xmm1, xmmword ptr [rcx+10h]
 * 00000001800AFFF6: movups  xmmword ptr [rax+10h], xmm1
 * 00000001800AFFFA: movups  xmm0, xmmword ptr [rcx+20h]
 * 00000001800AFFFE: movups  xmmword ptr [rax+20h], xmm0
 * 00000001800B0002: movups  xmm1, xmmword ptr [rcx+30h]
 * 00000001800B0006: movups  xmmword ptr [rax+30h], xmm1
 * 00000001800B000A: movups  xmm0, xmmword ptr [rcx+40h]
 * 00000001800B000E: movups  xmmword ptr [rax+40h], xmm0
 * 00000001800B0012: movups  xmm1, xmmword ptr [rcx+50h]
 * 00000001800B0016: movups  xmmword ptr [rax+50h], xmm1
 * 00000001800B001A: movups  xmm0, xmmword ptr [rcx+60h]
 * 00000001800B001E: movups  xmmword ptr [rax+60h], xmm0
 * 00000001800B0022: movups  xmm1, xmmword ptr [rcx+70h]
 * 00000001800B0026: movups  xmmword ptr [rax+70h], xmm1
 * 00000001800B002A: movups  xmm0, xmmword ptr [rcx+80h]
 * 00000001800B0031: movups  xmmword ptr [rax+80h], xmm0
 * 00000001800B0038: movups  xmm1, xmmword ptr [rcx+90h]
 * 00000001800B003F: movups  xmmword ptr [rax+90h], xmm1
 * 00000001800B0046: mov     [rsp+1280h+var_1208], rax
 * 00000001800B004B: call    cs:__imp_GetProcessHeap
 * 00000001800B0052: nop     dword ptr [rax+rax+00h]
 * 00000001800B0057: mov     rcx, rax; hHeap
 * 00000001800B005A: mov     edx, 8; dwFlags
 * 00000001800B005F: mov     r8d, edx; dwBytes
 * 00000001800B0062: call    cs:__imp_HeapAlloc
 * 00000001800B0069: nop     dword ptr [rax+rax+00h]
 * 00000001800B006E: mov     rcx, rax
 * 00000001800B0071: mov     [rbp+1180h+Size], rax
 * 00000001800B0075: mov     r11d, 4
 * 00000001800B007B: test    rax, rax
 * 00000001800B007E: jz      loc_1800BBD49
 * 00000001800B0084: mov     rax, cs:qword_1801C1858
 * 00000001800B008B: mov     [rcx], rax
 * 00000001800B008E: mov     [rbp+1180h+var_1188], rcx
 * 00000001800B0092: rdtsc
 * 00000001800B0094: shl     rdx, 20h
 * 00000001800B0098: or      rax, rdx
 * 00000001800B009B: mov     [rsp+1280h+var_1220], rax
 * 00000001800B00A0: mov     dword ptr [rbp+1180h+var_10B0], edi
 * 00000001800B00A6: lea     r8, [rbp+1180h+var_10B0+4]
 * 00000001800B00AD: mov     edx, r11d
 * 00000001800B00B0: mov     ecx, r11d
 * 00000001800B00B3: call    RtlUIntAdd
 * 00000001800B00B8: test    eax, eax
 * 00000001800B00BA: js      loc_1800BBD49
 * 00000001800B00C0: lea     r8, [rbp+1180h+var_10B0]
 * 00000001800B00C7: mov     edx, dword ptr [rbp+1180h+var_10B0+4]
 * 00000001800B00CD: xor     ecx, ecx
 * 00000001800B00CF: call    RtlUIntAdd
 * 00000001800B00D4: or      eax, 10000000h
 * 00000001800B00D9: jl      loc_1800BBD49
 * 00000001800B00DF: lea     r8, [rbp+1180h+var_10A8]
 * 00000001800B00E6: mov     edx, 0A0h
 * 00000001800B00EB: mov     ecx, r11d
 * 00000001800B00EE: call    RtlUIntAdd
 * 00000001800B00F3: test    eax, eax
 * 00000001800B00F5: js      loc_1800BBD49
 * 00000001800B00FB: lea     r8, [rbp+1180h+var_10B0]
 * 00000001800B0102: mov     edx, [rbp+1180h+var_10A8]
 * 00000001800B0108: mov     ecx, dword ptr [rbp+1180h+var_10B0]
 * 00000001800B010E: call    RtlUIntAdd
 * 00000001800B0113: or      eax, 10000000h
 * 00000001800B0118: jl      loc_1800BBD49
 * 00000001800B011E: lea     r8, [rbp+1180h+var_10A4]
 * 00000001800B0125: lea     edx, [r11+4]
 * 00000001800B0129: mov     ecx, r11d
 * 00000001800B012C: call    RtlUIntAdd
 * 00000001800B0131: test    eax, eax
 * 00000001800B0133: js      loc_1800BBD49
 * 00000001800B0139: lea     r8, [rbp+1180h+var_10B0]
 * 00000001800B0140: mov     edx, [rbp+1180h+var_10A4]
 * 00000001800B0146: mov     ecx, dword ptr [rbp+1180h+var_10B0]
 * 00000001800B014C: call    RtlUIntAdd
 * 00000001800B0151: or      eax, 10000000h
 * 00000001800B0156: jl      loc_1800BBD49
 * 00000001800B015C: lea     r8, [rbp+1180h+var_10A0]
 * 00000001800B0163: lea     edx, [r11+4]
 * 00000001800B0167: mov     ecx, r11d
 * 00000001800B016A: call    RtlUIntAdd
 * 00000001800B016F: test    eax, eax
 * 00000001800B0171: js      loc_1800BBD49
 * 00000001800B0177: lea     r8, [rbp+1180h+var_10B0]
 * 00000001800B017E: mov     edx, [rbp+1180h+var_10A0]
 * 00000001800B0184: mov     ecx, dword ptr [rbp+1180h+var_10B0]
 * 00000001800B018A: call    RtlUIntAdd
 * 00000001800B018F: or      eax, 10000000h
 * 00000001800B0194: jl      loc_1800BBD49
 * 00000001800B019A: mov     eax, dword ptr [rbp+1180h+var_10B0]
 * 00000001800B01A0: mov     dword ptr [rbp+1180h+var_CE4], eax
 * 00000001800B01A6: mov     edi, eax
 * 00000001800B01A8: call    cs:__imp_GetProcessHeap
 * 00000001800B01AF: nop     dword ptr [rax+rax+00h]
 * 00000001800B01B4: mov     rcx, rax; hHeap
 * 00000001800B01B7: mov     r8d, edi; dwBytes
 * 00000001800B01BA: mov     edx, 8; dwFlags
 * 00000001800B01BF: call    cs:__imp_HeapAlloc
 * 00000001800B01C6: nop     dword ptr [rax+rax+00h]
 * 00000001800B01CB: mov     rdi, rax
 * 00000001800B01CE: mov     r11d, 4
 * 00000001800B01D4: test    rax, rax
 * 00000001800B01D7: jz      loc_1800BBD49
 * 00000001800B01DD: mov     [rbp+1180h+var_CE4+4], rax
 * 00000001800B01E4: xor     r9d, r9d
 * 00000001800B01E7: mov     [rbp+1180h+var_CE8], r9d
 * 00000001800B01EE: lea     r8, [rbp+1180h+var_CA0]
 * 00000001800B01F5: mov     edx, r11d
 * 00000001800B01F8: mov     rcx, rax
 * 00000001800B01FB: call    RtlULongLongAdd
 * 00000001800B0200: test    eax, eax
 * 00000001800B0202: js      loc_1800BBD49
 * 00000001800B0208: mov     ecx, dword ptr [rbp+1180h+var_CE4]
 * 00000001800B020E: add     rcx, rdi
 * 00000001800B0211: lea     rax, [rdi+8]
 * 00000001800B0215: cmp     rax, rcx
 * 00000001800B0218: ja      loc_1800BBD49
 * 00000001800B021E: mov     [rdi], r11d
 * 00000001800B0221: mov     rax, [rbp+1180h+var_CA0]
 * 00000001800B0228: mov     [rax], r11d
 * 00000001800B022B: mov     r10d, [rbp+1180h+var_CE8]
 * 00000001800B0232: inc     r10d
 * 00000001800B0235: mov     [rbp+1180h+var_CE8], r10d
 * 00000001800B023C: cmp     [rbp+1180h+var_CE4+4], r9
 * 00000001800B0243: jnz     loc_1800B95D5
 * 00000001800B0249: lea     r8, [rbp+1180h+var_109C]
 * 00000001800B0250: mov     edx, 0A0h
 * 00000001800B0255: mov     ecx, r11d
 * 00000001800B0258: call    RtlUIntAdd
 * 00000001800B025D: test    eax, eax
 * 00000001800B025F: js      loc_1800BBD49
 * 00000001800B0265: lea     r8, [rbp+1180h+var_CE4]
 * 00000001800B026C: mov     edx, [rbp+1180h+var_109C]
 * 00000001800B0272: mov     ecx, dword ptr [rbp+1180h+var_CE4]
 * 00000001800B0278: call    RtlUIntAdd
 * 00000001800B027D: test    eax, eax
 * 00000001800B027F: jns     loc_1800B96CF
 * 00000001800B0285: jmp     loc_1800BBD49
 * 00000001800B028A: mov     r10, 0CD6CB78050552870h
 * 00000001800B0294: mov     rax, cs:off_1801C0098
 * 00000001800B029B: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B02A1: mov     cs:qword_1801C23E8, rax
 * 00000001800B02A8: mov     edi, cs:dword_1801C23E0
 * 00000001800B02AE: mov     dword ptr [rbp+1180h+var_1200], edi
 * 00000001800B02B1: xor     edx, edx; Val
 * 00000001800B02B3: lea     r8d, [rdx+70h]; Size
 * 00000001800B02B7: lea     rcx, [rbp+1180h+var_860]; void *
 * 00000001800B02BE: call    memset_0
 * 00000001800B02C3: xorps   xmm0, xmm0
 * 00000001800B02C6: movups  [rbp+1180h+var_7C0], xmm0
 * 00000001800B02CD: xor     edx, edx
 * 00000001800B02CF: mov     [rbp+1180h+var_1188], rdx
 * 00000001800B02D3: mov     [rbp+1180h+var_1178], rdx
 * 00000001800B02D7: xor     eax, eax
 * 00000001800B02D9: movups  [rbp+1180h+var_700], xmm0
 * 00000001800B02E0: movups  [rbp+1180h+var_6F0], xmm0
 * 00000001800B02E7: mov     [rbp+1180h+var_6E0], rax
 * 00000001800B02EE: mov     [rbp+1180h+var_6D8], eax
 * 00000001800B02F4: mov     [rbp+1180h+Size], rdx
 * 00000001800B02F8: mov     ecx, 1
 * 00000001800B02FD: xor     eax, eax
 * 00000001800B02FF: lock cmpxchg cs:dword_1801C2A58, ecx
 * 00000001800B0307: jnz     short loc_1800B02FD
 * 00000001800B0309: mov     eax, cs:dword_1801C23F0
 * 00000001800B030F: test    eax, eax
 * 00000001800B0311: jnz     loc_1800B0975
 * 00000001800B0317: mov     dword ptr [rsp+1280h+var_1218], edx
 * 00000001800B031B: mov     dword ptr [rbp+1180h+var_1198], edx
 * 00000001800B031E: mov     dword ptr [rbp+1180h+var_1190], edx
 * 00000001800B0321: mov     ecx, 338h; unsigned __int64
 * 00000001800B0326: call    ??2@YAPEAX_K@Z; operator new(unsigned __int64)
 * 00000001800B032B: mov     [rsp+1280h+var_1220], rax
 * 00000001800B0330: test    rax, rax
 * 00000001800B0333: jz      loc_1800B0723
 * 00000001800B0339: xor     ecx, ecx
 * 00000001800B033B: mov     r13d, ecx
 * 00000001800B033E: mov     edi, 0FFFFFFFFh
 * 00000001800B0343: mov     ebx, ecx
 * 00000001800B0345: mov     r11d, ecx
 * 00000001800B0348: lea     rsi, [rax+7]
 * 00000001800B034C: lea     r12, unk_180181002
 * 00000001800B0353: lea     r15d, [rcx+67h]
 * 00000001800B0357: movzx   r10d, byte ptr [r12-2]
 * 00000001800B035D: shl     r10d, 8
 * 00000001800B0361: movzx   eax, byte ptr [r12-1]
 * 00000001800B0367: or      r10d, eax
 * 00000001800B036A: shl     r10d, 8
 * 00000001800B036E: movzx   eax, byte ptr [r12]
 * 00000001800B0373: or      r10d, eax
 * 00000001800B0376: shl     r10d, 8
 * 00000001800B037A: movzx   eax, byte ptr [r12+1]
 * 00000001800B0380: or      r10d, eax
 * 00000001800B0383: movzx   r9d, byte ptr [r12+2]
 * 00000001800B0389: shl     r9d, 8
 * 00000001800B038D: movzx   eax, byte ptr [r12+3]
 * 00000001800B0393: or      r9d, eax
 * 00000001800B0396: shl     r9d, 8
 * 00000001800B039A: movzx   eax, byte ptr [r12+4]
 * 00000001800B03A0: or      r9d, eax
 * 00000001800B03A3: shl     r9d, 8
 * 00000001800B03A7: movzx   eax, byte ptr [r12+5]
 * 00000001800B03AD: or      r9d, eax
 * 00000001800B03B0: xor     r11d, r10d
 * 00000001800B03B3: lea     r12, [r12+8]
 * 00000001800B03B8: mov     r8d, r9d
 * 00000001800B03BB: xor     r8d, ebx
 * 00000001800B03BE: xor     r8d, r11d
 * 00000001800B03C1: xor     r8d, 0AC987321h
 * 00000001800B03C8: lea     eax, [r8+54969FA2h]
 * 00000001800B03CF: rol     eax, 5
 * 00000001800B03D2: mov     ecx, r8d
 * 00000001800B03D5: rol     ecx, 0Ah
 * 00000001800B03D8: imul    eax, 137Fh
 * 00000001800B03DE: add     ecx, eax
 * 00000001800B03E0: xor     r11d, ecx
 * 00000001800B03E3: lea     ecx, [r11+7F1137Fh]
 * 00000001800B03EA: ror     ecx, 9
 * 00000001800B03ED: mov     eax, r11d
 * 00000001800B03F0: rol     eax, 2
 * 00000001800B03F3: imul    ecx, 0AB69h
 * 00000001800B03F9: sub     ecx, eax
 * 00000001800B03FB: xor     r8d, ecx
 * 00000001800B03FE: mov     eax, r8d
 * 00000001800B0401: shr     eax, 0Dh
 * 00000001800B0404: imul    ecx, r8d, 605Eh
 * 00000001800B040B: sub     ecx, eax
 * 00000001800B040D: sub     ecx, 756C8A2h
 * 00000001800B0413: xor     r11d, ecx
 * 00000001800B0416: mov     ecx, r11d
 * 00000001800B0419: xor     ecx, 0AB69h
 * 00000001800B041F: rol     ecx, 6
 * 00000001800B0422: mov     eax, r11d
 * 00000001800B0425: rol     eax, 2
 * 00000001800B0428: imul    ecx, 7F1h
 * 00000001800B042E: sub     ecx, eax
 * 00000001800B0430: xor     r8d, ecx
 * 00000001800B0433: mov     eax, r8d
 * 00000001800B0436: xor     eax, 0AB69605Eh
 * 00000001800B043B: mov     ecx, 7F1137Fh
 * 00000001800B0440: sub     ecx, eax
 * 00000001800B0442: xor     r11d, ecx
 * 00000001800B0445: mov     edx, r11d
 * 00000001800B0448: ror     edx, 6
 * 00000001800B044B: mov     eax, r11d
 * 00000001800B044E: xor     eax, 137Fh
 * 00000001800B0453: imul    ecx, eax, 0AB69h
 * 00000001800B0459: xor     edx, ecx
 * 00000001800B045B: xor     r8d, edx
 * 00000001800B045E: lea     eax, [r8+7F1137Fh]
 * 00000001800B0465: ror     eax, 0Fh
 * 00000001800B0468: mov     ecx, r8d
 * 00000001800B046B: rol     ecx, 2
 * 00000001800B046E: imul    eax, 605Eh
 * 00000001800B0474: add     ecx, eax
 * 00000001800B0476: xor     r11d, ecx
 * 00000001800B0479: lea     ecx, [r11+54969FA2h]
 * 00000001800B0480: ror     ecx, 0Eh
 * 00000001800B0483: mov     eax, r11d
 * 00000001800B0486: rol     eax, 8
 * 00000001800B0489: imul    ecx, 7F1h
 * 00000001800B048F: sub     ecx, eax
 * 00000001800B0491: xor     r8d, ecx
 * 00000001800B0494: mov     eax, r8d
 * 00000001800B0497: xor     eax, 0AB69605Eh
 * 00000001800B049C: ror     eax, 0Ch
 * 00000001800B049F: mov     ecx, r8d
 * 00000001800B04A2: ror     ecx, 0Ah
 * 00000001800B04A5: imul    eax, 137Fh
 * 00000001800B04AB: xor     ecx, eax
 * 00000001800B04AD: xor     r11d, ecx
 * 00000001800B04B0: mov     eax, r11d
 * 00000001800B04B3: xor     eax, 7F1h
 * 00000001800B04B8: imul    ecx, eax, 0AB69h
 * 00000001800B04BE: mov     eax, r11d
 * 00000001800B04C1: shr     eax, 0Ah
 * 00000001800B04C4: xor     ecx, eax
 * 00000001800B04C6: xor     r8d, ecx
 * 00000001800B04C9: mov     eax, r8d
 * 00000001800B04CC: not     eax
 * 00000001800B04CE: ror     eax, 5
 * 00000001800B04D1: add     eax, 605Eh
 * 00000001800B04D6: imul    eax, 7F1h
 * 00000001800B04DC: xor     r11d, eax
 * 00000001800B04DF: lea     ebx, [r11-7F1h]
 * 00000001800B04E6: xor     ebx, r8d
 * 00000001800B04E9: xor     ebx, 0AB69605Eh
 * 00000001800B04EF: mov     eax, ebx
 * 00000001800B04F1: xor     eax, 7F1h
 * 00000001800B04F6: rol     eax, 2
 * 00000001800B04F9: imul    ecx, eax, 137Fh
 * 00000001800B04FF: mov     eax, ebx
 * 00000001800B0501: shr     eax, 2
 * 00000001800B0504: add     ecx, eax
 * 00000001800B0506: xor     r11d, ecx
 * 00000001800B0509: lea     eax, [r11-7F1137Fh]
 * 00000001800B0510: ror     eax, 6
 * 00000001800B0513: mov     ecx, r11d
 * 00000001800B0516: rol     ecx, 7
 * 00000001800B0519: imul    eax, 0AB69h
 * 00000001800B051F: add     ecx, eax
 * 00000001800B0521: xor     ebx, ecx
 * 00000001800B0523: mov     edx, ebx
 * 00000001800B0525: ror     edx, 9
 * 00000001800B0528: mov     eax, ebx
 * 00000001800B052A: xor     eax, 137Fh
 * 00000001800B052F: imul    ecx, eax, 605Eh
 * 00000001800B0535: add     edx, ecx
 * 00000001800B0537: xor     r11d, edx
 * 00000001800B053A: mov     ecx, r11d
 * 00000001800B053D: mov     eax, r11d
 * 00000001800B0540: xor     eax, 0AB69h
 * 00000001800B0545: rol     eax, 5
 * 00000001800B0548: rol     r11d, 7
 * 00000001800B054C: imul    eax, 7F1h
 * 00000001800B0552: add     r11d, eax
 * 00000001800B0555: xor     ebx, r11d
 * 00000001800B0558: mov     r11d, ebx
 * 00000001800B055B: xor     r11d, ecx
 * 00000001800B055E: xor     r11d, 0AC987321h
 * 00000001800B0565: mov     eax, r11d
 * 00000001800B0568: ror     eax, 3
 * 00000001800B056B: imul    ecx, eax, 137Fh
 * 00000001800B0571: sub     ecx, 0D0DD417h
 * 00000001800B0577: xor     ebx, ecx
 * 00000001800B0579: lea     ecx, [rbx-7F1137Fh]
 * 00000001800B057F: ror     ecx, 1
 * 00000001800B0581: mov     eax, ebx
 * 00000001800B0583: ror     eax, 6
 * 00000001800B0586: imul    ecx, 605Eh
 * 00000001800B058C: sub     ecx, eax
 * 00000001800B058E: xor     r11d, ecx
 * 00000001800B0591: lea     eax, [r11-54969FA2h]
 * 00000001800B0598: rol     eax, 3
 * 00000001800B059B: mov     ecx, r11d
 * 00000001800B059E: rol     ecx, 0Eh
 * 00000001800B05A1: imul    eax, 7F1h
 * 00000001800B05A7: add     ecx, eax
 * 00000001800B05A9: xor     ebx, ecx
 * 00000001800B05AB: lea     ecx, [rbx-54969FA2h]
 * 00000001800B05B1: rol     ecx, 0Fh
 * 00000001800B05B4: mov     eax, ebx
 * 00000001800B05B6: ror     eax, 0Eh
 * 00000001800B05B9: imul    ecx, 137Fh
 * 00000001800B05BF: sub     ecx, eax
 * 00000001800B05C1: xor     r11d, ecx
 * 00000001800B05C4: mov     eax, r11d
 * 00000001800B05C7: xor     eax, 605Eh
 * 00000001800B05CC: imul    ecx, eax, 0AB69h
 * 00000001800B05D2: mov     eax, r11d
 * 00000001800B05D5: shr     eax, 3
 * 00000001800B05D8: xor     ecx, eax
 * 00000001800B05DA: xor     ebx, ecx
 * 00000001800B05DC: mov     eax, ebx
 * 00000001800B05DE: xor     eax, 7F1137Fh
 * 00000001800B05E3: rol     eax, 4
 * 00000001800B05E6: mov     ecx, ebx
 * 00000001800B05E8: rol     ecx, 2
 * 00000001800B05EB: imul    eax, 605Eh
 * 00000001800B05F1: xor     ecx, eax
 * 00000001800B05F3: xor     ecx, r13d
 * 00000001800B05F6: xor     r11d, ecx
 * 00000001800B05F9: xor     ebx, edi
 * 00000001800B05FB: mov     [rsi-4], r11b
 * 00000001800B05FF: ror     r11d, 8
 * 00000001800B0603: mov     [rsi], bl
 * 00000001800B0605: ror     ebx, 8
 * 00000001800B0608: mov     [rsi-5], r11b
 * 00000001800B060C: ror     r11d, 8
 * 00000001800B0610: mov     [rsi-1], bl
 * 00000001800B0613: ror     ebx, 8
 * 00000001800B0616: mov     [rsi-6], r11b
 * 00000001800B061A: ror     r11d, 8
 * 00000001800B061E: mov     [rsi-2], bl
 * 00000001800B0621: ror     ebx, 8
 * 00000001800B0624: mov     [rsi-7], r11b
 * 00000001800B0628: mov     [rsi-3], bl
 * 00000001800B062B: ror     r11d, 8
 * 00000001800B062F: ror     ebx, 8
 * 00000001800B0632: mov     r13d, r10d
 * 00000001800B0635: mov     edi, r9d
 * 00000001800B0638: lea     rsi, [rsi+8]
 * 00000001800B063C: sub     r15, 1
 * 00000001800B0640: jnz     loc_1800B0357
 * 00000001800B0646: xor     eax, eax
 * 00000001800B0648: xorps   xmm1, xmm1
 * 00000001800B064B: xorps   xmm2, xmm2
 * 00000001800B064E: mov     edi, dword ptr [rbp+1180h+var_1200]
 * 00000001800B0651: mov     rbx, 0C81ECB17B1B54A58h
 * 00000001800B065B: mov     rsi, 7F1137FAB69605Eh
 * 00000001800B0665: mov     r15, [rbp+1180h+var_1128]
 * 00000001800B0669: lea     r12, [r15+0C0h]
 * 00000001800B0670: mov     r13d, [rbp+1180h+var_10C8]
 * 00000001800B0677: mov     rcx, [rsp+1280h+var_1220]
 * 00000001800B067C: movdqu  xmm0, xmmword ptr [rax+rcx]
 * 00000001800B0681: pxor    xmm1, xmm0
 * 00000001800B0685: movdqu  xmm0, xmmword ptr [rax+rcx+10h]
 * 00000001800B068B: pxor    xmm0, xmm2
 * 00000001800B068F: movdqa  xmm2, xmm0
 * 00000001800B0693: add     rax, 20h ; ' '
 * 00000001800B0697: cmp     rax, 320h
 * 00000001800B069D: jb      short loc_1800B067C
 * 00000001800B069F: pxor    xmm1, xmm0
 * 00000001800B06A3: movdqa  xmm0, xmm1
 * 00000001800B06A7: psrldq  xmm0, 8
 * 00000001800B06AC: pxor    xmm1, xmm0
 * 00000001800B06B0: movdqa  xmm0, xmm1
 * 00000001800B06B4: psrldq  xmm0, 4
 * 00000001800B06B9: pxor    xmm1, xmm0
 * 00000001800B06BD: movdqa  xmm0, xmm1
 * 00000001800B06C1: psrldq  xmm0, 2
 * 00000001800B06C6: pxor    xmm1, xmm0
 * 00000001800B06CA: movdqa  xmm0, xmm1
 * 00000001800B06CE: psrldq  xmm0, 1
 * 00000001800B06D3: pxor    xmm1, xmm0
 * 00000001800B06D7: movd    edx, xmm1
 * 00000001800B06DB: cmp     rax, 338h
 * 00000001800B06E1: jnb     short loc_1800B06F1
 * 00000001800B06E3: xor     dl, [rax+rcx]
 * 00000001800B06E6: inc     rax
 * 00000001800B06E9: cmp     rax, 338h
 * 00000001800B06EF: jb      short loc_1800B06E3
 * 00000001800B06F1: movzx   eax, dl
 * 00000001800B06F4: cmp     rax, cs:qword_180181338
 * 00000001800B06FB: jz      loc_1800B079D
 * 00000001800B0701: call    cs:__imp_GetProcessHeap
 * 00000001800B0708: nop     dword ptr [rax+rax+00h]
 * 00000001800B070D: mov     rcx, rax; hHeap
 * 00000001800B0710: mov     r8, [rsp+1280h+var_1220]; lpMem
 * 00000001800B0715: xor     edx, edx; dwFlags
 * 00000001800B0717: call    cs:__imp_HeapFree
 * 00000001800B071E: nop     dword ptr [rax+rax+00h]
 * 00000001800B0723: lea     rax, unk_1801C29C0
 * 00000001800B072A: mov     [rsp+1280h+var_1220], rax
 * 00000001800B072F: mov     edx, 4
 * 00000001800B0734: mov     [rbp+1180h+var_11A8], rdx
 * 00000001800B0738: mov     rcx, [rax]; hLibModule
 * 00000001800B073B: test    rcx, rcx
 * 00000001800B073E: jz      short loc_1800B0755
 * 00000001800B0740: call    cs:__imp_FreeLibrary
 * 00000001800B0747: nop     dword ptr [rax+rax+00h]
 * 00000001800B074C: mov     rax, [rsp+1280h+var_1220]
 * 00000001800B0751: mov     rdx, [rbp+1180h+var_11A8]
 * 00000001800B0755: add     rax, 18h
 * 00000001800B0759: mov     [rsp+1280h+var_1220], rax
 * 00000001800B075E: sub     rdx, 1
 * 00000001800B0762: mov     [rbp+1180h+var_11A8], rdx
 * 00000001800B0766: jnz     short loc_1800B0738
 * 00000001800B0768: xor     edx, edx; Val
 * 00000001800B076A: lea     r8d, [rdx+60h]; Size
 * 00000001800B076E: lea     rcx, unk_1801C29C0; void *
 * 00000001800B0775: call    memset_0
 * 00000001800B077A: mov     r8d, 170h; Size
 * 00000001800B0780: lea     rdx, off_18016CF50; Src
 * 00000001800B0787: lea     rcx, off_1801C0000; void *
 * 00000001800B078E: call    memcpy_0
 * 00000001800B0793: xor     edx, edx
 * 00000001800B0795: lea     ecx, [rdx+1]
 * 00000001800B0798: jmp     loc_1800B097D
 * 00000001800B079D: mov     byte ptr [rcx+337h], 0
 * 00000001800B07A4: xor     edx, edx; Val
 * 00000001800B07A6: lea     r8d, [rdx+60h]; Size
 * 00000001800B07AA: lea     rcx, unk_1801C29C0; void *
 * 00000001800B07B1: call    memset_0
 * 00000001800B07B6: mov     rax, [rsp+1280h+var_1220]
 * 00000001800B07BB: cmp     byte ptr [rax], 0
 * 00000001800B07BE: jz      loc_1800B093E
 * 00000001800B07C4: mov     rdx, rax; lpModuleName
 * 00000001800B07C7: mov     rcx, 0FFFFFFFFFFFFFFFFh
 * 00000001800B07CE: lea     rcx, [rcx+1]
 * 00000001800B07D2: cmp     word ptr [rax+rcx*2], 0
 * 00000001800B07D7: jnz     short loc_1800B07CE
 * 00000001800B07D9: lea     rax, [rax+rcx*2]
 * 00000001800B07DD: add     rax, 2
 * 00000001800B07E1: mov     [rbp+1180h+var_11A8], rax
 * 00000001800B07E5: mov     eax, dword ptr [rbp+1180h+var_1190]
 * 00000001800B07E8: lea     rcx, [rax+rax*2]
 * 00000001800B07EC: lea     rax, unk_1801C29C0
 * 00000001800B07F3: lea     r8, [rax+rcx*8]; phModule
 * 00000001800B07F7: mov     [rbp+1180h+var_11B8], r8
 * 00000001800B07FB: xor     ecx, ecx; dwFlags
 * 00000001800B07FD: call    cs:__imp_GetModuleHandleExW
 * 00000001800B0804: nop     dword ptr [rax+rax+00h]
 * 00000001800B0809: test    eax, eax
 * 00000001800B080B: jz      loc_1800B0937
 * 00000001800B0811: xor     r9d, r9d
 * 00000001800B0814: mov     ecx, r9d
 * 00000001800B0817: mov     dword ptr [rbp+1180h+var_1198], ecx
 * 00000001800B081A: mov     r8, [rbp+1180h+var_11B8]
 * 00000001800B081E: mov     rax, [r8]
 * 00000001800B0821: mov     edx, 5A4Dh
 * 00000001800B0826: cmp     [rax], dx
 * 00000001800B0829: jz      short loc_1800B0835
 * 00000001800B082B: mov     ecx, 0C000007Bh
 * 00000001800B0830: mov     dword ptr [rbp+1180h+var_1198], ecx
 * 00000001800B0833: jmp     short loc_1800B08A5
 * 00000001800B0835: movsxd  rdx, dword ptr [rax+3Ch]
 * 00000001800B0839: cmp     edx, 10000000h
 * 00000001800B083F: jb      short loc_1800B084B
 * 00000001800B0841: mov     ecx, 0C000007Bh
 * 00000001800B0846: mov     dword ptr [rbp+1180h+var_1198], ecx
 * 00000001800B0849: jmp     short loc_1800B08A5
 * 00000001800B084B: add     rdx, [r8]
 * 00000001800B084E: cmp     rdx, [r8]
 * 00000001800B0851: jnb     short loc_1800B085D
 * 00000001800B0853: mov     ecx, 0C000007Bh
 * 00000001800B0858: mov     dword ptr [rbp+1180h+var_1198], ecx
 * 00000001800B085B: jmp     short loc_1800B08A5
 * 00000001800B085D: cmp     dword ptr [rdx], 4550h
 * 00000001800B0863: jz      short loc_1800B086F
 * 00000001800B0865: mov     ecx, 0C000007Bh
 * 00000001800B086A: mov     dword ptr [rbp+1180h+var_1198], ecx
 * 00000001800B086D: jmp     short loc_1800B08A5
 * 00000001800B086F: movzx   eax, word ptr [rdx+18h]
 * 00000001800B0873: mov     r10d, 10Bh
 * 00000001800B0879: sub     ax, r10w
 * 00000001800B087D: mov     r10d, 0FEFFh
 * 00000001800B0883: test    r10w, ax
 * 00000001800B0887: jz      short loc_1800B0893
 * 00000001800B0889: mov     ecx, 0C000000Dh
 * 00000001800B088E: mov     dword ptr [rbp+1180h+var_1198], ecx
 * 00000001800B0891: jmp     short loc_1800B08A5
 * 00000001800B0893: mov     rax, [rdx+88h]
 * 00000001800B089A: mov     [r8+0Ch], rax
 * 00000001800B089E: mov     eax, [rdx+50h]
 * 00000001800B08A1: mov     [r8+8], eax
 * 00000001800B08A5: mov     rax, [rbp+1180h+var_11A8]
 * 00000001800B08A9: mov     edx, [rax]
 * 00000001800B08AB: mov     dword ptr [rbp+1180h+var_11F8], edx
 * 00000001800B08AE: add     rax, 4
 * 00000001800B08B2: mov     dword ptr [rbp+1180h+var_11C0], r9d
 * 00000001800B08B6: test    edx, edx
 * 00000001800B08B8: jz      short loc_1800B0929
 * 00000001800B08BA: mov     r10, rax
 * 00000001800B08BD: mov     rdx, 0FFFFFFFFFFFFFFFFh
 * 00000001800B08C4: inc     rdx
 * 00000001800B08C7: cmp     byte ptr [rax+rdx], 0
 * 00000001800B08CB: jnz     short loc_1800B08C4
 * 00000001800B08CD: inc     rax
 * 00000001800B08D0: add     rax, rdx
 * 00000001800B08D3: mov     [rbp+1180h+var_11A8], rax
 * 00000001800B08D7: test    ecx, ecx
 * 00000001800B08D9: js      short loc_1800B0912
 * 00000001800B08DB: mov     rdx, r10; lpProcName
 * 00000001800B08DE: mov     rcx, [r8]; hModule
 * 00000001800B08E1: call    cs:__imp_GetProcAddress
 * 00000001800B08E8: nop     dword ptr [rax+rax+00h]
 * 00000001800B08ED: test    rax, rax
 * 00000001800B08F0: jz      short loc_1800B093E
 * 00000001800B08F2: mov     edx, dword ptr [rsp+1280h+var_1218]
 * 00000001800B08F6: lea     r8, off_1801C0000
 * 00000001800B08FD: mov     [r8+rdx*8], rax
 * 00000001800B0901: mov     rax, [rbp+1180h+var_11A8]
 * 00000001800B0905: mov     ecx, dword ptr [rbp+1180h+var_1198]
 * 00000001800B0908: mov     r8, [rbp+1180h+var_11B8]
 * 00000001800B090C: mov     r9d, dword ptr [rbp+1180h+var_11C0]
 * 00000001800B0910: jmp     short loc_1800B0916
 * 00000001800B0912: mov     edx, dword ptr [rsp+1280h+var_1218]
 * 00000001800B0916: inc     edx
 * 00000001800B0918: mov     dword ptr [rsp+1280h+var_1218], edx
 * 00000001800B091C: inc     r9d
 * 00000001800B091F: mov     dword ptr [rbp+1180h+var_11C0], r9d
 * 00000001800B0923: cmp     r9d, dword ptr [rbp+1180h+var_11F8]
 * 00000001800B0927: jb      short loc_1800B08BA
 * 00000001800B0929: inc     dword ptr [rbp+1180h+var_1190]
 * 00000001800B092C: cmp     byte ptr [rax], 0
 * 00000001800B092F: jnz     loc_1800B07C4
 * 00000001800B0935: jmp     short loc_1800B093E
 * 00000001800B0937: mov     dword ptr [rbp+1180h+var_1198], 0C000007Ah
 * 00000001800B093E: call    cs:__imp_GetProcessHeap
 * 00000001800B0945: nop     dword ptr [rax+rax+00h]
 * 00000001800B094A: mov     r8, [rsp+1280h+var_1220]; lpMem
 * 00000001800B094F: xor     edx, edx; dwFlags
 * 00000001800B0951: mov     rcx, rax; hHeap
 * 00000001800B0954: call    cs:__imp_HeapFree
 * 00000001800B095B: nop     dword ptr [rax+rax+00h]
 * 00000001800B0960: cmp     dword ptr [rbp+1180h+var_1198], 0
 * 00000001800B0964: jl      loc_1800B0723
 * 00000001800B096A: mov     eax, cs:dword_1801C23F0
 * 00000001800B0970: xor     edx, edx
 * 00000001800B0972: lea     ecx, [rdx+1]
 * 00000001800B0975: inc     eax
 * 00000001800B0977: mov     cs:dword_1801C23F0, eax
 * 00000001800B097D: mov     eax, edx
 * 00000001800B097F: xchg    eax, cs:dword_1801C2A58
 * 00000001800B0985: mov     dword ptr [rsp+1280h+var_1218], edx
 * 00000001800B0989: mov     dword ptr [rbp+1180h+var_1198], edx
 * 00000001800B098C: mov     [rbp+1180h+var_ED0], rdx
 * 00000001800B0993: mov     [rsp+1280h+var_1220], rdx
 * 00000001800B0998: mov     [rbp+1180h+var_11A8], rdx
 * 00000001800B099C: mov     [rbp+1180h+var_11B8], rdx
 * 00000001800B09A0: xorps   xmm0, xmm0
 * 00000001800B09A3: movups  [rbp+1180h+var_CD8], xmm0
 * 00000001800B09AA: xor     eax, eax
 * 00000001800B09AC: lock cmpxchg cs:dword_1801C2A58, ecx
 * 00000001800B09B4: jnz     short loc_1800B09AA
 * 00000001800B09B6: mov     eax, cs:dword_1801C23F0
 * 00000001800B09BC: test    eax, eax
 * 00000001800B09BE: jnz     loc_1800B0FF3
 * 00000001800B09C4: mov     dword ptr [rbp+1180h+var_1190], edx
 * 00000001800B09C7: mov     dword ptr [rbp+1180h+var_11F8], edx
 * 00000001800B09CA: mov     dword ptr [rbp+1180h+var_11C0], edx
 * 00000001800B09CD: mov     ecx, 338h; unsigned __int64
 * 00000001800B09D2: call    ??2@YAPEAX_K@Z; operator new(unsigned __int64)
 * 00000001800B09D7: mov     r11, rax
 * 00000001800B09DA: mov     [rbp+1180h+lpModuleName], rax
 * 00000001800B09DE: test    rax, rax
 * 00000001800B09E1: jz      loc_1800B0DAE
 * 00000001800B09E7: xor     eax, eax
 * 00000001800B09E9: mov     edi, eax
 * 00000001800B09EB: mov     dword ptr [rbp+1180h+var_11B0], 0FFFFFFFFh
 * 00000001800B09F2: mov     ebx, eax
 * 00000001800B09F4: mov     esi, eax
 * 00000001800B09F6: lea     r13, [r11+7]
 * 00000001800B09FA: lea     r12, unk_180181002
 * 00000001800B0A01: lea     r15d, [rax+67h]
 * 00000001800B0A05: mov     r11d, dword ptr [rbp+1180h+var_11B0]
 * 00000001800B0A09: movzx   r10d, byte ptr [r12-2]
 * 00000001800B0A0F: shl     r10d, 8
 * 00000001800B0A13: movzx   eax, byte ptr [r12-1]
 * 00000001800B0A19: or      r10d, eax
 * 00000001800B0A1C: shl     r10d, 8
 * 00000001800B0A20: movzx   eax, byte ptr [r12]
 * 00000001800B0A25: or      r10d, eax
 * 00000001800B0A28: shl     r10d, 8
 * 00000001800B0A2C: movzx   eax, byte ptr [r12+1]
 * 00000001800B0A32: or      r10d, eax
 * 00000001800B0A35: movzx   r9d, byte ptr [r12+2]
 * 00000001800B0A3B: shl     r9d, 8
 * 00000001800B0A3F: movzx   eax, byte ptr [r12+3]
 * 00000001800B0A45: or      r9d, eax
 * 00000001800B0A48: shl     r9d, 8
 * 00000001800B0A4C: movzx   eax, byte ptr [r12+4]
 * 00000001800B0A52: or      r9d, eax
 * 00000001800B0A55: shl     r9d, 8
 * 00000001800B0A59: movzx   eax, byte ptr [r12+5]
 * 00000001800B0A5F: or      r9d, eax
 * 00000001800B0A62: xor     esi, r10d
 * 00000001800B0A65: lea     r12, [r12+8]
 * 00000001800B0A6A: mov     r8d, r9d
 * 00000001800B0A6D: xor     r8d, ebx
 * 00000001800B0A70: xor     r8d, esi
 * 00000001800B0A73: xor     r8d, 0AC987321h
 * 00000001800B0A7A: lea     eax, [r8+54969FA2h]
 * 00000001800B0A81: rol     eax, 5
 * 00000001800B0A84: mov     ecx, r8d
 * 00000001800B0A87: rol     ecx, 0Ah
 * 00000001800B0A8A: imul    eax, 137Fh
 * 00000001800B0A90: add     ecx, eax
 * 00000001800B0A92: xor     esi, ecx
 * 00000001800B0A94: lea     ecx, [rsi+7F1137Fh]
 * 00000001800B0A9A: ror     ecx, 9
 * 00000001800B0A9D: mov     eax, esi
 * 00000001800B0A9F: rol     eax, 2
 * 00000001800B0AA2: imul    ecx, 0AB69h
 * 00000001800B0AA8: sub     ecx, eax
 * 00000001800B0AAA: xor     r8d, ecx
 * 00000001800B0AAD: imul    ecx, r8d, 605Eh
 * 00000001800B0AB4: mov     eax, r8d
 * 00000001800B0AB7: shr     eax, 0Dh
 * 00000001800B0ABA: sub     ecx, eax
 * 00000001800B0ABC: sub     ecx, 756C8A2h
 * 00000001800B0AC2: xor     esi, ecx
 * 00000001800B0AC4: mov     ecx, esi
 * 00000001800B0AC6: xor     ecx, 0AB69h
 * 00000001800B0ACC: rol     ecx, 6
 * 00000001800B0ACF: mov     eax, esi
 * 00000001800B0AD1: rol     eax, 2
 * 00000001800B0AD4: imul    ecx, 7F1h
 * 00000001800B0ADA: sub     ecx, eax
 * 00000001800B0ADC: xor     r8d, ecx
 * 00000001800B0ADF: mov     eax, r8d
 * 00000001800B0AE2: xor     eax, 0AB69605Eh
 * 00000001800B0AE7: mov     ecx, 7F1137Fh
 * 00000001800B0AEC: sub     ecx, eax
 * 00000001800B0AEE: xor     esi, ecx
 * 00000001800B0AF0: mov     edx, esi
 * 00000001800B0AF2: ror     edx, 6
 * 00000001800B0AF5: mov     eax, esi
 * 00000001800B0AF7: xor     eax, 137Fh
 * 00000001800B0AFC: imul    ecx, eax, 0AB69h
 * 00000001800B0B02: xor     edx, ecx
 * 00000001800B0B04: xor     r8d, edx
 * 00000001800B0B07: lea     eax, [r8+7F1137Fh]
 * 00000001800B0B0E: ror     eax, 0Fh
 * 00000001800B0B11: mov     ecx, r8d
 * 00000001800B0B14: rol     ecx, 2
 * 00000001800B0B17: imul    eax, 605Eh
 * 00000001800B0B1D: add     ecx, eax
 * 00000001800B0B1F: xor     esi, ecx
 * 00000001800B0B21: lea     ecx, [rsi+54969FA2h]
 * 00000001800B0B27: ror     ecx, 0Eh
 * 00000001800B0B2A: mov     eax, esi
 * 00000001800B0B2C: rol     eax, 8
 * 00000001800B0B2F: imul    ecx, 7F1h
 * 00000001800B0B35: sub     ecx, eax
 * 00000001800B0B37: xor     r8d, ecx
 * 00000001800B0B3A: mov     eax, r8d
 * 00000001800B0B3D: xor     eax, 0AB69605Eh
 * 00000001800B0B42: ror     eax, 0Ch
 * 00000001800B0B45: mov     ecx, r8d
 * 00000001800B0B48: ror     ecx, 0Ah
 * 00000001800B0B4B: imul    eax, 137Fh
 * 00000001800B0B51: xor     ecx, eax
 * 00000001800B0B53: xor     esi, ecx
 * 00000001800B0B55: mov     eax, esi
 * 00000001800B0B57: xor     eax, 7F1h
 * 00000001800B0B5C: imul    ecx, eax, 0AB69h
 * 00000001800B0B62: mov     eax, esi
 * 00000001800B0B64: shr     eax, 0Ah
 * 00000001800B0B67: xor     ecx, eax
 * 00000001800B0B69: xor     ecx, r8d
 * 00000001800B0B6C: mov     eax, ecx
 * 00000001800B0B6E: not     eax
 * 00000001800B0B70: ror     eax, 5
 * 00000001800B0B73: add     eax, 605Eh
 * 00000001800B0B78: imul    eax, 7F1h
 * 00000001800B0B7E: xor     esi, eax
 * 00000001800B0B80: lea     ebx, [rsi-7F1h]
 * 00000001800B0B86: xor     ebx, ecx
 * 00000001800B0B88: xor     ebx, 0AB69605Eh
 * 00000001800B0B8E: mov     eax, ebx
 * 00000001800B0B90: xor     eax, 7F1h
 * 00000001800B0B95: rol     eax, 2
 * 00000001800B0B98: imul    ecx, eax, 137Fh
 * 00000001800B0B9E: mov     eax, ebx
 * 00000001800B0BA0: shr     eax, 2
 * 00000001800B0BA3: add     ecx, eax
 * 00000001800B0BA5: xor     esi, ecx
 * 00000001800B0BA7: lea     eax, [rsi-7F1137Fh]
 * 00000001800B0BAD: ror     eax, 6
 * 00000001800B0BB0: mov     ecx, esi
 * 00000001800B0BB2: rol     ecx, 7
 * 00000001800B0BB5: imul    eax, 0AB69h
 * 00000001800B0BBB: add     ecx, eax
 * 00000001800B0BBD: xor     ebx, ecx
 * 00000001800B0BBF: mov     edx, ebx
 * 00000001800B0BC1: ror     edx, 9
 * 00000001800B0BC4: mov     eax, ebx
 * 00000001800B0BC6: xor     eax, 137Fh
 * 00000001800B0BCB: imul    ecx, eax, 605Eh
 * 00000001800B0BD1: add     edx, ecx
 * 00000001800B0BD3: xor     esi, edx
 * 00000001800B0BD5: mov     eax, esi
 * 00000001800B0BD7: xor     eax, 0AB69h
 * 00000001800B0BDC: rol     eax, 5
 * 00000001800B0BDF: mov     ecx, esi
 * 00000001800B0BE1: rol     ecx, 7
 * 00000001800B0BE4: imul    eax, 7F1h
 * 00000001800B0BEA: add     ecx, eax
 * 00000001800B0BEC: xor     ebx, ecx
 * 00000001800B0BEE: xor     esi, ebx
 * 00000001800B0BF0: xor     esi, 0AC987321h
 * 00000001800B0BF6: mov     eax, esi
 * 00000001800B0BF8: ror     eax, 3
 * 00000001800B0BFB: imul    ecx, eax, 137Fh
 * 00000001800B0C01: sub     ecx, 0D0DD417h
 * 00000001800B0C07: xor     ebx, ecx
 * 00000001800B0C09: lea     ecx, [rbx-7F1137Fh]
 * 00000001800B0C0F: ror     ecx, 1
 * 00000001800B0C11: mov     eax, ebx
 * 00000001800B0C13: ror     eax, 6
 * 00000001800B0C16: imul    ecx, 605Eh
 * 00000001800B0C1C: sub     ecx, eax
 * 00000001800B0C1E: xor     esi, ecx
 * 00000001800B0C20: lea     eax, [rsi-54969FA2h]
 * 00000001800B0C26: rol     eax, 3
 * 00000001800B0C29: mov     ecx, esi
 * 00000001800B0C2B: rol     ecx, 0Eh
 * 00000001800B0C2E: imul    eax, 7F1h
 * 00000001800B0C34: add     ecx, eax
 * 00000001800B0C36: xor     ebx, ecx
 * 00000001800B0C38: lea     ecx, [rbx-54969FA2h]
 * 00000001800B0C3E: rol     ecx, 0Fh
 * 00000001800B0C41: mov     eax, ebx
 * 00000001800B0C43: ror     eax, 0Eh
 * 00000001800B0C46: imul    ecx, 137Fh
 * 00000001800B0C4C: sub     ecx, eax
 * 00000001800B0C4E: xor     esi, ecx
 * 00000001800B0C50: mov     eax, esi
 * 00000001800B0C52: xor     eax, 605Eh
 * 00000001800B0C57: imul    ecx, eax, 0AB69h
 * 00000001800B0C5D: mov     eax, esi
 * 00000001800B0C5F: shr     eax, 3
 * 00000001800B0C62: xor     ecx, eax
 * 00000001800B0C64: xor     ebx, ecx
 * 00000001800B0C66: mov     eax, ebx
 * 00000001800B0C68: xor     eax, 7F1137Fh
 * 00000001800B0C6D: rol     eax, 4
 * 00000001800B0C70: mov     ecx, ebx
 * 00000001800B0C72: rol     ecx, 2
 * 00000001800B0C75: imul    eax, 605Eh
 * 00000001800B0C7B: xor     ecx, eax
 * 00000001800B0C7D: xor     ecx, edi
 * 00000001800B0C7F: xor     esi, ecx
 * 00000001800B0C81: xor     ebx, r11d
 * 00000001800B0C84: mov     [r13-4], sil
 * 00000001800B0C88: ror     esi, 8
 * 00000001800B0C8B: mov     [r13+0], bl
 * 00000001800B0C8F: ror     ebx, 8
 * 00000001800B0C92: mov     [r13-5], sil
 * 00000001800B0C96: ror     esi, 8
 * 00000001800B0C99: mov     [r13-1], bl
 * 00000001800B0C9D: ror     ebx, 8
 * 00000001800B0CA0: mov     [r13-6], sil
 * 00000001800B0CA4: ror     esi, 8
 * 00000001800B0CA7: mov     [r13-2], bl
 * 00000001800B0CAB: ror     ebx, 8
 * 00000001800B0CAE: mov     [r13-7], sil
 * 00000001800B0CB2: mov     [r13-3], bl
 * 00000001800B0CB6: ror     esi, 8
 * 00000001800B0CB9: ror     ebx, 8
 * 00000001800B0CBC: mov     edi, r10d
 * 00000001800B0CBF: mov     r11d, r9d
 * 00000001800B0CC2: lea     r13, [r13+8]
 * 00000001800B0CC6: sub     r15, 1
 * 00000001800B0CCA: jnz     loc_1800B0A09
 * 00000001800B0CD0: xor     eax, eax
 * 00000001800B0CD2: xorps   xmm1, xmm1
 * 00000001800B0CD5: xorps   xmm2, xmm2
 * 00000001800B0CD8: mov     edi, dword ptr [rbp+1180h+var_1200]
 * 00000001800B0CDB: mov     rbx, 0C81ECB17B1B54A58h
 * 00000001800B0CE5: mov     rsi, 7F1137FAB69605Eh
 * 00000001800B0CEF: mov     r15, [rbp+1180h+var_1128]
 * 00000001800B0CF3: lea     r12, [r15+0C0h]
 * 00000001800B0CFA: mov     r13d, [rbp+1180h+var_10C8]
 * 00000001800B0D01: mov     r11, [rbp+1180h+lpModuleName]
 * 00000001800B0D05: movdqu  xmm0, xmmword ptr [rax+r11]
 * 00000001800B0D0B: pxor    xmm1, xmm0
 * 00000001800B0D0F: movdqu  xmm0, xmmword ptr [rax+r11+10h]
 * 00000001800B0D16: pxor    xmm0, xmm2
 * 00000001800B0D1A: movdqa  xmm2, xmm0
 * 00000001800B0D1E: add     rax, 20h ; ' '
 * 00000001800B0D22: cmp     rax, 320h
 * 00000001800B0D28: jb      short loc_1800B0D05
 * 00000001800B0D2A: pxor    xmm1, xmm0
 * 00000001800B0D2E: movdqa  xmm0, xmm1
 * 00000001800B0D32: psrldq  xmm0, 8
 * 00000001800B0D37: pxor    xmm1, xmm0
 * 00000001800B0D3B: movdqa  xmm0, xmm1
 * 00000001800B0D3F: psrldq  xmm0, 4
 * 00000001800B0D44: pxor    xmm1, xmm0
 * 00000001800B0D48: movdqa  xmm0, xmm1
 * 00000001800B0D4C: psrldq  xmm0, 2
 * 00000001800B0D51: pxor    xmm1, xmm0
 * 00000001800B0D55: movdqa  xmm0, xmm1
 * 00000001800B0D59: psrldq  xmm0, 1
 * 00000001800B0D5E: pxor    xmm1, xmm0
 * 00000001800B0D62: movd    ecx, xmm1
 * 00000001800B0D66: cmp     rax, 338h
 * 00000001800B0D6C: jnb     short loc_1800B0D7D
 * 00000001800B0D6E: xor     cl, [rax+r11]
 * 00000001800B0D72: inc     rax
 * 00000001800B0D75: cmp     rax, 338h
 * 00000001800B0D7B: jb      short loc_1800B0D6E
 * 00000001800B0D7D: movzx   eax, cl
 * 00000001800B0D80: cmp     rax, cs:qword_180181338
 * 00000001800B0D87: jz      loc_1800B0E22
 * 00000001800B0D8D: call    cs:__imp_GetProcessHeap
 * 00000001800B0D94: nop     dword ptr [rax+rax+00h]
 * 00000001800B0D99: mov     rcx, rax; hHeap
 * 00000001800B0D9C: mov     r8, [rbp+1180h+lpModuleName]; lpMem
 * 00000001800B0DA0: xor     edx, edx; dwFlags
 * 00000001800B0DA2: call    cs:__imp_HeapFree
 * 00000001800B0DA9: nop     dword ptr [rax+rax+00h]
 * 00000001800B0DAE: lea     rax, unk_1801C29C0
 * 00000001800B0DB5: mov     [rbp+1180h+lpModuleName], rax
 * 00000001800B0DB9: mov     edx, 4
 * 00000001800B0DBE: mov     [rbp+1180h+var_11E0], rdx
 * 00000001800B0DC2: mov     rcx, [rax]; hLibModule
 * 00000001800B0DC5: test    rcx, rcx
 * 00000001800B0DC8: jz      short loc_1800B0DDE
 * 00000001800B0DCA: call    cs:__imp_FreeLibrary
 * 00000001800B0DD1: nop     dword ptr [rax+rax+00h]
 * 00000001800B0DD6: mov     rax, [rbp+1180h+lpModuleName]
 * 00000001800B0DDA: mov     rdx, [rbp+1180h+var_11E0]
 * 00000001800B0DDE: add     rax, 18h
 * 00000001800B0DE2: mov     [rbp+1180h+lpModuleName], rax
 * 00000001800B0DE6: sub     rdx, 1
 * 00000001800B0DEA: mov     [rbp+1180h+var_11E0], rdx
 * 00000001800B0DEE: jnz     short loc_1800B0DC2
 * 00000001800B0DF0: xor     edx, edx; Val
 * 00000001800B0DF2: lea     r8d, [rdx+60h]; Size
 * 00000001800B0DF6: lea     rcx, unk_1801C29C0; void *
 * 00000001800B0DFD: call    memset_0
 * 00000001800B0E02: mov     r8d, 170h; Size
 * 00000001800B0E08: lea     rdx, off_18016CF50; Src
 * 00000001800B0E0F: lea     rcx, off_1801C0000; void *
 * 00000001800B0E16: call    memcpy_0
 * 00000001800B0E1B: xor     edx, edx
 * 00000001800B0E1D: jmp     loc_1800B0FFB
 * 00000001800B0E22: mov     byte ptr [r11+337h], 0
 * 00000001800B0E2A: xor     edx, edx; Val
 * 00000001800B0E2C: lea     r8d, [rdx+60h]; Size
 * 00000001800B0E30: lea     rcx, unk_1801C29C0; void *
 * 00000001800B0E37: call    memset_0
 * 00000001800B0E3C: mov     rax, [rbp+1180h+lpModuleName]
 * 00000001800B0E40: cmp     byte ptr [rax], 0
 * 00000001800B0E43: jz      loc_1800B0FC0
 * 00000001800B0E49: mov     rdx, rax; lpModuleName
 * 00000001800B0E4C: mov     rcx, 0FFFFFFFFFFFFFFFFh
 * 00000001800B0E53: lea     rcx, [rcx+1]
 * 00000001800B0E57: cmp     word ptr [rax+rcx*2], 0
 * 00000001800B0E5C: jnz     short loc_1800B0E53
 * 00000001800B0E5E: lea     rax, [rax+rcx*2]
 * 00000001800B0E62: add     rax, 2
 * 00000001800B0E66: mov     [rbp+1180h+var_11E0], rax
 * 00000001800B0E6A: mov     eax, dword ptr [rbp+1180h+var_11C0]
 * 00000001800B0E6D: lea     rcx, [rax+rax*2]
 * 00000001800B0E71: lea     rax, unk_1801C29C0
 * 00000001800B0E78: lea     r8, [rax+rcx*8]; phModule
 * 00000001800B0E7C: mov     [rbp+1180h+var_11A0], r8
 * 00000001800B0E80: xor     ecx, ecx; dwFlags
 * 00000001800B0E82: call    cs:__imp_GetModuleHandleExW
 * 00000001800B0E89: nop     dword ptr [rax+rax+00h]
 * 00000001800B0E8E: test    eax, eax
 * 00000001800B0E90: jz      loc_1800B0FB9
 * 00000001800B0E96: xor     r9d, r9d
 * 00000001800B0E99: mov     ecx, r9d
 * 00000001800B0E9C: mov     dword ptr [rbp+1180h+var_11F8], ecx
 * 00000001800B0E9F: mov     r8, [rbp+1180h+var_11A0]
 * 00000001800B0EA3: mov     rax, [r8]
 * 00000001800B0EA6: mov     edx, 5A4Dh
 * 00000001800B0EAB: cmp     [rax], dx
 * 00000001800B0EAE: jz      short loc_1800B0EBA
 * 00000001800B0EB0: mov     ecx, 0C000007Bh
 * 00000001800B0EB5: mov     dword ptr [rbp+1180h+var_11F8], ecx
 * 00000001800B0EB8: jmp     short loc_1800B0F2A
 * 00000001800B0EBA: movsxd  rdx, dword ptr [rax+3Ch]
 * 00000001800B0EBE: cmp     edx, 10000000h
 * 00000001800B0EC4: jb      short loc_1800B0ED0
 * 00000001800B0EC6: mov     ecx, 0C000007Bh
 * 00000001800B0ECB: mov     dword ptr [rbp+1180h+var_11F8], ecx
 * 00000001800B0ECE: jmp     short loc_1800B0F2A
 * 00000001800B0ED0: add     rdx, [r8]
 * 00000001800B0ED3: cmp     rdx, [r8]
 * 00000001800B0ED6: jnb     short loc_1800B0EE2
 * 00000001800B0ED8: mov     ecx, 0C000007Bh
 * 00000001800B0EDD: mov     dword ptr [rbp+1180h+var_11F8], ecx
 * 00000001800B0EE0: jmp     short loc_1800B0F2A
 * 00000001800B0EE2: cmp     dword ptr [rdx], 4550h
 * 00000001800B0EE8: jz      short loc_1800B0EF4
 * 00000001800B0EEA: mov     ecx, 0C000007Bh
 * 00000001800B0EEF: mov     dword ptr [rbp+1180h+var_11F8], ecx
 * 00000001800B0EF2: jmp     short loc_1800B0F2A
 * 00000001800B0EF4: movzx   eax, word ptr [rdx+18h]
 * 00000001800B0EF8: mov     r10d, 10Bh
 * 00000001800B0EFE: sub     ax, r10w
 * 00000001800B0F02: mov     r10d, 0FEFFh
 * 00000001800B0F08: test    r10w, ax
 * 00000001800B0F0C: jz      short loc_1800B0F18
 * 00000001800B0F0E: mov     ecx, 0C000000Dh
 * 00000001800B0F13: mov     dword ptr [rbp+1180h+var_11F8], ecx
 * 00000001800B0F16: jmp     short loc_1800B0F2A
 * 00000001800B0F18: mov     rax, [rdx+88h]
 * 00000001800B0F1F: mov     [r8+0Ch], rax
 * 00000001800B0F23: mov     eax, [rdx+50h]
 * 00000001800B0F26: mov     [r8+8], eax
 * 00000001800B0F2A: mov     rax, [rbp+1180h+var_11E0]
 * 00000001800B0F2E: mov     edx, [rax]
 * 00000001800B0F30: mov     dword ptr [rbp+1180h+var_1200], edx
 * 00000001800B0F33: add     rax, 4
 * 00000001800B0F37: mov     dword ptr [rbp+1180h+var_11B0], r9d
 * 00000001800B0F3B: test    edx, edx
 * 00000001800B0F3D: jz      short loc_1800B0FAB
 * 00000001800B0F3F: mov     r10, rax
 * 00000001800B0F42: mov     rdx, 0FFFFFFFFFFFFFFFFh
 * 00000001800B0F49: inc     rdx
 * 00000001800B0F4C: cmp     byte ptr [rax+rdx], 0
 * 00000001800B0F50: jnz     short loc_1800B0F49
 * 00000001800B0F52: inc     rax
 * 00000001800B0F55: add     rax, rdx
 * 00000001800B0F58: mov     [rbp+1180h+var_11E0], rax
 * 00000001800B0F5C: test    ecx, ecx
 * 00000001800B0F5E: js      short loc_1800B0F96
 * 00000001800B0F60: mov     rdx, r10; lpProcName
 * 00000001800B0F63: mov     rcx, [r8]; hModule
 * 00000001800B0F66: call    cs:__imp_GetProcAddress
 * 00000001800B0F6D: nop     dword ptr [rax+rax+00h]
 * 00000001800B0F72: test    rax, rax
 * 00000001800B0F75: jz      short loc_1800B0FC0
 * 00000001800B0F77: mov     edx, dword ptr [rbp+1180h+var_1190]
 * 00000001800B0F7A: lea     r8, off_1801C0000
 * 00000001800B0F81: mov     [r8+rdx*8], rax
 * 00000001800B0F85: mov     rax, [rbp+1180h+var_11E0]
 * 00000001800B0F89: mov     ecx, dword ptr [rbp+1180h+var_11F8]
 * 00000001800B0F8C: mov     r8, [rbp+1180h+var_11A0]
 * 00000001800B0F90: mov     r9d, dword ptr [rbp+1180h+var_11B0]
 * 00000001800B0F94: jmp     short loc_1800B0F99
 * 00000001800B0F96: mov     edx, dword ptr [rbp+1180h+var_1190]
 * 00000001800B0F99: inc     edx
 * 00000001800B0F9B: mov     dword ptr [rbp+1180h+var_1190], edx
 * 00000001800B0F9E: inc     r9d
 * 00000001800B0FA1: mov     dword ptr [rbp+1180h+var_11B0], r9d
 * 00000001800B0FA5: cmp     r9d, dword ptr [rbp+1180h+var_1200]
 * 00000001800B0FA9: jb      short loc_1800B0F3F
 * 00000001800B0FAB: inc     dword ptr [rbp+1180h+var_11C0]
 * 00000001800B0FAE: cmp     byte ptr [rax], 0
 * 00000001800B0FB1: jnz     loc_1800B0E49
 * 00000001800B0FB7: jmp     short loc_1800B0FC0
 * 00000001800B0FB9: mov     dword ptr [rbp+1180h+var_11F8], 0C000007Ah
 * 00000001800B0FC0: call    cs:__imp_GetProcessHeap
 * 00000001800B0FC7: nop     dword ptr [rax+rax+00h]
 * 00000001800B0FCC: mov     r8, [rbp+1180h+lpModuleName]; lpMem
 * 00000001800B0FD0: xor     edx, edx; dwFlags
 * 00000001800B0FD2: mov     rcx, rax; hHeap
 * 00000001800B0FD5: call    cs:__imp_HeapFree
 * 00000001800B0FDC: nop     dword ptr [rax+rax+00h]
 * 00000001800B0FE1: cmp     dword ptr [rbp+1180h+var_11F8], 0
 * 00000001800B0FE5: jl      loc_1800B0DAE
 * 00000001800B0FEB: mov     eax, cs:dword_1801C23F0
 * 00000001800B0FF1: xor     edx, edx
 * 00000001800B0FF3: inc     eax
 * 00000001800B0FF5: mov     cs:dword_1801C23F0, eax
 * 00000001800B0FFB: mov     eax, edx
 * 00000001800B0FFD: xchg    eax, cs:dword_1801C2A58
 * 00000001800B1003: xor     edx, edx; Val
 * 00000001800B1005: lea     r8d, [rdx+70h]; Size
 * 00000001800B1009: lea     rcx, [rbp+1180h+var_860]; void *
 * 00000001800B1010: call    memset_0
 * 00000001800B1015: xorps   xmm0, xmm0
 * 00000001800B1018: movups  [rbp+1180h+var_7C0], xmm0
 * 00000001800B101F: mov     eax, edi
 * 00000001800B1021: and     eax, 0Fh
 * 00000001800B1024: mov     dword ptr [rbp+1180h+var_1200], eax
 * 00000001800B1027: mov     eax, edi
 * 00000001800B1029: shr     eax, 4
 * 00000001800B102C: and     ax, 0Fh
 * 00000001800B1030: mov     [rbp+1180h+var_300], ax
 * 00000001800B1037: mov     eax, edi
 * 00000001800B1039: shr     eax, 8
 * 00000001800B103C: and     ax, 0Fh
 * 00000001800B1040: mov     [rbp+1180h+var_2FE], ax
 * 00000001800B1047: shr     edi, 0Ch
 * 00000001800B104A: and     di, 0Fh
 * 00000001800B104E: mov     [rbp+1180h+var_2FC], di
 * 00000001800B1055: mov     r10, 9B61A6A01AD19370h
 * 00000001800B105F: xor     edx, edx
 * 00000001800B1061: xor     ecx, ecx
 * 00000001800B1063: mov     r8d, 403h
 * 00000001800B1069: mov     rax, cs:off_1801C00F8
 * 00000001800B1070: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B1076: mov     [rbp+1180h+lpModuleName], rax
 * 00000001800B107A: mov     dword ptr [rbp+1180h+var_1190], 0FFFFFFh
 * 00000001800B1081: test    rax, rax
 * 00000001800B1084: jnz     short loc_1800B10BE
 * 00000001800B1086: call    cs:__imp_GetLastError
 * 00000001800B108D: nop     dword ptr [rax+rax+00h]
 * 00000001800B1092: mov     edi, eax
 * 00000001800B1094: mov     [rbp+1180h+var_11D8], eax
 * 00000001800B1097: test    eax, eax
 * 00000001800B1099: jle     short loc_1800B10A7
 * 00000001800B109B: movzx   edi, ax
 * 00000001800B109E: or      edi, 80070000h
 * 00000001800B10A4: mov     [rbp+1180h+var_11D8], edi
 * 00000001800B10A7: test    edi, edi
 * 00000001800B10A9: js      loc_1800B6CFC
 * 00000001800B10AF: mov     eax, 80004005h
 * 00000001800B10B4: mov     edi, eax
 * 00000001800B10B6: mov     [rbp+1180h+var_11D8], eax
 * 00000001800B10B9: jmp     loc_1800B6CFC
 * 00000001800B10BE: xor     eax, eax
 * 00000001800B10C0: mov     [rbp+1180h+var_F98], rax
 * 00000001800B10C7: mov     [rbp+1180h+var_EC0], rax
 * 00000001800B10CE: mov     [rbp+1180h+var_EB8], rax
 * 00000001800B10D5: mov     [rbp+1180h+var_EB0], rax
 * 00000001800B10DC: mov     [rbp+1180h+var_EA8], rax
 * 00000001800B10E3: mov     [rbp+1180h+var_1010], rax
 * 00000001800B10EA: mov     [rbp+1180h+var_10CC], eax
 * 00000001800B10F0: mov     r10, 0BE1926D37A52C070h
 * 00000001800B10FA: lea     r9, [rbp+1180h+var_10CC]
 * 00000001800B1101: xor     r8d, r8d
 * 00000001800B1104: lea     rdx, [rbp+1180h+var_1170]
 * 00000001800B1108: lea     ecx, [rax+8]
 * 00000001800B110B: mov     rax, cs:off_1801C00A0
 * 00000001800B1112: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B1118: test    eax, eax
 * 00000001800B111A: jnz     short loc_1800B1135
 * 00000001800B111C: call    cs:__imp_GetLastError
 * 00000001800B1123: nop     dword ptr [rax+rax+00h]
 * 00000001800B1128: test    eax, eax
 * 00000001800B112A: jg      loc_1800B1225
 * 00000001800B1130: jmp     loc_1800B122F
 * 00000001800B1135: mov     ecx, [rbp+1180h+var_10CC]
 * 00000001800B113B: add     rcx, rcx; unsigned __int64
 * 00000001800B113E: call    ??2@YAPEAX_K@Z; operator new(unsigned __int64)
 * 00000001800B1143: mov     rdi, rax
 * 00000001800B1146: mov     [rbp+1180h+var_11E0], rax
 * 00000001800B114A: lea     rcx, [rbp+1180h+var_EA8]
 * 00000001800B1151: call    ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ; SP<ushort *,SP_MEM<ushort *>>::Reset(void)
 * 00000001800B1156: test    rdi, rdi
 * 00000001800B1159: jnz     short loc_1800B1188
 * 00000001800B115B: xor     eax, eax
 * 00000001800B115D: mov     [rbp+1180h+var_EA8], rax
 * 00000001800B1164: lea     rcx, [rbp+1180h+var_1010]
 * 00000001800B116B: call    ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ; SP<ushort *,SP_MEM<ushort *>>::Reset(void)
 * 00000001800B1170: lea     rcx, [rbp+1180h+var_EA8]
 * 00000001800B1177: call    ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ; SP<ushort *,SP_MEM<ushort *>>::Reset(void)
 * 00000001800B117C: mov     [rbp+1180h+var_11D8], 8007000Eh
 * 00000001800B1183: jmp     loc_1800B5FD9
 * 00000001800B1188: mov     [rbp+1180h+var_EA8], rdi
 * 00000001800B118F: mov     ecx, [rbp+1180h+var_1170]
 * 00000001800B1192: inc     ecx
 * 00000001800B1194: shl     rcx, 2; unsigned __int64
 * 00000001800B1198: call    ??2@YAPEAX_K@Z; operator new(unsigned __int64)
 * 00000001800B119D: mov     rdi, rax
 * 00000001800B11A0: lea     rcx, [rbp+1180h+var_1010]
 * 00000001800B11A7: call    ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ; SP<ushort *,SP_MEM<ushort *>>::Reset(void)
 * 00000001800B11AC: test    rdi, rdi
 * 00000001800B11AF: jnz     short loc_1800B11DF
 * 00000001800B11B1: xor     eax, eax
 * 00000001800B11B3: mov     [rbp+1180h+var_1010], rax
 * 00000001800B11BA: lea     rcx, [rbp+1180h+var_1010]
 * 00000001800B11C1: call    ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ; SP<ushort *,SP_MEM<ushort *>>::Reset(void)
 * 00000001800B11C6: lea     rcx, [rbp+1180h+var_EA8]
 * 00000001800B11CD: call    ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ; SP<ushort *,SP_MEM<ushort *>>::Reset(void)
 * 00000001800B11D2: mov     eax, 8007000Eh
 * 00000001800B11D7: mov     [rbp+1180h+var_11D8], eax
 * 00000001800B11DA: jmp     loc_1800B5FD9
 * 00000001800B11DF: mov     [rbp+1180h+var_1010], rdi
 * 00000001800B11E6: mov     r10, 0BE1926D37A52C070h
 * 00000001800B11F0: lea     r9, [rbp+1180h+var_10CC]
 * 00000001800B11F7: mov     r8, [rbp+1180h+var_11E0]
 * 00000001800B11FB: lea     rdx, [rbp+1180h+var_1170]
 * 00000001800B11FF: mov     ecx, 8
 * 00000001800B1204: mov     rax, cs:off_1801C00A0
 * 00000001800B120B: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B1211: test    eax, eax
 * 00000001800B1213: jnz     short loc_1800B1257
 * 00000001800B1215: call    cs:__imp_GetLastError
 * 00000001800B121C: nop     dword ptr [rax+rax+00h]
 * 00000001800B1221: test    eax, eax
 * 00000001800B1223: jle     short loc_1800B122F
 * 00000001800B1225: movzx   eax, ax
 * 00000001800B1228: or      eax, 80070000h
 * 00000001800B122D: test    eax, eax
 * 00000001800B122F: mov     ecx, 80004005h
 * 00000001800B1234: cmovns  eax, ecx
 * 00000001800B1237: mov     [rbp+1180h+var_11D8], eax
 * 00000001800B123A: lea     rcx, [rbp+1180h+var_1010]
 * 00000001800B1241: call    ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ; SP<ushort *,SP_MEM<ushort *>>::Reset(void)
 * 00000001800B1246: lea     rcx, [rbp+1180h+var_EA8]
 * 00000001800B124D: call    ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ; SP<ushort *,SP_MEM<ushort *>>::Reset(void)
 * 00000001800B1252: jmp     loc_1800B5FD9
 * 00000001800B1257: mov     rax, rdi
 * 00000001800B125A: xor     ecx, ecx
 * 00000001800B125C: cmp     [rbp+1180h+var_1170], ecx
 * 00000001800B125F: jbe     short loc_1800B12D7
 * 00000001800B1261: mov     rax, [rbp+1180h+var_11E0]
 * 00000001800B1265: mov     rsi, rdi
 * 00000001800B1268: mov     ebx, ecx
 * 00000001800B126A: mov     r10, 0EADD062354D83270h
 * 00000001800B1274: xor     edx, edx
 * 00000001800B1276: mov     rcx, rax
 * 00000001800B1279: mov     rax, cs:off_1801C00B0
 * 00000001800B1280: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B1286: mov     [rsi], eax
 * 00000001800B1288: mov     rcx, 0FFFFFFFFFFFFFFFFh
 * 00000001800B128F: mov     rax, [rbp+1180h+var_11E0]
 * 00000001800B1293: lea     rcx, [rcx+1]
 * 00000001800B1297: cmp     word ptr [rax+rcx*2], 0
 * 00000001800B129C: jnz     short loc_1800B1293
 * 00000001800B129E: lea     rax, [rax+rcx*2]
 * 00000001800B12A2: add     rax, 2
 * 00000001800B12A6: mov     [rbp+1180h+var_11E0], rax
 * 00000001800B12AA: add     rsi, 4
 * 00000001800B12AE: inc     ebx
 * 00000001800B12B0: cmp     ebx, [rbp+1180h+var_1170]
 * 00000001800B12B3: jb      short loc_1800B126A
 * 00000001800B12B5: mov     [rbp+1180h+var_1010], rsi
 * 00000001800B12BC: mov     rbx, 0C81ECB17B1B54A58h
 * 00000001800B12C6: mov     rsi, 7F1137FAB69605Eh
 * 00000001800B12D0: mov     rax, [rbp+1180h+var_1010]
 * 00000001800B12D7: mov     dword ptr [rax], 409h
 * 00000001800B12DD: xor     eax, eax
 * 00000001800B12DF: mov     [rbp+1180h+var_1010], rax
 * 00000001800B12E6: mov     [rbp+1180h+var_F98], rdi
 * 00000001800B12ED: mov     eax, [rbp+1180h+var_1170]
 * 00000001800B12F0: inc     eax
 * 00000001800B12F2: mov     dword ptr [rbp+1180h+var_11F8], eax
 * 00000001800B12F5: lea     rcx, [rbp+1180h+var_1010]
 * 00000001800B12FC: call    ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ; SP<ushort *,SP_MEM<ushort *>>::Reset(void)
 * 00000001800B1301: lea     rcx, [rbp+1180h+var_EA8]
 * 00000001800B1308: call    ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ; SP<ushort *,SP_MEM<ushort *>>::Reset(void)
 * 00000001800B130D: xor     eax, eax
 * 00000001800B130F: mov     r11d, eax
 * 00000001800B1312: mov     dword ptr [rbp+1180h+var_11C0], eax
 * 00000001800B1315: mov     r9d, eax
 * 00000001800B1318: lea     rdx, unk_18019A400
 * 00000001800B131F: mov     r10d, dword ptr [rbp+1180h+var_11F8]
 * 00000001800B1323: test    r10d, r10d
 * 00000001800B1326: jz      short loc_1800B135F
 * 00000001800B1328: mov     r8d, eax
 * 00000001800B132B: mov     ecx, eax
 * 00000001800B132D: mov     eax, [rdx]
 * 00000001800B132F: cmp     [rdi+r8], eax
 * 00000001800B1333: jz      short loc_1800B1357
 * 00000001800B1335: inc     ecx
 * 00000001800B1337: add     rdx, 4
 * 00000001800B133B: cmp     ecx, 26h ; '&'
 * 00000001800B133E: jb      short loc_1800B132D
 * 00000001800B1340: inc     r9d
 * 00000001800B1343: add     r8, 4
 * 00000001800B1347: xor     eax, eax
 * 00000001800B1349: cmp     r9d, r10d
 * 00000001800B134C: jnb     short loc_1800B135F
 * 00000001800B134E: lea     rdx, unk_18019A400
 * 00000001800B1355: jmp     short loc_1800B132B
 * 00000001800B1357: mov     r11d, ecx
 * 00000001800B135A: mov     dword ptr [rbp+1180h+var_11C0], ecx
 * 00000001800B135D: xor     eax, eax
 * 00000001800B135F: mov     edi, r11d
 * 00000001800B1362: mov     dword ptr [rbp+1180h+var_11F8], eax
 * 00000001800B1365: mov     r10, 0F3552E1936D87370h
 * 00000001800B136F: xor     r9d, r9d
 * 00000001800B1372: lea     r8d, [r9+55h]
 * 00000001800B1376: lea     rdx, [rbp+1180h+var_2F0]
 * 00000001800B137D: lea     rax, unk_18019A400
 * 00000001800B1384: mov     ecx, [rax+rdi*4]
 * 00000001800B1387: mov     rax, cs:off_1801C00A8
 * 00000001800B138E: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B1394: test    eax, eax
 * 00000001800B1396: jz      short loc_1800B13DA
 * 00000001800B1398: mov     r10, 0E375262D7CD44270h
 * 00000001800B13A2: mov     r9d, 10h
 * 00000001800B13A8: lea     r8, [rbp+1180h+var_770]
 * 00000001800B13AF: lea     edx, [r9+48h]
 * 00000001800B13B3: lea     rcx, [rbp+1180h+var_2F0]
 * 00000001800B13BA: mov     rax, cs:off_1801C0090
 * 00000001800B13C1: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B13C7: test    eax, eax
 * 00000001800B13C9: jle     short loc_1800B13DA
 * 00000001800B13CB: mov     eax, [rbp+1180h+var_764]
 * 00000001800B13D1: shr     eax, 1Bh
 * 00000001800B13D4: and     eax, 1
 * 00000001800B13D7: mov     dword ptr [rbp+1180h+var_11F8], eax
 * 00000001800B13DA: lea     rcx, aSegoeUiLight; "Segoe UI Light"
 * 00000001800B13E1: mov     [rbp+1180h+var_3A0], rcx
 * 00000001800B13E8: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B13EF: lea     rax, [rax+1]
 * 00000001800B13F3: cmp     word ptr [rcx+rax*2], 0
 * 00000001800B13F8: jnz     short loc_1800B13EF
 * 00000001800B13FA: lea     rcx, [rcx+rax*2]
 * 00000001800B13FE: add     rcx, 2
 * 00000001800B1402: mov     [rbp+1180h+var_398], rcx
 * 00000001800B1409: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1410: lea     rax, [rax+1]
 * 00000001800B1414: cmp     word ptr [rcx+rax*2], 0
 * 00000001800B1419: jnz     short loc_1800B1410
 * 00000001800B141B: lea     rcx, [rcx+rax*2]
 * 00000001800B141F: add     rcx, 2
 * 00000001800B1423: mov     [rbp+1180h+var_390], rcx
 * 00000001800B142A: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1431: inc     rax
 * 00000001800B1434: cmp     word ptr [rcx+rax*2], 0
 * 00000001800B1439: jnz     short loc_1800B1431
 * 00000001800B143B: inc     rax
 * 00000001800B143E: lea     rdx, [rcx+rax*2]
 * 00000001800B1442: mov     [rbp+1180h+var_388], rdx
 * 00000001800B1449: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1450: inc     rax
 * 00000001800B1453: cmp     word ptr [rdx+rax*2], 0
 * 00000001800B1458: jnz     short loc_1800B1450
 * 00000001800B145A: inc     rax
 * 00000001800B145D: lea     rcx, [rdx+rax*2]
 * 00000001800B1461: mov     [rbp+1180h+var_380], rcx
 * 00000001800B1468: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B146F: inc     rax
 * 00000001800B1472: cmp     word ptr [rcx+rax*2], 0
 * 00000001800B1477: jnz     short loc_1800B146F
 * 00000001800B1479: inc     rax
 * 00000001800B147C: lea     rdx, [rcx+rax*2]
 * 00000001800B1480: mov     [rbp+1180h+var_378], rdx
 * 00000001800B1487: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B148E: inc     rax
 * 00000001800B1491: cmp     word ptr [rdx+rax*2], 0
 * 00000001800B1496: jnz     short loc_1800B148E
 * 00000001800B1498: inc     rax
 * 00000001800B149B: lea     rcx, [rdx+rax*2]
 * 00000001800B149F: mov     [rbp+1180h+var_370], rcx
 * 00000001800B14A6: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B14AD: inc     rax
 * 00000001800B14B0: cmp     word ptr [rcx+rax*2], 0
 * 00000001800B14B5: jnz     short loc_1800B14AD
 * 00000001800B14B7: inc     rax
 * 00000001800B14BA: lea     rdx, [rcx+rax*2]
 * 00000001800B14BE: mov     [rbp+1180h+var_368], rdx
 * 00000001800B14C5: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B14CC: inc     rax
 * 00000001800B14CF: cmp     word ptr [rdx+rax*2], 0
 * 00000001800B14D4: jnz     short loc_1800B14CC
 * 00000001800B14D6: inc     rax
 * 00000001800B14D9: lea     rcx, [rdx+rax*2]
 * 00000001800B14DD: mov     [rbp+1180h+var_360], rcx
 * 00000001800B14E4: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B14EB: inc     rax
 * 00000001800B14EE: cmp     word ptr [rcx+rax*2], 0
 * 00000001800B14F3: jnz     short loc_1800B14EB
 * 00000001800B14F5: inc     rax
 * 00000001800B14F8: lea     rdx, [rcx+rax*2]
 * 00000001800B14FC: mov     [rbp+1180h+var_358], rdx
 * 00000001800B1503: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B150A: inc     rax
 * 00000001800B150D: cmp     word ptr [rdx+rax*2], 0
 * 00000001800B1512: jnz     short loc_1800B150A
 * 00000001800B1514: inc     rax
 * 00000001800B1517: lea     rcx, [rdx+rax*2]
 * 00000001800B151B: mov     [rbp+1180h+var_350], rcx
 * 00000001800B1522: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1529: inc     rax
 * 00000001800B152C: cmp     word ptr [rcx+rax*2], 0
 * 00000001800B1531: jnz     short loc_1800B1529
 * 00000001800B1533: inc     rax
 * 00000001800B1536: lea     rdx, [rcx+rax*2]
 * 00000001800B153A: mov     [rbp+1180h+var_348], rdx
 * 00000001800B1541: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1548: inc     rax
 * 00000001800B154B: cmp     word ptr [rdx+rax*2], 0
 * 00000001800B1550: jnz     short loc_1800B1548
 * 00000001800B1552: inc     rax
 * 00000001800B1555: lea     rcx, [rdx+rax*2]
 * 00000001800B1559: mov     [rbp+1180h+var_340], rcx
 * 00000001800B1560: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1567: inc     rax
 * 00000001800B156A: cmp     word ptr [rcx+rax*2], 0
 * 00000001800B156F: jnz     short loc_1800B1567
 * 00000001800B1571: inc     rax
 * 00000001800B1574: lea     rdx, [rcx+rax*2]
 * 00000001800B1578: mov     [rbp+1180h+var_338], rdx
 * 00000001800B157F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1586: inc     rax
 * 00000001800B1589: cmp     word ptr [rdx+rax*2], 0
 * 00000001800B158E: jnz     short loc_1800B1586
 * 00000001800B1590: inc     rax
 * 00000001800B1593: lea     rcx, [rdx+rax*2]
 * 00000001800B1597: mov     [rbp+1180h+var_330], rcx
 * 00000001800B159E: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B15A5: inc     rax
 * 00000001800B15A8: cmp     word ptr [rcx+rax*2], 0
 * 00000001800B15AD: jnz     short loc_1800B15A5
 * 00000001800B15AF: inc     rax
 * 00000001800B15B2: lea     rdx, [rcx+rax*2]
 * 00000001800B15B6: mov     [rbp+1180h+var_328], rdx
 * 00000001800B15BD: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B15C4: inc     rax
 * 00000001800B15C7: cmp     word ptr [rdx+rax*2], 0
 * 00000001800B15CC: jnz     short loc_1800B15C4
 * 00000001800B15CE: inc     rax
 * 00000001800B15D1: lea     rcx, [rdx+rax*2]
 * 00000001800B15D5: mov     [rbp+1180h+var_320], rcx
 * 00000001800B15DC: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B15E3: inc     rax
 * 00000001800B15E6: cmp     word ptr [rcx+rax*2], 0
 * 00000001800B15EB: jnz     short loc_1800B15E3
 * 00000001800B15ED: inc     rax
 * 00000001800B15F0: lea     rdx, [rcx+rax*2]
 * 00000001800B15F4: mov     [rbp+1180h+var_318], rdx
 * 00000001800B15FB: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1602: lea     rax, [rax+1]
 * 00000001800B1606: cmp     word ptr [rdx+rax*2], 0
 * 00000001800B160B: jnz     short loc_1800B1602
 * 00000001800B160D: add     rdx, 2
 * 00000001800B1611: lea     rax, [rdx+rax*2]
 * 00000001800B1615: mov     [rbp+1180h+var_310], rax
 * 00000001800B161C: lea     rcx, [rdi+rdi*2]
 * 00000001800B1620: lea     rdx, __ImageBase
 * 00000001800B1627: movzx   eax, byte ptr [rcx+rdx+182340h]
 * 00000001800B162F: mov     rax, [rbp+rax*8+1180h+var_3A0]
 * 00000001800B1637: mov     [rsp+1280h+var_1220], rax
 * 00000001800B163C: movzx   eax, byte ptr [rcx+rdx+182341h]
 * 00000001800B1644: mov     rax, [rbp+rax*8+1180h+var_3A0]
 * 00000001800B164C: mov     [rbp+1180h+var_11A8], rax
 * 00000001800B1650: movzx   eax, byte ptr [rcx+rdx+182342h]
 * 00000001800B1658: mov     rax, [rbp+rax*8+1180h+var_3A0]
 * 00000001800B1660: mov     [rbp+1180h+var_11B8], rax
 * 00000001800B1664: mov     ecx, 1C90h; unsigned __int64
 * 00000001800B1669: call    ??2@YAPEAX_K@Z; operator new(unsigned __int64)
 * 00000001800B166E: mov     r10, rax
 * 00000001800B1671: mov     [rbp+1180h+var_11E0], rax
 * 00000001800B1675: test    rax, rax
 * 00000001800B1678: jnz     short loc_1800B1687
 * 00000001800B167A: mov     eax, 8007000Eh
 * 00000001800B167F: mov     [rbp+1180h+var_11D8], eax
 * 00000001800B1682: jmp     loc_1800B5FD9
 * 00000001800B1687: xor     eax, eax
 * 00000001800B1689: mov     r15d, eax
 * 00000001800B168C: mov     dword ptr [rbp+1180h+var_11B0], 0FFFFFFFFh
 * 00000001800B1693: mov     ebx, eax
 * 00000001800B1695: mov     r11d, eax
 * 00000001800B1698: lea     rsi, [r10+7]
 * 00000001800B169C: lea     r13, unk_180198762
 * 00000001800B16A3: mov     r12d, 392h
 * 00000001800B16A9: mov     r10d, dword ptr [rbp+1180h+var_11B0]
 * 00000001800B16AD: movzx   r9d, byte ptr [r13-2]
 * 00000001800B16B2: shl     r9d, 8
 * 00000001800B16B6: movzx   eax, byte ptr [r13-1]
 * 00000001800B16BB: or      r9d, eax
 * 00000001800B16BE: shl     r9d, 8
 * 00000001800B16C2: movzx   eax, byte ptr [r13+0]
 * 00000001800B16C7: or      r9d, eax
 * 00000001800B16CA: shl     r9d, 8
 * 00000001800B16CE: movzx   eax, byte ptr [r13+1]
 * 00000001800B16D3: or      r9d, eax
 * 00000001800B16D6: movzx   r8d, byte ptr [r13+2]
 * 00000001800B16DB: shl     r8d, 8
 * 00000001800B16DF: movzx   eax, byte ptr [r13+3]
 * 00000001800B16E4: or      r8d, eax
 * 00000001800B16E7: shl     r8d, 8
 * 00000001800B16EB: movzx   eax, byte ptr [r13+4]
 * 00000001800B16F0: or      r8d, eax
 * 00000001800B16F3: shl     r8d, 8
 * 00000001800B16F7: movzx   eax, byte ptr [r13+5]
 * 00000001800B16FC: or      r8d, eax
 * 00000001800B16FF: xor     r11d, r9d
 * 00000001800B1702: lea     r13, [r13+8]
 * 00000001800B1706: mov     edi, r8d
 * 00000001800B1709: xor     edi, ebx
 * 00000001800B170B: xor     edi, r11d
 * 00000001800B170E: xor     edi, 0AC987321h
 * 00000001800B1714: lea     eax, [rdi+54969FA2h]
 * 00000001800B171A: rol     eax, 5
 * 00000001800B171D: mov     ecx, edi
 * 00000001800B171F: rol     ecx, 0Ah
 * 00000001800B1722: imul    eax, 137Fh
 * 00000001800B1728: add     ecx, eax
 * 00000001800B172A: xor     r11d, ecx
 * 00000001800B172D: lea     ecx, [r11+7F1137Fh]
 * 00000001800B1734: ror     ecx, 9
 * 00000001800B1737: mov     eax, r11d
 * 00000001800B173A: rol     eax, 2
 * 00000001800B173D: imul    ecx, 0AB69h
 * 00000001800B1743: sub     ecx, eax
 * 00000001800B1745: xor     edi, ecx
 * 00000001800B1747: imul    ecx, edi, 605Eh
 * 00000001800B174D: mov     eax, edi
 * 00000001800B174F: shr     eax, 0Dh
 * 00000001800B1752: sub     ecx, eax
 * 00000001800B1754: sub     ecx, 756C8A2h
 * 00000001800B175A: xor     r11d, ecx
 * 00000001800B175D: mov     ecx, r11d
 * 00000001800B1760: xor     ecx, 0AB69h
 * 00000001800B1766: rol     ecx, 6
 * 00000001800B1769: mov     eax, r11d
 * 00000001800B176C: rol     eax, 2
 * 00000001800B176F: imul    ecx, 7F1h
 * 00000001800B1775: sub     ecx, eax
 * 00000001800B1777: xor     edi, ecx
 * 00000001800B1779: mov     eax, edi
 * 00000001800B177B: xor     eax, 0AB69605Eh
 * 00000001800B1780: mov     ecx, 7F1137Fh
 * 00000001800B1785: sub     ecx, eax
 * 00000001800B1787: xor     r11d, ecx
 * 00000001800B178A: mov     edx, r11d
 * 00000001800B178D: ror     edx, 6
 * 00000001800B1790: mov     eax, r11d
 * 00000001800B1793: xor     eax, 137Fh
 * 00000001800B1798: imul    ecx, eax, 0AB69h
 * 00000001800B179E: xor     edx, ecx
 * 00000001800B17A0: xor     edi, edx
 * 00000001800B17A2: lea     eax, [rdi+7F1137Fh]
 * 00000001800B17A8: ror     eax, 0Fh
 * 00000001800B17AB: mov     ecx, edi
 * 00000001800B17AD: rol     ecx, 2
 * 00000001800B17B0: imul    eax, 605Eh
 * 00000001800B17B6: add     ecx, eax
 * 00000001800B17B8: xor     r11d, ecx
 * 00000001800B17BB: lea     ecx, [r11+54969FA2h]
 * 00000001800B17C2: ror     ecx, 0Eh
 * 00000001800B17C5: mov     eax, r11d
 * 00000001800B17C8: rol     eax, 8
 * 00000001800B17CB: imul    ecx, 7F1h
 * 00000001800B17D1: sub     ecx, eax
 * 00000001800B17D3: xor     edi, ecx
 * 00000001800B17D5: mov     eax, edi
 * 00000001800B17D7: xor     eax, 0AB69605Eh
 * 00000001800B17DC: ror     eax, 0Ch
 * 00000001800B17DF: mov     ecx, edi
 * 00000001800B17E1: ror     ecx, 0Ah
 * 00000001800B17E4: imul    eax, 137Fh
 * 00000001800B17EA: xor     ecx, eax
 * 00000001800B17EC: xor     r11d, ecx
 * 00000001800B17EF: mov     eax, r11d
 * 00000001800B17F2: xor     eax, 7F1h
 * 00000001800B17F7: imul    ecx, eax, 0AB69h
 * 00000001800B17FD: mov     eax, r11d
 * 00000001800B1800: shr     eax, 0Ah
 * 00000001800B1803: xor     ecx, eax
 * 00000001800B1805: xor     ecx, edi
 * 00000001800B1807: mov     eax, ecx
 * 00000001800B1809: not     eax
 * 00000001800B180B: ror     eax, 5
 * 00000001800B180E: add     eax, 605Eh
 * 00000001800B1813: imul    eax, 7F1h
 * 00000001800B1819: xor     r11d, eax
 * 00000001800B181C: lea     ebx, [r11-7F1h]
 * 00000001800B1823: xor     ebx, ecx
 * 00000001800B1825: xor     ebx, 0AB69605Eh
 * 00000001800B182B: mov     eax, ebx
 * 00000001800B182D: xor     eax, 7F1h
 * 00000001800B1832: rol     eax, 2
 * 00000001800B1835: imul    ecx, eax, 137Fh
 * 00000001800B183B: mov     eax, ebx
 * 00000001800B183D: shr     eax, 2
 * 00000001800B1840: add     ecx, eax
 * 00000001800B1842: xor     r11d, ecx
 * 00000001800B1845: lea     eax, [r11-7F1137Fh]
 * 00000001800B184C: ror     eax, 6
 * 00000001800B184F: mov     ecx, r11d
 * 00000001800B1852: rol     ecx, 7
 * 00000001800B1855: imul    eax, 0AB69h
 * 00000001800B185B: add     ecx, eax
 * 00000001800B185D: xor     ebx, ecx
 * 00000001800B185F: mov     edx, ebx
 * 00000001800B1861: ror     edx, 9
 * 00000001800B1864: mov     eax, ebx
 * 00000001800B1866: xor     eax, 137Fh
 * 00000001800B186B: imul    ecx, eax, 605Eh
 * 00000001800B1871: add     edx, ecx
 * 00000001800B1873: xor     r11d, edx
 * 00000001800B1876: mov     eax, r11d
 * 00000001800B1879: xor     eax, 0AB69h
 * 00000001800B187E: rol     eax, 5
 * 00000001800B1881: mov     ecx, r11d
 * 00000001800B1884: rol     ecx, 7
 * 00000001800B1887: imul    eax, 7F1h
 * 00000001800B188D: add     ecx, eax
 * 00000001800B188F: xor     ebx, ecx
 * 00000001800B1891: xor     r11d, ebx
 * 00000001800B1894: xor     r11d, 0AC987321h
 * 00000001800B189B: mov     eax, r11d
 * 00000001800B189E: ror     eax, 3
 * 00000001800B18A1: imul    ecx, eax, 137Fh
 * 00000001800B18A7: sub     ecx, 0D0DD417h
 * 00000001800B18AD: xor     ebx, ecx
 * 00000001800B18AF: lea     ecx, [rbx-7F1137Fh]
 * 00000001800B18B5: ror     ecx, 1
 * 00000001800B18B7: mov     eax, ebx
 * 00000001800B18B9: ror     eax, 6
 * 00000001800B18BC: imul    ecx, 605Eh
 * 00000001800B18C2: sub     ecx, eax
 * 00000001800B18C4: xor     r11d, ecx
 * 00000001800B18C7: lea     eax, [r11-54969FA2h]
 * 00000001800B18CE: rol     eax, 3
 * 00000001800B18D1: mov     ecx, r11d
 * 00000001800B18D4: rol     ecx, 0Eh
 * 00000001800B18D7: imul    eax, 7F1h
 * 00000001800B18DD: add     ecx, eax
 * 00000001800B18DF: xor     ebx, ecx
 * 00000001800B18E1: lea     ecx, [rbx-54969FA2h]
 * 00000001800B18E7: rol     ecx, 0Fh
 * 00000001800B18EA: mov     eax, ebx
 * 00000001800B18EC: ror     eax, 0Eh
 * 00000001800B18EF: imul    ecx, 137Fh
 * 00000001800B18F5: sub     ecx, eax
 * 00000001800B18F7: xor     r11d, ecx
 * 00000001800B18FA: mov     eax, r11d
 * 00000001800B18FD: xor     eax, 605Eh
 * 00000001800B1902: imul    ecx, eax, 0AB69h
 * 00000001800B1908: mov     eax, r11d
 * 00000001800B190B: shr     eax, 3
 * 00000001800B190E: xor     ecx, eax
 * 00000001800B1910: xor     ebx, ecx
 * 00000001800B1912: mov     eax, ebx
 * 00000001800B1914: xor     eax, 7F1137Fh
 * 00000001800B1919: rol     eax, 4
 * 00000001800B191C: mov     ecx, ebx
 * 00000001800B191E: rol     ecx, 2
 * 00000001800B1921: imul    eax, 605Eh
 * 00000001800B1927: xor     ecx, eax
 * 00000001800B1929: xor     ecx, r15d
 * 00000001800B192C: xor     r11d, ecx
 * 00000001800B192F: xor     ebx, r10d
 * 00000001800B1932: mov     [rsi-4], r11b
 * 00000001800B1936: ror     r11d, 8
 * 00000001800B193A: mov     [rsi], bl
 * 00000001800B193C: ror     ebx, 8
 * 00000001800B193F: mov     [rsi-5], r11b
 * 00000001800B1943: ror     r11d, 8
 * 00000001800B1947: mov     [rsi-1], bl
 * 00000001800B194A: ror     ebx, 8
 * 00000001800B194D: mov     [rsi-6], r11b
 * 00000001800B1951: ror     r11d, 8
 * 00000001800B1955: mov     [rsi-2], bl
 * 00000001800B1958: ror     ebx, 8
 * 00000001800B195B: mov     [rsi-7], r11b
 * 00000001800B195F: mov     [rsi-3], bl
 * 00000001800B1962: ror     r11d, 8
 * 00000001800B1966: ror     ebx, 8
 * 00000001800B1969: mov     r15d, r9d
 * 00000001800B196C: mov     r10d, r8d
 * 00000001800B196F: lea     rsi, [rsi+8]
 * 00000001800B1973: sub     r12, 1
 * 00000001800B1977: jnz     loc_1800B16AD
 * 00000001800B197D: xor     edx, edx
 * 00000001800B197F: mov     eax, edx
 * 00000001800B1981: xorps   xmm2, xmm2
 * 00000001800B1984: xorps   xmm1, xmm1
 * 00000001800B1987: mov     rbx, 0C81ECB17B1B54A58h
 * 00000001800B1991: mov     rsi, 7F1137FAB69605Eh
 * 00000001800B199B: mov     r15, [rbp+1180h+var_1128]
 * 00000001800B199F: lea     r12, [r15+0C0h]
 * 00000001800B19A6: mov     r13d, [rbp+1180h+var_10C8]
 * 00000001800B19AD: mov     r10, [rbp+1180h+var_11E0]
 * 00000001800B19B1: movdqu  xmm0, xmmword ptr [rax+r10]
 * 00000001800B19B7: pxor    xmm2, xmm0
 * 00000001800B19BB: movdqu  xmm0, xmmword ptr [rax+r10+10h]
 * 00000001800B19C2: pxor    xmm1, xmm0
 * 00000001800B19C6: add     rax, 20h ; ' '
 * 00000001800B19CA: cmp     rax, 1C80h
 * 00000001800B19D0: jb      short loc_1800B19B1
 * 00000001800B19D2: pxor    xmm1, xmm2
 * 00000001800B19D6: movdqa  xmm0, xmm1
 * 00000001800B19DA: psrldq  xmm0, 8
 * 00000001800B19DF: pxor    xmm1, xmm0
 * 00000001800B19E3: movdqa  xmm0, xmm1
 * 00000001800B19E7: psrldq  xmm0, 4
 * 00000001800B19EC: pxor    xmm1, xmm0
 * 00000001800B19F0: movdqa  xmm0, xmm1
 * 00000001800B19F4: psrldq  xmm0, 2
 * 00000001800B19F9: pxor    xmm1, xmm0
 * 00000001800B19FD: movdqa  xmm0, xmm1
 * 00000001800B1A01: psrldq  xmm0, 1
 * 00000001800B1A06: pxor    xmm1, xmm0
 * 00000001800B1A0A: movd    ecx, xmm1
 * 00000001800B1A0E: cmp     rax, 1C90h
 * 00000001800B1A14: jnb     short loc_1800B1A25
 * 00000001800B1A16: xor     cl, [rax+r10]
 * 00000001800B1A1A: inc     rax
 * 00000001800B1A1D: cmp     rax, 1C90h
 * 00000001800B1A23: jb      short loc_1800B1A16
 * 00000001800B1A25: movzx   eax, cl
 * 00000001800B1A28: cmp     rax, cs:qword_18019A3F0
 * 00000001800B1A2F: jz      short loc_1800B1A57
 * 00000001800B1A31: call    cs:__imp_GetProcessHeap
 * 00000001800B1A38: nop     dword ptr [rax+rax+00h]
 * 00000001800B1A3D: mov     rcx, rax; hHeap
 * 00000001800B1A40: mov     r8, [rbp+1180h+var_11E0]; lpMem
 * 00000001800B1A44: xor     edx, edx; dwFlags
 * 00000001800B1A46: call    cs:__imp_HeapFree
 * 00000001800B1A4D: nop     dword ptr [rax+rax+00h]
 * 00000001800B1A52: jmp     loc_1800B5FD9
 * 00000001800B1A57: mov     [rbp+1180h+var_EC0], r10
 * 00000001800B1A5E: mov     [rbp+1180h+var_EB8], 1C90h
 * 00000001800B1A69: mov     [rbp+1180h+var_11D8], edx
 * 00000001800B1A6C: lea     rdi, [rbp+1180h+var_410]
 * 00000001800B1A73: mov     r9d, 6
 * 00000001800B1A79: mov     r8d, dword ptr [rbp+1180h+var_11C0]
 * 00000001800B1A7D: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1A84: lea     rax, [rax+1]
 * 00000001800B1A88: cmp     byte ptr [r10+rax], 0
 * 00000001800B1A8D: jnz     short loc_1800B1A84
 * 00000001800B1A8F: lea     rcx, [rax+1]
 * 00000001800B1A93: add     rcx, r10
 * 00000001800B1A96: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1A9D: test    r8d, r8d
 * 00000001800B1AA0: jnz     loc_1800B1E0B
 * 00000001800B1AA6: mov     [rdi], r10
 * 00000001800B1AA9: lea     rax, [rax+1]
 * 00000001800B1AAD: cmp     byte ptr [rcx+rax], 0
 * 00000001800B1AB1: jnz     short loc_1800B1AA9
 * 00000001800B1AB3: lea     rdx, [rax+1]
 * 00000001800B1AB7: add     rdx, rcx
 * 00000001800B1ABA: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1AC1: lea     rax, [rax+1]
 * 00000001800B1AC5: cmp     byte ptr [rdx+rax], 0
 * 00000001800B1AC9: jnz     short loc_1800B1AC1
 * 00000001800B1ACB: lea     rcx, [rax+1]
 * 00000001800B1ACF: add     rcx, rdx
 * 00000001800B1AD2: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1AD9: lea     rax, [rax+1]
 * 00000001800B1ADD: cmp     byte ptr [rcx+rax], 0
 * 00000001800B1AE1: jnz     short loc_1800B1AD9
 * 00000001800B1AE3: lea     rdx, [rax+1]
 * 00000001800B1AE7: add     rdx, rcx
 * 00000001800B1AEA: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1AF1: lea     rax, [rax+1]
 * 00000001800B1AF5: cmp     byte ptr [rdx+rax], 0
 * 00000001800B1AF9: jnz     short loc_1800B1AF1
 * 00000001800B1AFB: lea     rcx, [rax+1]
 * 00000001800B1AFF: add     rcx, rdx
 * 00000001800B1B02: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1B09: lea     rax, [rax+1]
 * 00000001800B1B0D: cmp     byte ptr [rcx+rax], 0
 * 00000001800B1B11: jnz     short loc_1800B1B09
 * 00000001800B1B13: lea     rdx, [rax+1]
 * 00000001800B1B17: add     rdx, rcx
 * 00000001800B1B1A: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1B21: lea     rax, [rax+1]
 * 00000001800B1B25: cmp     byte ptr [rdx+rax], 0
 * 00000001800B1B29: jnz     short loc_1800B1B21
 * 00000001800B1B2B: lea     rcx, [rax+1]
 * 00000001800B1B2F: add     rcx, rdx
 * 00000001800B1B32: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1B39: lea     rax, [rax+1]
 * 00000001800B1B3D: cmp     byte ptr [rcx+rax], 0
 * 00000001800B1B41: jnz     short loc_1800B1B39
 * 00000001800B1B43: lea     rdx, [rax+1]
 * 00000001800B1B47: add     rdx, rcx
 * 00000001800B1B4A: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1B51: lea     rax, [rax+1]
 * 00000001800B1B55: cmp     byte ptr [rdx+rax], 0
 * 00000001800B1B59: jnz     short loc_1800B1B51
 * 00000001800B1B5B: lea     rcx, [rax+1]
 * 00000001800B1B5F: add     rcx, rdx
 * 00000001800B1B62: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1B69: lea     rax, [rax+1]
 * 00000001800B1B6D: cmp     byte ptr [rcx+rax], 0
 * 00000001800B1B71: jnz     short loc_1800B1B69
 * 00000001800B1B73: lea     rdx, [rax+1]
 * 00000001800B1B77: add     rdx, rcx
 * 00000001800B1B7A: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1B81: lea     rax, [rax+1]
 * 00000001800B1B85: cmp     byte ptr [rdx+rax], 0
 * 00000001800B1B89: jnz     short loc_1800B1B81
 * 00000001800B1B8B: lea     rcx, [rax+1]
 * 00000001800B1B8F: add     rcx, rdx
 * 00000001800B1B92: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1B99: lea     rax, [rax+1]
 * 00000001800B1B9D: cmp     byte ptr [rcx+rax], 0
 * 00000001800B1BA1: jnz     short loc_1800B1B99
 * 00000001800B1BA3: lea     rdx, [rax+1]
 * 00000001800B1BA7: add     rdx, rcx
 * 00000001800B1BAA: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1BB1: lea     rax, [rax+1]
 * 00000001800B1BB5: cmp     byte ptr [rdx+rax], 0
 * 00000001800B1BB9: jnz     short loc_1800B1BB1
 * 00000001800B1BBB: lea     rcx, [rax+1]
 * 00000001800B1BBF: add     rcx, rdx
 * 00000001800B1BC2: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1BC9: lea     rax, [rax+1]
 * 00000001800B1BCD: cmp     byte ptr [rcx+rax], 0
 * 00000001800B1BD1: jnz     short loc_1800B1BC9
 * 00000001800B1BD3: lea     rdx, [rax+1]
 * 00000001800B1BD7: add     rdx, rcx
 * 00000001800B1BDA: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1BE1: lea     rax, [rax+1]
 * 00000001800B1BE5: cmp     byte ptr [rdx+rax], 0
 * 00000001800B1BE9: jnz     short loc_1800B1BE1
 * 00000001800B1BEB: lea     rcx, [rax+1]
 * 00000001800B1BEF: add     rcx, rdx
 * 00000001800B1BF2: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1BF9: lea     rax, [rax+1]
 * 00000001800B1BFD: cmp     byte ptr [rcx+rax], 0
 * 00000001800B1C01: jnz     short loc_1800B1BF9
 * 00000001800B1C03: lea     rdx, [rax+1]
 * 00000001800B1C07: add     rdx, rcx
 * 00000001800B1C0A: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1C11: lea     rax, [rax+1]
 * 00000001800B1C15: cmp     byte ptr [rdx+rax], 0
 * 00000001800B1C19: jnz     short loc_1800B1C11
 * 00000001800B1C1B: lea     rcx, [rax+1]
 * 00000001800B1C1F: add     rcx, rdx
 * 00000001800B1C22: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1C29: lea     rax, [rax+1]
 * 00000001800B1C2D: cmp     byte ptr [rcx+rax], 0
 * 00000001800B1C31: jnz     short loc_1800B1C29
 * 00000001800B1C33: lea     rdx, [rax+1]
 * 00000001800B1C37: add     rdx, rcx
 * 00000001800B1C3A: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1C41: lea     rax, [rax+1]
 * 00000001800B1C45: cmp     byte ptr [rdx+rax], 0
 * 00000001800B1C49: jnz     short loc_1800B1C41
 * 00000001800B1C4B: lea     rcx, [rax+1]
 * 00000001800B1C4F: add     rcx, rdx
 * 00000001800B1C52: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1C59: lea     rax, [rax+1]
 * 00000001800B1C5D: cmp     byte ptr [rcx+rax], 0
 * 00000001800B1C61: jnz     short loc_1800B1C59
 * 00000001800B1C63: lea     rdx, [rax+1]
 * 00000001800B1C67: add     rdx, rcx
 * 00000001800B1C6A: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1C71: lea     rax, [rax+1]
 * 00000001800B1C75: cmp     byte ptr [rdx+rax], 0
 * 00000001800B1C79: jnz     short loc_1800B1C71
 * 00000001800B1C7B: lea     rcx, [rax+1]
 * 00000001800B1C7F: add     rcx, rdx
 * 00000001800B1C82: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1C89: lea     rax, [rax+1]
 * 00000001800B1C8D: cmp     byte ptr [rcx+rax], 0
 * 00000001800B1C91: jnz     short loc_1800B1C89
 * 00000001800B1C93: lea     rdx, [rax+1]
 * 00000001800B1C97: add     rdx, rcx
 * 00000001800B1C9A: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1CA1: lea     rax, [rax+1]
 * 00000001800B1CA5: cmp     byte ptr [rdx+rax], 0
 * 00000001800B1CA9: jnz     short loc_1800B1CA1
 * 00000001800B1CAB: lea     rcx, [rax+1]
 * 00000001800B1CAF: add     rcx, rdx
 * 00000001800B1CB2: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1CB9: lea     rax, [rax+1]
 * 00000001800B1CBD: cmp     byte ptr [rcx+rax], 0
 * 00000001800B1CC1: jnz     short loc_1800B1CB9
 * 00000001800B1CC3: lea     rdx, [rax+1]
 * 00000001800B1CC7: add     rdx, rcx
 * 00000001800B1CCA: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1CD1: lea     rax, [rax+1]
 * 00000001800B1CD5: cmp     byte ptr [rdx+rax], 0
 * 00000001800B1CD9: jnz     short loc_1800B1CD1
 * 00000001800B1CDB: lea     rcx, [rax+1]
 * 00000001800B1CDF: add     rcx, rdx
 * 00000001800B1CE2: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1CE9: lea     rax, [rax+1]
 * 00000001800B1CED: cmp     byte ptr [rcx+rax], 0
 * 00000001800B1CF1: jnz     short loc_1800B1CE9
 * 00000001800B1CF3: lea     rdx, [rax+1]
 * 00000001800B1CF7: add     rdx, rcx
 * 00000001800B1CFA: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1D01: lea     rax, [rax+1]
 * 00000001800B1D05: cmp     byte ptr [rdx+rax], 0
 * 00000001800B1D09: jnz     short loc_1800B1D01
 * 00000001800B1D0B: lea     rcx, [rax+1]
 * 00000001800B1D0F: add     rcx, rdx
 * 00000001800B1D12: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1D19: lea     rax, [rax+1]
 * 00000001800B1D1D: cmp     byte ptr [rcx+rax], 0
 * 00000001800B1D21: jnz     short loc_1800B1D19
 * 00000001800B1D23: lea     rdx, [rax+1]
 * 00000001800B1D27: add     rdx, rcx
 * 00000001800B1D2A: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1D31: lea     rax, [rax+1]
 * 00000001800B1D35: cmp     byte ptr [rdx+rax], 0
 * 00000001800B1D39: jnz     short loc_1800B1D31
 * 00000001800B1D3B: lea     rcx, [rax+1]
 * 00000001800B1D3F: add     rcx, rdx
 * 00000001800B1D42: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1D49: inc     rax
 * 00000001800B1D4C: cmp     byte ptr [rcx+rax], 0
 * 00000001800B1D50: jnz     short loc_1800B1D49
 * 00000001800B1D52: inc     rax
 * 00000001800B1D55: add     rax, rcx
 * 00000001800B1D58: mov     rcx, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1D5F: inc     rcx
 * 00000001800B1D62: cmp     byte ptr [rax+rcx], 0
 * 00000001800B1D66: jnz     short loc_1800B1D5F
 * 00000001800B1D68: inc     rax
 * 00000001800B1D6B: add     rax, rcx
 * 00000001800B1D6E: cmp     r8d, 1Fh
 * 00000001800B1D72: jnz     loc_1800B20DD
 * 00000001800B1D78: mov     [rdi], rax
 * 00000001800B1D7B: mov     rcx, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1D82: inc     rcx
 * 00000001800B1D85: cmp     byte ptr [rax+rcx], 0
 * 00000001800B1D89: jnz     short loc_1800B1D82
 * 00000001800B1D8B: lea     rdx, [rax+1]
 * 00000001800B1D8F: add     rdx, rcx
 * 00000001800B1D92: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1D99: lea     rax, [rax+1]
 * 00000001800B1D9D: cmp     byte ptr [rdx+rax], 0
 * 00000001800B1DA1: jnz     short loc_1800B1D99
 * 00000001800B1DA3: lea     rcx, [rax+1]
 * 00000001800B1DA7: add     rcx, rdx
 * 00000001800B1DAA: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1DB1: lea     rax, [rax+1]
 * 00000001800B1DB5: cmp     byte ptr [rcx+rax], 0
 * 00000001800B1DB9: jnz     short loc_1800B1DB1
 * 00000001800B1DBB: lea     rdx, [rax+1]
 * 00000001800B1DBF: add     rdx, rcx
 * 00000001800B1DC2: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1DC9: lea     rax, [rax+1]
 * 00000001800B1DCD: cmp     byte ptr [rdx+rax], 0
 * 00000001800B1DD1: jnz     short loc_1800B1DC9
 * 00000001800B1DD3: lea     rcx, [rax+1]
 * 00000001800B1DD7: add     rcx, rdx
 * 00000001800B1DDA: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1DE1: inc     rax
 * 00000001800B1DE4: cmp     byte ptr [rcx+rax], 0
 * 00000001800B1DE8: jnz     short loc_1800B1DE1
 * 00000001800B1DEA: inc     rax
 * 00000001800B1DED: add     rcx, rax
 * 00000001800B1DF0: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1DF7: inc     rax
 * 00000001800B1DFA: cmp     byte ptr [rcx+rax], 0
 * 00000001800B1DFE: jnz     short loc_1800B1DF7
 * 00000001800B1E00: inc     rax
 * 00000001800B1E03: add     rax, rcx
 * 00000001800B1E06: jmp     loc_1800B313C
 * 00000001800B1E0B: lea     rax, [rax+1]
 * 00000001800B1E0F: cmp     byte ptr [rcx+rax], 0
 * 00000001800B1E13: jnz     short loc_1800B1E0B
 * 00000001800B1E15: lea     rdx, [rax+1]
 * 00000001800B1E19: add     rdx, rcx
 * 00000001800B1E1C: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1E23: cmp     r8d, 1
 * 00000001800B1E27: jnz     loc_1800B217A
 * 00000001800B1E2D: mov     [rdi], rcx
 * 00000001800B1E30: lea     rax, [rax+1]
 * 00000001800B1E34: cmp     byte ptr [rdx+rax], 0
 * 00000001800B1E38: jnz     short loc_1800B1E30
 * 00000001800B1E3A: lea     rcx, [rax+1]
 * 00000001800B1E3E: add     rcx, rdx
 * 00000001800B1E41: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1E48: lea     rax, [rax+1]
 * 00000001800B1E4C: cmp     byte ptr [rcx+rax], 0
 * 00000001800B1E50: jnz     short loc_1800B1E48
 * 00000001800B1E52: lea     rdx, [rax+1]
 * 00000001800B1E56: add     rdx, rcx
 * 00000001800B1E59: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1E60: lea     rax, [rax+1]
 * 00000001800B1E64: cmp     byte ptr [rdx+rax], 0
 * 00000001800B1E68: jnz     short loc_1800B1E60
 * 00000001800B1E6A: lea     rcx, [rax+1]
 * 00000001800B1E6E: add     rcx, rdx
 * 00000001800B1E71: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1E78: lea     rax, [rax+1]
 * 00000001800B1E7C: cmp     byte ptr [rcx+rax], 0
 * 00000001800B1E80: jnz     short loc_1800B1E78
 * 00000001800B1E82: lea     rdx, [rax+1]
 * 00000001800B1E86: add     rdx, rcx
 * 00000001800B1E89: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1E90: lea     rax, [rax+1]
 * 00000001800B1E94: cmp     byte ptr [rdx+rax], 0
 * 00000001800B1E98: jnz     short loc_1800B1E90
 * 00000001800B1E9A: lea     rcx, [rax+1]
 * 00000001800B1E9E: add     rcx, rdx
 * 00000001800B1EA1: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1EA8: lea     rax, [rax+1]
 * 00000001800B1EAC: cmp     byte ptr [rcx+rax], 0
 * 00000001800B1EB0: jnz     short loc_1800B1EA8
 * 00000001800B1EB2: lea     rdx, [rax+1]
 * 00000001800B1EB6: add     rdx, rcx
 * 00000001800B1EB9: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1EC0: lea     rax, [rax+1]
 * 00000001800B1EC4: cmp     byte ptr [rdx+rax], 0
 * 00000001800B1EC8: jnz     short loc_1800B1EC0
 * 00000001800B1ECA: lea     rcx, [rax+1]
 * 00000001800B1ECE: add     rcx, rdx
 * 00000001800B1ED1: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1ED8: lea     rax, [rax+1]
 * 00000001800B1EDC: cmp     byte ptr [rcx+rax], 0
 * 00000001800B1EE0: jnz     short loc_1800B1ED8
 * 00000001800B1EE2: lea     rdx, [rax+1]
 * 00000001800B1EE6: add     rdx, rcx
 * 00000001800B1EE9: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1EF0: lea     rax, [rax+1]
 * 00000001800B1EF4: cmp     byte ptr [rdx+rax], 0
 * 00000001800B1EF8: jnz     short loc_1800B1EF0
 * 00000001800B1EFA: lea     rcx, [rax+1]
 * 00000001800B1EFE: add     rcx, rdx
 * 00000001800B1F01: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1F08: lea     rax, [rax+1]
 * 00000001800B1F0C: cmp     byte ptr [rcx+rax], 0
 * 00000001800B1F10: jnz     short loc_1800B1F08
 * 00000001800B1F12: lea     rdx, [rax+1]
 * 00000001800B1F16: add     rdx, rcx
 * 00000001800B1F19: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1F20: lea     rax, [rax+1]
 * 00000001800B1F24: cmp     byte ptr [rdx+rax], 0
 * 00000001800B1F28: jnz     short loc_1800B1F20
 * 00000001800B1F2A: lea     rcx, [rax+1]
 * 00000001800B1F2E: add     rcx, rdx
 * 00000001800B1F31: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1F38: lea     rax, [rax+1]
 * 00000001800B1F3C: cmp     byte ptr [rcx+rax], 0
 * 00000001800B1F40: jnz     short loc_1800B1F38
 * 00000001800B1F42: lea     rdx, [rax+1]
 * 00000001800B1F46: add     rdx, rcx
 * 00000001800B1F49: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1F50: lea     rax, [rax+1]
 * 00000001800B1F54: cmp     byte ptr [rdx+rax], 0
 * 00000001800B1F58: jnz     short loc_1800B1F50
 * 00000001800B1F5A: lea     rcx, [rax+1]
 * 00000001800B1F5E: add     rcx, rdx
 * 00000001800B1F61: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1F68: lea     rax, [rax+1]
 * 00000001800B1F6C: cmp     byte ptr [rcx+rax], 0
 * 00000001800B1F70: jnz     short loc_1800B1F68
 * 00000001800B1F72: lea     rdx, [rax+1]
 * 00000001800B1F76: add     rdx, rcx
 * 00000001800B1F79: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1F80: lea     rax, [rax+1]
 * 00000001800B1F84: cmp     byte ptr [rdx+rax], 0
 * 00000001800B1F88: jnz     short loc_1800B1F80
 * 00000001800B1F8A: lea     rcx, [rax+1]
 * 00000001800B1F8E: add     rcx, rdx
 * 00000001800B1F91: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1F98: lea     rax, [rax+1]
 * 00000001800B1F9C: cmp     byte ptr [rcx+rax], 0
 * 00000001800B1FA0: jnz     short loc_1800B1F98
 * 00000001800B1FA2: lea     rdx, [rax+1]
 * 00000001800B1FA6: add     rdx, rcx
 * 00000001800B1FA9: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1FB0: lea     rax, [rax+1]
 * 00000001800B1FB4: cmp     byte ptr [rdx+rax], 0
 * 00000001800B1FB8: jnz     short loc_1800B1FB0
 * 00000001800B1FBA: lea     rcx, [rax+1]
 * 00000001800B1FBE: add     rcx, rdx
 * 00000001800B1FC1: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1FC8: lea     rax, [rax+1]
 * 00000001800B1FCC: cmp     byte ptr [rcx+rax], 0
 * 00000001800B1FD0: jnz     short loc_1800B1FC8
 * 00000001800B1FD2: lea     rdx, [rax+1]
 * 00000001800B1FD6: add     rdx, rcx
 * 00000001800B1FD9: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1FE0: lea     rax, [rax+1]
 * 00000001800B1FE4: cmp     byte ptr [rdx+rax], 0
 * 00000001800B1FE8: jnz     short loc_1800B1FE0
 * 00000001800B1FEA: lea     rcx, [rax+1]
 * 00000001800B1FEE: add     rcx, rdx
 * 00000001800B1FF1: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B1FF8: lea     rax, [rax+1]
 * 00000001800B1FFC: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2000: jnz     short loc_1800B1FF8
 * 00000001800B2002: lea     rdx, [rax+1]
 * 00000001800B2006: add     rdx, rcx
 * 00000001800B2009: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2010: lea     rax, [rax+1]
 * 00000001800B2014: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2018: jnz     short loc_1800B2010
 * 00000001800B201A: lea     rcx, [rax+1]
 * 00000001800B201E: add     rcx, rdx
 * 00000001800B2021: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2028: lea     rax, [rax+1]
 * 00000001800B202C: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2030: jnz     short loc_1800B2028
 * 00000001800B2032: lea     rdx, [rax+1]
 * 00000001800B2036: add     rdx, rcx
 * 00000001800B2039: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2040: lea     rax, [rax+1]
 * 00000001800B2044: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2048: jnz     short loc_1800B2040
 * 00000001800B204A: lea     rcx, [rax+1]
 * 00000001800B204E: add     rcx, rdx
 * 00000001800B2051: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2058: lea     rax, [rax+1]
 * 00000001800B205C: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2060: jnz     short loc_1800B2058
 * 00000001800B2062: lea     rdx, [rax+1]
 * 00000001800B2066: add     rdx, rcx
 * 00000001800B2069: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2070: lea     rax, [rax+1]
 * 00000001800B2074: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2078: jnz     short loc_1800B2070
 * 00000001800B207A: lea     rcx, [rax+1]
 * 00000001800B207E: add     rcx, rdx
 * 00000001800B2081: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2088: lea     rax, [rax+1]
 * 00000001800B208C: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2090: jnz     short loc_1800B2088
 * 00000001800B2092: lea     rdx, [rax+1]
 * 00000001800B2096: add     rdx, rcx
 * 00000001800B2099: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B20A0: lea     rax, [rax+1]
 * 00000001800B20A4: cmp     byte ptr [rdx+rax], 0
 * 00000001800B20A8: jnz     short loc_1800B20A0
 * 00000001800B20AA: lea     rcx, [rax+1]
 * 00000001800B20AE: add     rcx, rdx
 * 00000001800B20B1: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B20B8: inc     rax
 * 00000001800B20BB: cmp     byte ptr [rcx+rax], 0
 * 00000001800B20BF: jnz     short loc_1800B20B8
 * 00000001800B20C1: inc     rax
 * 00000001800B20C4: add     rcx, rax
 * 00000001800B20C7: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B20CE: inc     rax
 * 00000001800B20D1: cmp     byte ptr [rcx+rax], 0
 * 00000001800B20D5: jnz     short loc_1800B20CE
 * 00000001800B20D7: inc     rax
 * 00000001800B20DA: add     rax, rcx
 * 00000001800B20DD: mov     rcx, 0FFFFFFFFFFFFFFFFh
 * 00000001800B20E4: inc     rcx
 * 00000001800B20E7: cmp     byte ptr [rax+rcx], 0
 * 00000001800B20EB: jnz     short loc_1800B20E4
 * 00000001800B20ED: inc     rax
 * 00000001800B20F0: add     rax, rcx
 * 00000001800B20F3: cmp     r8d, 20h ; ' '
 * 00000001800B20F7: jnz     loc_1800B244E
 * 00000001800B20FD: mov     [rdi], rax
 * 00000001800B2100: mov     rcx, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2107: inc     rcx
 * 00000001800B210A: cmp     byte ptr [rax+rcx], 0
 * 00000001800B210E: jnz     short loc_1800B2107
 * 00000001800B2110: lea     rdx, [rax+1]
 * 00000001800B2114: add     rdx, rcx
 * 00000001800B2117: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B211E: lea     rax, [rax+1]
 * 00000001800B2122: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2126: jnz     short loc_1800B211E
 * 00000001800B2128: lea     rcx, [rax+1]
 * 00000001800B212C: add     rcx, rdx
 * 00000001800B212F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2136: lea     rax, [rax+1]
 * 00000001800B213A: cmp     byte ptr [rcx+rax], 0
 * 00000001800B213E: jnz     short loc_1800B2136
 * 00000001800B2140: lea     rdx, [rax+1]
 * 00000001800B2144: add     rdx, rcx
 * 00000001800B2147: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B214E: lea     rax, [rax+1]
 * 00000001800B2152: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2156: jnz     short loc_1800B214E
 * 00000001800B2158: lea     rcx, [rax+1]
 * 00000001800B215C: add     rcx, rdx
 * 00000001800B215F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2166: inc     rax
 * 00000001800B2169: cmp     byte ptr [rcx+rax], 0
 * 00000001800B216D: jnz     short loc_1800B2166
 * 00000001800B216F: inc     rax
 * 00000001800B2172: add     rax, rcx
 * 00000001800B2175: jmp     loc_1800B313C
 * 00000001800B217A: lea     rax, [rax+1]
 * 00000001800B217E: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2182: jnz     short loc_1800B217A
 * 00000001800B2184: lea     rcx, [rax+1]
 * 00000001800B2188: add     rcx, rdx
 * 00000001800B218B: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2192: cmp     r8d, 2
 * 00000001800B2196: jnz     loc_1800B24D1
 * 00000001800B219C: mov     [rdi], rdx
 * 00000001800B219F: lea     rax, [rax+1]
 * 00000001800B21A3: cmp     byte ptr [rcx+rax], 0
 * 00000001800B21A7: jnz     short loc_1800B219F
 * 00000001800B21A9: lea     rdx, [rax+1]
 * 00000001800B21AD: add     rdx, rcx
 * 00000001800B21B0: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B21B7: lea     rax, [rax+1]
 * 00000001800B21BB: cmp     byte ptr [rdx+rax], 0
 * 00000001800B21BF: jnz     short loc_1800B21B7
 * 00000001800B21C1: lea     rcx, [rax+1]
 * 00000001800B21C5: add     rcx, rdx
 * 00000001800B21C8: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B21CF: lea     rax, [rax+1]
 * 00000001800B21D3: cmp     byte ptr [rcx+rax], 0
 * 00000001800B21D7: jnz     short loc_1800B21CF
 * 00000001800B21D9: lea     rdx, [rax+1]
 * 00000001800B21DD: add     rdx, rcx
 * 00000001800B21E0: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B21E7: lea     rax, [rax+1]
 * 00000001800B21EB: cmp     byte ptr [rdx+rax], 0
 * 00000001800B21EF: jnz     short loc_1800B21E7
 * 00000001800B21F1: lea     rcx, [rax+1]
 * 00000001800B21F5: add     rcx, rdx
 * 00000001800B21F8: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B21FF: lea     rax, [rax+1]
 * 00000001800B2203: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2207: jnz     short loc_1800B21FF
 * 00000001800B2209: lea     rdx, [rax+1]
 * 00000001800B220D: add     rdx, rcx
 * 00000001800B2210: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2217: lea     rax, [rax+1]
 * 00000001800B221B: cmp     byte ptr [rdx+rax], 0
 * 00000001800B221F: jnz     short loc_1800B2217
 * 00000001800B2221: lea     rcx, [rax+1]
 * 00000001800B2225: add     rcx, rdx
 * 00000001800B2228: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B222F: lea     rax, [rax+1]
 * 00000001800B2233: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2237: jnz     short loc_1800B222F
 * 00000001800B2239: lea     rdx, [rax+1]
 * 00000001800B223D: add     rdx, rcx
 * 00000001800B2240: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2247: lea     rax, [rax+1]
 * 00000001800B224B: cmp     byte ptr [rdx+rax], 0
 * 00000001800B224F: jnz     short loc_1800B2247
 * 00000001800B2251: lea     rcx, [rax+1]
 * 00000001800B2255: add     rcx, rdx
 * 00000001800B2258: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B225F: lea     rax, [rax+1]
 * 00000001800B2263: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2267: jnz     short loc_1800B225F
 * 00000001800B2269: lea     rdx, [rax+1]
 * 00000001800B226D: add     rdx, rcx
 * 00000001800B2270: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2277: lea     rax, [rax+1]
 * 00000001800B227B: cmp     byte ptr [rdx+rax], 0
 * 00000001800B227F: jnz     short loc_1800B2277
 * 00000001800B2281: lea     rcx, [rax+1]
 * 00000001800B2285: add     rcx, rdx
 * 00000001800B2288: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B228F: lea     rax, [rax+1]
 * 00000001800B2293: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2297: jnz     short loc_1800B228F
 * 00000001800B2299: lea     rdx, [rax+1]
 * 00000001800B229D: add     rdx, rcx
 * 00000001800B22A0: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B22A7: lea     rax, [rax+1]
 * 00000001800B22AB: cmp     byte ptr [rdx+rax], 0
 * 00000001800B22AF: jnz     short loc_1800B22A7
 * 00000001800B22B1: lea     rcx, [rax+1]
 * 00000001800B22B5: add     rcx, rdx
 * 00000001800B22B8: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B22BF: lea     rax, [rax+1]
 * 00000001800B22C3: cmp     byte ptr [rcx+rax], 0
 * 00000001800B22C7: jnz     short loc_1800B22BF
 * 00000001800B22C9: lea     rdx, [rax+1]
 * 00000001800B22CD: add     rdx, rcx
 * 00000001800B22D0: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B22D7: lea     rax, [rax+1]
 * 00000001800B22DB: cmp     byte ptr [rdx+rax], 0
 * 00000001800B22DF: jnz     short loc_1800B22D7
 * 00000001800B22E1: lea     rcx, [rax+1]
 * 00000001800B22E5: add     rcx, rdx
 * 00000001800B22E8: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B22EF: lea     rax, [rax+1]
 * 00000001800B22F3: cmp     byte ptr [rcx+rax], 0
 * 00000001800B22F7: jnz     short loc_1800B22EF
 * 00000001800B22F9: lea     rdx, [rax+1]
 * 00000001800B22FD: add     rdx, rcx
 * 00000001800B2300: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2307: lea     rax, [rax+1]
 * 00000001800B230B: cmp     byte ptr [rdx+rax], 0
 * 00000001800B230F: jnz     short loc_1800B2307
 * 00000001800B2311: lea     rcx, [rax+1]
 * 00000001800B2315: add     rcx, rdx
 * 00000001800B2318: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B231F: lea     rax, [rax+1]
 * 00000001800B2323: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2327: jnz     short loc_1800B231F
 * 00000001800B2329: lea     rdx, [rax+1]
 * 00000001800B232D: add     rdx, rcx
 * 00000001800B2330: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2337: lea     rax, [rax+1]
 * 00000001800B233B: cmp     byte ptr [rdx+rax], 0
 * 00000001800B233F: jnz     short loc_1800B2337
 * 00000001800B2341: lea     rcx, [rax+1]
 * 00000001800B2345: add     rcx, rdx
 * 00000001800B2348: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B234F: lea     rax, [rax+1]
 * 00000001800B2353: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2357: jnz     short loc_1800B234F
 * 00000001800B2359: lea     rdx, [rax+1]
 * 00000001800B235D: add     rdx, rcx
 * 00000001800B2360: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2367: lea     rax, [rax+1]
 * 00000001800B236B: cmp     byte ptr [rdx+rax], 0
 * 00000001800B236F: jnz     short loc_1800B2367
 * 00000001800B2371: lea     rcx, [rax+1]
 * 00000001800B2375: add     rcx, rdx
 * 00000001800B2378: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B237F: lea     rax, [rax+1]
 * 00000001800B2383: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2387: jnz     short loc_1800B237F
 * 00000001800B2389: lea     rdx, [rax+1]
 * 00000001800B238D: add     rdx, rcx
 * 00000001800B2390: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2397: lea     rax, [rax+1]
 * 00000001800B239B: cmp     byte ptr [rdx+rax], 0
 * 00000001800B239F: jnz     short loc_1800B2397
 * 00000001800B23A1: lea     rcx, [rax+1]
 * 00000001800B23A5: add     rcx, rdx
 * 00000001800B23A8: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B23AF: lea     rax, [rax+1]
 * 00000001800B23B3: cmp     byte ptr [rcx+rax], 0
 * 00000001800B23B7: jnz     short loc_1800B23AF
 * 00000001800B23B9: lea     rdx, [rax+1]
 * 00000001800B23BD: add     rdx, rcx
 * 00000001800B23C0: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B23C7: lea     rax, [rax+1]
 * 00000001800B23CB: cmp     byte ptr [rdx+rax], 0
 * 00000001800B23CF: jnz     short loc_1800B23C7
 * 00000001800B23D1: lea     rcx, [rax+1]
 * 00000001800B23D5: add     rcx, rdx
 * 00000001800B23D8: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B23DF: lea     rax, [rax+1]
 * 00000001800B23E3: cmp     byte ptr [rcx+rax], 0
 * 00000001800B23E7: jnz     short loc_1800B23DF
 * 00000001800B23E9: lea     rdx, [rax+1]
 * 00000001800B23ED: add     rdx, rcx
 * 00000001800B23F0: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B23F7: lea     rax, [rax+1]
 * 00000001800B23FB: cmp     byte ptr [rdx+rax], 0
 * 00000001800B23FF: jnz     short loc_1800B23F7
 * 00000001800B2401: lea     rcx, [rax+1]
 * 00000001800B2405: add     rcx, rdx
 * 00000001800B2408: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B240F: lea     rax, [rax+1]
 * 00000001800B2413: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2417: jnz     short loc_1800B240F
 * 00000001800B2419: lea     rdx, [rax+1]
 * 00000001800B241D: add     rdx, rcx
 * 00000001800B2420: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2427: lea     rax, [rax+1]
 * 00000001800B242B: cmp     byte ptr [rdx+rax], 0
 * 00000001800B242F: jnz     short loc_1800B2427
 * 00000001800B2431: lea     rcx, [rax+1]
 * 00000001800B2435: add     rcx, rdx
 * 00000001800B2438: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B243F: inc     rax
 * 00000001800B2442: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2446: jnz     short loc_1800B243F
 * 00000001800B2448: inc     rax
 * 00000001800B244B: add     rax, rcx
 * 00000001800B244E: mov     rcx, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2455: inc     rcx
 * 00000001800B2458: cmp     byte ptr [rax+rcx], 0
 * 00000001800B245C: jnz     short loc_1800B2455
 * 00000001800B245E: inc     rax
 * 00000001800B2461: add     rax, rcx
 * 00000001800B2464: cmp     r8d, 21h ; '!'
 * 00000001800B2468: jnz     loc_1800B27A3
 * 00000001800B246E: mov     [rdi], rax
 * 00000001800B2471: mov     rcx, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2478: inc     rcx
 * 00000001800B247B: cmp     byte ptr [rax+rcx], 0
 * 00000001800B247F: jnz     short loc_1800B2478
 * 00000001800B2481: lea     rdx, [rax+1]
 * 00000001800B2485: add     rdx, rcx
 * 00000001800B2488: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B248F: lea     rax, [rax+1]
 * 00000001800B2493: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2497: jnz     short loc_1800B248F
 * 00000001800B2499: lea     rcx, [rax+1]
 * 00000001800B249D: add     rcx, rdx
 * 00000001800B24A0: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B24A7: inc     rax
 * 00000001800B24AA: cmp     byte ptr [rcx+rax], 0
 * 00000001800B24AE: jnz     short loc_1800B24A7
 * 00000001800B24B0: inc     rax
 * 00000001800B24B3: add     rcx, rax
 * 00000001800B24B6: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B24BD: inc     rax
 * 00000001800B24C0: cmp     byte ptr [rcx+rax], 0
 * 00000001800B24C4: jnz     short loc_1800B24BD
 * 00000001800B24C6: inc     rax
 * 00000001800B24C9: add     rax, rcx
 * 00000001800B24CC: jmp     loc_1800B313C
 * 00000001800B24D1: lea     rax, [rax+1]
 * 00000001800B24D5: cmp     byte ptr [rcx+rax], 0
 * 00000001800B24D9: jnz     short loc_1800B24D1
 * 00000001800B24DB: lea     rdx, [rax+1]
 * 00000001800B24DF: add     rdx, rcx
 * 00000001800B24E2: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B24E9: cmp     r8d, 3
 * 00000001800B24ED: jnz     loc_1800B2810
 * 00000001800B24F3: mov     [rdi], rcx
 * 00000001800B24F6: lea     rax, [rax+1]
 * 00000001800B24FA: cmp     byte ptr [rdx+rax], 0
 * 00000001800B24FE: jnz     short loc_1800B24F6
 * 00000001800B2500: lea     rcx, [rax+1]
 * 00000001800B2504: add     rcx, rdx
 * 00000001800B2507: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B250E: lea     rax, [rax+1]
 * 00000001800B2512: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2516: jnz     short loc_1800B250E
 * 00000001800B2518: lea     rdx, [rax+1]
 * 00000001800B251C: add     rdx, rcx
 * 00000001800B251F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2526: lea     rax, [rax+1]
 * 00000001800B252A: cmp     byte ptr [rdx+rax], 0
 * 00000001800B252E: jnz     short loc_1800B2526
 * 00000001800B2530: lea     rcx, [rax+1]
 * 00000001800B2534: add     rcx, rdx
 * 00000001800B2537: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B253E: lea     rax, [rax+1]
 * 00000001800B2542: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2546: jnz     short loc_1800B253E
 * 00000001800B2548: lea     rdx, [rax+1]
 * 00000001800B254C: add     rdx, rcx
 * 00000001800B254F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2556: lea     rax, [rax+1]
 * 00000001800B255A: cmp     byte ptr [rdx+rax], 0
 * 00000001800B255E: jnz     short loc_1800B2556
 * 00000001800B2560: lea     rcx, [rax+1]
 * 00000001800B2564: add     rcx, rdx
 * 00000001800B2567: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B256E: lea     rax, [rax+1]
 * 00000001800B2572: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2576: jnz     short loc_1800B256E
 * 00000001800B2578: lea     rdx, [rax+1]
 * 00000001800B257C: add     rdx, rcx
 * 00000001800B257F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2586: lea     rax, [rax+1]
 * 00000001800B258A: cmp     byte ptr [rdx+rax], 0
 * 00000001800B258E: jnz     short loc_1800B2586
 * 00000001800B2590: lea     rcx, [rax+1]
 * 00000001800B2594: add     rcx, rdx
 * 00000001800B2597: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B259E: lea     rax, [rax+1]
 * 00000001800B25A2: cmp     byte ptr [rcx+rax], 0
 * 00000001800B25A6: jnz     short loc_1800B259E
 * 00000001800B25A8: lea     rdx, [rax+1]
 * 00000001800B25AC: add     rdx, rcx
 * 00000001800B25AF: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B25B6: lea     rax, [rax+1]
 * 00000001800B25BA: cmp     byte ptr [rdx+rax], 0
 * 00000001800B25BE: jnz     short loc_1800B25B6
 * 00000001800B25C0: lea     rcx, [rax+1]
 * 00000001800B25C4: add     rcx, rdx
 * 00000001800B25C7: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B25CE: lea     rax, [rax+1]
 * 00000001800B25D2: cmp     byte ptr [rcx+rax], 0
 * 00000001800B25D6: jnz     short loc_1800B25CE
 * 00000001800B25D8: lea     rdx, [rax+1]
 * 00000001800B25DC: add     rdx, rcx
 * 00000001800B25DF: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B25E6: lea     rax, [rax+1]
 * 00000001800B25EA: cmp     byte ptr [rdx+rax], 0
 * 00000001800B25EE: jnz     short loc_1800B25E6
 * 00000001800B25F0: lea     rcx, [rax+1]
 * 00000001800B25F4: add     rcx, rdx
 * 00000001800B25F7: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B25FE: lea     rax, [rax+1]
 * 00000001800B2602: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2606: jnz     short loc_1800B25FE
 * 00000001800B2608: lea     rdx, [rax+1]
 * 00000001800B260C: add     rdx, rcx
 * 00000001800B260F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2616: lea     rax, [rax+1]
 * 00000001800B261A: cmp     byte ptr [rdx+rax], 0
 * 00000001800B261E: jnz     short loc_1800B2616
 * 00000001800B2620: lea     rcx, [rax+1]
 * 00000001800B2624: add     rcx, rdx
 * 00000001800B2627: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B262E: lea     rax, [rax+1]
 * 00000001800B2632: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2636: jnz     short loc_1800B262E
 * 00000001800B2638: lea     rdx, [rax+1]
 * 00000001800B263C: add     rdx, rcx
 * 00000001800B263F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2646: lea     rax, [rax+1]
 * 00000001800B264A: cmp     byte ptr [rdx+rax], 0
 * 00000001800B264E: jnz     short loc_1800B2646
 * 00000001800B2650: lea     rcx, [rax+1]
 * 00000001800B2654: add     rcx, rdx
 * 00000001800B2657: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B265E: lea     rax, [rax+1]
 * 00000001800B2662: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2666: jnz     short loc_1800B265E
 * 00000001800B2668: lea     rdx, [rax+1]
 * 00000001800B266C: add     rdx, rcx
 * 00000001800B266F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2676: lea     rax, [rax+1]
 * 00000001800B267A: cmp     byte ptr [rdx+rax], 0
 * 00000001800B267E: jnz     short loc_1800B2676
 * 00000001800B2680: lea     rcx, [rax+1]
 * 00000001800B2684: add     rcx, rdx
 * 00000001800B2687: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B268E: lea     rax, [rax+1]
 * 00000001800B2692: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2696: jnz     short loc_1800B268E
 * 00000001800B2698: lea     rdx, [rax+1]
 * 00000001800B269C: add     rdx, rcx
 * 00000001800B269F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B26A6: lea     rax, [rax+1]
 * 00000001800B26AA: cmp     byte ptr [rdx+rax], 0
 * 00000001800B26AE: jnz     short loc_1800B26A6
 * 00000001800B26B0: lea     rcx, [rax+1]
 * 00000001800B26B4: add     rcx, rdx
 * 00000001800B26B7: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B26BE: lea     rax, [rax+1]
 * 00000001800B26C2: cmp     byte ptr [rcx+rax], 0
 * 00000001800B26C6: jnz     short loc_1800B26BE
 * 00000001800B26C8: lea     rdx, [rax+1]
 * 00000001800B26CC: add     rdx, rcx
 * 00000001800B26CF: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B26D6: lea     rax, [rax+1]
 * 00000001800B26DA: cmp     byte ptr [rdx+rax], 0
 * 00000001800B26DE: jnz     short loc_1800B26D6
 * 00000001800B26E0: lea     rcx, [rax+1]
 * 00000001800B26E4: add     rcx, rdx
 * 00000001800B26E7: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B26EE: lea     rax, [rax+1]
 * 00000001800B26F2: cmp     byte ptr [rcx+rax], 0
 * 00000001800B26F6: jnz     short loc_1800B26EE
 * 00000001800B26F8: lea     rdx, [rax+1]
 * 00000001800B26FC: add     rdx, rcx
 * 00000001800B26FF: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2706: lea     rax, [rax+1]
 * 00000001800B270A: cmp     byte ptr [rdx+rax], 0
 * 00000001800B270E: jnz     short loc_1800B2706
 * 00000001800B2710: lea     rcx, [rax+1]
 * 00000001800B2714: add     rcx, rdx
 * 00000001800B2717: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B271E: lea     rax, [rax+1]
 * 00000001800B2722: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2726: jnz     short loc_1800B271E
 * 00000001800B2728: lea     rdx, [rax+1]
 * 00000001800B272C: add     rdx, rcx
 * 00000001800B272F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2736: lea     rax, [rax+1]
 * 00000001800B273A: cmp     byte ptr [rdx+rax], 0
 * 00000001800B273E: jnz     short loc_1800B2736
 * 00000001800B2740: lea     rcx, [rax+1]
 * 00000001800B2744: add     rcx, rdx
 * 00000001800B2747: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B274E: lea     rax, [rax+1]
 * 00000001800B2752: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2756: jnz     short loc_1800B274E
 * 00000001800B2758: lea     rdx, [rax+1]
 * 00000001800B275C: add     rdx, rcx
 * 00000001800B275F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2766: lea     rax, [rax+1]
 * 00000001800B276A: cmp     byte ptr [rdx+rax], 0
 * 00000001800B276E: jnz     short loc_1800B2766
 * 00000001800B2770: lea     rcx, [rax+1]
 * 00000001800B2774: add     rcx, rdx
 * 00000001800B2777: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B277E: inc     rax
 * 00000001800B2781: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2785: jnz     short loc_1800B277E
 * 00000001800B2787: inc     rax
 * 00000001800B278A: add     rcx, rax
 * 00000001800B278D: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2794: inc     rax
 * 00000001800B2797: cmp     byte ptr [rcx+rax], 0
 * 00000001800B279B: jnz     short loc_1800B2794
 * 00000001800B279D: inc     rax
 * 00000001800B27A0: add     rax, rcx
 * 00000001800B27A3: mov     rcx, 0FFFFFFFFFFFFFFFFh
 * 00000001800B27AA: inc     rcx
 * 00000001800B27AD: cmp     byte ptr [rax+rcx], 0
 * 00000001800B27B1: jnz     short loc_1800B27AA
 * 00000001800B27B3: inc     rax
 * 00000001800B27B6: add     rax, rcx
 * 00000001800B27B9: cmp     r8d, 22h ; '"'
 * 00000001800B27BD: jnz     loc_1800B2AE4
 * 00000001800B27C3: mov     [rdi], rax
 * 00000001800B27C6: mov     rcx, 0FFFFFFFFFFFFFFFFh
 * 00000001800B27CD: inc     rcx
 * 00000001800B27D0: cmp     byte ptr [rax+rcx], 0
 * 00000001800B27D4: jnz     short loc_1800B27CD
 * 00000001800B27D6: lea     rdx, [rax+1]
 * 00000001800B27DA: add     rdx, rcx
 * 00000001800B27DD: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B27E4: lea     rax, [rax+1]
 * 00000001800B27E8: cmp     byte ptr [rdx+rax], 0
 * 00000001800B27EC: jnz     short loc_1800B27E4
 * 00000001800B27EE: lea     rcx, [rax+1]
 * 00000001800B27F2: add     rcx, rdx
 * 00000001800B27F5: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B27FC: inc     rax
 * 00000001800B27FF: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2803: jnz     short loc_1800B27FC
 * 00000001800B2805: inc     rax
 * 00000001800B2808: add     rax, rcx
 * 00000001800B280B: jmp     loc_1800B313C
 * 00000001800B2810: lea     rax, [rax+1]
 * 00000001800B2814: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2818: jnz     short loc_1800B2810
 * 00000001800B281A: lea     rcx, [rax+1]
 * 00000001800B281E: add     rcx, rdx
 * 00000001800B2821: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2828: cmp     r8d, 4
 * 00000001800B282C: jnz     loc_1800B2B39
 * 00000001800B2832: mov     [rdi], rdx
 * 00000001800B2835: lea     rax, [rax+1]
 * 00000001800B2839: cmp     byte ptr [rcx+rax], 0
 * 00000001800B283D: jnz     short loc_1800B2835
 * 00000001800B283F: lea     rdx, [rax+1]
 * 00000001800B2843: add     rdx, rcx
 * 00000001800B2846: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B284D: lea     rax, [rax+1]
 * 00000001800B2851: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2855: jnz     short loc_1800B284D
 * 00000001800B2857: lea     rcx, [rax+1]
 * 00000001800B285B: add     rcx, rdx
 * 00000001800B285E: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2865: lea     rax, [rax+1]
 * 00000001800B2869: cmp     byte ptr [rcx+rax], 0
 * 00000001800B286D: jnz     short loc_1800B2865
 * 00000001800B286F: lea     rdx, [rax+1]
 * 00000001800B2873: add     rdx, rcx
 * 00000001800B2876: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B287D: lea     rax, [rax+1]
 * 00000001800B2881: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2885: jnz     short loc_1800B287D
 * 00000001800B2887: lea     rcx, [rax+1]
 * 00000001800B288B: add     rcx, rdx
 * 00000001800B288E: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2895: lea     rax, [rax+1]
 * 00000001800B2899: cmp     byte ptr [rcx+rax], 0
 * 00000001800B289D: jnz     short loc_1800B2895
 * 00000001800B289F: lea     rdx, [rax+1]
 * 00000001800B28A3: add     rdx, rcx
 * 00000001800B28A6: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B28AD: lea     rax, [rax+1]
 * 00000001800B28B1: cmp     byte ptr [rdx+rax], 0
 * 00000001800B28B5: jnz     short loc_1800B28AD
 * 00000001800B28B7: lea     rcx, [rax+1]
 * 00000001800B28BB: add     rcx, rdx
 * 00000001800B28BE: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B28C5: lea     rax, [rax+1]
 * 00000001800B28C9: cmp     byte ptr [rcx+rax], 0
 * 00000001800B28CD: jnz     short loc_1800B28C5
 * 00000001800B28CF: lea     rdx, [rax+1]
 * 00000001800B28D3: add     rdx, rcx
 * 00000001800B28D6: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B28DD: lea     rax, [rax+1]
 * 00000001800B28E1: cmp     byte ptr [rdx+rax], 0
 * 00000001800B28E5: jnz     short loc_1800B28DD
 * 00000001800B28E7: lea     rcx, [rax+1]
 * 00000001800B28EB: add     rcx, rdx
 * 00000001800B28EE: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B28F5: lea     rax, [rax+1]
 * 00000001800B28F9: cmp     byte ptr [rcx+rax], 0
 * 00000001800B28FD: jnz     short loc_1800B28F5
 * 00000001800B28FF: lea     rdx, [rax+1]
 * 00000001800B2903: add     rdx, rcx
 * 00000001800B2906: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B290D: lea     rax, [rax+1]
 * 00000001800B2911: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2915: jnz     short loc_1800B290D
 * 00000001800B2917: lea     rcx, [rax+1]
 * 00000001800B291B: add     rcx, rdx
 * 00000001800B291E: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2925: lea     rax, [rax+1]
 * 00000001800B2929: cmp     byte ptr [rcx+rax], 0
 * 00000001800B292D: jnz     short loc_1800B2925
 * 00000001800B292F: lea     rdx, [rax+1]
 * 00000001800B2933: add     rdx, rcx
 * 00000001800B2936: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B293D: lea     rax, [rax+1]
 * 00000001800B2941: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2945: jnz     short loc_1800B293D
 * 00000001800B2947: lea     rcx, [rax+1]
 * 00000001800B294B: add     rcx, rdx
 * 00000001800B294E: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2955: lea     rax, [rax+1]
 * 00000001800B2959: cmp     byte ptr [rcx+rax], 0
 * 00000001800B295D: jnz     short loc_1800B2955
 * 00000001800B295F: lea     rdx, [rax+1]
 * 00000001800B2963: add     rdx, rcx
 * 00000001800B2966: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B296D: lea     rax, [rax+1]
 * 00000001800B2971: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2975: jnz     short loc_1800B296D
 * 00000001800B2977: lea     rcx, [rax+1]
 * 00000001800B297B: add     rcx, rdx
 * 00000001800B297E: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2985: lea     rax, [rax+1]
 * 00000001800B2989: cmp     byte ptr [rcx+rax], 0
 * 00000001800B298D: jnz     short loc_1800B2985
 * 00000001800B298F: lea     rdx, [rax+1]
 * 00000001800B2993: add     rdx, rcx
 * 00000001800B2996: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B299D: lea     rax, [rax+1]
 * 00000001800B29A1: cmp     byte ptr [rdx+rax], 0
 * 00000001800B29A5: jnz     short loc_1800B299D
 * 00000001800B29A7: lea     rcx, [rax+1]
 * 00000001800B29AB: add     rcx, rdx
 * 00000001800B29AE: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B29B5: lea     rax, [rax+1]
 * 00000001800B29B9: cmp     byte ptr [rcx+rax], 0
 * 00000001800B29BD: jnz     short loc_1800B29B5
 * 00000001800B29BF: lea     rdx, [rax+1]
 * 00000001800B29C3: add     rdx, rcx
 * 00000001800B29C6: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B29CD: lea     rax, [rax+1]
 * 00000001800B29D1: cmp     byte ptr [rdx+rax], 0
 * 00000001800B29D5: jnz     short loc_1800B29CD
 * 00000001800B29D7: lea     rcx, [rax+1]
 * 00000001800B29DB: add     rcx, rdx
 * 00000001800B29DE: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B29E5: lea     rax, [rax+1]
 * 00000001800B29E9: cmp     byte ptr [rcx+rax], 0
 * 00000001800B29ED: jnz     short loc_1800B29E5
 * 00000001800B29EF: lea     rdx, [rax+1]
 * 00000001800B29F3: add     rdx, rcx
 * 00000001800B29F6: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B29FD: lea     rax, [rax+1]
 * 00000001800B2A01: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2A05: jnz     short loc_1800B29FD
 * 00000001800B2A07: lea     rcx, [rax+1]
 * 00000001800B2A0B: add     rcx, rdx
 * 00000001800B2A0E: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2A15: lea     rax, [rax+1]
 * 00000001800B2A19: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2A1D: jnz     short loc_1800B2A15
 * 00000001800B2A1F: lea     rdx, [rax+1]
 * 00000001800B2A23: add     rdx, rcx
 * 00000001800B2A26: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2A2D: lea     rax, [rax+1]
 * 00000001800B2A31: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2A35: jnz     short loc_1800B2A2D
 * 00000001800B2A37: lea     rcx, [rax+1]
 * 00000001800B2A3B: add     rcx, rdx
 * 00000001800B2A3E: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2A45: lea     rax, [rax+1]
 * 00000001800B2A49: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2A4D: jnz     short loc_1800B2A45
 * 00000001800B2A4F: lea     rdx, [rax+1]
 * 00000001800B2A53: add     rdx, rcx
 * 00000001800B2A56: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2A5D: lea     rax, [rax+1]
 * 00000001800B2A61: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2A65: jnz     short loc_1800B2A5D
 * 00000001800B2A67: lea     rcx, [rax+1]
 * 00000001800B2A6B: add     rcx, rdx
 * 00000001800B2A6E: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2A75: lea     rax, [rax+1]
 * 00000001800B2A79: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2A7D: jnz     short loc_1800B2A75
 * 00000001800B2A7F: lea     rdx, [rax+1]
 * 00000001800B2A83: add     rdx, rcx
 * 00000001800B2A86: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2A8D: lea     rax, [rax+1]
 * 00000001800B2A91: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2A95: jnz     short loc_1800B2A8D
 * 00000001800B2A97: lea     rcx, [rax+1]
 * 00000001800B2A9B: add     rcx, rdx
 * 00000001800B2A9E: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2AA5: lea     rax, [rax+1]
 * 00000001800B2AA9: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2AAD: jnz     short loc_1800B2AA5
 * 00000001800B2AAF: lea     rdx, [rax+1]
 * 00000001800B2AB3: add     rdx, rcx
 * 00000001800B2AB6: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2ABD: lea     rax, [rax+1]
 * 00000001800B2AC1: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2AC5: jnz     short loc_1800B2ABD
 * 00000001800B2AC7: lea     rcx, [rax+1]
 * 00000001800B2ACB: add     rcx, rdx
 * 00000001800B2ACE: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2AD5: inc     rax
 * 00000001800B2AD8: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2ADC: jnz     short loc_1800B2AD5
 * 00000001800B2ADE: inc     rax
 * 00000001800B2AE1: add     rax, rcx
 * 00000001800B2AE4: mov     rcx, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2AEB: inc     rcx
 * 00000001800B2AEE: cmp     byte ptr [rax+rcx], 0
 * 00000001800B2AF2: jnz     short loc_1800B2AEB
 * 00000001800B2AF4: inc     rax
 * 00000001800B2AF7: add     rax, rcx
 * 00000001800B2AFA: cmp     r8d, 23h ; '#'
 * 00000001800B2AFE: jnz     loc_1800B2E0B
 * 00000001800B2B04: mov     [rdi], rax
 * 00000001800B2B07: mov     rcx, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2B0E: inc     rcx
 * 00000001800B2B11: cmp     byte ptr [rax+rcx], 0
 * 00000001800B2B15: jnz     short loc_1800B2B0E
 * 00000001800B2B17: lea     rdx, [rax+1]
 * 00000001800B2B1B: add     rdx, rcx
 * 00000001800B2B1E: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2B25: inc     rax
 * 00000001800B2B28: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2B2C: jnz     short loc_1800B2B25
 * 00000001800B2B2E: inc     rax
 * 00000001800B2B31: add     rax, rdx
 * 00000001800B2B34: jmp     loc_1800B313C
 * 00000001800B2B39: lea     rax, [rax+1]
 * 00000001800B2B3D: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2B41: jnz     short loc_1800B2B39
 * 00000001800B2B43: lea     rdx, [rax+1]
 * 00000001800B2B47: add     rdx, rcx
 * 00000001800B2B4A: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2B51: cmp     r8d, 5
 * 00000001800B2B55: jnz     loc_1800B2E49
 * 00000001800B2B5B: mov     [rdi], rcx
 * 00000001800B2B5E: lea     rax, [rax+1]
 * 00000001800B2B62: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2B66: jnz     short loc_1800B2B5E
 * 00000001800B2B68: lea     rcx, [rax+1]
 * 00000001800B2B6C: add     rcx, rdx
 * 00000001800B2B6F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2B76: lea     rax, [rax+1]
 * 00000001800B2B7A: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2B7E: jnz     short loc_1800B2B76
 * 00000001800B2B80: lea     rdx, [rax+1]
 * 00000001800B2B84: add     rdx, rcx
 * 00000001800B2B87: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2B8E: lea     rax, [rax+1]
 * 00000001800B2B92: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2B96: jnz     short loc_1800B2B8E
 * 00000001800B2B98: lea     rcx, [rax+1]
 * 00000001800B2B9C: add     rcx, rdx
 * 00000001800B2B9F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2BA6: lea     rax, [rax+1]
 * 00000001800B2BAA: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2BAE: jnz     short loc_1800B2BA6
 * 00000001800B2BB0: lea     rdx, [rax+1]
 * 00000001800B2BB4: add     rdx, rcx
 * 00000001800B2BB7: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2BBE: lea     rax, [rax+1]
 * 00000001800B2BC2: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2BC6: jnz     short loc_1800B2BBE
 * 00000001800B2BC8: lea     rcx, [rax+1]
 * 00000001800B2BCC: add     rcx, rdx
 * 00000001800B2BCF: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2BD6: lea     rax, [rax+1]
 * 00000001800B2BDA: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2BDE: jnz     short loc_1800B2BD6
 * 00000001800B2BE0: lea     rdx, [rax+1]
 * 00000001800B2BE4: add     rdx, rcx
 * 00000001800B2BE7: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2BEE: lea     rax, [rax+1]
 * 00000001800B2BF2: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2BF6: jnz     short loc_1800B2BEE
 * 00000001800B2BF8: lea     rcx, [rax+1]
 * 00000001800B2BFC: add     rcx, rdx
 * 00000001800B2BFF: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2C06: lea     rax, [rax+1]
 * 00000001800B2C0A: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2C0E: jnz     short loc_1800B2C06
 * 00000001800B2C10: lea     rdx, [rax+1]
 * 00000001800B2C14: add     rdx, rcx
 * 00000001800B2C17: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2C1E: lea     rax, [rax+1]
 * 00000001800B2C22: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2C26: jnz     short loc_1800B2C1E
 * 00000001800B2C28: lea     rcx, [rax+1]
 * 00000001800B2C2C: add     rcx, rdx
 * 00000001800B2C2F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2C36: lea     rax, [rax+1]
 * 00000001800B2C3A: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2C3E: jnz     short loc_1800B2C36
 * 00000001800B2C40: lea     rdx, [rax+1]
 * 00000001800B2C44: add     rdx, rcx
 * 00000001800B2C47: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2C4E: lea     rax, [rax+1]
 * 00000001800B2C52: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2C56: jnz     short loc_1800B2C4E
 * 00000001800B2C58: lea     rcx, [rax+1]
 * 00000001800B2C5C: add     rcx, rdx
 * 00000001800B2C5F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2C66: lea     rax, [rax+1]
 * 00000001800B2C6A: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2C6E: jnz     short loc_1800B2C66
 * 00000001800B2C70: lea     rdx, [rax+1]
 * 00000001800B2C74: add     rdx, rcx
 * 00000001800B2C77: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2C7E: lea     rax, [rax+1]
 * 00000001800B2C82: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2C86: jnz     short loc_1800B2C7E
 * 00000001800B2C88: lea     rcx, [rax+1]
 * 00000001800B2C8C: add     rcx, rdx
 * 00000001800B2C8F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2C96: lea     rax, [rax+1]
 * 00000001800B2C9A: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2C9E: jnz     short loc_1800B2C96
 * 00000001800B2CA0: lea     rdx, [rax+1]
 * 00000001800B2CA4: add     rdx, rcx
 * 00000001800B2CA7: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2CAE: lea     rax, [rax+1]
 * 00000001800B2CB2: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2CB6: jnz     short loc_1800B2CAE
 * 00000001800B2CB8: lea     rcx, [rax+1]
 * 00000001800B2CBC: add     rcx, rdx
 * 00000001800B2CBF: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2CC6: lea     rax, [rax+1]
 * 00000001800B2CCA: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2CCE: jnz     short loc_1800B2CC6
 * 00000001800B2CD0: lea     rdx, [rax+1]
 * 00000001800B2CD4: add     rdx, rcx
 * 00000001800B2CD7: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2CDE: lea     rax, [rax+1]
 * 00000001800B2CE2: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2CE6: jnz     short loc_1800B2CDE
 * 00000001800B2CE8: lea     rcx, [rax+1]
 * 00000001800B2CEC: add     rcx, rdx
 * 00000001800B2CEF: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2CF6: lea     rax, [rax+1]
 * 00000001800B2CFA: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2CFE: jnz     short loc_1800B2CF6
 * 00000001800B2D00: lea     rdx, [rax+1]
 * 00000001800B2D04: add     rdx, rcx
 * 00000001800B2D07: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2D0E: lea     rax, [rax+1]
 * 00000001800B2D12: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2D16: jnz     short loc_1800B2D0E
 * 00000001800B2D18: lea     rcx, [rax+1]
 * 00000001800B2D1C: add     rcx, rdx
 * 00000001800B2D1F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2D26: lea     rax, [rax+1]
 * 00000001800B2D2A: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2D2E: jnz     short loc_1800B2D26
 * 00000001800B2D30: lea     rdx, [rax+1]
 * 00000001800B2D34: add     rdx, rcx
 * 00000001800B2D37: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2D3E: lea     rax, [rax+1]
 * 00000001800B2D42: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2D46: jnz     short loc_1800B2D3E
 * 00000001800B2D48: lea     rcx, [rax+1]
 * 00000001800B2D4C: add     rcx, rdx
 * 00000001800B2D4F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2D56: lea     rax, [rax+1]
 * 00000001800B2D5A: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2D5E: jnz     short loc_1800B2D56
 * 00000001800B2D60: lea     rdx, [rax+1]
 * 00000001800B2D64: add     rdx, rcx
 * 00000001800B2D67: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2D6E: lea     rax, [rax+1]
 * 00000001800B2D72: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2D76: jnz     short loc_1800B2D6E
 * 00000001800B2D78: lea     rcx, [rax+1]
 * 00000001800B2D7C: add     rcx, rdx
 * 00000001800B2D7F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2D86: lea     rax, [rax+1]
 * 00000001800B2D8A: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2D8E: jnz     short loc_1800B2D86
 * 00000001800B2D90: lea     rdx, [rax+1]
 * 00000001800B2D94: add     rdx, rcx
 * 00000001800B2D97: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2D9E: lea     rax, [rax+1]
 * 00000001800B2DA2: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2DA6: jnz     short loc_1800B2D9E
 * 00000001800B2DA8: lea     rcx, [rax+1]
 * 00000001800B2DAC: add     rcx, rdx
 * 00000001800B2DAF: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2DB6: lea     rax, [rax+1]
 * 00000001800B2DBA: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2DBE: jnz     short loc_1800B2DB6
 * 00000001800B2DC0: lea     rdx, [rax+1]
 * 00000001800B2DC4: add     rdx, rcx
 * 00000001800B2DC7: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2DCE: lea     rax, [rax+1]
 * 00000001800B2DD2: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2DD6: jnz     short loc_1800B2DCE
 * 00000001800B2DD8: lea     rcx, [rax+1]
 * 00000001800B2DDC: add     rcx, rdx
 * 00000001800B2DDF: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2DE6: inc     rax
 * 00000001800B2DE9: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2DED: jnz     short loc_1800B2DE6
 * 00000001800B2DEF: inc     rax
 * 00000001800B2DF2: add     rcx, rax
 * 00000001800B2DF5: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2DFC: inc     rax
 * 00000001800B2DFF: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2E03: jnz     short loc_1800B2DFC
 * 00000001800B2E05: inc     rax
 * 00000001800B2E08: add     rax, rcx
 * 00000001800B2E0B: mov     rcx, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2E12: inc     rcx
 * 00000001800B2E15: cmp     byte ptr [rax+rcx], 0
 * 00000001800B2E19: jnz     short loc_1800B2E12
 * 00000001800B2E1B: inc     rax
 * 00000001800B2E1E: add     rax, rcx
 * 00000001800B2E21: cmp     r8d, 24h ; '$'
 * 00000001800B2E25: jnz     loc_1800B311D
 * 00000001800B2E2B: mov     [rdi], rax
 * 00000001800B2E2E: mov     rcx, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2E35: inc     rcx
 * 00000001800B2E38: cmp     byte ptr [rax+rcx], 0
 * 00000001800B2E3C: jnz     short loc_1800B2E35
 * 00000001800B2E3E: inc     rax
 * 00000001800B2E41: add     rax, rcx
 * 00000001800B2E44: jmp     loc_1800B313C
 * 00000001800B2E49: lea     rax, [rax+1]
 * 00000001800B2E4D: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2E51: jnz     short loc_1800B2E49
 * 00000001800B2E53: lea     rcx, [rax+1]
 * 00000001800B2E57: add     rcx, rdx
 * 00000001800B2E5A: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2E61: cmp     r8d, 6
 * 00000001800B2E65: jnz     loc_1800B319D
 * 00000001800B2E6B: mov     [rdi], rdx
 * 00000001800B2E6E: lea     rax, [rax+1]
 * 00000001800B2E72: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2E76: jnz     short loc_1800B2E6E
 * 00000001800B2E78: lea     rdx, [rax+1]
 * 00000001800B2E7C: add     rdx, rcx
 * 00000001800B2E7F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2E86: lea     rax, [rax+1]
 * 00000001800B2E8A: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2E8E: jnz     short loc_1800B2E86
 * 00000001800B2E90: lea     rcx, [rax+1]
 * 00000001800B2E94: add     rcx, rdx
 * 00000001800B2E97: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2E9E: lea     rax, [rax+1]
 * 00000001800B2EA2: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2EA6: jnz     short loc_1800B2E9E
 * 00000001800B2EA8: lea     rdx, [rax+1]
 * 00000001800B2EAC: add     rdx, rcx
 * 00000001800B2EAF: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2EB6: lea     rax, [rax+1]
 * 00000001800B2EBA: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2EBE: jnz     short loc_1800B2EB6
 * 00000001800B2EC0: lea     rcx, [rax+1]
 * 00000001800B2EC4: add     rcx, rdx
 * 00000001800B2EC7: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2ECE: lea     rax, [rax+1]
 * 00000001800B2ED2: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2ED6: jnz     short loc_1800B2ECE
 * 00000001800B2ED8: lea     rdx, [rax+1]
 * 00000001800B2EDC: add     rdx, rcx
 * 00000001800B2EDF: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2EE6: lea     rax, [rax+1]
 * 00000001800B2EEA: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2EEE: jnz     short loc_1800B2EE6
 * 00000001800B2EF0: lea     rcx, [rax+1]
 * 00000001800B2EF4: add     rcx, rdx
 * 00000001800B2EF7: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2EFE: lea     rax, [rax+1]
 * 00000001800B2F02: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2F06: jnz     short loc_1800B2EFE
 * 00000001800B2F08: lea     rdx, [rax+1]
 * 00000001800B2F0C: add     rdx, rcx
 * 00000001800B2F0F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2F16: lea     rax, [rax+1]
 * 00000001800B2F1A: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2F1E: jnz     short loc_1800B2F16
 * 00000001800B2F20: lea     rcx, [rax+1]
 * 00000001800B2F24: add     rcx, rdx
 * 00000001800B2F27: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2F2E: lea     rax, [rax+1]
 * 00000001800B2F32: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2F36: jnz     short loc_1800B2F2E
 * 00000001800B2F38: lea     rdx, [rax+1]
 * 00000001800B2F3C: add     rdx, rcx
 * 00000001800B2F3F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2F46: lea     rax, [rax+1]
 * 00000001800B2F4A: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2F4E: jnz     short loc_1800B2F46
 * 00000001800B2F50: lea     rcx, [rax+1]
 * 00000001800B2F54: add     rcx, rdx
 * 00000001800B2F57: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2F5E: lea     rax, [rax+1]
 * 00000001800B2F62: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2F66: jnz     short loc_1800B2F5E
 * 00000001800B2F68: lea     rdx, [rax+1]
 * 00000001800B2F6C: add     rdx, rcx
 * 00000001800B2F6F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2F76: lea     rax, [rax+1]
 * 00000001800B2F7A: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2F7E: jnz     short loc_1800B2F76
 * 00000001800B2F80: lea     rcx, [rax+1]
 * 00000001800B2F84: add     rcx, rdx
 * 00000001800B2F87: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2F8E: lea     rax, [rax+1]
 * 00000001800B2F92: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2F96: jnz     short loc_1800B2F8E
 * 00000001800B2F98: lea     rdx, [rax+1]
 * 00000001800B2F9C: add     rdx, rcx
 * 00000001800B2F9F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2FA6: lea     rax, [rax+1]
 * 00000001800B2FAA: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2FAE: jnz     short loc_1800B2FA6
 * 00000001800B2FB0: lea     rcx, [rax+1]
 * 00000001800B2FB4: add     rcx, rdx
 * 00000001800B2FB7: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2FBE: lea     rax, [rax+1]
 * 00000001800B2FC2: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2FC6: jnz     short loc_1800B2FBE
 * 00000001800B2FC8: lea     rdx, [rax+1]
 * 00000001800B2FCC: add     rdx, rcx
 * 00000001800B2FCF: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2FD6: lea     rax, [rax+1]
 * 00000001800B2FDA: cmp     byte ptr [rdx+rax], 0
 * 00000001800B2FDE: jnz     short loc_1800B2FD6
 * 00000001800B2FE0: lea     rcx, [rax+1]
 * 00000001800B2FE4: add     rcx, rdx
 * 00000001800B2FE7: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B2FEE: lea     rax, [rax+1]
 * 00000001800B2FF2: cmp     byte ptr [rcx+rax], 0
 * 00000001800B2FF6: jnz     short loc_1800B2FEE
 * 00000001800B2FF8: lea     rdx, [rax+1]
 * 00000001800B2FFC: add     rdx, rcx
 * 00000001800B2FFF: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3006: lea     rax, [rax+1]
 * 00000001800B300A: cmp     byte ptr [rdx+rax], 0
 * 00000001800B300E: jnz     short loc_1800B3006
 * 00000001800B3010: lea     rcx, [rax+1]
 * 00000001800B3014: add     rcx, rdx
 * 00000001800B3017: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B301E: lea     rax, [rax+1]
 * 00000001800B3022: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3026: jnz     short loc_1800B301E
 * 00000001800B3028: lea     rdx, [rax+1]
 * 00000001800B302C: add     rdx, rcx
 * 00000001800B302F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3036: lea     rax, [rax+1]
 * 00000001800B303A: cmp     byte ptr [rdx+rax], 0
 * 00000001800B303E: jnz     short loc_1800B3036
 * 00000001800B3040: lea     rcx, [rax+1]
 * 00000001800B3044: add     rcx, rdx
 * 00000001800B3047: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B304E: lea     rax, [rax+1]
 * 00000001800B3052: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3056: jnz     short loc_1800B304E
 * 00000001800B3058: lea     rdx, [rax+1]
 * 00000001800B305C: add     rdx, rcx
 * 00000001800B305F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3066: lea     rax, [rax+1]
 * 00000001800B306A: cmp     byte ptr [rdx+rax], 0
 * 00000001800B306E: jnz     short loc_1800B3066
 * 00000001800B3070: lea     rcx, [rax+1]
 * 00000001800B3074: add     rcx, rdx
 * 00000001800B3077: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B307E: lea     rax, [rax+1]
 * 00000001800B3082: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3086: jnz     short loc_1800B307E
 * 00000001800B3088: lea     rdx, [rax+1]
 * 00000001800B308C: add     rdx, rcx
 * 00000001800B308F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3096: lea     rax, [rax+1]
 * 00000001800B309A: cmp     byte ptr [rdx+rax], 0
 * 00000001800B309E: jnz     short loc_1800B3096
 * 00000001800B30A0: lea     rcx, [rax+1]
 * 00000001800B30A4: add     rcx, rdx
 * 00000001800B30A7: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B30AE: lea     rax, [rax+1]
 * 00000001800B30B2: cmp     byte ptr [rcx+rax], 0
 * 00000001800B30B6: jnz     short loc_1800B30AE
 * 00000001800B30B8: lea     rdx, [rax+1]
 * 00000001800B30BC: add     rdx, rcx
 * 00000001800B30BF: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B30C6: lea     rax, [rax+1]
 * 00000001800B30CA: cmp     byte ptr [rdx+rax], 0
 * 00000001800B30CE: jnz     short loc_1800B30C6
 * 00000001800B30D0: lea     rcx, [rax+1]
 * 00000001800B30D4: add     rcx, rdx
 * 00000001800B30D7: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B30DE: lea     rax, [rax+1]
 * 00000001800B30E2: cmp     byte ptr [rcx+rax], 0
 * 00000001800B30E6: jnz     short loc_1800B30DE
 * 00000001800B30E8: lea     rdx, [rax+1]
 * 00000001800B30EC: add     rdx, rcx
 * 00000001800B30EF: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B30F6: lea     rax, [rax+1]
 * 00000001800B30FA: cmp     byte ptr [rdx+rax], 0
 * 00000001800B30FE: jnz     short loc_1800B30F6
 * 00000001800B3100: lea     rcx, [rax+1]
 * 00000001800B3104: add     rcx, rdx
 * 00000001800B3107: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B310E: inc     rax
 * 00000001800B3111: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3115: jnz     short loc_1800B310E
 * 00000001800B3117: inc     rax
 * 00000001800B311A: add     rax, rcx
 * 00000001800B311D: mov     rcx, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3124: inc     rcx
 * 00000001800B3127: cmp     byte ptr [rax+rcx], 0
 * 00000001800B312B: jnz     short loc_1800B3124
 * 00000001800B312D: inc     rax
 * 00000001800B3130: add     rax, rcx
 * 00000001800B3133: cmp     r8d, 25h ; '%'
 * 00000001800B3137: jnz     short loc_1800B313C
 * 00000001800B3139: mov     [rdi], rax
 * 00000001800B313C: mov     rcx, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3143: lea     rcx, [rcx+1]
 * 00000001800B3147: cmp     byte ptr [rax+rcx], 0
 * 00000001800B314B: jnz     short loc_1800B3143
 * 00000001800B314D: lea     r10, [rcx+1]
 * 00000001800B3151: add     r10, rax
 * 00000001800B3154: add     rdi, 8
 * 00000001800B3158: sub     r9, 1
 * 00000001800B315C: jnz     loc_1800B1A7D
 * 00000001800B3162: lea     ecx, [r9+18h]; unsigned __int64
 * 00000001800B3166: call    ??2@YAPEAX_K@Z; operator new(unsigned __int64)
 * 00000001800B316B: mov     rdi, rax
 * 00000001800B316E: mov     [rbp+1180h+var_11E0], rax
 * 00000001800B3172: lea     rcx, [rbp+1180h+var_EB0]
 * 00000001800B3179: call    ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ; SP<ushort *,SP_MEM<ushort *>>::Reset(void)
 * 00000001800B317E: xor     eax, eax
 * 00000001800B3180: test    rdi, rdi
 * 00000001800B3183: jnz     loc_1800B5DB4
 * 00000001800B3189: mov     [rbp+1180h+var_EB0], rax
 * 00000001800B3190: mov     eax, 8007000Eh
 * 00000001800B3195: mov     [rbp+1180h+var_11D8], eax
 * 00000001800B3198: jmp     loc_1800B5FD9
 * 00000001800B319D: lea     rax, [rax+1]
 * 00000001800B31A1: cmp     byte ptr [rcx+rax], 0
 * 00000001800B31A5: jnz     short loc_1800B319D
 * 00000001800B31A7: lea     rdx, [rax+1]
 * 00000001800B31AB: add     rdx, rcx
 * 00000001800B31AE: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B31B5: cmp     r8d, 7
 * 00000001800B31B9: jnz     loc_1800B3474
 * 00000001800B31BF: mov     [rdi], rcx
 * 00000001800B31C2: lea     rax, [rax+1]
 * 00000001800B31C6: cmp     byte ptr [rdx+rax], 0
 * 00000001800B31CA: jnz     short loc_1800B31C2
 * 00000001800B31CC: lea     rcx, [rax+1]
 * 00000001800B31D0: add     rcx, rdx
 * 00000001800B31D3: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B31DA: lea     rax, [rax+1]
 * 00000001800B31DE: cmp     byte ptr [rcx+rax], 0
 * 00000001800B31E2: jnz     short loc_1800B31DA
 * 00000001800B31E4: lea     rdx, [rax+1]
 * 00000001800B31E8: add     rdx, rcx
 * 00000001800B31EB: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B31F2: lea     rax, [rax+1]
 * 00000001800B31F6: cmp     byte ptr [rdx+rax], 0
 * 00000001800B31FA: jnz     short loc_1800B31F2
 * 00000001800B31FC: lea     rcx, [rax+1]
 * 00000001800B3200: add     rcx, rdx
 * 00000001800B3203: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B320A: lea     rax, [rax+1]
 * 00000001800B320E: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3212: jnz     short loc_1800B320A
 * 00000001800B3214: lea     rdx, [rax+1]
 * 00000001800B3218: add     rdx, rcx
 * 00000001800B321B: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3222: lea     rax, [rax+1]
 * 00000001800B3226: cmp     byte ptr [rdx+rax], 0
 * 00000001800B322A: jnz     short loc_1800B3222
 * 00000001800B322C: lea     rcx, [rax+1]
 * 00000001800B3230: add     rcx, rdx
 * 00000001800B3233: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B323A: lea     rax, [rax+1]
 * 00000001800B323E: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3242: jnz     short loc_1800B323A
 * 00000001800B3244: lea     rdx, [rax+1]
 * 00000001800B3248: add     rdx, rcx
 * 00000001800B324B: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3252: lea     rax, [rax+1]
 * 00000001800B3256: cmp     byte ptr [rdx+rax], 0
 * 00000001800B325A: jnz     short loc_1800B3252
 * 00000001800B325C: lea     rcx, [rax+1]
 * 00000001800B3260: add     rcx, rdx
 * 00000001800B3263: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B326A: lea     rax, [rax+1]
 * 00000001800B326E: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3272: jnz     short loc_1800B326A
 * 00000001800B3274: lea     rdx, [rax+1]
 * 00000001800B3278: add     rdx, rcx
 * 00000001800B327B: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3282: lea     rax, [rax+1]
 * 00000001800B3286: cmp     byte ptr [rdx+rax], 0
 * 00000001800B328A: jnz     short loc_1800B3282
 * 00000001800B328C: lea     rcx, [rax+1]
 * 00000001800B3290: add     rcx, rdx
 * 00000001800B3293: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B329A: lea     rax, [rax+1]
 * 00000001800B329E: cmp     byte ptr [rcx+rax], 0
 * 00000001800B32A2: jnz     short loc_1800B329A
 * 00000001800B32A4: lea     rdx, [rax+1]
 * 00000001800B32A8: add     rdx, rcx
 * 00000001800B32AB: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B32B2: lea     rax, [rax+1]
 * 00000001800B32B6: cmp     byte ptr [rdx+rax], 0
 * 00000001800B32BA: jnz     short loc_1800B32B2
 * 00000001800B32BC: lea     rcx, [rax+1]
 * 00000001800B32C0: add     rcx, rdx
 * 00000001800B32C3: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B32CA: lea     rax, [rax+1]
 * 00000001800B32CE: cmp     byte ptr [rcx+rax], 0
 * 00000001800B32D2: jnz     short loc_1800B32CA
 * 00000001800B32D4: lea     rdx, [rax+1]
 * 00000001800B32D8: add     rdx, rcx
 * 00000001800B32DB: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B32E2: lea     rax, [rax+1]
 * 00000001800B32E6: cmp     byte ptr [rdx+rax], 0
 * 00000001800B32EA: jnz     short loc_1800B32E2
 * 00000001800B32EC: lea     rcx, [rax+1]
 * 00000001800B32F0: add     rcx, rdx
 * 00000001800B32F3: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B32FA: lea     rax, [rax+1]
 * 00000001800B32FE: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3302: jnz     short loc_1800B32FA
 * 00000001800B3304: lea     rdx, [rax+1]
 * 00000001800B3308: add     rdx, rcx
 * 00000001800B330B: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3312: lea     rax, [rax+1]
 * 00000001800B3316: cmp     byte ptr [rdx+rax], 0
 * 00000001800B331A: jnz     short loc_1800B3312
 * 00000001800B331C: lea     rcx, [rax+1]
 * 00000001800B3320: add     rcx, rdx
 * 00000001800B3323: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B332A: lea     rax, [rax+1]
 * 00000001800B332E: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3332: jnz     short loc_1800B332A
 * 00000001800B3334: lea     rdx, [rax+1]
 * 00000001800B3338: add     rdx, rcx
 * 00000001800B333B: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3342: lea     rax, [rax+1]
 * 00000001800B3346: cmp     byte ptr [rdx+rax], 0
 * 00000001800B334A: jnz     short loc_1800B3342
 * 00000001800B334C: lea     rcx, [rax+1]
 * 00000001800B3350: add     rcx, rdx
 * 00000001800B3353: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B335A: lea     rax, [rax+1]
 * 00000001800B335E: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3362: jnz     short loc_1800B335A
 * 00000001800B3364: lea     rdx, [rax+1]
 * 00000001800B3368: add     rdx, rcx
 * 00000001800B336B: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3372: lea     rax, [rax+1]
 * 00000001800B3376: cmp     byte ptr [rdx+rax], 0
 * 00000001800B337A: jnz     short loc_1800B3372
 * 00000001800B337C: lea     rcx, [rax+1]
 * 00000001800B3380: add     rcx, rdx
 * 00000001800B3383: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B338A: lea     rax, [rax+1]
 * 00000001800B338E: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3392: jnz     short loc_1800B338A
 * 00000001800B3394: lea     rdx, [rax+1]
 * 00000001800B3398: add     rdx, rcx
 * 00000001800B339B: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B33A2: lea     rax, [rax+1]
 * 00000001800B33A6: cmp     byte ptr [rdx+rax], 0
 * 00000001800B33AA: jnz     short loc_1800B33A2
 * 00000001800B33AC: lea     rcx, [rax+1]
 * 00000001800B33B0: add     rcx, rdx
 * 00000001800B33B3: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B33BA: lea     rax, [rax+1]
 * 00000001800B33BE: cmp     byte ptr [rcx+rax], 0
 * 00000001800B33C2: jnz     short loc_1800B33BA
 * 00000001800B33C4: lea     rdx, [rax+1]
 * 00000001800B33C8: add     rdx, rcx
 * 00000001800B33CB: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B33D2: lea     rax, [rax+1]
 * 00000001800B33D6: cmp     byte ptr [rdx+rax], 0
 * 00000001800B33DA: jnz     short loc_1800B33D2
 * 00000001800B33DC: lea     rcx, [rax+1]
 * 00000001800B33E0: add     rcx, rdx
 * 00000001800B33E3: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B33EA: lea     rax, [rax+1]
 * 00000001800B33EE: cmp     byte ptr [rcx+rax], 0
 * 00000001800B33F2: jnz     short loc_1800B33EA
 * 00000001800B33F4: lea     rdx, [rax+1]
 * 00000001800B33F8: add     rdx, rcx
 * 00000001800B33FB: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3402: lea     rax, [rax+1]
 * 00000001800B3406: cmp     byte ptr [rdx+rax], 0
 * 00000001800B340A: jnz     short loc_1800B3402
 * 00000001800B340C: lea     rcx, [rax+1]
 * 00000001800B3410: add     rcx, rdx
 * 00000001800B3413: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B341A: lea     rax, [rax+1]
 * 00000001800B341E: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3422: jnz     short loc_1800B341A
 * 00000001800B3424: lea     rdx, [rax+1]
 * 00000001800B3428: add     rdx, rcx
 * 00000001800B342B: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3432: lea     rax, [rax+1]
 * 00000001800B3436: cmp     byte ptr [rdx+rax], 0
 * 00000001800B343A: jnz     short loc_1800B3432
 * 00000001800B343C: lea     rcx, [rax+1]
 * 00000001800B3440: add     rcx, rdx
 * 00000001800B3443: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B344A: inc     rax
 * 00000001800B344D: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3451: jnz     short loc_1800B344A
 * 00000001800B3453: inc     rax
 * 00000001800B3456: add     rcx, rax
 * 00000001800B3459: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3460: inc     rax
 * 00000001800B3463: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3467: jnz     short loc_1800B3460
 * 00000001800B3469: inc     rax
 * 00000001800B346C: add     rax, rcx
 * 00000001800B346F: jmp     loc_1800B313C
 * 00000001800B3474: lea     rax, [rax+1]
 * 00000001800B3478: cmp     byte ptr [rdx+rax], 0
 * 00000001800B347C: jnz     short loc_1800B3474
 * 00000001800B347E: lea     rcx, [rax+1]
 * 00000001800B3482: add     rcx, rdx
 * 00000001800B3485: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B348C: cmp     r8d, 8
 * 00000001800B3490: jnz     loc_1800B3733
 * 00000001800B3496: mov     [rdi], rdx
 * 00000001800B3499: lea     rax, [rax+1]
 * 00000001800B349D: cmp     byte ptr [rcx+rax], 0
 * 00000001800B34A1: jnz     short loc_1800B3499
 * 00000001800B34A3: lea     rdx, [rax+1]
 * 00000001800B34A7: add     rdx, rcx
 * 00000001800B34AA: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B34B1: lea     rax, [rax+1]
 * 00000001800B34B5: cmp     byte ptr [rdx+rax], 0
 * 00000001800B34B9: jnz     short loc_1800B34B1
 * 00000001800B34BB: lea     rcx, [rax+1]
 * 00000001800B34BF: add     rcx, rdx
 * 00000001800B34C2: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B34C9: lea     rax, [rax+1]
 * 00000001800B34CD: cmp     byte ptr [rcx+rax], 0
 * 00000001800B34D1: jnz     short loc_1800B34C9
 * 00000001800B34D3: lea     rdx, [rax+1]
 * 00000001800B34D7: add     rdx, rcx
 * 00000001800B34DA: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B34E1: lea     rax, [rax+1]
 * 00000001800B34E5: cmp     byte ptr [rdx+rax], 0
 * 00000001800B34E9: jnz     short loc_1800B34E1
 * 00000001800B34EB: lea     rcx, [rax+1]
 * 00000001800B34EF: add     rcx, rdx
 * 00000001800B34F2: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B34F9: lea     rax, [rax+1]
 * 00000001800B34FD: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3501: jnz     short loc_1800B34F9
 * 00000001800B3503: lea     rdx, [rax+1]
 * 00000001800B3507: add     rdx, rcx
 * 00000001800B350A: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3511: lea     rax, [rax+1]
 * 00000001800B3515: cmp     byte ptr [rdx+rax], 0
 * 00000001800B3519: jnz     short loc_1800B3511
 * 00000001800B351B: lea     rcx, [rax+1]
 * 00000001800B351F: add     rcx, rdx
 * 00000001800B3522: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3529: lea     rax, [rax+1]
 * 00000001800B352D: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3531: jnz     short loc_1800B3529
 * 00000001800B3533: lea     rdx, [rax+1]
 * 00000001800B3537: add     rdx, rcx
 * 00000001800B353A: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3541: lea     rax, [rax+1]
 * 00000001800B3545: cmp     byte ptr [rdx+rax], 0
 * 00000001800B3549: jnz     short loc_1800B3541
 * 00000001800B354B: lea     rcx, [rax+1]
 * 00000001800B354F: add     rcx, rdx
 * 00000001800B3552: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3559: lea     rax, [rax+1]
 * 00000001800B355D: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3561: jnz     short loc_1800B3559
 * 00000001800B3563: lea     rdx, [rax+1]
 * 00000001800B3567: add     rdx, rcx
 * 00000001800B356A: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3571: lea     rax, [rax+1]
 * 00000001800B3575: cmp     byte ptr [rdx+rax], 0
 * 00000001800B3579: jnz     short loc_1800B3571
 * 00000001800B357B: lea     rcx, [rax+1]
 * 00000001800B357F: add     rcx, rdx
 * 00000001800B3582: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3589: lea     rax, [rax+1]
 * 00000001800B358D: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3591: jnz     short loc_1800B3589
 * 00000001800B3593: lea     rdx, [rax+1]
 * 00000001800B3597: add     rdx, rcx
 * 00000001800B359A: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B35A1: lea     rax, [rax+1]
 * 00000001800B35A5: cmp     byte ptr [rdx+rax], 0
 * 00000001800B35A9: jnz     short loc_1800B35A1
 * 00000001800B35AB: lea     rcx, [rax+1]
 * 00000001800B35AF: add     rcx, rdx
 * 00000001800B35B2: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B35B9: lea     rax, [rax+1]
 * 00000001800B35BD: cmp     byte ptr [rcx+rax], 0
 * 00000001800B35C1: jnz     short loc_1800B35B9
 * 00000001800B35C3: lea     rdx, [rax+1]
 * 00000001800B35C7: add     rdx, rcx
 * 00000001800B35CA: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B35D1: lea     rax, [rax+1]
 * 00000001800B35D5: cmp     byte ptr [rdx+rax], 0
 * 00000001800B35D9: jnz     short loc_1800B35D1
 * 00000001800B35DB: lea     rcx, [rax+1]
 * 00000001800B35DF: add     rcx, rdx
 * 00000001800B35E2: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B35E9: lea     rax, [rax+1]
 * 00000001800B35ED: cmp     byte ptr [rcx+rax], 0
 * 00000001800B35F1: jnz     short loc_1800B35E9
 * 00000001800B35F3: lea     rdx, [rax+1]
 * 00000001800B35F7: add     rdx, rcx
 * 00000001800B35FA: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3601: lea     rax, [rax+1]
 * 00000001800B3605: cmp     byte ptr [rdx+rax], 0
 * 00000001800B3609: jnz     short loc_1800B3601
 * 00000001800B360B: lea     rcx, [rax+1]
 * 00000001800B360F: add     rcx, rdx
 * 00000001800B3612: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3619: lea     rax, [rax+1]
 * 00000001800B361D: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3621: jnz     short loc_1800B3619
 * 00000001800B3623: lea     rdx, [rax+1]
 * 00000001800B3627: add     rdx, rcx
 * 00000001800B362A: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3631: lea     rax, [rax+1]
 * 00000001800B3635: cmp     byte ptr [rdx+rax], 0
 * 00000001800B3639: jnz     short loc_1800B3631
 * 00000001800B363B: lea     rcx, [rax+1]
 * 00000001800B363F: add     rcx, rdx
 * 00000001800B3642: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3649: lea     rax, [rax+1]
 * 00000001800B364D: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3651: jnz     short loc_1800B3649
 * 00000001800B3653: lea     rdx, [rax+1]
 * 00000001800B3657: add     rdx, rcx
 * 00000001800B365A: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3661: lea     rax, [rax+1]
 * 00000001800B3665: cmp     byte ptr [rdx+rax], 0
 * 00000001800B3669: jnz     short loc_1800B3661
 * 00000001800B366B: lea     rcx, [rax+1]
 * 00000001800B366F: add     rcx, rdx
 * 00000001800B3672: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3679: lea     rax, [rax+1]
 * 00000001800B367D: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3681: jnz     short loc_1800B3679
 * 00000001800B3683: lea     rdx, [rax+1]
 * 00000001800B3687: add     rdx, rcx
 * 00000001800B368A: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3691: lea     rax, [rax+1]
 * 00000001800B3695: cmp     byte ptr [rdx+rax], 0
 * 00000001800B3699: jnz     short loc_1800B3691
 * 00000001800B369B: lea     rcx, [rax+1]
 * 00000001800B369F: add     rcx, rdx
 * 00000001800B36A2: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B36A9: lea     rax, [rax+1]
 * 00000001800B36AD: cmp     byte ptr [rcx+rax], 0
 * 00000001800B36B1: jnz     short loc_1800B36A9
 * 00000001800B36B3: lea     rdx, [rax+1]
 * 00000001800B36B7: add     rdx, rcx
 * 00000001800B36BA: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B36C1: lea     rax, [rax+1]
 * 00000001800B36C5: cmp     byte ptr [rdx+rax], 0
 * 00000001800B36C9: jnz     short loc_1800B36C1
 * 00000001800B36CB: lea     rcx, [rax+1]
 * 00000001800B36CF: add     rcx, rdx
 * 00000001800B36D2: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B36D9: lea     rax, [rax+1]
 * 00000001800B36DD: cmp     byte ptr [rcx+rax], 0
 * 00000001800B36E1: jnz     short loc_1800B36D9
 * 00000001800B36E3: lea     rdx, [rax+1]
 * 00000001800B36E7: add     rdx, rcx
 * 00000001800B36EA: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B36F1: lea     rax, [rax+1]
 * 00000001800B36F5: cmp     byte ptr [rdx+rax], 0
 * 00000001800B36F9: jnz     short loc_1800B36F1
 * 00000001800B36FB: lea     rcx, [rax+1]
 * 00000001800B36FF: add     rcx, rdx
 * 00000001800B3702: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3709: inc     rax
 * 00000001800B370C: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3710: jnz     short loc_1800B3709
 * 00000001800B3712: inc     rax
 * 00000001800B3715: add     rcx, rax
 * 00000001800B3718: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B371F: inc     rax
 * 00000001800B3722: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3726: jnz     short loc_1800B371F
 * 00000001800B3728: inc     rax
 * 00000001800B372B: add     rax, rcx
 * 00000001800B372E: jmp     loc_1800B313C
 * 00000001800B3733: inc     rax
 * 00000001800B3736: cmp     byte ptr [rcx+rax], 0
 * 00000001800B373A: jnz     short loc_1800B3733
 * 00000001800B373C: cmp     r8d, 9
 * 00000001800B3740: jnz     loc_1800B39D9
 * 00000001800B3746: mov     [rdi], rcx
 * 00000001800B3749: lea     rdx, [rax+1]
 * 00000001800B374D: add     rdx, rcx
 * 00000001800B3750: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3757: lea     rax, [rax+1]
 * 00000001800B375B: cmp     byte ptr [rdx+rax], 0
 * 00000001800B375F: jnz     short loc_1800B3757
 * 00000001800B3761: lea     rcx, [rax+1]
 * 00000001800B3765: add     rcx, rdx
 * 00000001800B3768: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B376F: lea     rax, [rax+1]
 * 00000001800B3773: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3777: jnz     short loc_1800B376F
 * 00000001800B3779: lea     rdx, [rax+1]
 * 00000001800B377D: add     rdx, rcx
 * 00000001800B3780: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3787: lea     rax, [rax+1]
 * 00000001800B378B: cmp     byte ptr [rdx+rax], 0
 * 00000001800B378F: jnz     short loc_1800B3787
 * 00000001800B3791: lea     rcx, [rax+1]
 * 00000001800B3795: add     rcx, rdx
 * 00000001800B3798: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B379F: lea     rax, [rax+1]
 * 00000001800B37A3: cmp     byte ptr [rcx+rax], 0
 * 00000001800B37A7: jnz     short loc_1800B379F
 * 00000001800B37A9: lea     rdx, [rax+1]
 * 00000001800B37AD: add     rdx, rcx
 * 00000001800B37B0: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B37B7: lea     rax, [rax+1]
 * 00000001800B37BB: cmp     byte ptr [rdx+rax], 0
 * 00000001800B37BF: jnz     short loc_1800B37B7
 * 00000001800B37C1: lea     rcx, [rax+1]
 * 00000001800B37C5: add     rcx, rdx
 * 00000001800B37C8: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B37CF: lea     rax, [rax+1]
 * 00000001800B37D3: cmp     byte ptr [rcx+rax], 0
 * 00000001800B37D7: jnz     short loc_1800B37CF
 * 00000001800B37D9: lea     rdx, [rax+1]
 * 00000001800B37DD: add     rdx, rcx
 * 00000001800B37E0: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B37E7: lea     rax, [rax+1]
 * 00000001800B37EB: cmp     byte ptr [rdx+rax], 0
 * 00000001800B37EF: jnz     short loc_1800B37E7
 * 00000001800B37F1: lea     rcx, [rax+1]
 * 00000001800B37F5: add     rcx, rdx
 * 00000001800B37F8: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B37FF: lea     rax, [rax+1]
 * 00000001800B3803: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3807: jnz     short loc_1800B37FF
 * 00000001800B3809: lea     rdx, [rax+1]
 * 00000001800B380D: add     rdx, rcx
 * 00000001800B3810: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3817: lea     rax, [rax+1]
 * 00000001800B381B: cmp     byte ptr [rdx+rax], 0
 * 00000001800B381F: jnz     short loc_1800B3817
 * 00000001800B3821: lea     rcx, [rax+1]
 * 00000001800B3825: add     rcx, rdx
 * 00000001800B3828: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B382F: lea     rax, [rax+1]
 * 00000001800B3833: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3837: jnz     short loc_1800B382F
 * 00000001800B3839: lea     rdx, [rax+1]
 * 00000001800B383D: add     rdx, rcx
 * 00000001800B3840: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3847: lea     rax, [rax+1]
 * 00000001800B384B: cmp     byte ptr [rdx+rax], 0
 * 00000001800B384F: jnz     short loc_1800B3847
 * 00000001800B3851: lea     rcx, [rax+1]
 * 00000001800B3855: add     rcx, rdx
 * 00000001800B3858: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B385F: lea     rax, [rax+1]
 * 00000001800B3863: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3867: jnz     short loc_1800B385F
 * 00000001800B3869: lea     rdx, [rax+1]
 * 00000001800B386D: add     rdx, rcx
 * 00000001800B3870: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3877: lea     rax, [rax+1]
 * 00000001800B387B: cmp     byte ptr [rdx+rax], 0
 * 00000001800B387F: jnz     short loc_1800B3877
 * 00000001800B3881: lea     rcx, [rax+1]
 * 00000001800B3885: add     rcx, rdx
 * 00000001800B3888: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B388F: lea     rax, [rax+1]
 * 00000001800B3893: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3897: jnz     short loc_1800B388F
 * 00000001800B3899: lea     rdx, [rax+1]
 * 00000001800B389D: add     rdx, rcx
 * 00000001800B38A0: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B38A7: lea     rax, [rax+1]
 * 00000001800B38AB: cmp     byte ptr [rdx+rax], 0
 * 00000001800B38AF: jnz     short loc_1800B38A7
 * 00000001800B38B1: lea     rcx, [rax+1]
 * 00000001800B38B5: add     rcx, rdx
 * 00000001800B38B8: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B38BF: lea     rax, [rax+1]
 * 00000001800B38C3: cmp     byte ptr [rcx+rax], 0
 * 00000001800B38C7: jnz     short loc_1800B38BF
 * 00000001800B38C9: lea     rdx, [rax+1]
 * 00000001800B38CD: add     rdx, rcx
 * 00000001800B38D0: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B38D7: lea     rax, [rax+1]
 * 00000001800B38DB: cmp     byte ptr [rdx+rax], 0
 * 00000001800B38DF: jnz     short loc_1800B38D7
 * 00000001800B38E1: lea     rcx, [rax+1]
 * 00000001800B38E5: add     rcx, rdx
 * 00000001800B38E8: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B38EF: lea     rax, [rax+1]
 * 00000001800B38F3: cmp     byte ptr [rcx+rax], 0
 * 00000001800B38F7: jnz     short loc_1800B38EF
 * 00000001800B38F9: lea     rdx, [rax+1]
 * 00000001800B38FD: add     rdx, rcx
 * 00000001800B3900: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3907: lea     rax, [rax+1]
 * 00000001800B390B: cmp     byte ptr [rdx+rax], 0
 * 00000001800B390F: jnz     short loc_1800B3907
 * 00000001800B3911: lea     rcx, [rax+1]
 * 00000001800B3915: add     rcx, rdx
 * 00000001800B3918: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B391F: lea     rax, [rax+1]
 * 00000001800B3923: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3927: jnz     short loc_1800B391F
 * 00000001800B3929: lea     rdx, [rax+1]
 * 00000001800B392D: add     rdx, rcx
 * 00000001800B3930: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3937: lea     rax, [rax+1]
 * 00000001800B393B: cmp     byte ptr [rdx+rax], 0
 * 00000001800B393F: jnz     short loc_1800B3937
 * 00000001800B3941: lea     rcx, [rax+1]
 * 00000001800B3945: add     rcx, rdx
 * 00000001800B3948: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B394F: lea     rax, [rax+1]
 * 00000001800B3953: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3957: jnz     short loc_1800B394F
 * 00000001800B3959: lea     rdx, [rax+1]
 * 00000001800B395D: add     rdx, rcx
 * 00000001800B3960: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3967: lea     rax, [rax+1]
 * 00000001800B396B: cmp     byte ptr [rdx+rax], 0
 * 00000001800B396F: jnz     short loc_1800B3967
 * 00000001800B3971: lea     rcx, [rax+1]
 * 00000001800B3975: add     rcx, rdx
 * 00000001800B3978: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B397F: lea     rax, [rax+1]
 * 00000001800B3983: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3987: jnz     short loc_1800B397F
 * 00000001800B3989: lea     rdx, [rax+1]
 * 00000001800B398D: add     rdx, rcx
 * 00000001800B3990: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3997: lea     rax, [rax+1]
 * 00000001800B399B: cmp     byte ptr [rdx+rax], 0
 * 00000001800B399F: jnz     short loc_1800B3997
 * 00000001800B39A1: lea     rcx, [rax+1]
 * 00000001800B39A5: add     rcx, rdx
 * 00000001800B39A8: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B39AF: inc     rax
 * 00000001800B39B2: cmp     byte ptr [rcx+rax], 0
 * 00000001800B39B6: jnz     short loc_1800B39AF
 * 00000001800B39B8: inc     rax
 * 00000001800B39BB: add     rcx, rax
 * 00000001800B39BE: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B39C5: inc     rax
 * 00000001800B39C8: cmp     byte ptr [rcx+rax], 0
 * 00000001800B39CC: jnz     short loc_1800B39C5
 * 00000001800B39CE: inc     rax
 * 00000001800B39D1: add     rax, rcx
 * 00000001800B39D4: jmp     loc_1800B313C
 * 00000001800B39D9: inc     rcx
 * 00000001800B39DC: add     rcx, rax
 * 00000001800B39DF: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B39E6: cmp     r8d, 0Ah
 * 00000001800B39EA: jnz     loc_1800B3C77
 * 00000001800B39F0: mov     [rdi], rcx
 * 00000001800B39F3: lea     rax, [rax+1]
 * 00000001800B39F7: cmp     byte ptr [rcx+rax], 0
 * 00000001800B39FB: jnz     short loc_1800B39F3
 * 00000001800B39FD: lea     rdx, [rax+1]
 * 00000001800B3A01: add     rdx, rcx
 * 00000001800B3A04: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3A0B: lea     rax, [rax+1]
 * 00000001800B3A0F: cmp     byte ptr [rdx+rax], 0
 * 00000001800B3A13: jnz     short loc_1800B3A0B
 * 00000001800B3A15: lea     rcx, [rax+1]
 * 00000001800B3A19: add     rcx, rdx
 * 00000001800B3A1C: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3A23: lea     rax, [rax+1]
 * 00000001800B3A27: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3A2B: jnz     short loc_1800B3A23
 * 00000001800B3A2D: lea     rdx, [rax+1]
 * 00000001800B3A31: add     rdx, rcx
 * 00000001800B3A34: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3A3B: lea     rax, [rax+1]
 * 00000001800B3A3F: cmp     byte ptr [rdx+rax], 0
 * 00000001800B3A43: jnz     short loc_1800B3A3B
 * 00000001800B3A45: lea     rcx, [rax+1]
 * 00000001800B3A49: add     rcx, rdx
 * 00000001800B3A4C: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3A53: lea     rax, [rax+1]
 * 00000001800B3A57: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3A5B: jnz     short loc_1800B3A53
 * 00000001800B3A5D: lea     rdx, [rax+1]
 * 00000001800B3A61: add     rdx, rcx
 * 00000001800B3A64: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3A6B: lea     rax, [rax+1]
 * 00000001800B3A6F: cmp     byte ptr [rdx+rax], 0
 * 00000001800B3A73: jnz     short loc_1800B3A6B
 * 00000001800B3A75: lea     rcx, [rax+1]
 * 00000001800B3A79: add     rcx, rdx
 * 00000001800B3A7C: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3A83: lea     rax, [rax+1]
 * 00000001800B3A87: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3A8B: jnz     short loc_1800B3A83
 * 00000001800B3A8D: lea     rdx, [rax+1]
 * 00000001800B3A91: add     rdx, rcx
 * 00000001800B3A94: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3A9B: lea     rax, [rax+1]
 * 00000001800B3A9F: cmp     byte ptr [rdx+rax], 0
 * 00000001800B3AA3: jnz     short loc_1800B3A9B
 * 00000001800B3AA5: lea     rcx, [rax+1]
 * 00000001800B3AA9: add     rcx, rdx
 * 00000001800B3AAC: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3AB3: lea     rax, [rax+1]
 * 00000001800B3AB7: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3ABB: jnz     short loc_1800B3AB3
 * 00000001800B3ABD: lea     rdx, [rax+1]
 * 00000001800B3AC1: add     rdx, rcx
 * 00000001800B3AC4: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3ACB: lea     rax, [rax+1]
 * 00000001800B3ACF: cmp     byte ptr [rdx+rax], 0
 * 00000001800B3AD3: jnz     short loc_1800B3ACB
 * 00000001800B3AD5: lea     rcx, [rax+1]
 * 00000001800B3AD9: add     rcx, rdx
 * 00000001800B3ADC: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3AE3: lea     rax, [rax+1]
 * 00000001800B3AE7: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3AEB: jnz     short loc_1800B3AE3
 * 00000001800B3AED: lea     rdx, [rax+1]
 * 00000001800B3AF1: add     rdx, rcx
 * 00000001800B3AF4: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3AFB: lea     rax, [rax+1]
 * 00000001800B3AFF: cmp     byte ptr [rdx+rax], 0
 * 00000001800B3B03: jnz     short loc_1800B3AFB
 * 00000001800B3B05: lea     rcx, [rax+1]
 * 00000001800B3B09: add     rcx, rdx
 * 00000001800B3B0C: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3B13: lea     rax, [rax+1]
 * 00000001800B3B17: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3B1B: jnz     short loc_1800B3B13
 * 00000001800B3B1D: lea     rdx, [rax+1]
 * 00000001800B3B21: add     rdx, rcx
 * 00000001800B3B24: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3B2B: lea     rax, [rax+1]
 * 00000001800B3B2F: cmp     byte ptr [rdx+rax], 0
 * 00000001800B3B33: jnz     short loc_1800B3B2B
 * 00000001800B3B35: lea     rcx, [rax+1]
 * 00000001800B3B39: add     rcx, rdx
 * 00000001800B3B3C: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3B43: lea     rax, [rax+1]
 * 00000001800B3B47: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3B4B: jnz     short loc_1800B3B43
 * 00000001800B3B4D: lea     rdx, [rax+1]
 * 00000001800B3B51: add     rdx, rcx
 * 00000001800B3B54: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3B5B: lea     rax, [rax+1]
 * 00000001800B3B5F: cmp     byte ptr [rdx+rax], 0
 * 00000001800B3B63: jnz     short loc_1800B3B5B
 * 00000001800B3B65: lea     rcx, [rax+1]
 * 00000001800B3B69: add     rcx, rdx
 * 00000001800B3B6C: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3B73: lea     rax, [rax+1]
 * 00000001800B3B77: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3B7B: jnz     short loc_1800B3B73
 * 00000001800B3B7D: lea     rdx, [rax+1]
 * 00000001800B3B81: add     rdx, rcx
 * 00000001800B3B84: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3B8B: lea     rax, [rax+1]
 * 00000001800B3B8F: cmp     byte ptr [rdx+rax], 0
 * 00000001800B3B93: jnz     short loc_1800B3B8B
 * 00000001800B3B95: lea     rcx, [rax+1]
 * 00000001800B3B99: add     rcx, rdx
 * 00000001800B3B9C: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3BA3: lea     rax, [rax+1]
 * 00000001800B3BA7: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3BAB: jnz     short loc_1800B3BA3
 * 00000001800B3BAD: lea     rdx, [rax+1]
 * 00000001800B3BB1: add     rdx, rcx
 * 00000001800B3BB4: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3BBB: lea     rax, [rax+1]
 * 00000001800B3BBF: cmp     byte ptr [rdx+rax], 0
 * 00000001800B3BC3: jnz     short loc_1800B3BBB
 * 00000001800B3BC5: lea     rcx, [rax+1]
 * 00000001800B3BC9: add     rcx, rdx
 * 00000001800B3BCC: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3BD3: lea     rax, [rax+1]
 * 00000001800B3BD7: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3BDB: jnz     short loc_1800B3BD3
 * 00000001800B3BDD: lea     rdx, [rax+1]
 * 00000001800B3BE1: add     rdx, rcx
 * 00000001800B3BE4: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3BEB: lea     rax, [rax+1]
 * 00000001800B3BEF: cmp     byte ptr [rdx+rax], 0
 * 00000001800B3BF3: jnz     short loc_1800B3BEB
 * 00000001800B3BF5: lea     rcx, [rax+1]
 * 00000001800B3BF9: add     rcx, rdx
 * 00000001800B3BFC: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3C03: lea     rax, [rax+1]
 * 00000001800B3C07: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3C0B: jnz     short loc_1800B3C03
 * 00000001800B3C0D: lea     rdx, [rax+1]
 * 00000001800B3C11: add     rdx, rcx
 * 00000001800B3C14: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3C1B: lea     rax, [rax+1]
 * 00000001800B3C1F: cmp     byte ptr [rdx+rax], 0
 * 00000001800B3C23: jnz     short loc_1800B3C1B
 * 00000001800B3C25: lea     rcx, [rax+1]
 * 00000001800B3C29: add     rcx, rdx
 * 00000001800B3C2C: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3C33: lea     rax, [rax+1]
 * 00000001800B3C37: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3C3B: jnz     short loc_1800B3C33
 * 00000001800B3C3D: lea     rdx, [rax+1]
 * 00000001800B3C41: add     rdx, rcx
 * 00000001800B3C44: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3C4B: lea     rax, [rax+1]
 * 00000001800B3C4F: cmp     byte ptr [rdx+rax], 0
 * 00000001800B3C53: jnz     short loc_1800B3C4B
 * 00000001800B3C55: lea     rcx, [rax+1]
 * 00000001800B3C59: add     rcx, rdx
 * 00000001800B3C5C: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3C63: inc     rax
 * 00000001800B3C66: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3C6A: jnz     short loc_1800B3C63
 * 00000001800B3C6C: inc     rax
 * 00000001800B3C6F: add     rax, rcx
 * 00000001800B3C72: jmp     loc_1800B313C
 * 00000001800B3C77: inc     rax
 * 00000001800B3C7A: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3C7E: jnz     short loc_1800B3C77
 * 00000001800B3C80: inc     rax
 * 00000001800B3C83: add     rax, rcx
 * 00000001800B3C86: mov     rcx, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3C8D: cmp     r8d, 0Bh
 * 00000001800B3C91: jnz     loc_1800B3F03
 * 00000001800B3C97: mov     [rdi], rax
 * 00000001800B3C9A: inc     rcx
 * 00000001800B3C9D: cmp     byte ptr [rax+rcx], 0
 * 00000001800B3CA1: jnz     short loc_1800B3C9A
 * 00000001800B3CA3: lea     rdx, [rax+1]
 * 00000001800B3CA7: add     rdx, rcx
 * 00000001800B3CAA: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3CB1: lea     rax, [rax+1]
 * 00000001800B3CB5: cmp     byte ptr [rdx+rax], 0
 * 00000001800B3CB9: jnz     short loc_1800B3CB1
 * 00000001800B3CBB: lea     rcx, [rax+1]
 * 00000001800B3CBF: add     rcx, rdx
 * 00000001800B3CC2: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3CC9: lea     rax, [rax+1]
 * 00000001800B3CCD: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3CD1: jnz     short loc_1800B3CC9
 * 00000001800B3CD3: lea     rdx, [rax+1]
 * 00000001800B3CD7: add     rdx, rcx
 * 00000001800B3CDA: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3CE1: lea     rax, [rax+1]
 * 00000001800B3CE5: cmp     byte ptr [rdx+rax], 0
 * 00000001800B3CE9: jnz     short loc_1800B3CE1
 * 00000001800B3CEB: lea     rcx, [rax+1]
 * 00000001800B3CEF: add     rcx, rdx
 * 00000001800B3CF2: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3CF9: lea     rax, [rax+1]
 * 00000001800B3CFD: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3D01: jnz     short loc_1800B3CF9
 * 00000001800B3D03: lea     rdx, [rax+1]
 * 00000001800B3D07: add     rdx, rcx
 * 00000001800B3D0A: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3D11: lea     rax, [rax+1]
 * 00000001800B3D15: cmp     byte ptr [rdx+rax], 0
 * 00000001800B3D19: jnz     short loc_1800B3D11
 * 00000001800B3D1B: lea     rcx, [rax+1]
 * 00000001800B3D1F: add     rcx, rdx
 * 00000001800B3D22: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3D29: lea     rax, [rax+1]
 * 00000001800B3D2D: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3D31: jnz     short loc_1800B3D29
 * 00000001800B3D33: lea     rdx, [rax+1]
 * 00000001800B3D37: add     rdx, rcx
 * 00000001800B3D3A: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3D41: lea     rax, [rax+1]
 * 00000001800B3D45: cmp     byte ptr [rdx+rax], 0
 * 00000001800B3D49: jnz     short loc_1800B3D41
 * 00000001800B3D4B: lea     rcx, [rax+1]
 * 00000001800B3D4F: add     rcx, rdx
 * 00000001800B3D52: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3D59: lea     rax, [rax+1]
 * 00000001800B3D5D: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3D61: jnz     short loc_1800B3D59
 * 00000001800B3D63: lea     rdx, [rax+1]
 * 00000001800B3D67: add     rdx, rcx
 * 00000001800B3D6A: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3D71: lea     rax, [rax+1]
 * 00000001800B3D75: cmp     byte ptr [rdx+rax], 0
 * 00000001800B3D79: jnz     short loc_1800B3D71
 * 00000001800B3D7B: lea     rcx, [rax+1]
 * 00000001800B3D7F: add     rcx, rdx
 * 00000001800B3D82: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3D89: lea     rax, [rax+1]
 * 00000001800B3D8D: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3D91: jnz     short loc_1800B3D89
 * 00000001800B3D93: lea     rdx, [rax+1]
 * 00000001800B3D97: add     rdx, rcx
 * 00000001800B3D9A: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3DA1: lea     rax, [rax+1]
 * 00000001800B3DA5: cmp     byte ptr [rdx+rax], 0
 * 00000001800B3DA9: jnz     short loc_1800B3DA1
 * 00000001800B3DAB: lea     rcx, [rax+1]
 * 00000001800B3DAF: add     rcx, rdx
 * 00000001800B3DB2: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3DB9: lea     rax, [rax+1]
 * 00000001800B3DBD: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3DC1: jnz     short loc_1800B3DB9
 * 00000001800B3DC3: lea     rdx, [rax+1]
 * 00000001800B3DC7: add     rdx, rcx
 * 00000001800B3DCA: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3DD1: lea     rax, [rax+1]
 * 00000001800B3DD5: cmp     byte ptr [rdx+rax], 0
 * 00000001800B3DD9: jnz     short loc_1800B3DD1
 * 00000001800B3DDB: lea     rcx, [rax+1]
 * 00000001800B3DDF: add     rcx, rdx
 * 00000001800B3DE2: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3DE9: lea     rax, [rax+1]
 * 00000001800B3DED: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3DF1: jnz     short loc_1800B3DE9
 * 00000001800B3DF3: lea     rdx, [rax+1]
 * 00000001800B3DF7: add     rdx, rcx
 * 00000001800B3DFA: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3E01: lea     rax, [rax+1]
 * 00000001800B3E05: cmp     byte ptr [rdx+rax], 0
 * 00000001800B3E09: jnz     short loc_1800B3E01
 * 00000001800B3E0B: lea     rcx, [rax+1]
 * 00000001800B3E0F: add     rcx, rdx
 * 00000001800B3E12: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3E19: lea     rax, [rax+1]
 * 00000001800B3E1D: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3E21: jnz     short loc_1800B3E19
 * 00000001800B3E23: lea     rdx, [rax+1]
 * 00000001800B3E27: add     rdx, rcx
 * 00000001800B3E2A: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3E31: lea     rax, [rax+1]
 * 00000001800B3E35: cmp     byte ptr [rdx+rax], 0
 * 00000001800B3E39: jnz     short loc_1800B3E31
 * 00000001800B3E3B: lea     rcx, [rax+1]
 * 00000001800B3E3F: add     rcx, rdx
 * 00000001800B3E42: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3E49: lea     rax, [rax+1]
 * 00000001800B3E4D: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3E51: jnz     short loc_1800B3E49
 * 00000001800B3E53: lea     rdx, [rax+1]
 * 00000001800B3E57: add     rdx, rcx
 * 00000001800B3E5A: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3E61: lea     rax, [rax+1]
 * 00000001800B3E65: cmp     byte ptr [rdx+rax], 0
 * 00000001800B3E69: jnz     short loc_1800B3E61
 * 00000001800B3E6B: lea     rcx, [rax+1]
 * 00000001800B3E6F: add     rcx, rdx
 * 00000001800B3E72: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3E79: lea     rax, [rax+1]
 * 00000001800B3E7D: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3E81: jnz     short loc_1800B3E79
 * 00000001800B3E83: lea     rdx, [rax+1]
 * 00000001800B3E87: add     rdx, rcx
 * 00000001800B3E8A: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3E91: lea     rax, [rax+1]
 * 00000001800B3E95: cmp     byte ptr [rdx+rax], 0
 * 00000001800B3E99: jnz     short loc_1800B3E91
 * 00000001800B3E9B: lea     rcx, [rax+1]
 * 00000001800B3E9F: add     rcx, rdx
 * 00000001800B3EA2: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3EA9: lea     rax, [rax+1]
 * 00000001800B3EAD: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3EB1: jnz     short loc_1800B3EA9
 * 00000001800B3EB3: lea     rdx, [rax+1]
 * 00000001800B3EB7: add     rdx, rcx
 * 00000001800B3EBA: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3EC1: lea     rax, [rax+1]
 * 00000001800B3EC5: cmp     byte ptr [rdx+rax], 0
 * 00000001800B3EC9: jnz     short loc_1800B3EC1
 * 00000001800B3ECB: lea     rcx, [rax+1]
 * 00000001800B3ECF: add     rcx, rdx
 * 00000001800B3ED2: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3ED9: inc     rax
 * 00000001800B3EDC: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3EE0: jnz     short loc_1800B3ED9
 * 00000001800B3EE2: inc     rax
 * 00000001800B3EE5: add     rcx, rax
 * 00000001800B3EE8: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3EEF: inc     rax
 * 00000001800B3EF2: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3EF6: jnz     short loc_1800B3EEF
 * 00000001800B3EF8: inc     rax
 * 00000001800B3EFB: add     rax, rcx
 * 00000001800B3EFE: jmp     loc_1800B313C
 * 00000001800B3F03: inc     rcx
 * 00000001800B3F06: cmp     byte ptr [rax+rcx], 0
 * 00000001800B3F0A: jnz     short loc_1800B3F03
 * 00000001800B3F0C: inc     rcx
 * 00000001800B3F0F: add     rcx, rax
 * 00000001800B3F12: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3F19: cmp     r8d, 0Ch
 * 00000001800B3F1D: jnz     loc_1800B417A
 * 00000001800B3F23: mov     [rdi], rcx
 * 00000001800B3F26: lea     rax, [rax+1]
 * 00000001800B3F2A: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3F2E: jnz     short loc_1800B3F26
 * 00000001800B3F30: lea     rdx, [rax+1]
 * 00000001800B3F34: add     rdx, rcx
 * 00000001800B3F37: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3F3E: lea     rax, [rax+1]
 * 00000001800B3F42: cmp     byte ptr [rdx+rax], 0
 * 00000001800B3F46: jnz     short loc_1800B3F3E
 * 00000001800B3F48: lea     rcx, [rax+1]
 * 00000001800B3F4C: add     rcx, rdx
 * 00000001800B3F4F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3F56: lea     rax, [rax+1]
 * 00000001800B3F5A: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3F5E: jnz     short loc_1800B3F56
 * 00000001800B3F60: lea     rdx, [rax+1]
 * 00000001800B3F64: add     rdx, rcx
 * 00000001800B3F67: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3F6E: lea     rax, [rax+1]
 * 00000001800B3F72: cmp     byte ptr [rdx+rax], 0
 * 00000001800B3F76: jnz     short loc_1800B3F6E
 * 00000001800B3F78: lea     rcx, [rax+1]
 * 00000001800B3F7C: add     rcx, rdx
 * 00000001800B3F7F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3F86: lea     rax, [rax+1]
 * 00000001800B3F8A: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3F8E: jnz     short loc_1800B3F86
 * 00000001800B3F90: lea     rdx, [rax+1]
 * 00000001800B3F94: add     rdx, rcx
 * 00000001800B3F97: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3F9E: lea     rax, [rax+1]
 * 00000001800B3FA2: cmp     byte ptr [rdx+rax], 0
 * 00000001800B3FA6: jnz     short loc_1800B3F9E
 * 00000001800B3FA8: lea     rcx, [rax+1]
 * 00000001800B3FAC: add     rcx, rdx
 * 00000001800B3FAF: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3FB6: lea     rax, [rax+1]
 * 00000001800B3FBA: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3FBE: jnz     short loc_1800B3FB6
 * 00000001800B3FC0: lea     rdx, [rax+1]
 * 00000001800B3FC4: add     rdx, rcx
 * 00000001800B3FC7: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3FCE: lea     rax, [rax+1]
 * 00000001800B3FD2: cmp     byte ptr [rdx+rax], 0
 * 00000001800B3FD6: jnz     short loc_1800B3FCE
 * 00000001800B3FD8: lea     rcx, [rax+1]
 * 00000001800B3FDC: add     rcx, rdx
 * 00000001800B3FDF: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3FE6: lea     rax, [rax+1]
 * 00000001800B3FEA: cmp     byte ptr [rcx+rax], 0
 * 00000001800B3FEE: jnz     short loc_1800B3FE6
 * 00000001800B3FF0: lea     rdx, [rax+1]
 * 00000001800B3FF4: add     rdx, rcx
 * 00000001800B3FF7: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B3FFE: lea     rax, [rax+1]
 * 00000001800B4002: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4006: jnz     short loc_1800B3FFE
 * 00000001800B4008: lea     rcx, [rax+1]
 * 00000001800B400C: add     rcx, rdx
 * 00000001800B400F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4016: lea     rax, [rax+1]
 * 00000001800B401A: cmp     byte ptr [rcx+rax], 0
 * 00000001800B401E: jnz     short loc_1800B4016
 * 00000001800B4020: lea     rdx, [rax+1]
 * 00000001800B4024: add     rdx, rcx
 * 00000001800B4027: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B402E: lea     rax, [rax+1]
 * 00000001800B4032: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4036: jnz     short loc_1800B402E
 * 00000001800B4038: lea     rcx, [rax+1]
 * 00000001800B403C: add     rcx, rdx
 * 00000001800B403F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4046: lea     rax, [rax+1]
 * 00000001800B404A: cmp     byte ptr [rcx+rax], 0
 * 00000001800B404E: jnz     short loc_1800B4046
 * 00000001800B4050: lea     rdx, [rax+1]
 * 00000001800B4054: add     rdx, rcx
 * 00000001800B4057: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B405E: lea     rax, [rax+1]
 * 00000001800B4062: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4066: jnz     short loc_1800B405E
 * 00000001800B4068: lea     rcx, [rax+1]
 * 00000001800B406C: add     rcx, rdx
 * 00000001800B406F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4076: lea     rax, [rax+1]
 * 00000001800B407A: cmp     byte ptr [rcx+rax], 0
 * 00000001800B407E: jnz     short loc_1800B4076
 * 00000001800B4080: lea     rdx, [rax+1]
 * 00000001800B4084: add     rdx, rcx
 * 00000001800B4087: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B408E: lea     rax, [rax+1]
 * 00000001800B4092: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4096: jnz     short loc_1800B408E
 * 00000001800B4098: lea     rcx, [rax+1]
 * 00000001800B409C: add     rcx, rdx
 * 00000001800B409F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B40A6: lea     rax, [rax+1]
 * 00000001800B40AA: cmp     byte ptr [rcx+rax], 0
 * 00000001800B40AE: jnz     short loc_1800B40A6
 * 00000001800B40B0: lea     rdx, [rax+1]
 * 00000001800B40B4: add     rdx, rcx
 * 00000001800B40B7: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B40BE: lea     rax, [rax+1]
 * 00000001800B40C2: cmp     byte ptr [rdx+rax], 0
 * 00000001800B40C6: jnz     short loc_1800B40BE
 * 00000001800B40C8: lea     rcx, [rax+1]
 * 00000001800B40CC: add     rcx, rdx
 * 00000001800B40CF: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B40D6: lea     rax, [rax+1]
 * 00000001800B40DA: cmp     byte ptr [rcx+rax], 0
 * 00000001800B40DE: jnz     short loc_1800B40D6
 * 00000001800B40E0: lea     rdx, [rax+1]
 * 00000001800B40E4: add     rdx, rcx
 * 00000001800B40E7: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B40EE: lea     rax, [rax+1]
 * 00000001800B40F2: cmp     byte ptr [rdx+rax], 0
 * 00000001800B40F6: jnz     short loc_1800B40EE
 * 00000001800B40F8: lea     rcx, [rax+1]
 * 00000001800B40FC: add     rcx, rdx
 * 00000001800B40FF: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4106: lea     rax, [rax+1]
 * 00000001800B410A: cmp     byte ptr [rcx+rax], 0
 * 00000001800B410E: jnz     short loc_1800B4106
 * 00000001800B4110: lea     rdx, [rax+1]
 * 00000001800B4114: add     rdx, rcx
 * 00000001800B4117: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B411E: lea     rax, [rax+1]
 * 00000001800B4122: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4126: jnz     short loc_1800B411E
 * 00000001800B4128: lea     rcx, [rax+1]
 * 00000001800B412C: add     rcx, rdx
 * 00000001800B412F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4136: lea     rax, [rax+1]
 * 00000001800B413A: cmp     byte ptr [rcx+rax], 0
 * 00000001800B413E: jnz     short loc_1800B4136
 * 00000001800B4140: lea     rdx, [rax+1]
 * 00000001800B4144: add     rdx, rcx
 * 00000001800B4147: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B414E: lea     rax, [rax+1]
 * 00000001800B4152: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4156: jnz     short loc_1800B414E
 * 00000001800B4158: lea     rcx, [rax+1]
 * 00000001800B415C: add     rcx, rdx
 * 00000001800B415F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4166: inc     rax
 * 00000001800B4169: cmp     byte ptr [rcx+rax], 0
 * 00000001800B416D: jnz     short loc_1800B4166
 * 00000001800B416F: inc     rax
 * 00000001800B4172: add     rax, rcx
 * 00000001800B4175: jmp     loc_1800B313C
 * 00000001800B417A: inc     rax
 * 00000001800B417D: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4181: jnz     short loc_1800B417A
 * 00000001800B4183: inc     rax
 * 00000001800B4186: add     rax, rcx
 * 00000001800B4189: mov     rcx, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4190: cmp     r8d, 0Dh
 * 00000001800B4194: jnz     loc_1800B43D6
 * 00000001800B419A: mov     [rdi], rax
 * 00000001800B419D: inc     rcx
 * 00000001800B41A0: cmp     byte ptr [rax+rcx], 0
 * 00000001800B41A4: jnz     short loc_1800B419D
 * 00000001800B41A6: lea     rdx, [rax+1]
 * 00000001800B41AA: add     rdx, rcx
 * 00000001800B41AD: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B41B4: lea     rax, [rax+1]
 * 00000001800B41B8: cmp     byte ptr [rdx+rax], 0
 * 00000001800B41BC: jnz     short loc_1800B41B4
 * 00000001800B41BE: lea     rcx, [rax+1]
 * 00000001800B41C2: add     rcx, rdx
 * 00000001800B41C5: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B41CC: lea     rax, [rax+1]
 * 00000001800B41D0: cmp     byte ptr [rcx+rax], 0
 * 00000001800B41D4: jnz     short loc_1800B41CC
 * 00000001800B41D6: lea     rdx, [rax+1]
 * 00000001800B41DA: add     rdx, rcx
 * 00000001800B41DD: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B41E4: lea     rax, [rax+1]
 * 00000001800B41E8: cmp     byte ptr [rdx+rax], 0
 * 00000001800B41EC: jnz     short loc_1800B41E4
 * 00000001800B41EE: lea     rcx, [rax+1]
 * 00000001800B41F2: add     rcx, rdx
 * 00000001800B41F5: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B41FC: lea     rax, [rax+1]
 * 00000001800B4200: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4204: jnz     short loc_1800B41FC
 * 00000001800B4206: lea     rdx, [rax+1]
 * 00000001800B420A: add     rdx, rcx
 * 00000001800B420D: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4214: lea     rax, [rax+1]
 * 00000001800B4218: cmp     byte ptr [rdx+rax], 0
 * 00000001800B421C: jnz     short loc_1800B4214
 * 00000001800B421E: lea     rcx, [rax+1]
 * 00000001800B4222: add     rcx, rdx
 * 00000001800B4225: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B422C: lea     rax, [rax+1]
 * 00000001800B4230: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4234: jnz     short loc_1800B422C
 * 00000001800B4236: lea     rdx, [rax+1]
 * 00000001800B423A: add     rdx, rcx
 * 00000001800B423D: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4244: lea     rax, [rax+1]
 * 00000001800B4248: cmp     byte ptr [rdx+rax], 0
 * 00000001800B424C: jnz     short loc_1800B4244
 * 00000001800B424E: lea     rcx, [rax+1]
 * 00000001800B4252: add     rcx, rdx
 * 00000001800B4255: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B425C: lea     rax, [rax+1]
 * 00000001800B4260: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4264: jnz     short loc_1800B425C
 * 00000001800B4266: lea     rdx, [rax+1]
 * 00000001800B426A: add     rdx, rcx
 * 00000001800B426D: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4274: lea     rax, [rax+1]
 * 00000001800B4278: cmp     byte ptr [rdx+rax], 0
 * 00000001800B427C: jnz     short loc_1800B4274
 * 00000001800B427E: lea     rcx, [rax+1]
 * 00000001800B4282: add     rcx, rdx
 * 00000001800B4285: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B428C: lea     rax, [rax+1]
 * 00000001800B4290: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4294: jnz     short loc_1800B428C
 * 00000001800B4296: lea     rdx, [rax+1]
 * 00000001800B429A: add     rdx, rcx
 * 00000001800B429D: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B42A4: lea     rax, [rax+1]
 * 00000001800B42A8: cmp     byte ptr [rdx+rax], 0
 * 00000001800B42AC: jnz     short loc_1800B42A4
 * 00000001800B42AE: lea     rcx, [rax+1]
 * 00000001800B42B2: add     rcx, rdx
 * 00000001800B42B5: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B42BC: lea     rax, [rax+1]
 * 00000001800B42C0: cmp     byte ptr [rcx+rax], 0
 * 00000001800B42C4: jnz     short loc_1800B42BC
 * 00000001800B42C6: lea     rdx, [rax+1]
 * 00000001800B42CA: add     rdx, rcx
 * 00000001800B42CD: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B42D4: lea     rax, [rax+1]
 * 00000001800B42D8: cmp     byte ptr [rdx+rax], 0
 * 00000001800B42DC: jnz     short loc_1800B42D4
 * 00000001800B42DE: lea     rcx, [rax+1]
 * 00000001800B42E2: add     rcx, rdx
 * 00000001800B42E5: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B42EC: lea     rax, [rax+1]
 * 00000001800B42F0: cmp     byte ptr [rcx+rax], 0
 * 00000001800B42F4: jnz     short loc_1800B42EC
 * 00000001800B42F6: lea     rdx, [rax+1]
 * 00000001800B42FA: add     rdx, rcx
 * 00000001800B42FD: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4304: lea     rax, [rax+1]
 * 00000001800B4308: cmp     byte ptr [rdx+rax], 0
 * 00000001800B430C: jnz     short loc_1800B4304
 * 00000001800B430E: lea     rcx, [rax+1]
 * 00000001800B4312: add     rcx, rdx
 * 00000001800B4315: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B431C: lea     rax, [rax+1]
 * 00000001800B4320: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4324: jnz     short loc_1800B431C
 * 00000001800B4326: lea     rdx, [rax+1]
 * 00000001800B432A: add     rdx, rcx
 * 00000001800B432D: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4334: lea     rax, [rax+1]
 * 00000001800B4338: cmp     byte ptr [rdx+rax], 0
 * 00000001800B433C: jnz     short loc_1800B4334
 * 00000001800B433E: lea     rcx, [rax+1]
 * 00000001800B4342: add     rcx, rdx
 * 00000001800B4345: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B434C: lea     rax, [rax+1]
 * 00000001800B4350: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4354: jnz     short loc_1800B434C
 * 00000001800B4356: lea     rdx, [rax+1]
 * 00000001800B435A: add     rdx, rcx
 * 00000001800B435D: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4364: lea     rax, [rax+1]
 * 00000001800B4368: cmp     byte ptr [rdx+rax], 0
 * 00000001800B436C: jnz     short loc_1800B4364
 * 00000001800B436E: lea     rcx, [rax+1]
 * 00000001800B4372: add     rcx, rdx
 * 00000001800B4375: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B437C: lea     rax, [rax+1]
 * 00000001800B4380: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4384: jnz     short loc_1800B437C
 * 00000001800B4386: lea     rdx, [rax+1]
 * 00000001800B438A: add     rdx, rcx
 * 00000001800B438D: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4394: lea     rax, [rax+1]
 * 00000001800B4398: cmp     byte ptr [rdx+rax], 0
 * 00000001800B439C: jnz     short loc_1800B4394
 * 00000001800B439E: lea     rcx, [rax+1]
 * 00000001800B43A2: add     rcx, rdx
 * 00000001800B43A5: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B43AC: inc     rax
 * 00000001800B43AF: cmp     byte ptr [rcx+rax], 0
 * 00000001800B43B3: jnz     short loc_1800B43AC
 * 00000001800B43B5: inc     rax
 * 00000001800B43B8: add     rcx, rax
 * 00000001800B43BB: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B43C2: inc     rax
 * 00000001800B43C5: cmp     byte ptr [rcx+rax], 0
 * 00000001800B43C9: jnz     short loc_1800B43C2
 * 00000001800B43CB: inc     rax
 * 00000001800B43CE: add     rax, rcx
 * 00000001800B43D1: jmp     loc_1800B313C
 * 00000001800B43D6: inc     rcx
 * 00000001800B43D9: cmp     byte ptr [rax+rcx], 0
 * 00000001800B43DD: jnz     short loc_1800B43D6
 * 00000001800B43DF: inc     rcx
 * 00000001800B43E2: add     rcx, rax
 * 00000001800B43E5: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B43EC: cmp     r8d, 0Eh
 * 00000001800B43F0: jnz     loc_1800B461D
 * 00000001800B43F6: mov     [rdi], rcx
 * 00000001800B43F9: lea     rax, [rax+1]
 * 00000001800B43FD: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4401: jnz     short loc_1800B43F9
 * 00000001800B4403: lea     rdx, [rax+1]
 * 00000001800B4407: add     rdx, rcx
 * 00000001800B440A: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4411: lea     rax, [rax+1]
 * 00000001800B4415: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4419: jnz     short loc_1800B4411
 * 00000001800B441B: lea     rcx, [rax+1]
 * 00000001800B441F: add     rcx, rdx
 * 00000001800B4422: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4429: lea     rax, [rax+1]
 * 00000001800B442D: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4431: jnz     short loc_1800B4429
 * 00000001800B4433: lea     rdx, [rax+1]
 * 00000001800B4437: add     rdx, rcx
 * 00000001800B443A: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4441: lea     rax, [rax+1]
 * 00000001800B4445: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4449: jnz     short loc_1800B4441
 * 00000001800B444B: lea     rcx, [rax+1]
 * 00000001800B444F: add     rcx, rdx
 * 00000001800B4452: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4459: lea     rax, [rax+1]
 * 00000001800B445D: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4461: jnz     short loc_1800B4459
 * 00000001800B4463: lea     rdx, [rax+1]
 * 00000001800B4467: add     rdx, rcx
 * 00000001800B446A: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4471: lea     rax, [rax+1]
 * 00000001800B4475: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4479: jnz     short loc_1800B4471
 * 00000001800B447B: lea     rcx, [rax+1]
 * 00000001800B447F: add     rcx, rdx
 * 00000001800B4482: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4489: lea     rax, [rax+1]
 * 00000001800B448D: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4491: jnz     short loc_1800B4489
 * 00000001800B4493: lea     rdx, [rax+1]
 * 00000001800B4497: add     rdx, rcx
 * 00000001800B449A: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B44A1: lea     rax, [rax+1]
 * 00000001800B44A5: cmp     byte ptr [rdx+rax], 0
 * 00000001800B44A9: jnz     short loc_1800B44A1
 * 00000001800B44AB: lea     rcx, [rax+1]
 * 00000001800B44AF: add     rcx, rdx
 * 00000001800B44B2: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B44B9: lea     rax, [rax+1]
 * 00000001800B44BD: cmp     byte ptr [rcx+rax], 0
 * 00000001800B44C1: jnz     short loc_1800B44B9
 * 00000001800B44C3: lea     rdx, [rax+1]
 * 00000001800B44C7: add     rdx, rcx
 * 00000001800B44CA: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B44D1: lea     rax, [rax+1]
 * 00000001800B44D5: cmp     byte ptr [rdx+rax], 0
 * 00000001800B44D9: jnz     short loc_1800B44D1
 * 00000001800B44DB: lea     rcx, [rax+1]
 * 00000001800B44DF: add     rcx, rdx
 * 00000001800B44E2: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B44E9: lea     rax, [rax+1]
 * 00000001800B44ED: cmp     byte ptr [rcx+rax], 0
 * 00000001800B44F1: jnz     short loc_1800B44E9
 * 00000001800B44F3: lea     rdx, [rax+1]
 * 00000001800B44F7: add     rdx, rcx
 * 00000001800B44FA: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4501: lea     rax, [rax+1]
 * 00000001800B4505: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4509: jnz     short loc_1800B4501
 * 00000001800B450B: lea     rcx, [rax+1]
 * 00000001800B450F: add     rcx, rdx
 * 00000001800B4512: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4519: lea     rax, [rax+1]
 * 00000001800B451D: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4521: jnz     short loc_1800B4519
 * 00000001800B4523: lea     rdx, [rax+1]
 * 00000001800B4527: add     rdx, rcx
 * 00000001800B452A: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4531: lea     rax, [rax+1]
 * 00000001800B4535: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4539: jnz     short loc_1800B4531
 * 00000001800B453B: lea     rcx, [rax+1]
 * 00000001800B453F: add     rcx, rdx
 * 00000001800B4542: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4549: lea     rax, [rax+1]
 * 00000001800B454D: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4551: jnz     short loc_1800B4549
 * 00000001800B4553: lea     rdx, [rax+1]
 * 00000001800B4557: add     rdx, rcx
 * 00000001800B455A: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4561: lea     rax, [rax+1]
 * 00000001800B4565: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4569: jnz     short loc_1800B4561
 * 00000001800B456B: lea     rcx, [rax+1]
 * 00000001800B456F: add     rcx, rdx
 * 00000001800B4572: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4579: lea     rax, [rax+1]
 * 00000001800B457D: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4581: jnz     short loc_1800B4579
 * 00000001800B4583: lea     rdx, [rax+1]
 * 00000001800B4587: add     rdx, rcx
 * 00000001800B458A: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4591: lea     rax, [rax+1]
 * 00000001800B4595: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4599: jnz     short loc_1800B4591
 * 00000001800B459B: lea     rcx, [rax+1]
 * 00000001800B459F: add     rcx, rdx
 * 00000001800B45A2: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B45A9: lea     rax, [rax+1]
 * 00000001800B45AD: cmp     byte ptr [rcx+rax], 0
 * 00000001800B45B1: jnz     short loc_1800B45A9
 * 00000001800B45B3: lea     rdx, [rax+1]
 * 00000001800B45B7: add     rdx, rcx
 * 00000001800B45BA: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B45C1: lea     rax, [rax+1]
 * 00000001800B45C5: cmp     byte ptr [rdx+rax], 0
 * 00000001800B45C9: jnz     short loc_1800B45C1
 * 00000001800B45CB: lea     rcx, [rax+1]
 * 00000001800B45CF: add     rcx, rdx
 * 00000001800B45D2: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B45D9: lea     rax, [rax+1]
 * 00000001800B45DD: cmp     byte ptr [rcx+rax], 0
 * 00000001800B45E1: jnz     short loc_1800B45D9
 * 00000001800B45E3: lea     rdx, [rax+1]
 * 00000001800B45E7: add     rdx, rcx
 * 00000001800B45EA: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B45F1: lea     rax, [rax+1]
 * 00000001800B45F5: cmp     byte ptr [rdx+rax], 0
 * 00000001800B45F9: jnz     short loc_1800B45F1
 * 00000001800B45FB: lea     rcx, [rax+1]
 * 00000001800B45FF: add     rcx, rdx
 * 00000001800B4602: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4609: inc     rax
 * 00000001800B460C: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4610: jnz     short loc_1800B4609
 * 00000001800B4612: inc     rax
 * 00000001800B4615: add     rax, rcx
 * 00000001800B4618: jmp     loc_1800B313C
 * 00000001800B461D: inc     rax
 * 00000001800B4620: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4624: jnz     short loc_1800B461D
 * 00000001800B4626: inc     rax
 * 00000001800B4629: add     rax, rcx
 * 00000001800B462C: mov     rcx, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4633: cmp     r8d, 0Fh
 * 00000001800B4637: jnz     loc_1800B4849
 * 00000001800B463D: mov     [rdi], rax
 * 00000001800B4640: inc     rcx
 * 00000001800B4643: cmp     byte ptr [rax+rcx], 0
 * 00000001800B4647: jnz     short loc_1800B4640
 * 00000001800B4649: lea     rdx, [rax+1]
 * 00000001800B464D: add     rdx, rcx
 * 00000001800B4650: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4657: lea     rax, [rax+1]
 * 00000001800B465B: cmp     byte ptr [rdx+rax], 0
 * 00000001800B465F: jnz     short loc_1800B4657
 * 00000001800B4661: lea     rcx, [rax+1]
 * 00000001800B4665: add     rcx, rdx
 * 00000001800B4668: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B466F: lea     rax, [rax+1]
 * 00000001800B4673: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4677: jnz     short loc_1800B466F
 * 00000001800B4679: lea     rdx, [rax+1]
 * 00000001800B467D: add     rdx, rcx
 * 00000001800B4680: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4687: lea     rax, [rax+1]
 * 00000001800B468B: cmp     byte ptr [rdx+rax], 0
 * 00000001800B468F: jnz     short loc_1800B4687
 * 00000001800B4691: lea     rcx, [rax+1]
 * 00000001800B4695: add     rcx, rdx
 * 00000001800B4698: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B469F: lea     rax, [rax+1]
 * 00000001800B46A3: cmp     byte ptr [rcx+rax], 0
 * 00000001800B46A7: jnz     short loc_1800B469F
 * 00000001800B46A9: lea     rdx, [rax+1]
 * 00000001800B46AD: add     rdx, rcx
 * 00000001800B46B0: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B46B7: lea     rax, [rax+1]
 * 00000001800B46BB: cmp     byte ptr [rdx+rax], 0
 * 00000001800B46BF: jnz     short loc_1800B46B7
 * 00000001800B46C1: lea     rcx, [rax+1]
 * 00000001800B46C5: add     rcx, rdx
 * 00000001800B46C8: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B46CF: lea     rax, [rax+1]
 * 00000001800B46D3: cmp     byte ptr [rcx+rax], 0
 * 00000001800B46D7: jnz     short loc_1800B46CF
 * 00000001800B46D9: lea     rdx, [rax+1]
 * 00000001800B46DD: add     rdx, rcx
 * 00000001800B46E0: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B46E7: lea     rax, [rax+1]
 * 00000001800B46EB: cmp     byte ptr [rdx+rax], 0
 * 00000001800B46EF: jnz     short loc_1800B46E7
 * 00000001800B46F1: lea     rcx, [rax+1]
 * 00000001800B46F5: add     rcx, rdx
 * 00000001800B46F8: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B46FF: lea     rax, [rax+1]
 * 00000001800B4703: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4707: jnz     short loc_1800B46FF
 * 00000001800B4709: lea     rdx, [rax+1]
 * 00000001800B470D: add     rdx, rcx
 * 00000001800B4710: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4717: lea     rax, [rax+1]
 * 00000001800B471B: cmp     byte ptr [rdx+rax], 0
 * 00000001800B471F: jnz     short loc_1800B4717
 * 00000001800B4721: lea     rcx, [rax+1]
 * 00000001800B4725: add     rcx, rdx
 * 00000001800B4728: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B472F: lea     rax, [rax+1]
 * 00000001800B4733: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4737: jnz     short loc_1800B472F
 * 00000001800B4739: lea     rdx, [rax+1]
 * 00000001800B473D: add     rdx, rcx
 * 00000001800B4740: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4747: lea     rax, [rax+1]
 * 00000001800B474B: cmp     byte ptr [rdx+rax], 0
 * 00000001800B474F: jnz     short loc_1800B4747
 * 00000001800B4751: lea     rcx, [rax+1]
 * 00000001800B4755: add     rcx, rdx
 * 00000001800B4758: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B475F: lea     rax, [rax+1]
 * 00000001800B4763: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4767: jnz     short loc_1800B475F
 * 00000001800B4769: lea     rdx, [rax+1]
 * 00000001800B476D: add     rdx, rcx
 * 00000001800B4770: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4777: lea     rax, [rax+1]
 * 00000001800B477B: cmp     byte ptr [rdx+rax], 0
 * 00000001800B477F: jnz     short loc_1800B4777
 * 00000001800B4781: lea     rcx, [rax+1]
 * 00000001800B4785: add     rcx, rdx
 * 00000001800B4788: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B478F: lea     rax, [rax+1]
 * 00000001800B4793: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4797: jnz     short loc_1800B478F
 * 00000001800B4799: lea     rdx, [rax+1]
 * 00000001800B479D: add     rdx, rcx
 * 00000001800B47A0: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B47A7: lea     rax, [rax+1]
 * 00000001800B47AB: cmp     byte ptr [rdx+rax], 0
 * 00000001800B47AF: jnz     short loc_1800B47A7
 * 00000001800B47B1: lea     rcx, [rax+1]
 * 00000001800B47B5: add     rcx, rdx
 * 00000001800B47B8: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B47BF: lea     rax, [rax+1]
 * 00000001800B47C3: cmp     byte ptr [rcx+rax], 0
 * 00000001800B47C7: jnz     short loc_1800B47BF
 * 00000001800B47C9: lea     rdx, [rax+1]
 * 00000001800B47CD: add     rdx, rcx
 * 00000001800B47D0: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B47D7: lea     rax, [rax+1]
 * 00000001800B47DB: cmp     byte ptr [rdx+rax], 0
 * 00000001800B47DF: jnz     short loc_1800B47D7
 * 00000001800B47E1: lea     rcx, [rax+1]
 * 00000001800B47E5: add     rcx, rdx
 * 00000001800B47E8: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B47EF: lea     rax, [rax+1]
 * 00000001800B47F3: cmp     byte ptr [rcx+rax], 0
 * 00000001800B47F7: jnz     short loc_1800B47EF
 * 00000001800B47F9: lea     rdx, [rax+1]
 * 00000001800B47FD: add     rdx, rcx
 * 00000001800B4800: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4807: lea     rax, [rax+1]
 * 00000001800B480B: cmp     byte ptr [rdx+rax], 0
 * 00000001800B480F: jnz     short loc_1800B4807
 * 00000001800B4811: lea     rcx, [rax+1]
 * 00000001800B4815: add     rcx, rdx
 * 00000001800B4818: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B481F: inc     rax
 * 00000001800B4822: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4826: jnz     short loc_1800B481F
 * 00000001800B4828: inc     rax
 * 00000001800B482B: add     rcx, rax
 * 00000001800B482E: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4835: inc     rax
 * 00000001800B4838: cmp     byte ptr [rcx+rax], 0
 * 00000001800B483C: jnz     short loc_1800B4835
 * 00000001800B483E: inc     rax
 * 00000001800B4841: add     rax, rcx
 * 00000001800B4844: jmp     loc_1800B313C
 * 00000001800B4849: inc     rcx
 * 00000001800B484C: cmp     byte ptr [rax+rcx], 0
 * 00000001800B4850: jnz     short loc_1800B4849
 * 00000001800B4852: inc     rcx
 * 00000001800B4855: add     rcx, rax
 * 00000001800B4858: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B485F: cmp     r8d, 10h
 * 00000001800B4863: jnz     loc_1800B4A60
 * 00000001800B4869: mov     [rdi], rcx
 * 00000001800B486C: lea     rax, [rax+1]
 * 00000001800B4870: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4874: jnz     short loc_1800B486C
 * 00000001800B4876: lea     rdx, [rax+1]
 * 00000001800B487A: add     rdx, rcx
 * 00000001800B487D: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4884: lea     rax, [rax+1]
 * 00000001800B4888: cmp     byte ptr [rdx+rax], 0
 * 00000001800B488C: jnz     short loc_1800B4884
 * 00000001800B488E: lea     rcx, [rax+1]
 * 00000001800B4892: add     rcx, rdx
 * 00000001800B4895: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B489C: lea     rax, [rax+1]
 * 00000001800B48A0: cmp     byte ptr [rcx+rax], 0
 * 00000001800B48A4: jnz     short loc_1800B489C
 * 00000001800B48A6: lea     rdx, [rax+1]
 * 00000001800B48AA: add     rdx, rcx
 * 00000001800B48AD: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B48B4: lea     rax, [rax+1]
 * 00000001800B48B8: cmp     byte ptr [rdx+rax], 0
 * 00000001800B48BC: jnz     short loc_1800B48B4
 * 00000001800B48BE: lea     rcx, [rax+1]
 * 00000001800B48C2: add     rcx, rdx
 * 00000001800B48C5: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B48CC: lea     rax, [rax+1]
 * 00000001800B48D0: cmp     byte ptr [rcx+rax], 0
 * 00000001800B48D4: jnz     short loc_1800B48CC
 * 00000001800B48D6: lea     rdx, [rax+1]
 * 00000001800B48DA: add     rdx, rcx
 * 00000001800B48DD: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B48E4: lea     rax, [rax+1]
 * 00000001800B48E8: cmp     byte ptr [rdx+rax], 0
 * 00000001800B48EC: jnz     short loc_1800B48E4
 * 00000001800B48EE: lea     rcx, [rax+1]
 * 00000001800B48F2: add     rcx, rdx
 * 00000001800B48F5: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B48FC: lea     rax, [rax+1]
 * 00000001800B4900: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4904: jnz     short loc_1800B48FC
 * 00000001800B4906: lea     rdx, [rax+1]
 * 00000001800B490A: add     rdx, rcx
 * 00000001800B490D: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4914: lea     rax, [rax+1]
 * 00000001800B4918: cmp     byte ptr [rdx+rax], 0
 * 00000001800B491C: jnz     short loc_1800B4914
 * 00000001800B491E: lea     rcx, [rax+1]
 * 00000001800B4922: add     rcx, rdx
 * 00000001800B4925: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B492C: lea     rax, [rax+1]
 * 00000001800B4930: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4934: jnz     short loc_1800B492C
 * 00000001800B4936: lea     rdx, [rax+1]
 * 00000001800B493A: add     rdx, rcx
 * 00000001800B493D: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4944: lea     rax, [rax+1]
 * 00000001800B4948: cmp     byte ptr [rdx+rax], 0
 * 00000001800B494C: jnz     short loc_1800B4944
 * 00000001800B494E: lea     rcx, [rax+1]
 * 00000001800B4952: add     rcx, rdx
 * 00000001800B4955: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B495C: lea     rax, [rax+1]
 * 00000001800B4960: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4964: jnz     short loc_1800B495C
 * 00000001800B4966: lea     rdx, [rax+1]
 * 00000001800B496A: add     rdx, rcx
 * 00000001800B496D: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4974: lea     rax, [rax+1]
 * 00000001800B4978: cmp     byte ptr [rdx+rax], 0
 * 00000001800B497C: jnz     short loc_1800B4974
 * 00000001800B497E: lea     rcx, [rax+1]
 * 00000001800B4982: add     rcx, rdx
 * 00000001800B4985: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B498C: lea     rax, [rax+1]
 * 00000001800B4990: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4994: jnz     short loc_1800B498C
 * 00000001800B4996: lea     rdx, [rax+1]
 * 00000001800B499A: add     rdx, rcx
 * 00000001800B499D: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B49A4: lea     rax, [rax+1]
 * 00000001800B49A8: cmp     byte ptr [rdx+rax], 0
 * 00000001800B49AC: jnz     short loc_1800B49A4
 * 00000001800B49AE: lea     rcx, [rax+1]
 * 00000001800B49B2: add     rcx, rdx
 * 00000001800B49B5: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B49BC: lea     rax, [rax+1]
 * 00000001800B49C0: cmp     byte ptr [rcx+rax], 0
 * 00000001800B49C4: jnz     short loc_1800B49BC
 * 00000001800B49C6: lea     rdx, [rax+1]
 * 00000001800B49CA: add     rdx, rcx
 * 00000001800B49CD: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B49D4: lea     rax, [rax+1]
 * 00000001800B49D8: cmp     byte ptr [rdx+rax], 0
 * 00000001800B49DC: jnz     short loc_1800B49D4
 * 00000001800B49DE: lea     rcx, [rax+1]
 * 00000001800B49E2: add     rcx, rdx
 * 00000001800B49E5: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B49EC: lea     rax, [rax+1]
 * 00000001800B49F0: cmp     byte ptr [rcx+rax], 0
 * 00000001800B49F4: jnz     short loc_1800B49EC
 * 00000001800B49F6: lea     rdx, [rax+1]
 * 00000001800B49FA: add     rdx, rcx
 * 00000001800B49FD: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4A04: lea     rax, [rax+1]
 * 00000001800B4A08: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4A0C: jnz     short loc_1800B4A04
 * 00000001800B4A0E: lea     rcx, [rax+1]
 * 00000001800B4A12: add     rcx, rdx
 * 00000001800B4A15: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4A1C: lea     rax, [rax+1]
 * 00000001800B4A20: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4A24: jnz     short loc_1800B4A1C
 * 00000001800B4A26: lea     rdx, [rax+1]
 * 00000001800B4A2A: add     rdx, rcx
 * 00000001800B4A2D: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4A34: lea     rax, [rax+1]
 * 00000001800B4A38: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4A3C: jnz     short loc_1800B4A34
 * 00000001800B4A3E: lea     rcx, [rax+1]
 * 00000001800B4A42: add     rcx, rdx
 * 00000001800B4A45: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4A4C: inc     rax
 * 00000001800B4A4F: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4A53: jnz     short loc_1800B4A4C
 * 00000001800B4A55: inc     rax
 * 00000001800B4A58: add     rax, rcx
 * 00000001800B4A5B: jmp     loc_1800B313C
 * 00000001800B4A60: inc     rax
 * 00000001800B4A63: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4A67: jnz     short loc_1800B4A60
 * 00000001800B4A69: inc     rax
 * 00000001800B4A6C: add     rax, rcx
 * 00000001800B4A6F: mov     rcx, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4A76: cmp     r8d, 11h
 * 00000001800B4A7A: jnz     loc_1800B4C5C
 * 00000001800B4A80: mov     [rdi], rax
 * 00000001800B4A83: inc     rcx
 * 00000001800B4A86: cmp     byte ptr [rax+rcx], 0
 * 00000001800B4A8A: jnz     short loc_1800B4A83
 * 00000001800B4A8C: lea     rdx, [rax+1]
 * 00000001800B4A90: add     rdx, rcx
 * 00000001800B4A93: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4A9A: lea     rax, [rax+1]
 * 00000001800B4A9E: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4AA2: jnz     short loc_1800B4A9A
 * 00000001800B4AA4: lea     rcx, [rax+1]
 * 00000001800B4AA8: add     rcx, rdx
 * 00000001800B4AAB: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4AB2: lea     rax, [rax+1]
 * 00000001800B4AB6: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4ABA: jnz     short loc_1800B4AB2
 * 00000001800B4ABC: lea     rdx, [rax+1]
 * 00000001800B4AC0: add     rdx, rcx
 * 00000001800B4AC3: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4ACA: lea     rax, [rax+1]
 * 00000001800B4ACE: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4AD2: jnz     short loc_1800B4ACA
 * 00000001800B4AD4: lea     rcx, [rax+1]
 * 00000001800B4AD8: add     rcx, rdx
 * 00000001800B4ADB: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4AE2: lea     rax, [rax+1]
 * 00000001800B4AE6: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4AEA: jnz     short loc_1800B4AE2
 * 00000001800B4AEC: lea     rdx, [rax+1]
 * 00000001800B4AF0: add     rdx, rcx
 * 00000001800B4AF3: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4AFA: lea     rax, [rax+1]
 * 00000001800B4AFE: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4B02: jnz     short loc_1800B4AFA
 * 00000001800B4B04: lea     rcx, [rax+1]
 * 00000001800B4B08: add     rcx, rdx
 * 00000001800B4B0B: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4B12: lea     rax, [rax+1]
 * 00000001800B4B16: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4B1A: jnz     short loc_1800B4B12
 * 00000001800B4B1C: lea     rdx, [rax+1]
 * 00000001800B4B20: add     rdx, rcx
 * 00000001800B4B23: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4B2A: lea     rax, [rax+1]
 * 00000001800B4B2E: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4B32: jnz     short loc_1800B4B2A
 * 00000001800B4B34: lea     rcx, [rax+1]
 * 00000001800B4B38: add     rcx, rdx
 * 00000001800B4B3B: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4B42: lea     rax, [rax+1]
 * 00000001800B4B46: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4B4A: jnz     short loc_1800B4B42
 * 00000001800B4B4C: lea     rdx, [rax+1]
 * 00000001800B4B50: add     rdx, rcx
 * 00000001800B4B53: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4B5A: lea     rax, [rax+1]
 * 00000001800B4B5E: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4B62: jnz     short loc_1800B4B5A
 * 00000001800B4B64: lea     rcx, [rax+1]
 * 00000001800B4B68: add     rcx, rdx
 * 00000001800B4B6B: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4B72: lea     rax, [rax+1]
 * 00000001800B4B76: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4B7A: jnz     short loc_1800B4B72
 * 00000001800B4B7C: lea     rdx, [rax+1]
 * 00000001800B4B80: add     rdx, rcx
 * 00000001800B4B83: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4B8A: lea     rax, [rax+1]
 * 00000001800B4B8E: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4B92: jnz     short loc_1800B4B8A
 * 00000001800B4B94: lea     rcx, [rax+1]
 * 00000001800B4B98: add     rcx, rdx
 * 00000001800B4B9B: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4BA2: lea     rax, [rax+1]
 * 00000001800B4BA6: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4BAA: jnz     short loc_1800B4BA2
 * 00000001800B4BAC: lea     rdx, [rax+1]
 * 00000001800B4BB0: add     rdx, rcx
 * 00000001800B4BB3: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4BBA: lea     rax, [rax+1]
 * 00000001800B4BBE: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4BC2: jnz     short loc_1800B4BBA
 * 00000001800B4BC4: lea     rcx, [rax+1]
 * 00000001800B4BC8: add     rcx, rdx
 * 00000001800B4BCB: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4BD2: lea     rax, [rax+1]
 * 00000001800B4BD6: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4BDA: jnz     short loc_1800B4BD2
 * 00000001800B4BDC: lea     rdx, [rax+1]
 * 00000001800B4BE0: add     rdx, rcx
 * 00000001800B4BE3: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4BEA: lea     rax, [rax+1]
 * 00000001800B4BEE: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4BF2: jnz     short loc_1800B4BEA
 * 00000001800B4BF4: lea     rcx, [rax+1]
 * 00000001800B4BF8: add     rcx, rdx
 * 00000001800B4BFB: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4C02: lea     rax, [rax+1]
 * 00000001800B4C06: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4C0A: jnz     short loc_1800B4C02
 * 00000001800B4C0C: lea     rdx, [rax+1]
 * 00000001800B4C10: add     rdx, rcx
 * 00000001800B4C13: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4C1A: lea     rax, [rax+1]
 * 00000001800B4C1E: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4C22: jnz     short loc_1800B4C1A
 * 00000001800B4C24: lea     rcx, [rax+1]
 * 00000001800B4C28: add     rcx, rdx
 * 00000001800B4C2B: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4C32: inc     rax
 * 00000001800B4C35: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4C39: jnz     short loc_1800B4C32
 * 00000001800B4C3B: inc     rax
 * 00000001800B4C3E: add     rcx, rax
 * 00000001800B4C41: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4C48: inc     rax
 * 00000001800B4C4B: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4C4F: jnz     short loc_1800B4C48
 * 00000001800B4C51: inc     rax
 * 00000001800B4C54: add     rax, rcx
 * 00000001800B4C57: jmp     loc_1800B313C
 * 00000001800B4C5C: inc     rcx
 * 00000001800B4C5F: cmp     byte ptr [rax+rcx], 0
 * 00000001800B4C63: jnz     short loc_1800B4C5C
 * 00000001800B4C65: inc     rcx
 * 00000001800B4C68: add     rcx, rax
 * 00000001800B4C6B: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4C72: cmp     r8d, 12h
 * 00000001800B4C76: jnz     loc_1800B4E43
 * 00000001800B4C7C: mov     [rdi], rcx
 * 00000001800B4C7F: lea     rax, [rax+1]
 * 00000001800B4C83: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4C87: jnz     short loc_1800B4C7F
 * 00000001800B4C89: lea     rdx, [rax+1]
 * 00000001800B4C8D: add     rdx, rcx
 * 00000001800B4C90: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4C97: lea     rax, [rax+1]
 * 00000001800B4C9B: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4C9F: jnz     short loc_1800B4C97
 * 00000001800B4CA1: lea     rcx, [rax+1]
 * 00000001800B4CA5: add     rcx, rdx
 * 00000001800B4CA8: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4CAF: lea     rax, [rax+1]
 * 00000001800B4CB3: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4CB7: jnz     short loc_1800B4CAF
 * 00000001800B4CB9: lea     rdx, [rax+1]
 * 00000001800B4CBD: add     rdx, rcx
 * 00000001800B4CC0: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4CC7: lea     rax, [rax+1]
 * 00000001800B4CCB: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4CCF: jnz     short loc_1800B4CC7
 * 00000001800B4CD1: lea     rcx, [rax+1]
 * 00000001800B4CD5: add     rcx, rdx
 * 00000001800B4CD8: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4CDF: lea     rax, [rax+1]
 * 00000001800B4CE3: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4CE7: jnz     short loc_1800B4CDF
 * 00000001800B4CE9: lea     rdx, [rax+1]
 * 00000001800B4CED: add     rdx, rcx
 * 00000001800B4CF0: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4CF7: lea     rax, [rax+1]
 * 00000001800B4CFB: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4CFF: jnz     short loc_1800B4CF7
 * 00000001800B4D01: lea     rcx, [rax+1]
 * 00000001800B4D05: add     rcx, rdx
 * 00000001800B4D08: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4D0F: lea     rax, [rax+1]
 * 00000001800B4D13: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4D17: jnz     short loc_1800B4D0F
 * 00000001800B4D19: lea     rdx, [rax+1]
 * 00000001800B4D1D: add     rdx, rcx
 * 00000001800B4D20: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4D27: lea     rax, [rax+1]
 * 00000001800B4D2B: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4D2F: jnz     short loc_1800B4D27
 * 00000001800B4D31: lea     rcx, [rax+1]
 * 00000001800B4D35: add     rcx, rdx
 * 00000001800B4D38: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4D3F: lea     rax, [rax+1]
 * 00000001800B4D43: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4D47: jnz     short loc_1800B4D3F
 * 00000001800B4D49: lea     rdx, [rax+1]
 * 00000001800B4D4D: add     rdx, rcx
 * 00000001800B4D50: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4D57: lea     rax, [rax+1]
 * 00000001800B4D5B: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4D5F: jnz     short loc_1800B4D57
 * 00000001800B4D61: lea     rcx, [rax+1]
 * 00000001800B4D65: add     rcx, rdx
 * 00000001800B4D68: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4D6F: lea     rax, [rax+1]
 * 00000001800B4D73: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4D77: jnz     short loc_1800B4D6F
 * 00000001800B4D79: lea     rdx, [rax+1]
 * 00000001800B4D7D: add     rdx, rcx
 * 00000001800B4D80: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4D87: lea     rax, [rax+1]
 * 00000001800B4D8B: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4D8F: jnz     short loc_1800B4D87
 * 00000001800B4D91: lea     rcx, [rax+1]
 * 00000001800B4D95: add     rcx, rdx
 * 00000001800B4D98: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4D9F: lea     rax, [rax+1]
 * 00000001800B4DA3: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4DA7: jnz     short loc_1800B4D9F
 * 00000001800B4DA9: lea     rdx, [rax+1]
 * 00000001800B4DAD: add     rdx, rcx
 * 00000001800B4DB0: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4DB7: lea     rax, [rax+1]
 * 00000001800B4DBB: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4DBF: jnz     short loc_1800B4DB7
 * 00000001800B4DC1: lea     rcx, [rax+1]
 * 00000001800B4DC5: add     rcx, rdx
 * 00000001800B4DC8: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4DCF: lea     rax, [rax+1]
 * 00000001800B4DD3: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4DD7: jnz     short loc_1800B4DCF
 * 00000001800B4DD9: lea     rdx, [rax+1]
 * 00000001800B4DDD: add     rdx, rcx
 * 00000001800B4DE0: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4DE7: lea     rax, [rax+1]
 * 00000001800B4DEB: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4DEF: jnz     short loc_1800B4DE7
 * 00000001800B4DF1: lea     rcx, [rax+1]
 * 00000001800B4DF5: add     rcx, rdx
 * 00000001800B4DF8: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4DFF: lea     rax, [rax+1]
 * 00000001800B4E03: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4E07: jnz     short loc_1800B4DFF
 * 00000001800B4E09: lea     rdx, [rax+1]
 * 00000001800B4E0D: add     rdx, rcx
 * 00000001800B4E10: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4E17: lea     rax, [rax+1]
 * 00000001800B4E1B: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4E1F: jnz     short loc_1800B4E17
 * 00000001800B4E21: lea     rcx, [rax+1]
 * 00000001800B4E25: add     rcx, rdx
 * 00000001800B4E28: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4E2F: inc     rax
 * 00000001800B4E32: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4E36: jnz     short loc_1800B4E2F
 * 00000001800B4E38: inc     rax
 * 00000001800B4E3B: add     rax, rcx
 * 00000001800B4E3E: jmp     loc_1800B313C
 * 00000001800B4E43: inc     rax
 * 00000001800B4E46: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4E4A: jnz     short loc_1800B4E43
 * 00000001800B4E4C: inc     rax
 * 00000001800B4E4F: add     rax, rcx
 * 00000001800B4E52: mov     rcx, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4E59: cmp     r8d, 13h
 * 00000001800B4E5D: jnz     loc_1800B500F
 * 00000001800B4E63: mov     [rdi], rax
 * 00000001800B4E66: inc     rcx
 * 00000001800B4E69: cmp     byte ptr [rax+rcx], 0
 * 00000001800B4E6D: jnz     short loc_1800B4E66
 * 00000001800B4E6F: lea     rdx, [rax+1]
 * 00000001800B4E73: add     rdx, rcx
 * 00000001800B4E76: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4E7D: lea     rax, [rax+1]
 * 00000001800B4E81: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4E85: jnz     short loc_1800B4E7D
 * 00000001800B4E87: lea     rcx, [rax+1]
 * 00000001800B4E8B: add     rcx, rdx
 * 00000001800B4E8E: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4E95: lea     rax, [rax+1]
 * 00000001800B4E99: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4E9D: jnz     short loc_1800B4E95
 * 00000001800B4E9F: lea     rdx, [rax+1]
 * 00000001800B4EA3: add     rdx, rcx
 * 00000001800B4EA6: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4EAD: lea     rax, [rax+1]
 * 00000001800B4EB1: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4EB5: jnz     short loc_1800B4EAD
 * 00000001800B4EB7: lea     rcx, [rax+1]
 * 00000001800B4EBB: add     rcx, rdx
 * 00000001800B4EBE: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4EC5: lea     rax, [rax+1]
 * 00000001800B4EC9: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4ECD: jnz     short loc_1800B4EC5
 * 00000001800B4ECF: lea     rdx, [rax+1]
 * 00000001800B4ED3: add     rdx, rcx
 * 00000001800B4ED6: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4EDD: lea     rax, [rax+1]
 * 00000001800B4EE1: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4EE5: jnz     short loc_1800B4EDD
 * 00000001800B4EE7: lea     rcx, [rax+1]
 * 00000001800B4EEB: add     rcx, rdx
 * 00000001800B4EEE: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4EF5: lea     rax, [rax+1]
 * 00000001800B4EF9: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4EFD: jnz     short loc_1800B4EF5
 * 00000001800B4EFF: lea     rdx, [rax+1]
 * 00000001800B4F03: add     rdx, rcx
 * 00000001800B4F06: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4F0D: lea     rax, [rax+1]
 * 00000001800B4F11: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4F15: jnz     short loc_1800B4F0D
 * 00000001800B4F17: lea     rcx, [rax+1]
 * 00000001800B4F1B: add     rcx, rdx
 * 00000001800B4F1E: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4F25: lea     rax, [rax+1]
 * 00000001800B4F29: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4F2D: jnz     short loc_1800B4F25
 * 00000001800B4F2F: lea     rdx, [rax+1]
 * 00000001800B4F33: add     rdx, rcx
 * 00000001800B4F36: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4F3D: lea     rax, [rax+1]
 * 00000001800B4F41: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4F45: jnz     short loc_1800B4F3D
 * 00000001800B4F47: lea     rcx, [rax+1]
 * 00000001800B4F4B: add     rcx, rdx
 * 00000001800B4F4E: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4F55: lea     rax, [rax+1]
 * 00000001800B4F59: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4F5D: jnz     short loc_1800B4F55
 * 00000001800B4F5F: lea     rdx, [rax+1]
 * 00000001800B4F63: add     rdx, rcx
 * 00000001800B4F66: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4F6D: lea     rax, [rax+1]
 * 00000001800B4F71: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4F75: jnz     short loc_1800B4F6D
 * 00000001800B4F77: lea     rcx, [rax+1]
 * 00000001800B4F7B: add     rcx, rdx
 * 00000001800B4F7E: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4F85: lea     rax, [rax+1]
 * 00000001800B4F89: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4F8D: jnz     short loc_1800B4F85
 * 00000001800B4F8F: lea     rdx, [rax+1]
 * 00000001800B4F93: add     rdx, rcx
 * 00000001800B4F96: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4F9D: lea     rax, [rax+1]
 * 00000001800B4FA1: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4FA5: jnz     short loc_1800B4F9D
 * 00000001800B4FA7: lea     rcx, [rax+1]
 * 00000001800B4FAB: add     rcx, rdx
 * 00000001800B4FAE: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4FB5: lea     rax, [rax+1]
 * 00000001800B4FB9: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4FBD: jnz     short loc_1800B4FB5
 * 00000001800B4FBF: lea     rdx, [rax+1]
 * 00000001800B4FC3: add     rdx, rcx
 * 00000001800B4FC6: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4FCD: lea     rax, [rax+1]
 * 00000001800B4FD1: cmp     byte ptr [rdx+rax], 0
 * 00000001800B4FD5: jnz     short loc_1800B4FCD
 * 00000001800B4FD7: lea     rcx, [rax+1]
 * 00000001800B4FDB: add     rcx, rdx
 * 00000001800B4FDE: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4FE5: inc     rax
 * 00000001800B4FE8: cmp     byte ptr [rcx+rax], 0
 * 00000001800B4FEC: jnz     short loc_1800B4FE5
 * 00000001800B4FEE: inc     rax
 * 00000001800B4FF1: add     rcx, rax
 * 00000001800B4FF4: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B4FFB: inc     rax
 * 00000001800B4FFE: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5002: jnz     short loc_1800B4FFB
 * 00000001800B5004: inc     rax
 * 00000001800B5007: add     rax, rcx
 * 00000001800B500A: jmp     loc_1800B313C
 * 00000001800B500F: inc     rcx
 * 00000001800B5012: cmp     byte ptr [rax+rcx], 0
 * 00000001800B5016: jnz     short loc_1800B500F
 * 00000001800B5018: inc     rcx
 * 00000001800B501B: add     rcx, rax
 * 00000001800B501E: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5025: cmp     r8d, 14h
 * 00000001800B5029: jnz     loc_1800B51C6
 * 00000001800B502F: mov     [rdi], rcx
 * 00000001800B5032: lea     rax, [rax+1]
 * 00000001800B5036: cmp     byte ptr [rcx+rax], 0
 * 00000001800B503A: jnz     short loc_1800B5032
 * 00000001800B503C: lea     rdx, [rax+1]
 * 00000001800B5040: add     rdx, rcx
 * 00000001800B5043: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B504A: lea     rax, [rax+1]
 * 00000001800B504E: cmp     byte ptr [rdx+rax], 0
 * 00000001800B5052: jnz     short loc_1800B504A
 * 00000001800B5054: lea     rcx, [rax+1]
 * 00000001800B5058: add     rcx, rdx
 * 00000001800B505B: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5062: lea     rax, [rax+1]
 * 00000001800B5066: cmp     byte ptr [rcx+rax], 0
 * 00000001800B506A: jnz     short loc_1800B5062
 * 00000001800B506C: lea     rdx, [rax+1]
 * 00000001800B5070: add     rdx, rcx
 * 00000001800B5073: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B507A: lea     rax, [rax+1]
 * 00000001800B507E: cmp     byte ptr [rdx+rax], 0
 * 00000001800B5082: jnz     short loc_1800B507A
 * 00000001800B5084: lea     rcx, [rax+1]
 * 00000001800B5088: add     rcx, rdx
 * 00000001800B508B: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5092: lea     rax, [rax+1]
 * 00000001800B5096: cmp     byte ptr [rcx+rax], 0
 * 00000001800B509A: jnz     short loc_1800B5092
 * 00000001800B509C: lea     rdx, [rax+1]
 * 00000001800B50A0: add     rdx, rcx
 * 00000001800B50A3: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B50AA: lea     rax, [rax+1]
 * 00000001800B50AE: cmp     byte ptr [rdx+rax], 0
 * 00000001800B50B2: jnz     short loc_1800B50AA
 * 00000001800B50B4: lea     rcx, [rax+1]
 * 00000001800B50B8: add     rcx, rdx
 * 00000001800B50BB: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B50C2: lea     rax, [rax+1]
 * 00000001800B50C6: cmp     byte ptr [rcx+rax], 0
 * 00000001800B50CA: jnz     short loc_1800B50C2
 * 00000001800B50CC: lea     rdx, [rax+1]
 * 00000001800B50D0: add     rdx, rcx
 * 00000001800B50D3: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B50DA: lea     rax, [rax+1]
 * 00000001800B50DE: cmp     byte ptr [rdx+rax], 0
 * 00000001800B50E2: jnz     short loc_1800B50DA
 * 00000001800B50E4: lea     rcx, [rax+1]
 * 00000001800B50E8: add     rcx, rdx
 * 00000001800B50EB: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B50F2: lea     rax, [rax+1]
 * 00000001800B50F6: cmp     byte ptr [rcx+rax], 0
 * 00000001800B50FA: jnz     short loc_1800B50F2
 * 00000001800B50FC: lea     rdx, [rax+1]
 * 00000001800B5100: add     rdx, rcx
 * 00000001800B5103: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B510A: lea     rax, [rax+1]
 * 00000001800B510E: cmp     byte ptr [rdx+rax], 0
 * 00000001800B5112: jnz     short loc_1800B510A
 * 00000001800B5114: lea     rcx, [rax+1]
 * 00000001800B5118: add     rcx, rdx
 * 00000001800B511B: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5122: lea     rax, [rax+1]
 * 00000001800B5126: cmp     byte ptr [rcx+rax], 0
 * 00000001800B512A: jnz     short loc_1800B5122
 * 00000001800B512C: lea     rdx, [rax+1]
 * 00000001800B5130: add     rdx, rcx
 * 00000001800B5133: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B513A: lea     rax, [rax+1]
 * 00000001800B513E: cmp     byte ptr [rdx+rax], 0
 * 00000001800B5142: jnz     short loc_1800B513A
 * 00000001800B5144: lea     rcx, [rax+1]
 * 00000001800B5148: add     rcx, rdx
 * 00000001800B514B: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5152: lea     rax, [rax+1]
 * 00000001800B5156: cmp     byte ptr [rcx+rax], 0
 * 00000001800B515A: jnz     short loc_1800B5152
 * 00000001800B515C: lea     rdx, [rax+1]
 * 00000001800B5160: add     rdx, rcx
 * 00000001800B5163: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B516A: lea     rax, [rax+1]
 * 00000001800B516E: cmp     byte ptr [rdx+rax], 0
 * 00000001800B5172: jnz     short loc_1800B516A
 * 00000001800B5174: lea     rcx, [rax+1]
 * 00000001800B5178: add     rcx, rdx
 * 00000001800B517B: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5182: lea     rax, [rax+1]
 * 00000001800B5186: cmp     byte ptr [rcx+rax], 0
 * 00000001800B518A: jnz     short loc_1800B5182
 * 00000001800B518C: lea     rdx, [rax+1]
 * 00000001800B5190: add     rdx, rcx
 * 00000001800B5193: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B519A: lea     rax, [rax+1]
 * 00000001800B519E: cmp     byte ptr [rdx+rax], 0
 * 00000001800B51A2: jnz     short loc_1800B519A
 * 00000001800B51A4: lea     rcx, [rax+1]
 * 00000001800B51A8: add     rcx, rdx
 * 00000001800B51AB: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B51B2: inc     rax
 * 00000001800B51B5: cmp     byte ptr [rcx+rax], 0
 * 00000001800B51B9: jnz     short loc_1800B51B2
 * 00000001800B51BB: inc     rax
 * 00000001800B51BE: add     rax, rcx
 * 00000001800B51C1: jmp     loc_1800B313C
 * 00000001800B51C6: inc     rax
 * 00000001800B51C9: cmp     byte ptr [rcx+rax], 0
 * 00000001800B51CD: jnz     short loc_1800B51C6
 * 00000001800B51CF: inc     rax
 * 00000001800B51D2: add     rax, rcx
 * 00000001800B51D5: mov     rcx, 0FFFFFFFFFFFFFFFFh
 * 00000001800B51DC: cmp     r8d, 15h
 * 00000001800B51E0: jnz     loc_1800B5362
 * 00000001800B51E6: mov     [rdi], rax
 * 00000001800B51E9: inc     rcx
 * 00000001800B51EC: cmp     byte ptr [rax+rcx], 0
 * 00000001800B51F0: jnz     short loc_1800B51E9
 * 00000001800B51F2: lea     rdx, [rax+1]
 * 00000001800B51F6: add     rdx, rcx
 * 00000001800B51F9: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5200: lea     rax, [rax+1]
 * 00000001800B5204: cmp     byte ptr [rdx+rax], 0
 * 00000001800B5208: jnz     short loc_1800B5200
 * 00000001800B520A: lea     rcx, [rax+1]
 * 00000001800B520E: add     rcx, rdx
 * 00000001800B5211: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5218: lea     rax, [rax+1]
 * 00000001800B521C: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5220: jnz     short loc_1800B5218
 * 00000001800B5222: lea     rdx, [rax+1]
 * 00000001800B5226: add     rdx, rcx
 * 00000001800B5229: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5230: lea     rax, [rax+1]
 * 00000001800B5234: cmp     byte ptr [rdx+rax], 0
 * 00000001800B5238: jnz     short loc_1800B5230
 * 00000001800B523A: lea     rcx, [rax+1]
 * 00000001800B523E: add     rcx, rdx
 * 00000001800B5241: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5248: lea     rax, [rax+1]
 * 00000001800B524C: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5250: jnz     short loc_1800B5248
 * 00000001800B5252: lea     rdx, [rax+1]
 * 00000001800B5256: add     rdx, rcx
 * 00000001800B5259: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5260: lea     rax, [rax+1]
 * 00000001800B5264: cmp     byte ptr [rdx+rax], 0
 * 00000001800B5268: jnz     short loc_1800B5260
 * 00000001800B526A: lea     rcx, [rax+1]
 * 00000001800B526E: add     rcx, rdx
 * 00000001800B5271: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5278: lea     rax, [rax+1]
 * 00000001800B527C: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5280: jnz     short loc_1800B5278
 * 00000001800B5282: lea     rdx, [rax+1]
 * 00000001800B5286: add     rdx, rcx
 * 00000001800B5289: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5290: lea     rax, [rax+1]
 * 00000001800B5294: cmp     byte ptr [rdx+rax], 0
 * 00000001800B5298: jnz     short loc_1800B5290
 * 00000001800B529A: lea     rcx, [rax+1]
 * 00000001800B529E: add     rcx, rdx
 * 00000001800B52A1: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B52A8: lea     rax, [rax+1]
 * 00000001800B52AC: cmp     byte ptr [rcx+rax], 0
 * 00000001800B52B0: jnz     short loc_1800B52A8
 * 00000001800B52B2: lea     rdx, [rax+1]
 * 00000001800B52B6: add     rdx, rcx
 * 00000001800B52B9: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B52C0: lea     rax, [rax+1]
 * 00000001800B52C4: cmp     byte ptr [rdx+rax], 0
 * 00000001800B52C8: jnz     short loc_1800B52C0
 * 00000001800B52CA: lea     rcx, [rax+1]
 * 00000001800B52CE: add     rcx, rdx
 * 00000001800B52D1: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B52D8: lea     rax, [rax+1]
 * 00000001800B52DC: cmp     byte ptr [rcx+rax], 0
 * 00000001800B52E0: jnz     short loc_1800B52D8
 * 00000001800B52E2: lea     rdx, [rax+1]
 * 00000001800B52E6: add     rdx, rcx
 * 00000001800B52E9: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B52F0: lea     rax, [rax+1]
 * 00000001800B52F4: cmp     byte ptr [rdx+rax], 0
 * 00000001800B52F8: jnz     short loc_1800B52F0
 * 00000001800B52FA: lea     rcx, [rax+1]
 * 00000001800B52FE: add     rcx, rdx
 * 00000001800B5301: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5308: lea     rax, [rax+1]
 * 00000001800B530C: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5310: jnz     short loc_1800B5308
 * 00000001800B5312: lea     rdx, [rax+1]
 * 00000001800B5316: add     rdx, rcx
 * 00000001800B5319: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5320: lea     rax, [rax+1]
 * 00000001800B5324: cmp     byte ptr [rdx+rax], 0
 * 00000001800B5328: jnz     short loc_1800B5320
 * 00000001800B532A: lea     rcx, [rax+1]
 * 00000001800B532E: add     rcx, rdx
 * 00000001800B5331: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5338: inc     rax
 * 00000001800B533B: cmp     byte ptr [rcx+rax], 0
 * 00000001800B533F: jnz     short loc_1800B5338
 * 00000001800B5341: inc     rax
 * 00000001800B5344: add     rcx, rax
 * 00000001800B5347: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B534E: inc     rax
 * 00000001800B5351: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5355: jnz     short loc_1800B534E
 * 00000001800B5357: inc     rax
 * 00000001800B535A: add     rax, rcx
 * 00000001800B535D: jmp     loc_1800B313C
 * 00000001800B5362: inc     rcx
 * 00000001800B5365: cmp     byte ptr [rax+rcx], 0
 * 00000001800B5369: jnz     short loc_1800B5362
 * 00000001800B536B: inc     rcx
 * 00000001800B536E: add     rcx, rax
 * 00000001800B5371: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5378: cmp     r8d, 16h
 * 00000001800B537C: jnz     loc_1800B54E9
 * 00000001800B5382: mov     [rdi], rcx
 * 00000001800B5385: lea     rax, [rax+1]
 * 00000001800B5389: cmp     byte ptr [rcx+rax], 0
 * 00000001800B538D: jnz     short loc_1800B5385
 * 00000001800B538F: lea     rdx, [rax+1]
 * 00000001800B5393: add     rdx, rcx
 * 00000001800B5396: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B539D: lea     rax, [rax+1]
 * 00000001800B53A1: cmp     byte ptr [rdx+rax], 0
 * 00000001800B53A5: jnz     short loc_1800B539D
 * 00000001800B53A7: lea     rcx, [rax+1]
 * 00000001800B53AB: add     rcx, rdx
 * 00000001800B53AE: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B53B5: lea     rax, [rax+1]
 * 00000001800B53B9: cmp     byte ptr [rcx+rax], 0
 * 00000001800B53BD: jnz     short loc_1800B53B5
 * 00000001800B53BF: lea     rdx, [rax+1]
 * 00000001800B53C3: add     rdx, rcx
 * 00000001800B53C6: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B53CD: lea     rax, [rax+1]
 * 00000001800B53D1: cmp     byte ptr [rdx+rax], 0
 * 00000001800B53D5: jnz     short loc_1800B53CD
 * 00000001800B53D7: lea     rcx, [rax+1]
 * 00000001800B53DB: add     rcx, rdx
 * 00000001800B53DE: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B53E5: lea     rax, [rax+1]
 * 00000001800B53E9: cmp     byte ptr [rcx+rax], 0
 * 00000001800B53ED: jnz     short loc_1800B53E5
 * 00000001800B53EF: lea     rdx, [rax+1]
 * 00000001800B53F3: add     rdx, rcx
 * 00000001800B53F6: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B53FD: lea     rax, [rax+1]
 * 00000001800B5401: cmp     byte ptr [rdx+rax], 0
 * 00000001800B5405: jnz     short loc_1800B53FD
 * 00000001800B5407: lea     rcx, [rax+1]
 * 00000001800B540B: add     rcx, rdx
 * 00000001800B540E: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5415: lea     rax, [rax+1]
 * 00000001800B5419: cmp     byte ptr [rcx+rax], 0
 * 00000001800B541D: jnz     short loc_1800B5415
 * 00000001800B541F: lea     rdx, [rax+1]
 * 00000001800B5423: add     rdx, rcx
 * 00000001800B5426: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B542D: lea     rax, [rax+1]
 * 00000001800B5431: cmp     byte ptr [rdx+rax], 0
 * 00000001800B5435: jnz     short loc_1800B542D
 * 00000001800B5437: lea     rcx, [rax+1]
 * 00000001800B543B: add     rcx, rdx
 * 00000001800B543E: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5445: lea     rax, [rax+1]
 * 00000001800B5449: cmp     byte ptr [rcx+rax], 0
 * 00000001800B544D: jnz     short loc_1800B5445
 * 00000001800B544F: lea     rdx, [rax+1]
 * 00000001800B5453: add     rdx, rcx
 * 00000001800B5456: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B545D: lea     rax, [rax+1]
 * 00000001800B5461: cmp     byte ptr [rdx+rax], 0
 * 00000001800B5465: jnz     short loc_1800B545D
 * 00000001800B5467: lea     rcx, [rax+1]
 * 00000001800B546B: add     rcx, rdx
 * 00000001800B546E: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5475: lea     rax, [rax+1]
 * 00000001800B5479: cmp     byte ptr [rcx+rax], 0
 * 00000001800B547D: jnz     short loc_1800B5475
 * 00000001800B547F: lea     rdx, [rax+1]
 * 00000001800B5483: add     rdx, rcx
 * 00000001800B5486: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B548D: lea     rax, [rax+1]
 * 00000001800B5491: cmp     byte ptr [rdx+rax], 0
 * 00000001800B5495: jnz     short loc_1800B548D
 * 00000001800B5497: lea     rcx, [rax+1]
 * 00000001800B549B: add     rcx, rdx
 * 00000001800B549E: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B54A5: lea     rax, [rax+1]
 * 00000001800B54A9: cmp     byte ptr [rcx+rax], 0
 * 00000001800B54AD: jnz     short loc_1800B54A5
 * 00000001800B54AF: lea     rdx, [rax+1]
 * 00000001800B54B3: add     rdx, rcx
 * 00000001800B54B6: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B54BD: lea     rax, [rax+1]
 * 00000001800B54C1: cmp     byte ptr [rdx+rax], 0
 * 00000001800B54C5: jnz     short loc_1800B54BD
 * 00000001800B54C7: lea     rcx, [rax+1]
 * 00000001800B54CB: add     rcx, rdx
 * 00000001800B54CE: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B54D5: inc     rax
 * 00000001800B54D8: cmp     byte ptr [rcx+rax], 0
 * 00000001800B54DC: jnz     short loc_1800B54D5
 * 00000001800B54DE: inc     rax
 * 00000001800B54E1: add     rax, rcx
 * 00000001800B54E4: jmp     loc_1800B313C
 * 00000001800B54E9: inc     rax
 * 00000001800B54EC: cmp     byte ptr [rcx+rax], 0
 * 00000001800B54F0: jnz     short loc_1800B54E9
 * 00000001800B54F2: inc     rax
 * 00000001800B54F5: add     rax, rcx
 * 00000001800B54F8: mov     rcx, 0FFFFFFFFFFFFFFFFh
 * 00000001800B54FF: cmp     r8d, 17h
 * 00000001800B5503: jnz     loc_1800B5655
 * 00000001800B5509: mov     [rdi], rax
 * 00000001800B550C: inc     rcx
 * 00000001800B550F: cmp     byte ptr [rax+rcx], 0
 * 00000001800B5513: jnz     short loc_1800B550C
 * 00000001800B5515: lea     rdx, [rax+1]
 * 00000001800B5519: add     rdx, rcx
 * 00000001800B551C: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5523: lea     rax, [rax+1]
 * 00000001800B5527: cmp     byte ptr [rdx+rax], 0
 * 00000001800B552B: jnz     short loc_1800B5523
 * 00000001800B552D: lea     rcx, [rax+1]
 * 00000001800B5531: add     rcx, rdx
 * 00000001800B5534: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B553B: lea     rax, [rax+1]
 * 00000001800B553F: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5543: jnz     short loc_1800B553B
 * 00000001800B5545: lea     rdx, [rax+1]
 * 00000001800B5549: add     rdx, rcx
 * 00000001800B554C: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5553: lea     rax, [rax+1]
 * 00000001800B5557: cmp     byte ptr [rdx+rax], 0
 * 00000001800B555B: jnz     short loc_1800B5553
 * 00000001800B555D: lea     rcx, [rax+1]
 * 00000001800B5561: add     rcx, rdx
 * 00000001800B5564: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B556B: lea     rax, [rax+1]
 * 00000001800B556F: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5573: jnz     short loc_1800B556B
 * 00000001800B5575: lea     rdx, [rax+1]
 * 00000001800B5579: add     rdx, rcx
 * 00000001800B557C: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5583: lea     rax, [rax+1]
 * 00000001800B5587: cmp     byte ptr [rdx+rax], 0
 * 00000001800B558B: jnz     short loc_1800B5583
 * 00000001800B558D: lea     rcx, [rax+1]
 * 00000001800B5591: add     rcx, rdx
 * 00000001800B5594: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B559B: lea     rax, [rax+1]
 * 00000001800B559F: cmp     byte ptr [rcx+rax], 0
 * 00000001800B55A3: jnz     short loc_1800B559B
 * 00000001800B55A5: lea     rdx, [rax+1]
 * 00000001800B55A9: add     rdx, rcx
 * 00000001800B55AC: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B55B3: lea     rax, [rax+1]
 * 00000001800B55B7: cmp     byte ptr [rdx+rax], 0
 * 00000001800B55BB: jnz     short loc_1800B55B3
 * 00000001800B55BD: lea     rcx, [rax+1]
 * 00000001800B55C1: add     rcx, rdx
 * 00000001800B55C4: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B55CB: lea     rax, [rax+1]
 * 00000001800B55CF: cmp     byte ptr [rcx+rax], 0
 * 00000001800B55D3: jnz     short loc_1800B55CB
 * 00000001800B55D5: lea     rdx, [rax+1]
 * 00000001800B55D9: add     rdx, rcx
 * 00000001800B55DC: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B55E3: lea     rax, [rax+1]
 * 00000001800B55E7: cmp     byte ptr [rdx+rax], 0
 * 00000001800B55EB: jnz     short loc_1800B55E3
 * 00000001800B55ED: lea     rcx, [rax+1]
 * 00000001800B55F1: add     rcx, rdx
 * 00000001800B55F4: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B55FB: lea     rax, [rax+1]
 * 00000001800B55FF: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5603: jnz     short loc_1800B55FB
 * 00000001800B5605: lea     rdx, [rax+1]
 * 00000001800B5609: add     rdx, rcx
 * 00000001800B560C: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5613: lea     rax, [rax+1]
 * 00000001800B5617: cmp     byte ptr [rdx+rax], 0
 * 00000001800B561B: jnz     short loc_1800B5613
 * 00000001800B561D: lea     rcx, [rax+1]
 * 00000001800B5621: add     rcx, rdx
 * 00000001800B5624: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B562B: inc     rax
 * 00000001800B562E: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5632: jnz     short loc_1800B562B
 * 00000001800B5634: inc     rax
 * 00000001800B5637: add     rcx, rax
 * 00000001800B563A: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5641: inc     rax
 * 00000001800B5644: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5648: jnz     short loc_1800B5641
 * 00000001800B564A: inc     rax
 * 00000001800B564D: add     rax, rcx
 * 00000001800B5650: jmp     loc_1800B313C
 * 00000001800B5655: inc     rcx
 * 00000001800B5658: cmp     byte ptr [rax+rcx], 0
 * 00000001800B565C: jnz     short loc_1800B5655
 * 00000001800B565E: inc     rcx
 * 00000001800B5661: add     rcx, rax
 * 00000001800B5664: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B566B: cmp     r8d, 18h
 * 00000001800B566F: jnz     loc_1800B57AC
 * 00000001800B5675: mov     [rdi], rcx
 * 00000001800B5678: lea     rax, [rax+1]
 * 00000001800B567C: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5680: jnz     short loc_1800B5678
 * 00000001800B5682: lea     rdx, [rax+1]
 * 00000001800B5686: add     rdx, rcx
 * 00000001800B5689: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5690: lea     rax, [rax+1]
 * 00000001800B5694: cmp     byte ptr [rdx+rax], 0
 * 00000001800B5698: jnz     short loc_1800B5690
 * 00000001800B569A: lea     rcx, [rax+1]
 * 00000001800B569E: add     rcx, rdx
 * 00000001800B56A1: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B56A8: lea     rax, [rax+1]
 * 00000001800B56AC: cmp     byte ptr [rcx+rax], 0
 * 00000001800B56B0: jnz     short loc_1800B56A8
 * 00000001800B56B2: lea     rdx, [rax+1]
 * 00000001800B56B6: add     rdx, rcx
 * 00000001800B56B9: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B56C0: lea     rax, [rax+1]
 * 00000001800B56C4: cmp     byte ptr [rdx+rax], 0
 * 00000001800B56C8: jnz     short loc_1800B56C0
 * 00000001800B56CA: lea     rcx, [rax+1]
 * 00000001800B56CE: add     rcx, rdx
 * 00000001800B56D1: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B56D8: lea     rax, [rax+1]
 * 00000001800B56DC: cmp     byte ptr [rcx+rax], 0
 * 00000001800B56E0: jnz     short loc_1800B56D8
 * 00000001800B56E2: lea     rdx, [rax+1]
 * 00000001800B56E6: add     rdx, rcx
 * 00000001800B56E9: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B56F0: lea     rax, [rax+1]
 * 00000001800B56F4: cmp     byte ptr [rdx+rax], 0
 * 00000001800B56F8: jnz     short loc_1800B56F0
 * 00000001800B56FA: lea     rcx, [rax+1]
 * 00000001800B56FE: add     rcx, rdx
 * 00000001800B5701: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5708: lea     rax, [rax+1]
 * 00000001800B570C: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5710: jnz     short loc_1800B5708
 * 00000001800B5712: lea     rdx, [rax+1]
 * 00000001800B5716: add     rdx, rcx
 * 00000001800B5719: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5720: lea     rax, [rax+1]
 * 00000001800B5724: cmp     byte ptr [rdx+rax], 0
 * 00000001800B5728: jnz     short loc_1800B5720
 * 00000001800B572A: lea     rcx, [rax+1]
 * 00000001800B572E: add     rcx, rdx
 * 00000001800B5731: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5738: lea     rax, [rax+1]
 * 00000001800B573C: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5740: jnz     short loc_1800B5738
 * 00000001800B5742: lea     rdx, [rax+1]
 * 00000001800B5746: add     rdx, rcx
 * 00000001800B5749: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5750: lea     rax, [rax+1]
 * 00000001800B5754: cmp     byte ptr [rdx+rax], 0
 * 00000001800B5758: jnz     short loc_1800B5750
 * 00000001800B575A: lea     rcx, [rax+1]
 * 00000001800B575E: add     rcx, rdx
 * 00000001800B5761: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5768: lea     rax, [rax+1]
 * 00000001800B576C: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5770: jnz     short loc_1800B5768
 * 00000001800B5772: lea     rdx, [rax+1]
 * 00000001800B5776: add     rdx, rcx
 * 00000001800B5779: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5780: lea     rax, [rax+1]
 * 00000001800B5784: cmp     byte ptr [rdx+rax], 0
 * 00000001800B5788: jnz     short loc_1800B5780
 * 00000001800B578A: lea     rcx, [rax+1]
 * 00000001800B578E: add     rcx, rdx
 * 00000001800B5791: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5798: inc     rax
 * 00000001800B579B: cmp     byte ptr [rcx+rax], 0
 * 00000001800B579F: jnz     short loc_1800B5798
 * 00000001800B57A1: inc     rax
 * 00000001800B57A4: add     rax, rcx
 * 00000001800B57A7: jmp     loc_1800B313C
 * 00000001800B57AC: inc     rax
 * 00000001800B57AF: cmp     byte ptr [rcx+rax], 0
 * 00000001800B57B3: jnz     short loc_1800B57AC
 * 00000001800B57B5: inc     rax
 * 00000001800B57B8: add     rax, rcx
 * 00000001800B57BB: mov     rcx, 0FFFFFFFFFFFFFFFFh
 * 00000001800B57C2: cmp     r8d, 19h
 * 00000001800B57C6: jnz     loc_1800B58E8
 * 00000001800B57CC: mov     [rdi], rax
 * 00000001800B57CF: inc     rcx
 * 00000001800B57D2: cmp     byte ptr [rax+rcx], 0
 * 00000001800B57D6: jnz     short loc_1800B57CF
 * 00000001800B57D8: lea     rdx, [rax+1]
 * 00000001800B57DC: add     rdx, rcx
 * 00000001800B57DF: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B57E6: lea     rax, [rax+1]
 * 00000001800B57EA: cmp     byte ptr [rdx+rax], 0
 * 00000001800B57EE: jnz     short loc_1800B57E6
 * 00000001800B57F0: lea     rcx, [rax+1]
 * 00000001800B57F4: add     rcx, rdx
 * 00000001800B57F7: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B57FE: lea     rax, [rax+1]
 * 00000001800B5802: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5806: jnz     short loc_1800B57FE
 * 00000001800B5808: lea     rdx, [rax+1]
 * 00000001800B580C: add     rdx, rcx
 * 00000001800B580F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5816: lea     rax, [rax+1]
 * 00000001800B581A: cmp     byte ptr [rdx+rax], 0
 * 00000001800B581E: jnz     short loc_1800B5816
 * 00000001800B5820: lea     rcx, [rax+1]
 * 00000001800B5824: add     rcx, rdx
 * 00000001800B5827: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B582E: lea     rax, [rax+1]
 * 00000001800B5832: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5836: jnz     short loc_1800B582E
 * 00000001800B5838: lea     rdx, [rax+1]
 * 00000001800B583C: add     rdx, rcx
 * 00000001800B583F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5846: lea     rax, [rax+1]
 * 00000001800B584A: cmp     byte ptr [rdx+rax], 0
 * 00000001800B584E: jnz     short loc_1800B5846
 * 00000001800B5850: lea     rcx, [rax+1]
 * 00000001800B5854: add     rcx, rdx
 * 00000001800B5857: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B585E: lea     rax, [rax+1]
 * 00000001800B5862: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5866: jnz     short loc_1800B585E
 * 00000001800B5868: lea     rdx, [rax+1]
 * 00000001800B586C: add     rdx, rcx
 * 00000001800B586F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5876: lea     rax, [rax+1]
 * 00000001800B587A: cmp     byte ptr [rdx+rax], 0
 * 00000001800B587E: jnz     short loc_1800B5876
 * 00000001800B5880: lea     rcx, [rax+1]
 * 00000001800B5884: add     rcx, rdx
 * 00000001800B5887: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B588E: lea     rax, [rax+1]
 * 00000001800B5892: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5896: jnz     short loc_1800B588E
 * 00000001800B5898: lea     rdx, [rax+1]
 * 00000001800B589C: add     rdx, rcx
 * 00000001800B589F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B58A6: lea     rax, [rax+1]
 * 00000001800B58AA: cmp     byte ptr [rdx+rax], 0
 * 00000001800B58AE: jnz     short loc_1800B58A6
 * 00000001800B58B0: lea     rcx, [rax+1]
 * 00000001800B58B4: add     rcx, rdx
 * 00000001800B58B7: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B58BE: inc     rax
 * 00000001800B58C1: cmp     byte ptr [rcx+rax], 0
 * 00000001800B58C5: jnz     short loc_1800B58BE
 * 00000001800B58C7: inc     rax
 * 00000001800B58CA: add     rcx, rax
 * 00000001800B58CD: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B58D4: inc     rax
 * 00000001800B58D7: cmp     byte ptr [rcx+rax], 0
 * 00000001800B58DB: jnz     short loc_1800B58D4
 * 00000001800B58DD: inc     rax
 * 00000001800B58E0: add     rax, rcx
 * 00000001800B58E3: jmp     loc_1800B313C
 * 00000001800B58E8: inc     rcx
 * 00000001800B58EB: cmp     byte ptr [rax+rcx], 0
 * 00000001800B58EF: jnz     short loc_1800B58E8
 * 00000001800B58F1: inc     rcx
 * 00000001800B58F4: add     rcx, rax
 * 00000001800B58F7: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B58FE: cmp     r8d, 1Ah
 * 00000001800B5902: jnz     loc_1800B5A0F
 * 00000001800B5908: mov     [rdi], rcx
 * 00000001800B590B: lea     rax, [rax+1]
 * 00000001800B590F: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5913: jnz     short loc_1800B590B
 * 00000001800B5915: lea     rdx, [rax+1]
 * 00000001800B5919: add     rdx, rcx
 * 00000001800B591C: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5923: lea     rax, [rax+1]
 * 00000001800B5927: cmp     byte ptr [rdx+rax], 0
 * 00000001800B592B: jnz     short loc_1800B5923
 * 00000001800B592D: lea     rcx, [rax+1]
 * 00000001800B5931: add     rcx, rdx
 * 00000001800B5934: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B593B: lea     rax, [rax+1]
 * 00000001800B593F: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5943: jnz     short loc_1800B593B
 * 00000001800B5945: lea     rdx, [rax+1]
 * 00000001800B5949: add     rdx, rcx
 * 00000001800B594C: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5953: lea     rax, [rax+1]
 * 00000001800B5957: cmp     byte ptr [rdx+rax], 0
 * 00000001800B595B: jnz     short loc_1800B5953
 * 00000001800B595D: lea     rcx, [rax+1]
 * 00000001800B5961: add     rcx, rdx
 * 00000001800B5964: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B596B: lea     rax, [rax+1]
 * 00000001800B596F: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5973: jnz     short loc_1800B596B
 * 00000001800B5975: lea     rdx, [rax+1]
 * 00000001800B5979: add     rdx, rcx
 * 00000001800B597C: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5983: lea     rax, [rax+1]
 * 00000001800B5987: cmp     byte ptr [rdx+rax], 0
 * 00000001800B598B: jnz     short loc_1800B5983
 * 00000001800B598D: lea     rcx, [rax+1]
 * 00000001800B5991: add     rcx, rdx
 * 00000001800B5994: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B599B: lea     rax, [rax+1]
 * 00000001800B599F: cmp     byte ptr [rcx+rax], 0
 * 00000001800B59A3: jnz     short loc_1800B599B
 * 00000001800B59A5: lea     rdx, [rax+1]
 * 00000001800B59A9: add     rdx, rcx
 * 00000001800B59AC: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B59B3: lea     rax, [rax+1]
 * 00000001800B59B7: cmp     byte ptr [rdx+rax], 0
 * 00000001800B59BB: jnz     short loc_1800B59B3
 * 00000001800B59BD: lea     rcx, [rax+1]
 * 00000001800B59C1: add     rcx, rdx
 * 00000001800B59C4: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B59CB: lea     rax, [rax+1]
 * 00000001800B59CF: cmp     byte ptr [rcx+rax], 0
 * 00000001800B59D3: jnz     short loc_1800B59CB
 * 00000001800B59D5: lea     rdx, [rax+1]
 * 00000001800B59D9: add     rdx, rcx
 * 00000001800B59DC: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B59E3: lea     rax, [rax+1]
 * 00000001800B59E7: cmp     byte ptr [rdx+rax], 0
 * 00000001800B59EB: jnz     short loc_1800B59E3
 * 00000001800B59ED: lea     rcx, [rax+1]
 * 00000001800B59F1: add     rcx, rdx
 * 00000001800B59F4: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B59FB: inc     rax
 * 00000001800B59FE: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5A02: jnz     short loc_1800B59FB
 * 00000001800B5A04: inc     rax
 * 00000001800B5A07: add     rax, rcx
 * 00000001800B5A0A: jmp     loc_1800B313C
 * 00000001800B5A0F: inc     rax
 * 00000001800B5A12: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5A16: jnz     short loc_1800B5A0F
 * 00000001800B5A18: inc     rax
 * 00000001800B5A1B: add     rax, rcx
 * 00000001800B5A1E: mov     rcx, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5A25: cmp     r8d, 1Bh
 * 00000001800B5A29: jnz     loc_1800B5B1B
 * 00000001800B5A2F: mov     [rdi], rax
 * 00000001800B5A32: inc     rcx
 * 00000001800B5A35: cmp     byte ptr [rax+rcx], 0
 * 00000001800B5A39: jnz     short loc_1800B5A32
 * 00000001800B5A3B: lea     rdx, [rax+1]
 * 00000001800B5A3F: add     rdx, rcx
 * 00000001800B5A42: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5A49: lea     rax, [rax+1]
 * 00000001800B5A4D: cmp     byte ptr [rdx+rax], 0
 * 00000001800B5A51: jnz     short loc_1800B5A49
 * 00000001800B5A53: lea     rcx, [rax+1]
 * 00000001800B5A57: add     rcx, rdx
 * 00000001800B5A5A: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5A61: lea     rax, [rax+1]
 * 00000001800B5A65: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5A69: jnz     short loc_1800B5A61
 * 00000001800B5A6B: lea     rdx, [rax+1]
 * 00000001800B5A6F: add     rdx, rcx
 * 00000001800B5A72: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5A79: lea     rax, [rax+1]
 * 00000001800B5A7D: cmp     byte ptr [rdx+rax], 0
 * 00000001800B5A81: jnz     short loc_1800B5A79
 * 00000001800B5A83: lea     rcx, [rax+1]
 * 00000001800B5A87: add     rcx, rdx
 * 00000001800B5A8A: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5A91: lea     rax, [rax+1]
 * 00000001800B5A95: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5A99: jnz     short loc_1800B5A91
 * 00000001800B5A9B: lea     rdx, [rax+1]
 * 00000001800B5A9F: add     rdx, rcx
 * 00000001800B5AA2: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5AA9: lea     rax, [rax+1]
 * 00000001800B5AAD: cmp     byte ptr [rdx+rax], 0
 * 00000001800B5AB1: jnz     short loc_1800B5AA9
 * 00000001800B5AB3: lea     rcx, [rax+1]
 * 00000001800B5AB7: add     rcx, rdx
 * 00000001800B5ABA: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5AC1: lea     rax, [rax+1]
 * 00000001800B5AC5: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5AC9: jnz     short loc_1800B5AC1
 * 00000001800B5ACB: lea     rdx, [rax+1]
 * 00000001800B5ACF: add     rdx, rcx
 * 00000001800B5AD2: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5AD9: lea     rax, [rax+1]
 * 00000001800B5ADD: cmp     byte ptr [rdx+rax], 0
 * 00000001800B5AE1: jnz     short loc_1800B5AD9
 * 00000001800B5AE3: lea     rcx, [rax+1]
 * 00000001800B5AE7: add     rcx, rdx
 * 00000001800B5AEA: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5AF1: inc     rax
 * 00000001800B5AF4: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5AF8: jnz     short loc_1800B5AF1
 * 00000001800B5AFA: inc     rax
 * 00000001800B5AFD: add     rcx, rax
 * 00000001800B5B00: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5B07: inc     rax
 * 00000001800B5B0A: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5B0E: jnz     short loc_1800B5B07
 * 00000001800B5B10: inc     rax
 * 00000001800B5B13: add     rax, rcx
 * 00000001800B5B16: jmp     loc_1800B313C
 * 00000001800B5B1B: inc     rcx
 * 00000001800B5B1E: cmp     byte ptr [rax+rcx], 0
 * 00000001800B5B22: jnz     short loc_1800B5B1B
 * 00000001800B5B24: inc     rcx
 * 00000001800B5B27: add     rcx, rax
 * 00000001800B5B2A: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5B31: cmp     r8d, 1Ch
 * 00000001800B5B35: jnz     loc_1800B5C12
 * 00000001800B5B3B: mov     [rdi], rcx
 * 00000001800B5B3E: lea     rax, [rax+1]
 * 00000001800B5B42: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5B46: jnz     short loc_1800B5B3E
 * 00000001800B5B48: lea     rdx, [rax+1]
 * 00000001800B5B4C: add     rdx, rcx
 * 00000001800B5B4F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5B56: lea     rax, [rax+1]
 * 00000001800B5B5A: cmp     byte ptr [rdx+rax], 0
 * 00000001800B5B5E: jnz     short loc_1800B5B56
 * 00000001800B5B60: lea     rcx, [rax+1]
 * 00000001800B5B64: add     rcx, rdx
 * 00000001800B5B67: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5B6E: lea     rax, [rax+1]
 * 00000001800B5B72: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5B76: jnz     short loc_1800B5B6E
 * 00000001800B5B78: lea     rdx, [rax+1]
 * 00000001800B5B7C: add     rdx, rcx
 * 00000001800B5B7F: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5B86: lea     rax, [rax+1]
 * 00000001800B5B8A: cmp     byte ptr [rdx+rax], 0
 * 00000001800B5B8E: jnz     short loc_1800B5B86
 * 00000001800B5B90: lea     rcx, [rax+1]
 * 00000001800B5B94: add     rcx, rdx
 * 00000001800B5B97: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5B9E: lea     rax, [rax+1]
 * 00000001800B5BA2: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5BA6: jnz     short loc_1800B5B9E
 * 00000001800B5BA8: lea     rdx, [rax+1]
 * 00000001800B5BAC: add     rdx, rcx
 * 00000001800B5BAF: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5BB6: lea     rax, [rax+1]
 * 00000001800B5BBA: cmp     byte ptr [rdx+rax], 0
 * 00000001800B5BBE: jnz     short loc_1800B5BB6
 * 00000001800B5BC0: lea     rcx, [rax+1]
 * 00000001800B5BC4: add     rcx, rdx
 * 00000001800B5BC7: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5BCE: lea     rax, [rax+1]
 * 00000001800B5BD2: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5BD6: jnz     short loc_1800B5BCE
 * 00000001800B5BD8: lea     rdx, [rax+1]
 * 00000001800B5BDC: add     rdx, rcx
 * 00000001800B5BDF: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5BE6: lea     rax, [rax+1]
 * 00000001800B5BEA: cmp     byte ptr [rdx+rax], 0
 * 00000001800B5BEE: jnz     short loc_1800B5BE6
 * 00000001800B5BF0: lea     rcx, [rax+1]
 * 00000001800B5BF4: add     rcx, rdx
 * 00000001800B5BF7: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5BFE: inc     rax
 * 00000001800B5C01: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5C05: jnz     short loc_1800B5BFE
 * 00000001800B5C07: inc     rax
 * 00000001800B5C0A: add     rax, rcx
 * 00000001800B5C0D: jmp     loc_1800B313C
 * 00000001800B5C12: inc     rax
 * 00000001800B5C15: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5C19: jnz     short loc_1800B5C12
 * 00000001800B5C1B: inc     rax
 * 00000001800B5C1E: add     rax, rcx
 * 00000001800B5C21: mov     rcx, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5C28: cmp     r8d, 1Dh
 * 00000001800B5C2C: jnz     loc_1800B5CEE
 * 00000001800B5C32: mov     [rdi], rax
 * 00000001800B5C35: inc     rcx
 * 00000001800B5C38: cmp     byte ptr [rax+rcx], 0
 * 00000001800B5C3C: jnz     short loc_1800B5C35
 * 00000001800B5C3E: lea     rdx, [rax+1]
 * 00000001800B5C42: add     rdx, rcx
 * 00000001800B5C45: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5C4C: lea     rax, [rax+1]
 * 00000001800B5C50: cmp     byte ptr [rdx+rax], 0
 * 00000001800B5C54: jnz     short loc_1800B5C4C
 * 00000001800B5C56: lea     rcx, [rax+1]
 * 00000001800B5C5A: add     rcx, rdx
 * 00000001800B5C5D: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5C64: lea     rax, [rax+1]
 * 00000001800B5C68: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5C6C: jnz     short loc_1800B5C64
 * 00000001800B5C6E: lea     rdx, [rax+1]
 * 00000001800B5C72: add     rdx, rcx
 * 00000001800B5C75: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5C7C: lea     rax, [rax+1]
 * 00000001800B5C80: cmp     byte ptr [rdx+rax], 0
 * 00000001800B5C84: jnz     short loc_1800B5C7C
 * 00000001800B5C86: lea     rcx, [rax+1]
 * 00000001800B5C8A: add     rcx, rdx
 * 00000001800B5C8D: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5C94: lea     rax, [rax+1]
 * 00000001800B5C98: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5C9C: jnz     short loc_1800B5C94
 * 00000001800B5C9E: lea     rdx, [rax+1]
 * 00000001800B5CA2: add     rdx, rcx
 * 00000001800B5CA5: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5CAC: lea     rax, [rax+1]
 * 00000001800B5CB0: cmp     byte ptr [rdx+rax], 0
 * 00000001800B5CB4: jnz     short loc_1800B5CAC
 * 00000001800B5CB6: lea     rcx, [rax+1]
 * 00000001800B5CBA: add     rcx, rdx
 * 00000001800B5CBD: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5CC4: inc     rax
 * 00000001800B5CC7: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5CCB: jnz     short loc_1800B5CC4
 * 00000001800B5CCD: inc     rax
 * 00000001800B5CD0: add     rcx, rax
 * 00000001800B5CD3: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5CDA: inc     rax
 * 00000001800B5CDD: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5CE1: jnz     short loc_1800B5CDA
 * 00000001800B5CE3: inc     rax
 * 00000001800B5CE6: add     rax, rcx
 * 00000001800B5CE9: jmp     loc_1800B313C
 * 00000001800B5CEE: inc     rcx
 * 00000001800B5CF1: cmp     byte ptr [rax+rcx], 0
 * 00000001800B5CF5: jnz     short loc_1800B5CEE
 * 00000001800B5CF7: inc     rax
 * 00000001800B5CFA: add     rax, rcx
 * 00000001800B5CFD: cmp     r8d, 1Eh
 * 00000001800B5D01: jnz     loc_1800B1D58
 * 00000001800B5D07: mov     [rdi], rax
 * 00000001800B5D0A: mov     rcx, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5D11: inc     rcx
 * 00000001800B5D14: cmp     byte ptr [rax+rcx], 0
 * 00000001800B5D18: jnz     short loc_1800B5D11
 * 00000001800B5D1A: lea     rdx, [rax+1]
 * 00000001800B5D1E: add     rdx, rcx
 * 00000001800B5D21: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5D28: lea     rax, [rax+1]
 * 00000001800B5D2C: cmp     byte ptr [rdx+rax], 0
 * 00000001800B5D30: jnz     short loc_1800B5D28
 * 00000001800B5D32: lea     rcx, [rax+1]
 * 00000001800B5D36: add     rcx, rdx
 * 00000001800B5D39: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5D40: lea     rax, [rax+1]
 * 00000001800B5D44: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5D48: jnz     short loc_1800B5D40
 * 00000001800B5D4A: lea     rdx, [rax+1]
 * 00000001800B5D4E: add     rdx, rcx
 * 00000001800B5D51: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5D58: lea     rax, [rax+1]
 * 00000001800B5D5C: cmp     byte ptr [rdx+rax], 0
 * 00000001800B5D60: jnz     short loc_1800B5D58
 * 00000001800B5D62: lea     rcx, [rax+1]
 * 00000001800B5D66: add     rcx, rdx
 * 00000001800B5D69: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5D70: lea     rax, [rax+1]
 * 00000001800B5D74: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5D78: jnz     short loc_1800B5D70
 * 00000001800B5D7A: lea     rdx, [rax+1]
 * 00000001800B5D7E: add     rdx, rcx
 * 00000001800B5D81: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5D88: lea     rax, [rax+1]
 * 00000001800B5D8C: cmp     byte ptr [rdx+rax], 0
 * 00000001800B5D90: jnz     short loc_1800B5D88
 * 00000001800B5D92: lea     rcx, [rax+1]
 * 00000001800B5D96: add     rcx, rdx
 * 00000001800B5D99: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5DA0: inc     rax
 * 00000001800B5DA3: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5DA7: jnz     short loc_1800B5DA0
 * 00000001800B5DA9: inc     rax
 * 00000001800B5DAC: add     rax, rcx
 * 00000001800B5DAF: jmp     loc_1800B313C
 * 00000001800B5DB4: mov     [rbp+1180h+var_EB0], rdi
 * 00000001800B5DBB: xorps   xmm0, xmm0
 * 00000001800B5DBE: movups  xmmword ptr [rdi], xmm0
 * 00000001800B5DC1: mov     [rdi+10h], rax
 * 00000001800B5DC5: xor     r11d, r11d
 * 00000001800B5DC8: mov     r8d, r11d
 * 00000001800B5DCB: mov     dword ptr [rbp+1180h+var_11C0], r11d
 * 00000001800B5DCF: mov     rdx, rdi
 * 00000001800B5DD2: mov     [rbp+1180h+var_11A0], rdx
 * 00000001800B5DD6: lea     rcx, [rbp+1180h+var_300]
 * 00000001800B5DDD: mov     [rsp+1280h+lpMem], rcx
 * 00000001800B5DE2: mov     eax, r11d
 * 00000001800B5DE5: movzx   r9d, word ptr [rcx]
 * 00000001800B5DE9: lea     rcx, unk_18019A498
 * 00000001800B5DF0: cmp     r9w, [rcx]
 * 00000001800B5DF4: jz      short loc_1800B5E06
 * 00000001800B5DF6: inc     eax
 * 00000001800B5DF8: add     rcx, 2
 * 00000001800B5DFC: cmp     eax, 6
 * 00000001800B5DFF: jb      short loc_1800B5DF0
 * 00000001800B5E01: jmp     loc_1800B5ECE
 * 00000001800B5E06: mov     rcx, [rbp+rax*8+1180h+var_410]
 * 00000001800B5E0E: mov     [rbp+1180h+var_11D0], rcx
 * 00000001800B5E12: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5E19: lea     rax, [rax+1]
 * 00000001800B5E1D: cmp     byte ptr [rcx+rax], 0
 * 00000001800B5E21: jnz     short loc_1800B5E19
 * 00000001800B5E23: lea     r9d, [rax+1]
 * 00000001800B5E27: mov     r10, 8F85170D18D27270h
 * 00000001800B5E31: mov     dword ptr [rsp+1280h+var_1258], r11d
 * 00000001800B5E36: mov     [rsp+1280h+var_1260], r11
 * 00000001800B5E3B: mov     r8, rcx
 * 00000001800B5E3E: xor     edx, edx
 * 00000001800B5E40: mov     ecx, 0FDE9h
 * 00000001800B5E45: mov     rax, cs:off_1801C00C0
 * 00000001800B5E4C: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B5E52: mov     dword ptr [rbp+1180h+var_11B0], eax
 * 00000001800B5E55: test    eax, eax
 * 00000001800B5E57: jz      loc_1800B5F41
 * 00000001800B5E5D: movsxd  rcx, eax
 * 00000001800B5E60: add     rcx, rcx; unsigned __int64
 * 00000001800B5E63: call    ??2@YAPEAX_K@Z; operator new(unsigned __int64)
 * 00000001800B5E68: mov     rcx, rax
 * 00000001800B5E6B: mov     rax, [rbp+1180h+var_11A0]
 * 00000001800B5E6F: mov     [rax], rcx
 * 00000001800B5E72: test    rcx, rcx
 * 00000001800B5E75: jz      loc_1800B5F3A
 * 00000001800B5E7B: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5E82: mov     r8, [rbp+1180h+var_11D0]
 * 00000001800B5E86: lea     rax, [rax+1]
 * 00000001800B5E8A: cmp     byte ptr [r8+rax], 0
 * 00000001800B5E8F: jnz     short loc_1800B5E86
 * 00000001800B5E91: lea     r9d, [rax+1]
 * 00000001800B5E95: mov     r10, 8F85170D18D27270h
 * 00000001800B5E9F: mov     edx, dword ptr [rbp+1180h+var_11B0]
 * 00000001800B5EA2: mov     dword ptr [rsp+1280h+var_1258], edx
 * 00000001800B5EA6: mov     [rsp+1280h+var_1260], rcx
 * 00000001800B5EAB: xor     edx, edx
 * 00000001800B5EAD: mov     ecx, 0FDE9h
 * 00000001800B5EB2: mov     rax, cs:off_1801C00C0
 * 00000001800B5EB9: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B5EBF: test    eax, eax
 * 00000001800B5EC1: jz      short loc_1800B5F11
 * 00000001800B5EC3: mov     rdx, [rbp+1180h+var_11A0]
 * 00000001800B5EC7: mov     r8d, dword ptr [rbp+1180h+var_11C0]
 * 00000001800B5ECB: xor     r11d, r11d
 * 00000001800B5ECE: inc     r8d
 * 00000001800B5ED1: mov     dword ptr [rbp+1180h+var_11C0], r8d
 * 00000001800B5ED5: mov     rcx, [rsp+1280h+lpMem]
 * 00000001800B5EDA: add     rcx, 2
 * 00000001800B5EDE: mov     [rsp+1280h+lpMem], rcx
 * 00000001800B5EE3: add     rdx, 8
 * 00000001800B5EE7: mov     [rbp+1180h+var_11A0], rdx
 * 00000001800B5EEB: cmp     r8d, 3
 * 00000001800B5EEF: jb      loc_1800B5DE2
 * 00000001800B5EF5: mov     [rbp+1180h+var_EB0], r11
 * 00000001800B5EFC: mov     [rbp+1180h+var_ED0], rdi
 * 00000001800B5F03: mov     eax, dword ptr [rbp+1180h+var_11F8]
 * 00000001800B5F06: mov     [rbp+1180h+var_860], eax
 * 00000001800B5F0C: jmp     loc_1800B5FD9
 * 00000001800B5F11: call    cs:__imp_GetLastError
 * 00000001800B5F18: nop     dword ptr [rax+rax+00h]
 * 00000001800B5F1D: mov     [rbp+1180h+var_11D8], eax
 * 00000001800B5F20: test    eax, eax
 * 00000001800B5F22: jle     short loc_1800B5F31
 * 00000001800B5F24: movzx   eax, ax
 * 00000001800B5F27: or      eax, 80070000h
 * 00000001800B5F2C: mov     [rbp+1180h+var_11D8], eax
 * 00000001800B5F2F: test    eax, eax
 * 00000001800B5F31: js      short loc_1800B5F66
 * 00000001800B5F33: mov     eax, 80004005h
 * 00000001800B5F38: jmp     short loc_1800B5F63
 * 00000001800B5F3A: mov     eax, 8007000Eh
 * 00000001800B5F3F: jmp     short loc_1800B5F63
 * 00000001800B5F41: call    cs:__imp_GetLastError
 * 00000001800B5F48: nop     dword ptr [rax+rax+00h]
 * 00000001800B5F4D: test    eax, eax
 * 00000001800B5F4F: jle     short loc_1800B5F5B
 * 00000001800B5F51: movzx   eax, ax
 * 00000001800B5F54: or      eax, 80070000h
 * 00000001800B5F59: test    eax, eax
 * 00000001800B5F5B: mov     ecx, 80004005h
 * 00000001800B5F60: cmovns  eax, ecx
 * 00000001800B5F63: mov     [rbp+1180h+var_11D8], eax
 * 00000001800B5F66: mov     ecx, 3
 * 00000001800B5F6B: mov     [rbp+1180h+var_11A0], rcx
 * 00000001800B5F6F: mov     rax, [rdi]
 * 00000001800B5F72: test    rax, rax
 * 00000001800B5F75: jz      short loc_1800B5FC7
 * 00000001800B5F77: mov     rcx, 0FFFFFFFFFFFFFFFFh
 * 00000001800B5F7E: lea     rcx, [rcx+1]
 * 00000001800B5F82: cmp     word ptr [rax+rcx*2], 0
 * 00000001800B5F87: jnz     short loc_1800B5F7E
 * 00000001800B5F89: lea     rcx, ds:2[rcx*2]
 * 00000001800B5F91: mov     rdi, rax
 * 00000001800B5F94: xor     eax, eax
 * 00000001800B5F96: rep stosb
 * 00000001800B5F98: mov     rax, [rbp+1180h+var_11E0]
 * 00000001800B5F9C: mov     rdi, [rax]
 * 00000001800B5F9F: call    cs:__imp_GetProcessHeap
 * 00000001800B5FA6: nop     dword ptr [rax+rax+00h]
 * 00000001800B5FAB: mov     rcx, rax; hHeap
 * 00000001800B5FAE: mov     r8, rdi; lpMem
 * 00000001800B5FB1: xor     edx, edx; dwFlags
 * 00000001800B5FB3: call    cs:__imp_HeapFree
 * 00000001800B5FBA: nop     dword ptr [rax+rax+00h]
 * 00000001800B5FBF: mov     rdi, [rbp+1180h+var_11E0]
 * 00000001800B5FC3: mov     rcx, [rbp+1180h+var_11A0]
 * 00000001800B5FC7: add     rdi, 8
 * 00000001800B5FCB: mov     [rbp+1180h+var_11E0], rdi
 * 00000001800B5FCF: sub     rcx, 1
 * 00000001800B5FD3: mov     [rbp+1180h+var_11A0], rcx
 * 00000001800B5FD7: jnz     short loc_1800B5F6F
 * 00000001800B5FD9: mov     rdi, [rbp+1180h+var_EC0]
 * 00000001800B5FE0: test    rdi, rdi
 * 00000001800B5FE3: jz      short loc_1800B5FF0
 * 00000001800B5FE5: xor     eax, eax
 * 00000001800B5FE7: mov     rcx, [rbp+1180h+var_EB8]
 * 00000001800B5FEE: rep stosb
 * 00000001800B5FF0: lea     rcx, [rbp+1180h+var_EB0]
 * 00000001800B5FF7: call    ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ; SP<ushort *,SP_MEM<ushort *>>::Reset(void)
 * 00000001800B5FFC: lea     rcx, [rbp+1180h+var_EC0]
 * 00000001800B6003: call    ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ; SP<ushort *,SP_MEM<ushort *>>::Reset(void)
 * 00000001800B6008: lea     rcx, [rbp+1180h+var_F98]
 * 00000001800B600F: call    ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ; SP<ushort *,SP_MEM<ushort *>>::Reset(void)
 * 00000001800B6014: mov     edi, [rbp+1180h+var_11D8]
 * 00000001800B6017: test    edi, edi
 * 00000001800B6019: js      loc_1800B6CDF
 * 00000001800B601F: mov     rax, [rbp+1180h+var_ED0]
 * 00000001800B6026: mov     rcx, [rax]
 * 00000001800B6029: mov     [rbp+1180h+var_858], rcx
 * 00000001800B6030: mov     rcx, [rax+8]
 * 00000001800B6034: mov     [rbp+1180h+var_850], rcx
 * 00000001800B603B: mov     rcx, [rax+10h]
 * 00000001800B603F: mov     [rbp+1180h+var_848], rcx
 * 00000001800B6046: xorps   xmm0, xmm0
 * 00000001800B6049: movups  [rbp+1180h+var_CC8], xmm0
 * 00000001800B6050: mov     dword ptr [rbp+1180h+var_CC8], 10h
 * 00000001800B605A: mov     r10, 0ADB51E5154D11B70h
 * 00000001800B6064: xor     r9d, r9d
 * 00000001800B6067: lea     r8, [rbp+1180h+var_CC8]
 * 00000001800B606E: xor     edx, edx
 * 00000001800B6070: lea     ecx, [rdx+42h]
 * 00000001800B6073: mov     rax, cs:off_1801C0168
 * 00000001800B607A: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B6080: test    eax, eax
 * 00000001800B6082: jnz     short loc_1800B60B9
 * 00000001800B6084: call    cs:__imp_GetLastError
 * 00000001800B608B: nop     dword ptr [rax+rax+00h]
 * 00000001800B6090: mov     edi, eax
 * 00000001800B6092: test    eax, eax
 * 00000001800B6094: jle     short loc_1800B609F
 * 00000001800B6096: movzx   edi, ax
 * 00000001800B6099: or      edi, 80070000h
 * 00000001800B609F: test    edi, edi
 * 00000001800B60A1: mov     eax, 80004005h
 * 00000001800B60A6: cmovns  edi, eax
 * 00000001800B60A9: mov     [rbp+1180h+var_11D8], edi
 * 00000001800B60AC: xor     eax, eax
 * 00000001800B60AE: mov     [rbp+1180h+var_85C], eax
 * 00000001800B60B4: jmp     loc_1800B6CDF
 * 00000001800B60B9: mov     eax, dword ptr [rbp+1180h+var_CC8+4]
 * 00000001800B60BF: and     eax, 1
 * 00000001800B60C2: mov     [rbp+1180h+var_85C], eax
 * 00000001800B60C8: mov     ecx, dword ptr [rbp+1180h+var_1200]
 * 00000001800B60CB: mov     eax, 2Ah ; '*'
 * 00000001800B60D0: mov     dword ptr [rbp+1180h+var_11F8], eax
 * 00000001800B60D3: sub     ecx, 1
 * 00000001800B60D6: jz      short loc_1800B60FD
 * 00000001800B60D8: sub     ecx, 1
 * 00000001800B60DB: jz      short loc_1800B60EC
 * 00000001800B60DD: cmp     ecx, 1
 * 00000001800B60E0: jnz     short loc_1800B6108
 * 00000001800B60E2: mov     eax, 0E1h
 * 00000001800B60E7: mov     dword ptr [rbp+1180h+var_1198], eax
 * 00000001800B60EA: jmp     short loc_1800B6104
 * 00000001800B60EC: mov     dword ptr [rsp+1280h+var_1218], 0Fh
 * 00000001800B60F4: mov     dword ptr [rbp+1180h+var_1198], 0Bh
 * 00000001800B60FB: jmp     short loc_1800B6108
 * 00000001800B60FD: mov     dword ptr [rbp+1180h+var_1198], 0Bh
 * 00000001800B6104: mov     dword ptr [rsp+1280h+var_1218], eax
 * 00000001800B6108: mov     edi, 60h ; '`'
 * 00000001800B610D: mov     dword ptr [rbp+1180h+var_11C0], edi
 * 00000001800B6110: xor     edx, edx; Val
 * 00000001800B6112: lea     r8d, [rdi+7Ch]; Size
 * 00000001800B6116: lea     rcx, [rbp+1180h+var_4F0]; void *
 * 00000001800B611D: call    memset_0
 * 00000001800B6122: mov     eax, 0DCh
 * 00000001800B6127: mov     [rbp+1180h+var_4AC], ax
 * 00000001800B612E: mov     r10, 0D1659E5312D9A870h
 * 00000001800B6138: lea     r8, [rbp+1180h+var_4F0]
 * 00000001800B613F: mov     edx, 0FFFFFFFFh
 * 00000001800B6144: xor     ecx, ecx
 * 00000001800B6146: mov     rax, cs:off_1801C00E0
 * 00000001800B614D: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B6153: test    eax, eax
 * 00000001800B6155: jz      short loc_1800B6192
 * 00000001800B6157: movzx   edi, [rbp+1180h+var_44A]
 * 00000001800B615E: xor     eax, eax
 * 00000001800B6160: mov     dword ptr [rbp+1180h+var_CD8+4], eax
 * 00000001800B6166: mov     dword ptr [rbp+1180h+var_CD8], eax
 * 00000001800B616C: mov     eax, [rbp+1180h+var_444]
 * 00000001800B6172: mov     dword ptr [rbp+1180h+var_CD8+8], eax
 * 00000001800B6178: mov     eax, [rbp+1180h+var_440]
 * 00000001800B617E: mov     dword ptr [rbp+1180h+var_CD8+0Ch], eax
 * 00000001800B6184: cmp     edi, 60h ; '`'
 * 00000001800B6187: mov     eax, 60h ; '`'
 * 00000001800B618C: cmovb   edi, eax
 * 00000001800B618F: mov     dword ptr [rbp+1180h+var_11C0], edi
 * 00000001800B6192: mov     rax, [rbp+1180h+var_11B8]
 * 00000001800B6196: cmp     dword ptr [rbp+1180h+var_1200], 1
 * 00000001800B619A: cmovz   rax, [rsp+1280h+var_1220]
 * 00000001800B61A0: mov     [rbp+1180h+var_11E0], rax
 * 00000001800B61A4: xor     edx, edx; Val
 * 00000001800B61A6: lea     r8d, [rdx+5Ch]; Size
 * 00000001800B61AA: lea     rcx, [rbp+1180h+var_610]; void *
 * 00000001800B61B1: call    memset_0
 * 00000001800B61B6: xor     eax, eax
 * 00000001800B61B8: mov     [rbp+1180h+var_11D8], eax
 * 00000001800B61BB: mov     r10, 9B61A6A01AD19370h
 * 00000001800B61C5: xor     edx, edx
 * 00000001800B61C7: xor     ecx, ecx
 * 00000001800B61C9: mov     r8d, 403h
 * 00000001800B61CF: mov     rax, cs:off_1801C00F8
 * 00000001800B61D6: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B61DC: mov     [rbp+1180h+var_11A0], rax
 * 00000001800B61E0: test    rax, rax
 * 00000001800B61E3: jnz     short loc_1800B621A
 * 00000001800B61E5: call    cs:__imp_GetLastError
 * 00000001800B61EC: nop     dword ptr [rax+rax+00h]
 * 00000001800B61F1: mov     [rbp+1180h+var_11D8], eax
 * 00000001800B61F4: test    eax, eax
 * 00000001800B61F6: jle     short loc_1800B6205
 * 00000001800B61F8: movzx   eax, ax
 * 00000001800B61FB: or      eax, 80070000h
 * 00000001800B6200: mov     [rbp+1180h+var_11D8], eax
 * 00000001800B6203: test    eax, eax
 * 00000001800B6205: js      loc_1800B62E1
 * 00000001800B620B: mov     eax, 80004005h
 * 00000001800B6210: mov     edi, eax
 * 00000001800B6212: mov     [rbp+1180h+var_11D8], eax
 * 00000001800B6215: jmp     loc_1800B6CDF
 * 00000001800B621A: mov     r10, 0B354A64F56D8B370h
 * 00000001800B6224: mov     r8d, 48h ; 'H'
 * 00000001800B622A: mov     edx, edi
 * 00000001800B622C: mov     ecx, dword ptr [rsp+1280h+var_1218]
 * 00000001800B6230: mov     rax, cs:off_1801C00B8
 * 00000001800B6237: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B623D: neg     eax
 * 00000001800B623F: mov     [rbp+1180h+var_610], eax
 * 00000001800B6245: mov     [rbp+1180h+var_600], 190h
 * 00000001800B624F: mov     [rbp+1180h+var_5F6], 5
 * 00000001800B6256: mov     r8, [rbp+1180h+var_11E0]; unsigned __int16 *
 * 00000001800B625A: mov     edx, 20h ; ' '; unsigned __int64
 * 00000001800B625F: lea     rcx, [rbp+1180h+var_5F4]; unsigned __int16 *
 * 00000001800B6266: call    ?StringCchCopyW@@YAJPEAG_KPEBG@Z; StringCchCopyW(ushort *,unsigned __int64,ushort const *)
 * 00000001800B626B: mov     r10, 0FAB916F870535070h
 * 00000001800B6275: lea     rcx, [rbp+1180h+var_610]
 * 00000001800B627C: mov     rax, cs:off_1801C0020
 * 00000001800B6283: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B6289: test    rax, rax
 * 00000001800B628C: jnz     short loc_1800B62BA
 * 00000001800B628E: call    cs:__imp_GetLastError
 * 00000001800B6295: nop     dword ptr [rax+rax+00h]
 * 00000001800B629A: mov     [rbp+1180h+var_11D8], eax
 * 00000001800B629D: test    eax, eax
 * 00000001800B629F: jle     short loc_1800B62AE
 * 00000001800B62A1: movzx   eax, ax
 * 00000001800B62A4: or      eax, 80070000h
 * 00000001800B62A9: mov     [rbp+1180h+var_11D8], eax
 * 00000001800B62AC: test    eax, eax
 * 00000001800B62AE: js      short loc_1800B62C1
 * 00000001800B62B0: mov     eax, 80004005h
 * 00000001800B62B5: mov     [rbp+1180h+var_11D8], eax
 * 00000001800B62B8: jmp     short loc_1800B62C1
 * 00000001800B62BA: mov     [rbp+1180h+var_840], rax
 * 00000001800B62C1: mov     r10, 0B7B1B729165E9270h
 * 00000001800B62CB: mov     rdx, [rbp+1180h+var_11A0]
 * 00000001800B62CF: xor     ecx, ecx
 * 00000001800B62D1: mov     rax, cs:off_1801C0160
 * 00000001800B62D8: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B62DE: mov     eax, [rbp+1180h+var_11D8]
 * 00000001800B62E1: test    eax, eax
 * 00000001800B62E3: js      loc_1800B6CDC
 * 00000001800B62E9: cmp     dword ptr [rbp+1180h+var_1200], 1
 * 00000001800B62ED: mov     rax, [rbp+1180h+var_11B8]
 * 00000001800B62F1: cmovz   rax, [rsp+1280h+var_1220]
 * 00000001800B62F7: mov     [rbp+1180h+var_11B8], rax
 * 00000001800B62FB: xor     edx, edx; Val
 * 00000001800B62FD: lea     r8d, [rdx+5Ch]; Size
 * 00000001800B6301: lea     rcx, [rbp+1180h+var_5B0]; void *
 * 00000001800B6308: call    memset_0
 * 00000001800B630D: xor     eax, eax
 * 00000001800B630F: mov     [rbp+1180h+var_11D8], eax
 * 00000001800B6312: mov     r10, 9B61A6A01AD19370h
 * 00000001800B631C: xor     edx, edx
 * 00000001800B631E: xor     ecx, ecx
 * 00000001800B6320: mov     r8d, 403h
 * 00000001800B6326: mov     rax, cs:off_1801C00F8
 * 00000001800B632D: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B6333: mov     [rsp+1280h+var_1220], rax
 * 00000001800B6338: test    rax, rax
 * 00000001800B633B: jnz     short loc_1800B6375
 * 00000001800B633D: call    cs:__imp_GetLastError
 * 00000001800B6344: nop     dword ptr [rax+rax+00h]
 * 00000001800B6349: mov     edi, eax
 * 00000001800B634B: mov     [rbp+1180h+var_11D8], eax
 * 00000001800B634E: test    eax, eax
 * 00000001800B6350: jle     short loc_1800B635E
 * 00000001800B6352: movzx   edi, ax
 * 00000001800B6355: or      edi, 80070000h
 * 00000001800B635B: mov     [rbp+1180h+var_11D8], edi
 * 00000001800B635E: test    edi, edi
 * 00000001800B6360: js      loc_1800B6CDF
 * 00000001800B6366: mov     eax, 80004005h
 * 00000001800B636B: mov     edi, eax
 * 00000001800B636D: mov     [rbp+1180h+var_11D8], eax
 * 00000001800B6370: jmp     loc_1800B6CDF
 * 00000001800B6375: mov     r10, 0B354A64F56D8B370h
 * 00000001800B637F: mov     r8d, 48h ; 'H'
 * 00000001800B6385: mov     edx, edi
 * 00000001800B6387: mov     ecx, dword ptr [rbp+1180h+var_1198]
 * 00000001800B638A: mov     rax, cs:off_1801C00B8
 * 00000001800B6391: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B6397: neg     eax
 * 00000001800B6399: mov     [rbp+1180h+var_5B0], eax
 * 00000001800B639F: mov     [rbp+1180h+var_5A0], 190h
 * 00000001800B63A9: mov     [rbp+1180h+var_596], 5
 * 00000001800B63B0: mov     r8, [rbp+1180h+var_11B8]; unsigned __int16 *
 * 00000001800B63B4: mov     edx, 20h ; ' '; unsigned __int64
 * 00000001800B63B9: lea     rcx, [rbp+1180h+var_594]; unsigned __int16 *
 * 00000001800B63C0: call    ?StringCchCopyW@@YAJPEAG_KPEBG@Z; StringCchCopyW(ushort *,unsigned __int64,ushort const *)
 * 00000001800B63C5: mov     r10, 0FAB916F870535070h
 * 00000001800B63CF: lea     rcx, [rbp+1180h+var_5B0]
 * 00000001800B63D6: mov     rax, cs:off_1801C0020
 * 00000001800B63DD: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B63E3: test    rax, rax
 * 00000001800B63E6: jnz     short loc_1800B6419
 * 00000001800B63E8: call    cs:__imp_GetLastError
 * 00000001800B63EF: nop     dword ptr [rax+rax+00h]
 * 00000001800B63F4: mov     edi, eax
 * 00000001800B63F6: mov     [rbp+1180h+var_11D8], eax
 * 00000001800B63F9: test    eax, eax
 * 00000001800B63FB: jle     short loc_1800B6409
 * 00000001800B63FD: movzx   edi, ax
 * 00000001800B6400: or      edi, 80070000h
 * 00000001800B6406: mov     [rbp+1180h+var_11D8], edi
 * 00000001800B6409: test    edi, edi
 * 00000001800B640B: js      short loc_1800B6423
 * 00000001800B640D: mov     eax, 80004005h
 * 00000001800B6412: mov     edi, eax
 * 00000001800B6414: mov     [rbp+1180h+var_11D8], eax
 * 00000001800B6417: jmp     short loc_1800B6423
 * 00000001800B6419: mov     [rbp+1180h+var_838], rax
 * 00000001800B6420: mov     edi, [rbp+1180h+var_11D8]
 * 00000001800B6423: mov     r10, 0B7B1B729165E9270h
 * 00000001800B642D: mov     rdx, [rsp+1280h+var_1220]
 * 00000001800B6432: xor     ecx, ecx
 * 00000001800B6434: mov     rax, cs:off_1801C0160
 * 00000001800B643B: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B6441: test    edi, edi
 * 00000001800B6443: js      loc_1800B6CDF
 * 00000001800B6449: xor     r9d, r9d
 * 00000001800B644C: mov     ecx, r9d
 * 00000001800B644F: mov     edi, r9d
 * 00000001800B6452: mov     r8d, dword ptr [rbp+1180h+var_1200]
 * 00000001800B6456: mov     edx, r8d
 * 00000001800B6459: sub     edx, 1
 * 00000001800B645C: jz      short loc_1800B6468
 * 00000001800B645E: sub     edx, 1
 * 00000001800B6461: jz      short loc_1800B64A3
 * 00000001800B6463: cmp     edx, 1
 * 00000001800B6466: jnz     short loc_1800B6474
 * 00000001800B6468: mov     ecx, dword ptr [rbp+1180h+var_CD8+8]
 * 00000001800B646E: mov     edi, dword ptr [rbp+1180h+var_CD8+0Ch]
 * 00000001800B6474: mov     dword ptr [rbp+1180h+var_7C0+8], ecx
 * 00000001800B647A: mov     dword ptr [rbp+1180h+var_7C0+0Ch], edi
 * 00000001800B6480: cmp     r8d, 1
 * 00000001800B6484: jz      short loc_1800B64CE
 * 00000001800B6486: lea     eax, [r8-2]
 * 00000001800B648A: cmp     eax, 1
 * 00000001800B648D: jbe     short loc_1800B64C1
 * 00000001800B648F: mov     eax, [rbp+1180h+var_1170]
 * 00000001800B6492: mov     dword ptr [rbp+1180h+var_11B0], eax
 * 00000001800B6495: mov     eax, [rbp+1180h+var_1170]
 * 00000001800B6498: mov     dword ptr [rbp+1180h+var_11F8], eax
 * 00000001800B649B: mov     eax, [rbp+1180h+var_1170]
 * 00000001800B649E: mov     edx, [rbp+1180h+var_1170]
 * 00000001800B64A1: jmp     short loc_1800B64DD
 * 00000001800B64A3: mov     eax, dword ptr [rbp+1180h+var_CD8+8]
 * 00000001800B64A9: cdq
 * 00000001800B64AA: and     edx, 3
 * 00000001800B64AD: add     eax, edx
 * 00000001800B64AF: sar     eax, 2
 * 00000001800B64B2: mov     ecx, eax
 * 00000001800B64B4: mov     dword ptr [rbp+1180h+var_7C0+8], eax
 * 00000001800B64BA: mov     dword ptr [rbp+1180h+var_7C0+0Ch], r9d
 * 00000001800B64C1: mov     edx, r9d
 * 00000001800B64C4: mov     dword ptr [rbp+1180h+var_11F8], r9d
 * 00000001800B64C8: mov     dword ptr [rbp+1180h+var_11B0], r9d
 * 00000001800B64CC: jmp     short loc_1800B64DA
 * 00000001800B64CE: mov     edx, 96h
 * 00000001800B64D3: mov     dword ptr [rbp+1180h+var_11B0], 20h ; ' '
 * 00000001800B64DA: mov     eax, r9d
 * 00000001800B64DD: mov     dword ptr [rsp+1280h+var_1218], edx
 * 00000001800B64E1: mov     dword ptr [rbp+1180h+var_1198], eax
 * 00000001800B64E4: sub     ecx, edx
 * 00000001800B64E6: sub     ecx, eax
 * 00000001800B64E8: mov     [rbp+1180h+var_11E8], ecx
 * 00000001800B64EB: mov     dword ptr [rbp+1180h+var_814+8], ecx
 * 00000001800B64F1: mov     dword ptr [rbp+1180h+var_824+8], ecx
 * 00000001800B64F7: mov     rdi, [rbp+1180h+var_858]
 * 00000001800B64FE: mov     [rbp+1180h+var_11D8], r9d
 * 00000001800B6502: mov     r10, 0E62CA6FE305B8A70h
 * 00000001800B650C: mov     rdx, [rbp+1180h+var_840]
 * 00000001800B6513: mov     rcx, [rbp+1180h+lpModuleName]
 * 00000001800B6517: mov     rax, cs:off_1801C0078
 * 00000001800B651E: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B6524: mov     [rsp+1280h+var_1220], rax
 * 00000001800B6529: mov     r10, 0FA2817DF7AD26370h
 * 00000001800B6533: xor     eax, eax
 * 00000001800B6535: mov     [rsp+1280h+var_1258], rax
 * 00000001800B653A: mov     dword ptr [rsp+1280h+var_1260], 0C50h
 * 00000001800B6542: lea     r9, [rbp+1180h+var_824]
 * 00000001800B6549: lea     r8d, [rax-1]
 * 00000001800B654D: mov     rdx, rdi
 * 00000001800B6550: mov     rcx, [rbp+1180h+lpModuleName]
 * 00000001800B6554: mov     rax, cs:off_1801C00D8
 * 00000001800B655B: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B6561: test    eax, eax
 * 00000001800B6563: mov     edi, [rbp+1180h+var_11D8]
 * 00000001800B6566: mov     eax, 80004005h
 * 00000001800B656B: cmovz   edi, eax
 * 00000001800B656E: mov     [rbp+1180h+var_11D8], edi
 * 00000001800B6571: mov     rax, [rsp+1280h+var_1220]
 * 00000001800B6576: test    rax, rax
 * 00000001800B6579: jz      short loc_1800B6599
 * 00000001800B657B: mov     r10, 0E62CA6FE305B8A70h
 * 00000001800B6585: mov     rdx, rax
 * 00000001800B6588: mov     rcx, [rbp+1180h+lpModuleName]
 * 00000001800B658C: mov     rax, cs:off_1801C0078
 * 00000001800B6593: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B6599: test    edi, edi
 * 00000001800B659B: js      loc_1800B6CDF
 * 00000001800B65A1: mov     rdi, [rbp+1180h+var_850]
 * 00000001800B65A8: xor     eax, eax
 * 00000001800B65AA: mov     [rbp+1180h+var_11D8], eax
 * 00000001800B65AD: mov     r10, 0E62CA6FE305B8A70h
 * 00000001800B65B7: mov     rdx, [rbp+1180h+var_838]
 * 00000001800B65BE: mov     rcx, [rbp+1180h+lpModuleName]
 * 00000001800B65C2: mov     rax, cs:off_1801C0078
 * 00000001800B65C9: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B65CF: mov     [rsp+1280h+var_1220], rax
 * 00000001800B65D4: mov     r10, 0FA2817DF7AD26370h
 * 00000001800B65DE: xor     eax, eax
 * 00000001800B65E0: mov     [rsp+1280h+var_1258], rax
 * 00000001800B65E5: mov     dword ptr [rsp+1280h+var_1260], 0C50h
 * 00000001800B65ED: lea     r9, [rbp+1180h+var_814]
 * 00000001800B65F4: lea     r8d, [rax-1]
 * 00000001800B65F8: mov     rdx, rdi
 * 00000001800B65FB: mov     rcx, [rbp+1180h+lpModuleName]
 * 00000001800B65FF: mov     rax, cs:off_1801C00D8
 * 00000001800B6606: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B660C: test    eax, eax
 * 00000001800B660E: mov     edi, [rbp+1180h+var_11D8]
 * 00000001800B6611: mov     eax, 80004005h
 * 00000001800B6616: cmovz   edi, eax
 * 00000001800B6619: mov     [rbp+1180h+var_11D8], edi
 * 00000001800B661C: mov     rax, [rsp+1280h+var_1220]
 * 00000001800B6621: test    rax, rax
 * 00000001800B6624: jz      short loc_1800B6644
 * 00000001800B6626: mov     r10, 0E62CA6FE305B8A70h
 * 00000001800B6630: mov     rdx, rax
 * 00000001800B6633: mov     rcx, [rbp+1180h+lpModuleName]
 * 00000001800B6637: mov     rax, cs:off_1801C0078
 * 00000001800B663E: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B6644: test    edi, edi
 * 00000001800B6646: js      loc_1800B6CDF
 * 00000001800B664C: mov     eax, dword ptr [rbp+1180h+var_1200]
 * 00000001800B664F: add     eax, 0FFFFFFFEh
 * 00000001800B6652: mov     ecx, dword ptr [rbp+1180h+var_824+8]
 * 00000001800B6658: cmp     eax, 1
 * 00000001800B665B: ja      short loc_1800B666A
 * 00000001800B665D: mov     edi, dword ptr [rbp+1180h+var_814+8]
 * 00000001800B6663: cmp     ecx, edi
 * 00000001800B6665: cmovg   edi, ecx
 * 00000001800B6668: jmp     short loc_1800B666D
 * 00000001800B666A: mov     edi, [rbp+1180h+var_11E8]
 * 00000001800B666D: cmp     [rbp+1180h+var_860], 0
 * 00000001800B6674: jz      short loc_1800B66D5
 * 00000001800B6676: mov     edx, dword ptr [rbp+1180h+var_1198]
 * 00000001800B6679: sub     edx, ecx
 * 00000001800B667B: add     edx, edi
 * 00000001800B667D: mov     r10, 0EF788E6016D10870h
 * 00000001800B6687: mov     r8d, dword ptr [rbp+1180h+var_11F8]
 * 00000001800B668B: lea     rcx, [rbp+1180h+var_824]
 * 00000001800B6692: mov     rax, cs:off_1801C0150
 * 00000001800B6699: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B669F: mov     r8d, dword ptr [rbp+1180h+var_11B0]
 * 00000001800B66A3: add     r8d, dword ptr [rbp+1180h+var_824+0Ch]
 * 00000001800B66AA: mov     edx, dword ptr [rbp+1180h+var_1198]
 * 00000001800B66AD: sub     edx, dword ptr [rbp+1180h+var_814+8]
 * 00000001800B66B3: add     edx, edi
 * 00000001800B66B5: mov     r10, 0EF788E6016D10870h
 * 00000001800B66BF: lea     rcx, [rbp+1180h+var_814]
 * 00000001800B66C6: mov     rax, cs:off_1801C0150
 * 00000001800B66CD: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B66D3: jmp     short loc_1800B6728
 * 00000001800B66D5: mov     r10, 0EF788E6016D10870h
 * 00000001800B66DF: mov     r8d, dword ptr [rbp+1180h+var_11F8]
 * 00000001800B66E3: mov     edx, dword ptr [rsp+1280h+var_1218]
 * 00000001800B66E7: lea     rcx, [rbp+1180h+var_824]
 * 00000001800B66EE: mov     rax, cs:off_1801C0150
 * 00000001800B66F5: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B66FB: mov     r8d, dword ptr [rbp+1180h+var_11B0]
 * 00000001800B66FF: add     r8d, dword ptr [rbp+1180h+var_824+0Ch]
 * 00000001800B6706: mov     r10, 0EF788E6016D10870h
 * 00000001800B6710: mov     edx, dword ptr [rsp+1280h+var_1218]
 * 00000001800B6714: lea     rcx, [rbp+1180h+var_814]
 * 00000001800B671B: mov     rax, cs:off_1801C0150
 * 00000001800B6722: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B6728: mov     ecx, dword ptr [rbp+1180h+var_1200]
 * 00000001800B672B: lea     eax, [rcx-2]
 * 00000001800B672E: cmp     eax, 1
 * 00000001800B6731: jbe     loc_1800B6A9F
 * 00000001800B6737: cmp     ecx, 1
 * 00000001800B673A: jnz     loc_1800B6A8D
 * 00000001800B6740: mov     [rbp+1180h+var_828], 0FFFFFFh
 * 00000001800B674A: xor     edx, edx; Val
 * 00000001800B674C: lea     r8d, [rcx+5Bh]; Size
 * 00000001800B6750: lea     rcx, [rbp+1180h+var_550]; void *
 * 00000001800B6757: call    memset_0
 * 00000001800B675C: xor     eax, eax
 * 00000001800B675E: mov     [rbp+1180h+var_11D8], eax
 * 00000001800B6761: mov     r10, 9B61A6A01AD19370h
 * 00000001800B676B: xor     edx, edx
 * 00000001800B676D: xor     ecx, ecx
 * 00000001800B676F: mov     r8d, 403h
 * 00000001800B6775: mov     rax, cs:off_1801C00F8
 * 00000001800B677C: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B6782: mov     [rsp+1280h+var_1220], rax
 * 00000001800B6787: test    rax, rax
 * 00000001800B678A: jnz     short loc_1800B67C1
 * 00000001800B678C: call    cs:__imp_GetLastError
 * 00000001800B6793: nop     dword ptr [rax+rax+00h]
 * 00000001800B6798: mov     [rbp+1180h+var_11D8], eax
 * 00000001800B679B: test    eax, eax
 * 00000001800B679D: jle     short loc_1800B67AC
 * 00000001800B679F: movzx   eax, ax
 * 00000001800B67A2: or      eax, 80070000h
 * 00000001800B67A7: mov     [rbp+1180h+var_11D8], eax
 * 00000001800B67AA: test    eax, eax
 * 00000001800B67AC: js      loc_1800B688A
 * 00000001800B67B2: mov     eax, 80004005h
 * 00000001800B67B7: mov     edi, eax
 * 00000001800B67B9: mov     [rbp+1180h+var_11D8], eax
 * 00000001800B67BC: jmp     loc_1800B6CDF
 * 00000001800B67C1: mov     r10, 0B354A64F56D8B370h
 * 00000001800B67CB: mov     r8d, 48h ; 'H'
 * 00000001800B67D1: mov     edx, dword ptr [rbp+1180h+var_11C0]
 * 00000001800B67D4: lea     ecx, [r8-3Dh]
 * 00000001800B67D8: mov     rax, cs:off_1801C00B8
 * 00000001800B67DF: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B67E5: neg     eax
 * 00000001800B67E7: mov     [rbp+1180h+var_550], eax
 * 00000001800B67ED: mov     [rbp+1180h+var_540], 190h
 * 00000001800B67F7: mov     [rbp+1180h+var_536], 5
 * 00000001800B67FE: mov     r8, [rbp+1180h+var_11A8]; unsigned __int16 *
 * 00000001800B6802: mov     edx, 20h ; ' '; unsigned __int64
 * 00000001800B6807: lea     rcx, [rbp+1180h+var_534]; unsigned __int16 *
 * 00000001800B680E: call    ?StringCchCopyW@@YAJPEAG_KPEBG@Z; StringCchCopyW(ushort *,unsigned __int64,ushort const *)
 * 00000001800B6813: mov     r10, 0FAB916F870535070h
 * 00000001800B681D: lea     rcx, [rbp+1180h+var_550]
 * 00000001800B6824: mov     rax, cs:off_1801C0020
 * 00000001800B682B: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B6831: test    rax, rax
 * 00000001800B6834: jnz     short loc_1800B6862
 * 00000001800B6836: call    cs:__imp_GetLastError
 * 00000001800B683D: nop     dword ptr [rax+rax+00h]
 * 00000001800B6842: mov     [rbp+1180h+var_11D8], eax
 * 00000001800B6845: test    eax, eax
 * 00000001800B6847: jle     short loc_1800B6856
 * 00000001800B6849: movzx   eax, ax
 * 00000001800B684C: or      eax, 80070000h
 * 00000001800B6851: mov     [rbp+1180h+var_11D8], eax
 * 00000001800B6854: test    eax, eax
 * 00000001800B6856: js      short loc_1800B6869
 * 00000001800B6858: mov     eax, 80004005h
 * 00000001800B685D: mov     [rbp+1180h+var_11D8], eax
 * 00000001800B6860: jmp     short loc_1800B6869
 * 00000001800B6862: mov     [rbp+1180h+var_830], rax
 * 00000001800B6869: mov     r10, 0B7B1B729165E9270h
 * 00000001800B6873: mov     rdx, [rsp+1280h+var_1220]
 * 00000001800B6878: xor     ecx, ecx
 * 00000001800B687A: mov     rax, cs:off_1801C0160
 * 00000001800B6881: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B6887: mov     eax, [rbp+1180h+var_11D8]
 * 00000001800B688A: test    eax, eax
 * 00000001800B688C: js      loc_1800B6CDC
 * 00000001800B6892: mov     [rbp+1180h+var_7FC], edi
 * 00000001800B6898: mov     rdi, [rbp+1180h+var_848]
 * 00000001800B689F: xor     eax, eax
 * 00000001800B68A1: mov     [rbp+1180h+var_11D8], eax
 * 00000001800B68A4: mov     r10, 0E62CA6FE305B8A70h
 * 00000001800B68AE: mov     rdx, [rbp+1180h+var_830]
 * 00000001800B68B5: mov     rcx, [rbp+1180h+lpModuleName]
 * 00000001800B68B9: mov     rax, cs:off_1801C0078
 * 00000001800B68C0: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B68C6: mov     [rsp+1280h+var_1220], rax
 * 00000001800B68CB: mov     r10, 0FA2817DF7AD26370h
 * 00000001800B68D5: xor     eax, eax
 * 00000001800B68D7: mov     [rsp+1280h+var_1258], rax
 * 00000001800B68DC: mov     dword ptr [rsp+1280h+var_1260], 460h
 * 00000001800B68E4: lea     r9, [rbp+1180h+var_804]
 * 00000001800B68EB: lea     r8d, [rax-1]
 * 00000001800B68EF: mov     rdx, rdi
 * 00000001800B68F2: mov     rcx, [rbp+1180h+lpModuleName]
 * 00000001800B68F6: mov     rax, cs:off_1801C00D8
 * 00000001800B68FD: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B6903: test    eax, eax
 * 00000001800B6905: mov     edi, [rbp+1180h+var_11D8]
 * 00000001800B6908: mov     eax, 80004005h
 * 00000001800B690D: cmovz   edi, eax
 * 00000001800B6910: mov     [rbp+1180h+var_11D8], edi
 * 00000001800B6913: mov     rax, [rsp+1280h+var_1220]
 * 00000001800B6918: test    rax, rax
 * 00000001800B691B: jz      short loc_1800B693B
 * 00000001800B691D: mov     r10, 0E62CA6FE305B8A70h
 * 00000001800B6927: mov     rdx, rax
 * 00000001800B692A: mov     rcx, [rbp+1180h+lpModuleName]
 * 00000001800B692E: mov     rax, cs:off_1801C0078
 * 00000001800B6935: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B693B: test    edi, edi
 * 00000001800B693D: js      loc_1800B6CDF
 * 00000001800B6943: mov     eax, [rbp+1180h+var_7FC]
 * 00000001800B6949: add     eax, 18h
 * 00000001800B694C: mov     ecx, 5Ah ; 'Z'
 * 00000001800B6951: cmp     eax, ecx
 * 00000001800B6953: cmovl   eax, ecx
 * 00000001800B6956: mov     [rbp+1180h+var_7FC], eax
 * 00000001800B695C: mov     eax, 20h ; ' '
 * 00000001800B6961: mov     [rbp+1180h+var_7F8], eax
 * 00000001800B6967: mov     r10, 0B354A64F56D8B370h
 * 00000001800B6971: lea     r8d, [rcx+6]
 * 00000001800B6975: mov     edi, dword ptr [rbp+1180h+var_11C0]
 * 00000001800B6978: mov     edx, edi
 * 00000001800B697A: mov     ecx, [rbp+1180h+var_804]
 * 00000001800B6980: mov     rax, cs:off_1801C00B8
 * 00000001800B6987: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B698D: mov     [rbp+1180h+var_804], eax
 * 00000001800B6993: mov     r10, 0B354A64F56D8B370h
 * 00000001800B699D: mov     r8d, 60h ; '`'
 * 00000001800B69A3: mov     edx, edi
 * 00000001800B69A5: mov     ecx, [rbp+1180h+var_800]
 * 00000001800B69AB: mov     rax, cs:off_1801C00B8
 * 00000001800B69B2: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B69B8: mov     [rbp+1180h+var_800], eax
 * 00000001800B69BE: mov     r10, 0B354A64F56D8B370h
 * 00000001800B69C8: mov     r8d, 60h ; '`'
 * 00000001800B69CE: mov     edx, edi
 * 00000001800B69D0: mov     ecx, [rbp+1180h+var_7FC]
 * 00000001800B69D6: mov     rax, cs:off_1801C00B8
 * 00000001800B69DD: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B69E3: mov     [rbp+1180h+var_7FC], eax
 * 00000001800B69E9: mov     r10, 0B354A64F56D8B370h
 * 00000001800B69F3: mov     r8d, 60h ; '`'
 * 00000001800B69F9: mov     edx, edi
 * 00000001800B69FB: mov     ecx, [rbp+1180h+var_7F8]
 * 00000001800B6A01: mov     rax, cs:off_1801C00B8
 * 00000001800B6A08: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B6A0E: mov     [rbp+1180h+var_7F8], eax
 * 00000001800B6A14: mov     r8d, dword ptr [rbp+1180h+var_814+0Ch]
 * 00000001800B6A1B: add     r8d, 24h ; '$'
 * 00000001800B6A1F: cmp     [rbp+1180h+var_860], 0
 * 00000001800B6A26: jz      short loc_1800B6A3D
 * 00000001800B6A28: mov     edx, dword ptr [rbp+1180h+var_824]
 * 00000001800B6A2E: cmp     edx, dword ptr [rbp+1180h+var_814]
 * 00000001800B6A34: cmovge  edx, dword ptr [rbp+1180h+var_814]
 * 00000001800B6A3B: jmp     short loc_1800B6A5C
 * 00000001800B6A3D: mov     edx, dword ptr [rbp+1180h+var_824+8]
 * 00000001800B6A43: cmp     edx, dword ptr [rbp+1180h+var_814+8]
 * 00000001800B6A49: cmovle  edx, dword ptr [rbp+1180h+var_814+8]
 * 00000001800B6A50: sub     edx, [rbp+1180h+var_7FC]
 * 00000001800B6A56: add     edx, [rbp+1180h+var_804]
 * 00000001800B6A5C: mov     r10, 0EF788E6016D10870h
 * 00000001800B6A66: lea     rcx, [rbp+1180h+var_804]
 * 00000001800B6A6D: mov     rax, cs:off_1801C0150
 * 00000001800B6A74: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B6A7A: xor     eax, eax
 * 00000001800B6A7C: mov     dword ptr [rbp+1180h+var_7C0], eax
 * 00000001800B6A82: mov     dword ptr [rbp+1180h+var_7C0+4], eax
 * 00000001800B6A88: jmp     loc_1800B6BFE
 * 00000001800B6A8D: mov     eax, dword ptr [rbp+1180h+var_7C0+0Ch]
 * 00000001800B6A93: mov     dword ptr [rsp+1280h+var_1218], eax
 * 00000001800B6A97: mov     edi, dword ptr [rbp+1180h+var_7C0+8]
 * 00000001800B6A9D: jmp     short loc_1800B6ABF
 * 00000001800B6A9F: mov     dword ptr [rbp+1180h+var_7C0+8], edi
 * 00000001800B6AA5: mov     edx, dword ptr [rbp+1180h+var_814+0Ch]
 * 00000001800B6AAB: mov     dword ptr [rsp+1280h+var_1218], edx
 * 00000001800B6AAF: mov     dword ptr [rbp+1180h+var_7C0+0Ch], edx
 * 00000001800B6AB5: mov     [rbp+1180h+var_828], 0FFA8A8A8h
 * 00000001800B6ABF: mov     eax, [rbp+1180h+var_860]
 * 00000001800B6AC5: mov     dword ptr [rbp+1180h+var_1198], eax
 * 00000001800B6AC8: sub     ecx, 1
 * 00000001800B6ACB: jz      short loc_1800B6A7A
 * 00000001800B6ACD: sub     ecx, 1
 * 00000001800B6AD0: jz      loc_1800B6C08
 * 00000001800B6AD6: xor     eax, eax
 * 00000001800B6AD8: cmp     ecx, 1
 * 00000001800B6ADB: jnz     loc_1800B6BFE
 * 00000001800B6AE1: xorps   xmm0, xmm0
 * 00000001800B6AE4: movups  [rbp+1180h+var_750], xmm0
 * 00000001800B6AEB: movups  [rbp+1180h+var_740], xmm0
 * 00000001800B6AF2: mov     [rbp+1180h+var_730], rax
 * 00000001800B6AF9: mov     r10, 95359F2D7EDC9A70h
 * 00000001800B6B03: mov     edx, ecx
 * 00000001800B6B05: xor     ecx, ecx
 * 00000001800B6B07: mov     rax, cs:off_1801C0148
 * 00000001800B6B0E: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B6B14: mov     dword ptr [rbp+1180h+var_750], 28h ; '('
 * 00000001800B6B1E: mov     r10, 93FC1EBD305E9370h
 * 00000001800B6B28: lea     rdx, [rbp+1180h+var_750]
 * 00000001800B6B2F: mov     rcx, rax
 * 00000001800B6B32: mov     rax, cs:off_1801C0108
 * 00000001800B6B39: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B6B3F: test    eax, eax
 * 00000001800B6B41: jz      loc_1800B6BFC
 * 00000001800B6B47: mov     r10, 8CE4AE9652DDAB70h
 * 00000001800B6B51: lea     rdx, [rbp+1180h+var_740+4]
 * 00000001800B6B58: xor     ecx, ecx
 * 00000001800B6B5A: mov     rax, cs:off_1801C0140
 * 00000001800B6B61: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B6B67: mov     r10, 8CE4AE9652DDAB70h
 * 00000001800B6B71: lea     rdx, [rbp+1180h+var_740+0Ch]
 * 00000001800B6B78: xor     ecx, ecx
 * 00000001800B6B7A: mov     rax, cs:off_1801C0140
 * 00000001800B6B81: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B6B87: mov     eax, dword ptr [rbp+1180h+var_740+0Ch]
 * 00000001800B6B8D: sub     eax, edi
 * 00000001800B6B8F: imul    ecx, eax, 32h ; '2'
 * 00000001800B6B92: mov     eax, 51EB851Fh
 * 00000001800B6B97: imul    ecx
 * 00000001800B6B99: sar     edx, 5
 * 00000001800B6B9C: mov     eax, edx
 * 00000001800B6B9E: shr     eax, 1Fh
 * 00000001800B6BA1: add     edx, eax
 * 00000001800B6BA3: mov     rax, qword ptr [rbp+1180h+var_740+0Ch]
 * 00000001800B6BAA: shr     rax, 20h
 * 00000001800B6BAE: sub     eax, dword ptr [rsp+1280h+var_1218]
 * 00000001800B6BB2: imul    ecx, eax, 32h ; '2'
 * 00000001800B6BB5: jmp     short loc_1800B6BDF
 * 00000001800B6BB7: sub     eax, edi
 * 00000001800B6BB9: imul    ecx, eax, 5Fh ; '_'
 * 00000001800B6BBC: mov     eax, 51EB851Fh
 * 00000001800B6BC1: imul    ecx
 * 00000001800B6BC3: sar     edx, 5
 * 00000001800B6BC6: mov     eax, edx
 * 00000001800B6BC8: shr     eax, 1Fh
 * 00000001800B6BCB: add     edx, eax
 * 00000001800B6BCD: mov     rax, [rbp+1180h+var_70C]
 * 00000001800B6BD4: shr     rax, 20h
 * 00000001800B6BD8: sub     eax, dword ptr [rsp+1280h+var_1218]
 * 00000001800B6BDC: imul    ecx, eax, 5Fh ; '_'
 * 00000001800B6BDF: mov     dword ptr [rbp+1180h+var_7C0], edx
 * 00000001800B6BE5: mov     eax, 51EB851Fh
 * 00000001800B6BEA: imul    ecx
 * 00000001800B6BEC: sar     edx, 5
 * 00000001800B6BEF: mov     eax, edx
 * 00000001800B6BF1: shr     eax, 1Fh
 * 00000001800B6BF4: add     edx, eax
 * 00000001800B6BF6: mov     dword ptr [rbp+1180h+var_7C0+4], edx
 * 00000001800B6BFC: xor     eax, eax
 * 00000001800B6BFE: mov     edi, eax
 * 00000001800B6C00: mov     [rbp+1180h+var_11D8], eax
 * 00000001800B6C03: jmp     loc_1800B6CDF
 * 00000001800B6C08: xorps   xmm0, xmm0
 * 00000001800B6C0B: xor     eax, eax
 * 00000001800B6C0D: movups  [rbp+1180h+var_728], xmm0
 * 00000001800B6C14: movups  xmmword ptr [rbp+0A68h], xmm0
 * 00000001800B6C1B: mov     [rbp+1180h+var_70C+4], rax
 * 00000001800B6C22: mov     r10, 95359F2D7EDC9A70h
 * 00000001800B6C2C: lea     edx, [rax+1]
 * 00000001800B6C2F: xor     ecx, ecx
 * 00000001800B6C31: mov     rax, cs:off_1801C0148
 * 00000001800B6C38: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B6C3E: mov     dword ptr [rbp+1180h+var_728], 28h ; '('
 * 00000001800B6C48: mov     r10, 93FC1EBD305E9370h
 * 00000001800B6C52: lea     rdx, [rbp+1180h+var_728]
 * 00000001800B6C59: mov     rcx, rax
 * 00000001800B6C5C: mov     rax, cs:off_1801C0108
 * 00000001800B6C63: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B6C69: test    eax, eax
 * 00000001800B6C6B: jz      short loc_1800B6BFC
 * 00000001800B6C6D: mov     r10, 8CE4AE9652DDAB70h
 * 00000001800B6C77: lea     rdx, [rbp+1180h+var_714]
 * 00000001800B6C7E: xor     ecx, ecx
 * 00000001800B6C80: mov     rax, cs:off_1801C0140
 * 00000001800B6C87: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B6C8D: mov     r10, 8CE4AE9652DDAB70h
 * 00000001800B6C97: lea     rdx, [rbp+1180h+var_70C]
 * 00000001800B6C9E: xor     ecx, ecx
 * 00000001800B6CA0: mov     rax, cs:off_1801C0140
 * 00000001800B6CA7: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B6CAD: mov     eax, dword ptr [rbp+1180h+var_70C]
 * 00000001800B6CB3: cmp     dword ptr [rbp+1180h+var_1198], 0
 * 00000001800B6CB7: jz      loc_1800B6BB7
 * 00000001800B6CBD: lea     ecx, [rax+rax*4]
 * 00000001800B6CC0: mov     eax, 51EB851Fh
 * 00000001800B6CC5: imul    ecx
 * 00000001800B6CC7: sar     edx, 5
 * 00000001800B6CCA: mov     eax, edx
 * 00000001800B6CCC: shr     eax, 1Fh
 * 00000001800B6CCF: add     edx, eax
 * 00000001800B6CD1: add     edx, [rbp+1180h+var_714]
 * 00000001800B6CD7: jmp     loc_1800B6BCD
 * 00000001800B6CDC: mov     edi, [rbp+1180h+var_11D8]
 * 00000001800B6CDF: mov     r10, 0B7B1B729165E9270h
 * 00000001800B6CE9: mov     rdx, [rbp+1180h+lpModuleName]
 * 00000001800B6CED: xor     ecx, ecx
 * 00000001800B6CEF: mov     rax, cs:off_1801C0160
 * 00000001800B6CF6: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B6CFC: mov     ecx, 1
 * 00000001800B6D01: xor     eax, eax
 * 00000001800B6D03: lock cmpxchg cs:dword_1801C2A58, ecx
 * 00000001800B6D0B: jnz     short loc_1800B6D01
 * 00000001800B6D0D: mov     eax, cs:dword_1801C23F0
 * 00000001800B6D13: test    eax, eax
 * 00000001800B6D15: jle     short loc_1800B6D88
 * 00000001800B6D17: sub     eax, ecx
 * 00000001800B6D19: mov     cs:dword_1801C23F0, eax
 * 00000001800B6D1F: jnz     short loc_1800B6D88
 * 00000001800B6D21: lea     rdi, unk_1801C29C0
 * 00000001800B6D28: mov     eax, 4
 * 00000001800B6D2D: mov     [rsp+1280h+var_1220], rax
 * 00000001800B6D32: mov     rcx, [rdi]; hLibModule
 * 00000001800B6D35: test    rcx, rcx
 * 00000001800B6D38: jz      short loc_1800B6D4B
 * 00000001800B6D3A: call    cs:__imp_FreeLibrary
 * 00000001800B6D41: nop     dword ptr [rax+rax+00h]
 * 00000001800B6D46: mov     rax, [rsp+1280h+var_1220]
 * 00000001800B6D4B: add     rdi, 18h
 * 00000001800B6D4F: sub     rax, 1
 * 00000001800B6D53: mov     [rsp+1280h+var_1220], rax
 * 00000001800B6D58: jnz     short loc_1800B6D32
 * 00000001800B6D5A: xor     edx, edx; Val
 * 00000001800B6D5C: lea     r8d, [rdx+60h]; Size
 * 00000001800B6D60: lea     rcx, unk_1801C29C0; void *
 * 00000001800B6D67: call    memset_0
 * 00000001800B6D6C: mov     r8d, 170h; Size
 * 00000001800B6D72: lea     rdx, off_18016CF50; Src
 * 00000001800B6D79: lea     rcx, off_1801C0000; void *
 * 00000001800B6D80: call    memcpy_0
 * 00000001800B6D85: mov     edi, [rbp+1180h+var_11D8]
 * 00000001800B6D88: xor     eax, eax
 * 00000001800B6D8A: xchg    eax, cs:dword_1801C2A58
 * 00000001800B6D90: lea     rcx, [rbp+1180h+var_ED0]
 * 00000001800B6D97: call    ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ; SP<ushort *,SP_MEM<ushort *>>::Reset(void)
 * 00000001800B6D9C: test    edi, edi
 * 00000001800B6D9E: js      loc_1800B8C00
 * 00000001800B6DA4: mov     rdi, qword ptr [rbp+1180h+var_7C0]
 * 00000001800B6DAB: mov     [rbp+1180h+var_E98], rdi
 * 00000001800B6DB2: xor     edx, edx; Val
 * 00000001800B6DB4: lea     r8d, [rdx+68h]; Size
 * 00000001800B6DB8: lea     rcx, [rbp+1180h+var_BE0]; void *
 * 00000001800B6DBF: call    memset_0
 * 00000001800B6DC4: mov     dword ptr [rsp+1280h+var_1218], 1
 * 00000001800B6DCC: mov     r10, 0EA2596A652D04370h
 * 00000001800B6DD6: mov     edx, 7
 * 00000001800B6DDB: mov     rcx, [rsp+1280h+var_1208]
 * 00000001800B6DE0: mov     rax, cs:off_1801C0050
 * 00000001800B6DE7: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B6DED: test    rax, rax
 * 00000001800B6DF0: jz      loc_1800B6FE8
 * 00000001800B6DF6: mov     r10, 0EEC037B63C533370h
 * 00000001800B6E00: lea     r8, [rbp+1180h+var_BE0]
 * 00000001800B6E07: mov     edx, 68h ; 'h'
 * 00000001800B6E0C: mov     rcx, rax
 * 00000001800B6E0F: mov     rax, cs:off_1801C0068
 * 00000001800B6E16: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B6E1C: test    eax, eax
 * 00000001800B6E1E: jz      loc_1800B6FE8
 * 00000001800B6E24: cmp     [rbp+1180h+var_BCE], 20h ; ' '
 * 00000001800B6E2C: jnz     short loc_1800B6E50
 * 00000001800B6E2E: cmp     [rbp+1180h+var_BC8], 0
 * 00000001800B6E36: jz      short loc_1800B6E50
 * 00000001800B6E38: cmp     [rbp+1180h+var_BDC], 0
 * 00000001800B6E3F: jle     short loc_1800B6E50
 * 00000001800B6E41: cmp     [rbp+1180h+var_BD8], 0
 * 00000001800B6E48: jle     short loc_1800B6E50
 * 00000001800B6E4A: mov     eax, dword ptr [rsp+1280h+var_1218]
 * 00000001800B6E4E: jmp     short loc_1800B6E56
 * 00000001800B6E50: xor     eax, eax
 * 00000001800B6E52: mov     dword ptr [rsp+1280h+var_1218], eax
 * 00000001800B6E56: test    eax, eax
 * 00000001800B6E58: jz      loc_1800B6FEE
 * 00000001800B6E5E: mov     r10, 0EF788E6016D10870h
 * 00000001800B6E68: mov     r8d, dword ptr [rbp+1180h+var_E98+4]
 * 00000001800B6E6F: mov     edx, edi
 * 00000001800B6E71: lea     rcx, [rbp+1180h+var_824]
 * 00000001800B6E78: mov     rax, cs:off_1801C0150
 * 00000001800B6E7F: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B6E85: mov     r10, 0EF788E6016D10870h
 * 00000001800B6E8F: mov     r8d, dword ptr [rbp+1180h+var_E98+4]
 * 00000001800B6E96: mov     edx, edi
 * 00000001800B6E98: lea     rcx, [rbp+1180h+var_814]
 * 00000001800B6E9F: mov     rax, cs:off_1801C0150
 * 00000001800B6EA6: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B6EAC: mov     edi, dword ptr [rbp+1180h+var_1200]
 * 00000001800B6EAF: cmp     edi, 1
 * 00000001800B6EB2: jnz     short loc_1800B6EE3
 * 00000001800B6EB4: mov     ecx, 0B26720h
 * 00000001800B6EB9: cmp     [rbp+1180h+var_85C], 0
 * 00000001800B6EC0: mov     eax, 0
 * 00000001800B6EC5: cmovnz  ecx, eax
 * 00000001800B6EC8: mov     r10, 0A66C2F7D5ED6D070h
 * 00000001800B6ED2: mov     rax, cs:off_1801C0028
 * 00000001800B6ED9: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B6EDF: mov     [rbp+1180h+Size], rax
 * 00000001800B6EE3: mov     r14d, 38h ; '8'
 * 00000001800B6EE9: mov     r10, 0C0B816137ADF0070h
 * 00000001800B6EF3: mov     edx, 1
 * 00000001800B6EF8: mov     rcx, [rsp+1280h+var_1208]
 * 00000001800B6EFD: mov     rax, cs:off_1801C0080
 * 00000001800B6F04: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B6F0A: mov     dword ptr [rbp+1180h+var_1198], eax
 * 00000001800B6F0D: mov     eax, 810h
 * 00000001800B6F12: mov     ecx, 20812h
 * 00000001800B6F17: cmp     [rbp+1180h+var_860], 0
 * 00000001800B6F1E: cmovnz  eax, ecx
 * 00000001800B6F21: mov     dword ptr [rbp+1180h+var_11F8], eax
 * 00000001800B6F24: cmp     dword ptr [rsp+1280h+var_1218], 0
 * 00000001800B6F29: jz      loc_1800B7BC5
 * 00000001800B6F2F: mov     eax, [rbp+1180h+var_85C]
 * 00000001800B6F35: mov     dword ptr [rsp+1280h+var_1218], eax
 * 00000001800B6F39: mov     rax, [rbp+1180h+var_840]
 * 00000001800B6F40: mov     [rsp+1280h+var_1220], rax
 * 00000001800B6F45: mov     rdi, [rbp+1180h+var_858]
 * 00000001800B6F4C: mov     [rbp+1180h+var_11A8], rdi
 * 00000001800B6F50: xor     edx, edx; Val
 * 00000001800B6F52: lea     r8d, [rdx+68h]; Size
 * 00000001800B6F56: lea     rcx, [rbp+1180h+var_B70]; void *
 * 00000001800B6F5D: call    memset_0
 * 00000001800B6F62: xor     edx, edx; Val
 * 00000001800B6F64: lea     r8d, [rdx+68h]; Size
 * 00000001800B6F68: lea     rcx, [rbp+1180h+var_B00]; void *
 * 00000001800B6F6F: call    memset_0
 * 00000001800B6F74: xor     ecx, ecx
 * 00000001800B6F76: mov     [rbp+1180h+var_11B8], rcx
 * 00000001800B6F7A: mov     dword ptr [rbp+1180h+var_11C0], ecx
 * 00000001800B6F7D: mov     [rbp+1180h+var_11D8], ecx
 * 00000001800B6F80: xorps   xmm0, xmm0
 * 00000001800B6F83: xor     eax, eax
 * 00000001800B6F85: movups  [rbp+1180h+var_6D0], xmm0
 * 00000001800B6F8C: movups  [rbp+1180h+var_6C0], xmm0
 * 00000001800B6F93: mov     [rbp+1180h+var_6B0], rax
 * 00000001800B6F9A: mov     [rbp+1180h+var_6A8], eax
 * 00000001800B6FA0: movups  [rbp+1180h+var_7B0], xmm0
 * 00000001800B6FA7: test    rdi, rdi
 * 00000001800B6FAA: jz      loc_1800B8BDD
 * 00000001800B6FB0: mov     r10, 0EA2596A652D04370h
 * 00000001800B6FBA: lea     edx, [rcx+7]
 * 00000001800B6FBD: mov     rdi, [rsp+1280h+var_1208]
 * 00000001800B6FC2: mov     rcx, rdi
 * 00000001800B6FC5: mov     rax, cs:off_1801C0050
 * 00000001800B6FCC: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B6FD2: test    rax, rax
 * 00000001800B6FD5: jnz     short loc_1800B7000
 * 00000001800B6FD7: call    cs:__imp_GetLastError
 * 00000001800B6FDE: nop     dword ptr [rax+rax+00h]
 * 00000001800B6FE3: jmp     loc_1800B8BDD
 * 00000001800B6FE8: xor     eax, eax
 * 00000001800B6FEA: mov     dword ptr [rsp+1280h+var_1218], eax
 * 00000001800B6FEE: cmp     dword ptr [rbp+1180h+var_1200], 1
 * 00000001800B6FF2: jz      loc_1800B6E5E
 * 00000001800B6FF8: mov     edi, dword ptr [rbp+1180h+var_1200]
 * 00000001800B6FFB: jmp     loc_1800B6EE9
 * 00000001800B7000: mov     r10, 0EEC037B63C533370h
 * 00000001800B700A: lea     r8, [rbp+1180h+var_B70]
 * 00000001800B7011: mov     edx, 68h ; 'h'
 * 00000001800B7016: mov     rcx, rax
 * 00000001800B7019: mov     rax, cs:off_1801C0068
 * 00000001800B7020: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B7026: test    eax, eax
 * 00000001800B7028: jz      short loc_1800B7047
 * 00000001800B702A: mov     rax, [rbp+1180h+var_B58]
 * 00000001800B7031: mov     [rbp+1180h+var_11B8], rax
 * 00000001800B7035: mov     eax, [rbp+1180h+var_B6C]
 * 00000001800B703B: mov     dword ptr [rbp+1180h+var_11C0], eax
 * 00000001800B703E: mov     eax, [rbp+1180h+var_B68]
 * 00000001800B7044: mov     [rbp+1180h+var_11D8], eax
 * 00000001800B7047: mov     r10, 0B2ED17FC1CDCD370h
 * 00000001800B7051: mov     rcx, rdi
 * 00000001800B7054: mov     rax, cs:off_1801C0010
 * 00000001800B705B: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B7061: mov     rdi, rax
 * 00000001800B7064: mov     [rbp+1180h+lpModuleName], rax
 * 00000001800B7068: test    rax, rax
 * 00000001800B706B: jnz     short loc_1800B707E
 * 00000001800B706D: call    cs:__imp_GetLastError
 * 00000001800B7074: nop     dword ptr [rax+rax+00h]
 * 00000001800B7079: jmp     loc_1800B8BDD
 * 00000001800B707E: mov     ecx, dword ptr [rbp+1180h+var_824+0Ch]
 * 00000001800B7084: sub     ecx, dword ptr [rbp+1180h+var_824+4]
 * 00000001800B708A: mov     eax, dword ptr [rbp+1180h+var_824+8]
 * 00000001800B7090: sub     eax, dword ptr [rbp+1180h+var_824]
 * 00000001800B7096: xor     edx, edx
 * 00000001800B7098: mov     [rbp+1180h+var_E90], rdx
 * 00000001800B709F: mov     dword ptr [rbp+1180h+var_11B0], edx
 * 00000001800B70A2: xorps   xmm0, xmm0
 * 00000001800B70A5: movdqu  [rbp+1180h+var_6C0], xmm0
 * 00000001800B70AD: mov     [rbp+1180h+var_6B0], rdx
 * 00000001800B70B4: mov     [rbp+1180h+var_6A8], edx
 * 00000001800B70BA: mov     dword ptr [rbp+1180h+var_6D0], 28h ; '('
 * 00000001800B70C4: mov     dword ptr [rbp+1180h+var_6D0+4], eax
 * 00000001800B70CA: neg     ecx
 * 00000001800B70CC: mov     dword ptr [rbp+1180h+var_6D0+8], ecx
 * 00000001800B70D2: mov     eax, 1
 * 00000001800B70D7: mov     word ptr [rbp+1180h+var_6D0+0Ch], ax
 * 00000001800B70DE: mov     eax, 20h ; ' '
 * 00000001800B70E3: mov     word ptr [rbp+1180h+var_6D0+0Eh], ax
 * 00000001800B70EA: mov     r10, 0CF05A77938531370h
 * 00000001800B70F4: mov     dword ptr [rsp+1280h+var_1258], edx
 * 00000001800B70F8: mov     [rsp+1280h+var_1260], rdx
 * 00000001800B70FD: lea     r9, [rbp+1180h+var_E90]
 * 00000001800B7104: xor     r8d, r8d
 * 00000001800B7107: lea     rdx, [rbp+1180h+var_6D0]
 * 00000001800B710E: mov     rcx, rdi
 * 00000001800B7111: mov     rax, cs:off_1801C0018
 * 00000001800B7118: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B711E: mov     [rbp+1180h+var_11E0], rax
 * 00000001800B7122: test    rax, rax
 * 00000001800B7125: jnz     loc_1800B7230
 * 00000001800B712B: call    cs:__imp_GetLastError
 * 00000001800B7132: nop     dword ptr [rax+rax+00h]
 * 00000001800B7137: mov     dword ptr [rbp+1180h+var_11B0], eax
 * 00000001800B713A: test    eax, eax
 * 00000001800B713C: jle     short loc_1800B714B
 * 00000001800B713E: movzx   eax, ax
 * 00000001800B7141: or      eax, 80070000h
 * 00000001800B7146: mov     dword ptr [rbp+1180h+var_11B0], eax
 * 00000001800B7149: test    eax, eax
 * 00000001800B714B: jns     loc_1800B777C
 * 00000001800B7151: mov     r10, 0C5540FA17E509B70h
 * 00000001800B715B: mov     rcx, rdi
 * 00000001800B715E: mov     rax, cs:off_1801C0030
 * 00000001800B7165: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B716B: cmp     dword ptr [rbp+1180h+var_11B0], 0
 * 00000001800B716F: jl      loc_1800B8BDD
 * 00000001800B7175: mov     eax, [rbp+1180h+var_85C]
 * 00000001800B717B: mov     dword ptr [rsp+1280h+var_1218], eax
 * 00000001800B717F: mov     rax, [rbp+1180h+var_838]
 * 00000001800B7186: mov     [rsp+1280h+var_1220], rax
 * 00000001800B718B: mov     rdi, [rbp+1180h+var_850]
 * 00000001800B7192: mov     [rbp+1180h+var_11A8], rdi
 * 00000001800B7196: xor     edx, edx; Val
 * 00000001800B7198: lea     r8d, [rdx+68h]; Size
 * 00000001800B719C: lea     rcx, [rbp+1180h+var_A90]; void *
 * 00000001800B71A3: call    memset_0
 * 00000001800B71A8: xor     edx, edx; Val
 * 00000001800B71AA: lea     r8d, [rdx+68h]; Size
 * 00000001800B71AE: lea     rcx, [rbp+1180h+var_A20]; void *
 * 00000001800B71B5: call    memset_0
 * 00000001800B71BA: xor     eax, eax
 * 00000001800B71BC: mov     [rbp+1180h+var_11B8], rax
 * 00000001800B71C0: mov     dword ptr [rbp+1180h+var_11C0], eax
 * 00000001800B71C3: mov     [rbp+1180h+var_11D8], eax
 * 00000001800B71C6: xorps   xmm0, xmm0
 * 00000001800B71C9: movups  [rbp+1180h+var_6A0], xmm0
 * 00000001800B71D0: movups  [rbp+1180h+var_690], xmm0
 * 00000001800B71D7: mov     [rbp+1180h+var_680], rax
 * 00000001800B71DE: mov     [rbp+1180h+var_678], eax
 * 00000001800B71E4: movups  [rbp+1180h+var_7A0], xmm0
 * 00000001800B71EB: test    rdi, rdi
 * 00000001800B71EE: jz      loc_1800B8BDD
 * 00000001800B71F4: mov     r10, 0EA2596A652D04370h
 * 00000001800B71FE: lea     edx, [rax+7]
 * 00000001800B7201: mov     rdi, [rsp+1280h+var_1208]
 * 00000001800B7206: mov     rcx, rdi
 * 00000001800B7209: mov     rax, cs:off_1801C0050
 * 00000001800B7210: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B7216: test    rax, rax
 * 00000001800B7219: jnz     loc_1800B762F
 * 00000001800B721F: call    cs:__imp_GetLastError
 * 00000001800B7226: nop     dword ptr [rax+rax+00h]
 * 00000001800B722B: jmp     loc_1800B8BDD
 * 00000001800B7230: mov     r10, 0EEC037B63C533370h
 * 00000001800B723A: lea     r8, [rbp+1180h+var_B00]
 * 00000001800B7241: mov     edx, 68h ; 'h'
 * 00000001800B7246: mov     rcx, rax
 * 00000001800B7249: mov     rax, cs:off_1801C0068
 * 00000001800B7250: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B7256: xor     ecx, ecx
 * 00000001800B7258: test    eax, eax
 * 00000001800B725A: cmovnz  rcx, [rbp+1180h+var_AE8]
 * 00000001800B7262: mov     [rbp+1180h+var_11A0], rcx
 * 00000001800B7266: mov     eax, dword ptr [rbp+1180h+var_824+8]
 * 00000001800B726C: sub     eax, dword ptr [rbp+1180h+var_824]
 * 00000001800B7272: mov     dword ptr [rbp+1180h+var_7B0+8], eax
 * 00000001800B7278: mov     eax, dword ptr [rbp+1180h+var_824+0Ch]
 * 00000001800B727E: sub     eax, dword ptr [rbp+1180h+var_824+4]
 * 00000001800B7284: mov     dword ptr [rbp+1180h+var_7B0+0Ch], eax
 * 00000001800B728A: mov     r10, 0E62CA6FE305B8A70h
 * 00000001800B7294: mov     rdx, [rbp+1180h+var_11E0]
 * 00000001800B7298: mov     rcx, rdi
 * 00000001800B729B: mov     rax, cs:off_1801C0078
 * 00000001800B72A2: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B72A8: mov     r10, 0C0B816137ADF0070h
 * 00000001800B72B2: mov     edx, 1
 * 00000001800B72B7: mov     rcx, rdi
 * 00000001800B72BA: mov     rax, cs:off_1801C0080
 * 00000001800B72C1: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B72C7: mov     r10, 0E62CA6FE305B8A70h
 * 00000001800B72D1: mov     rdx, [rsp+1280h+var_1220]
 * 00000001800B72D6: mov     rcx, rdi
 * 00000001800B72D9: mov     rax, cs:off_1801C0078
 * 00000001800B72E0: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B72E6: mov     [rsp+1280h+var_1220], rax
 * 00000001800B72EB: mov     rdi, cs:off_1801C00E8
 * 00000001800B72F2: mov     r10, 0FD20BEF77ED52170h
 * 00000001800B72FC: xor     ecx, ecx
 * 00000001800B72FE: mov     rax, cs:off_1801C0070
 * 00000001800B7305: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B730B: mov     r8, rax
 * 00000001800B730E: mov     r10, 94F1065E3ADE9370h
 * 00000001800B7318: lea     rdx, [rbp+1180h+var_7B0]
 * 00000001800B731F: mov     rcx, [rbp+1180h+lpModuleName]
 * 00000001800B7323: mov     rax, rdi
 * 00000001800B7326: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B732C: mov     r10, 0FA2817DF7AD26370h
 * 00000001800B7336: xor     eax, eax
 * 00000001800B7338: mov     [rsp+1280h+var_1258], rax
 * 00000001800B733D: mov     eax, dword ptr [rbp+1180h+var_11F8]
 * 00000001800B7340: mov     dword ptr [rsp+1280h+var_1260], eax
 * 00000001800B7344: lea     r9, [rbp+1180h+var_7B0]
 * 00000001800B734B: mov     r8d, 0FFFFFFFFh
 * 00000001800B7351: mov     rdx, [rbp+1180h+var_11A8]
 * 00000001800B7355: mov     rdi, [rbp+1180h+lpModuleName]
 * 00000001800B7359: mov     rcx, rdi
 * 00000001800B735C: mov     rax, cs:off_1801C00D8
 * 00000001800B7363: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B7369: cmp     dword ptr [rbp+1180h+var_1200], 1
 * 00000001800B736D: jnz     short loc_1800B73A2
 * 00000001800B736F: cmp     dword ptr [rsp+1280h+var_1218], 0
 * 00000001800B7374: jz      short loc_1800B7398
 * 00000001800B7376: mov     r10, 8B0406AD5454F070h
 * 00000001800B7380: mov     ecx, 8
 * 00000001800B7385: mov     rax, cs:off_1801C0118
 * 00000001800B738C: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B7392: mov     dword ptr [rsp+1280h+var_1218], eax
 * 00000001800B7396: jmp     short loc_1800B73AA
 * 00000001800B7398: mov     dword ptr [rsp+1280h+var_1218], 0FFFFFFh
 * 00000001800B73A0: jmp     short loc_1800B73AA
 * 00000001800B73A2: mov     dword ptr [rsp+1280h+var_1218], 0FFA8A8A8h
 * 00000001800B73AA: mov     ecx, dword ptr [rbp+1180h+var_824+4]
 * 00000001800B73B0: mov     eax, dword ptr [rbp+1180h+var_824]
 * 00000001800B73B6: mov     r9d, eax
 * 00000001800B73B9: neg     r9d
 * 00000001800B73BC: test    eax, eax
 * 00000001800B73BE: mov     r8d, 0
 * 00000001800B73C4: cmovns  r9d, r8d
 * 00000001800B73C8: mov     r10d, r8d
 * 00000001800B73CB: cmovns  r10d, eax
 * 00000001800B73CF: mov     edx, ecx
 * 00000001800B73D1: neg     edx
 * 00000001800B73D3: test    ecx, ecx
 * 00000001800B73D5: cmovns  edx, r8d
 * 00000001800B73D9: cmovns  r8d, ecx
 * 00000001800B73DD: mov     ecx, dword ptr [rbp+1180h+var_7B0+8]
 * 00000001800B73E3: sub     ecx, r9d
 * 00000001800B73E6: mov     eax, dword ptr [rbp+1180h+var_11C0]
 * 00000001800B73E9: sub     eax, r10d
 * 00000001800B73EC: cmp     ecx, eax
 * 00000001800B73EE: cmovge  ecx, eax
 * 00000001800B73F1: mov     [rbp+1180h+var_11E8], ecx
 * 00000001800B73F4: mov     r11d, dword ptr [rbp+1180h+var_7B0+0Ch]
 * 00000001800B73FB: sub     r11d, edx
 * 00000001800B73FE: mov     eax, [rbp+1180h+var_11D8]
 * 00000001800B7401: sub     eax, r8d
 * 00000001800B7404: cmp     r11d, eax
 * 00000001800B7407: cmovge  r11d, eax
 * 00000001800B740B: test    ecx, ecx
 * 00000001800B740D: jle     loc_1800B75CA
 * 00000001800B7413: test    r11d, r11d
 * 00000001800B7416: jle     loc_1800B75CA
 * 00000001800B741C: movsxd  rbx, dword ptr [rbp+1180h+var_7B0+8]
 * 00000001800B7423: imul    edx, ebx
 * 00000001800B7426: movsxd  rcx, edx
 * 00000001800B7429: movsxd  rax, r9d
 * 00000001800B742C: add     rcx, rax
 * 00000001800B742F: mov     rax, [rbp+1180h+var_11A0]
 * 00000001800B7433: lea     rdi, [rax+rcx*4]
 * 00000001800B7437: mov     [rbp+1180h+var_11A8], rdi
 * 00000001800B743B: movsxd  rdx, dword ptr [rbp+1180h+var_11C0]
 * 00000001800B743F: imul    r8d, edx
 * 00000001800B7443: movsxd  rcx, r8d
 * 00000001800B7446: movsxd  rax, r10d
 * 00000001800B7449: add     rcx, rax
 * 00000001800B744C: mov     rax, [rbp+1180h+var_11B8]
 * 00000001800B7450: lea     rax, [rax+rcx*4]
 * 00000001800B7454: mov     [rbp+1180h+var_11B8], rax
 * 00000001800B7458: xor     r13d, r13d
 * 00000001800B745B: mov     dword ptr [rbp+1180h+var_11C0], r13d
 * 00000001800B745F: mov     rcx, rbx
 * 00000001800B7462: shl     rcx, 2
 * 00000001800B7466: mov     [rbp+1180h+var_11A0], rcx
 * 00000001800B746A: mov     rcx, rdx
 * 00000001800B746D: shl     rcx, 2
 * 00000001800B7471: mov     ebx, [rbp+1180h+var_11E8]
 * 00000001800B7474: mov     esi, dword ptr [rsp+1280h+var_1218]
 * 00000001800B7478: mov     r12, [rbp+1180h+var_11A0]
 * 00000001800B747C: mov     r15, rcx
 * 00000001800B747F: mov     r8d, r13d
 * 00000001800B7482: mov     [rbp+1180h+var_11D8], r13d
 * 00000001800B7486: lea     r9, [rdi+2]
 * 00000001800B748A: mov     r10, rax
 * 00000001800B748D: sub     r10, rdi
 * 00000001800B7490: movzx   ecx, byte ptr [r9-1]
 * 00000001800B7495: movzx   eax, byte ptr [r9-2]
 * 00000001800B749A: lea     edx, [rax+rcx*2]
 * 00000001800B749D: movzx   eax, byte ptr [r9]
 * 00000001800B74A1: add     edx, eax
 * 00000001800B74A3: shr     edx, 2
 * 00000001800B74A6: not     dl
 * 00000001800B74A8: test    dl, dl
 * 00000001800B74AA: jz      loc_1800B7565
 * 00000001800B74B0: movzx   edi, byte ptr [r10+r9]
 * 00000001800B74B5: movzx   r8d, dl
 * 00000001800B74B9: movzx   ecx, sil
 * 00000001800B74BD: sub     ecx, edi
 * 00000001800B74BF: imul    ecx, r8d
 * 00000001800B74C3: mov     eax, 80808081h
 * 00000001800B74C8: imul    ecx
 * 00000001800B74CA: add     edx, ecx
 * 00000001800B74CC: sar     edx, 7
 * 00000001800B74CF: mov     eax, edx
 * 00000001800B74D1: shr     eax, 1Fh
 * 00000001800B74D4: add     edx, eax
 * 00000001800B74D6: add     dl, dil
 * 00000001800B74D9: mov     [r10+r9], dl
 * 00000001800B74DD: movzx   edi, byte ptr [r10+r9-1]
 * 00000001800B74E3: movzx   ecx, byte ptr [rsp+1280h+var_1218+1]
 * 00000001800B74E8: sub     ecx, edi
 * 00000001800B74EA: imul    ecx, r8d
 * 00000001800B74EE: mov     eax, 80808081h
 * 00000001800B74F3: imul    ecx
 * 00000001800B74F5: add     edx, ecx
 * 00000001800B74F7: sar     edx, 7
 * 00000001800B74FA: mov     eax, edx
 * 00000001800B74FC: shr     eax, 1Fh
 * 00000001800B74FF: add     edx, eax
 * 00000001800B7501: add     dl, dil
 * 00000001800B7504: mov     [r10+r9-1], dl
 * 00000001800B7509: movzx   edi, byte ptr [r10+r9-2]
 * 00000001800B750F: movzx   ecx, byte ptr [rsp+1280h+var_1218+2]
 * 00000001800B7514: sub     ecx, edi
 * 00000001800B7516: imul    ecx, r8d
 * 00000001800B751A: mov     eax, 80808081h
 * 00000001800B751F: imul    ecx
 * 00000001800B7521: add     edx, ecx
 * 00000001800B7523: sar     edx, 7
 * 00000001800B7526: mov     eax, edx
 * 00000001800B7528: shr     eax, 1Fh
 * 00000001800B752B: add     edx, eax
 * 00000001800B752D: add     dl, dil
 * 00000001800B7530: mov     [r10+r9-2], dl
 * 00000001800B7535: movzx   edi, byte ptr [r10+r9+1]
 * 00000001800B753B: mov     ecx, 0FFh
 * 00000001800B7540: sub     ecx, edi
 * 00000001800B7542: imul    ecx, r8d
 * 00000001800B7546: mov     eax, 80808081h
 * 00000001800B754B: imul    ecx
 * 00000001800B754D: add     edx, ecx
 * 00000001800B754F: sar     edx, 7
 * 00000001800B7552: mov     eax, edx
 * 00000001800B7554: shr     eax, 1Fh
 * 00000001800B7557: add     edx, eax
 * 00000001800B7559: add     dl, dil
 * 00000001800B755C: mov     [r10+r9+1], dl
 * 00000001800B7561: mov     r8d, [rbp+1180h+var_11D8]
 * 00000001800B7565: add     r9, 4
 * 00000001800B7569: inc     r8d
 * 00000001800B756C: mov     [rbp+1180h+var_11D8], r8d
 * 00000001800B7570: cmp     r8d, ebx
 * 00000001800B7573: jl      loc_1800B7490
 * 00000001800B7579: mov     rdi, [rbp+1180h+var_11A8]
 * 00000001800B757D: add     rdi, r12
 * 00000001800B7580: mov     [rbp+1180h+var_11A8], rdi
 * 00000001800B7584: mov     rax, [rbp+1180h+var_11B8]
 * 00000001800B7588: add     rax, r15
 * 00000001800B758B: mov     [rbp+1180h+var_11B8], rax
 * 00000001800B758F: mov     ecx, dword ptr [rbp+1180h+var_11C0]
 * 00000001800B7592: inc     ecx
 * 00000001800B7594: mov     dword ptr [rbp+1180h+var_11C0], ecx
 * 00000001800B7597: cmp     ecx, r11d
 * 00000001800B759A: jl      loc_1800B747F
 * 00000001800B75A0: mov     rbx, 0C81ECB17B1B54A58h
 * 00000001800B75AA: mov     rsi, 7F1137FAB69605Eh
 * 00000001800B75B4: mov     r15, [rbp+1180h+var_1128]
 * 00000001800B75B8: lea     r12, [r15+0C0h]
 * 00000001800B75BF: mov     r13d, [rbp+1180h+var_10C8]
 * 00000001800B75C6: mov     rdi, [rbp+1180h+lpModuleName]
 * 00000001800B75CA: mov     r10, 0B2E10636105E9A70h
 * 00000001800B75D4: mov     rcx, [rbp+1180h+var_11E0]
 * 00000001800B75D8: mov     rax, cs:off_1801C0038
 * 00000001800B75DF: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B75E5: mov     rax, [rsp+1280h+var_1220]
 * 00000001800B75EA: test    rax, rax
 * 00000001800B75ED: jz      loc_1800B7151
 * 00000001800B75F3: mov     r10, 0E62CA6FE305B8A70h
 * 00000001800B75FD: mov     rdx, rax
 * 00000001800B7600: mov     rcx, rdi
 * 00000001800B7603: mov     rax, cs:off_1801C0078
 * 00000001800B760A: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B7610: mov     r10, 0C5540FA17E509B70h
 * 00000001800B761A: mov     rcx, rdi
 * 00000001800B761D: mov     rax, cs:off_1801C0030
 * 00000001800B7624: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B762A: jmp     loc_1800B7175
 * 00000001800B762F: mov     r10, 0EEC037B63C533370h
 * 00000001800B7639: lea     r8, [rbp+1180h+var_A90]
 * 00000001800B7640: mov     edx, 68h ; 'h'
 * 00000001800B7645: mov     rcx, rax
 * 00000001800B7648: mov     rax, cs:off_1801C0068
 * 00000001800B764F: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B7655: test    eax, eax
 * 00000001800B7657: jz      short loc_1800B7676
 * 00000001800B7659: mov     rax, [rbp+1180h+var_A78]
 * 00000001800B7660: mov     [rbp+1180h+var_11B8], rax
 * 00000001800B7664: mov     eax, [rbp+1180h+var_A8C]
 * 00000001800B766A: mov     dword ptr [rbp+1180h+var_11C0], eax
 * 00000001800B766D: mov     eax, [rbp+1180h+var_A88]
 * 00000001800B7673: mov     [rbp+1180h+var_11D8], eax
 * 00000001800B7676: mov     r10, 0B2ED17FC1CDCD370h
 * 00000001800B7680: mov     rcx, rdi
 * 00000001800B7683: mov     rax, cs:off_1801C0010
 * 00000001800B768A: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B7690: mov     rdi, rax
 * 00000001800B7693: mov     [rbp+1180h+lpModuleName], rax
 * 00000001800B7697: test    rax, rax
 * 00000001800B769A: jnz     short loc_1800B76AD
 * 00000001800B769C: call    cs:__imp_GetLastError
 * 00000001800B76A3: nop     dword ptr [rax+rax+00h]
 * 00000001800B76A8: jmp     loc_1800B8BDD
 * 00000001800B76AD: mov     ecx, dword ptr [rbp+1180h+var_814+0Ch]
 * 00000001800B76B3: sub     ecx, dword ptr [rbp+1180h+var_814+4]
 * 00000001800B76B9: mov     eax, dword ptr [rbp+1180h+var_814+8]
 * 00000001800B76BF: sub     eax, dword ptr [rbp+1180h+var_814]
 * 00000001800B76C5: xor     edx, edx
 * 00000001800B76C7: mov     [rbp+1180h+var_E88], rdx
 * 00000001800B76CE: mov     dword ptr [rbp+1180h+var_11B0], edx
 * 00000001800B76D1: xorps   xmm0, xmm0
 * 00000001800B76D4: movdqu  [rbp+1180h+var_690], xmm0
 * 00000001800B76DC: mov     [rbp+1180h+var_680], rdx
 * 00000001800B76E3: mov     [rbp+1180h+var_678], edx
 * 00000001800B76E9: mov     dword ptr [rbp+1180h+var_6A0], 28h ; '('
 * 00000001800B76F3: mov     dword ptr [rbp+1180h+var_6A0+4], eax
 * 00000001800B76F9: neg     ecx
 * 00000001800B76FB: mov     dword ptr [rbp+1180h+var_6A0+8], ecx
 * 00000001800B7701: mov     eax, 1
 * 00000001800B7706: mov     word ptr [rbp+1180h+var_6A0+0Ch], ax
 * 00000001800B770D: mov     eax, 20h ; ' '
 * 00000001800B7712: mov     word ptr [rbp+1180h+var_6A0+0Eh], ax
 * 00000001800B7719: mov     r10, 0CF05A77938531370h
 * 00000001800B7723: mov     dword ptr [rsp+1280h+var_1258], edx
 * 00000001800B7727: mov     [rsp+1280h+var_1260], rdx
 * 00000001800B772C: lea     r9, [rbp+1180h+var_E88]
 * 00000001800B7733: xor     r8d, r8d
 * 00000001800B7736: lea     rdx, [rbp+1180h+var_6A0]
 * 00000001800B773D: mov     rcx, rdi
 * 00000001800B7740: mov     rax, cs:off_1801C0018
 * 00000001800B7747: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B774D: mov     [rbp+1180h+var_11E0], rax
 * 00000001800B7751: test    rax, rax
 * 00000001800B7754: jnz     short loc_1800B779B
 * 00000001800B7756: call    cs:__imp_GetLastError
 * 00000001800B775D: nop     dword ptr [rax+rax+00h]
 * 00000001800B7762: mov     dword ptr [rbp+1180h+var_11B0], eax
 * 00000001800B7765: test    eax, eax
 * 00000001800B7767: jle     short loc_1800B7776
 * 00000001800B7769: movzx   eax, ax
 * 00000001800B776C: or      eax, 80070000h
 * 00000001800B7771: mov     dword ptr [rbp+1180h+var_11B0], eax
 * 00000001800B7774: test    eax, eax
 * 00000001800B7776: js      loc_1800B7B98
 * 00000001800B777C: mov     r10, 0C5540FA17E509B70h
 * 00000001800B7786: mov     rcx, rdi
 * 00000001800B7789: mov     rax, cs:off_1801C0030
 * 00000001800B7790: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B7796: jmp     loc_1800B8BDD
 * 00000001800B779B: mov     r10, 0EEC037B63C533370h
 * 00000001800B77A5: lea     r8, [rbp+1180h+var_A20]
 * 00000001800B77AC: mov     edx, 68h ; 'h'
 * 00000001800B77B1: mov     rcx, rax
 * 00000001800B77B4: mov     rax, cs:off_1801C0068
 * 00000001800B77BB: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B77C1: xor     ecx, ecx
 * 00000001800B77C3: test    eax, eax
 * 00000001800B77C5: cmovnz  rcx, [rbp+1180h+var_A08]
 * 00000001800B77CD: mov     [rbp+1180h+var_11A0], rcx
 * 00000001800B77D1: mov     eax, dword ptr [rbp+1180h+var_814+8]
 * 00000001800B77D7: sub     eax, dword ptr [rbp+1180h+var_814]
 * 00000001800B77DD: mov     dword ptr [rbp+1180h+var_7A0+8], eax
 * 00000001800B77E3: mov     eax, dword ptr [rbp+1180h+var_814+0Ch]
 * 00000001800B77E9: sub     eax, dword ptr [rbp+1180h+var_814+4]
 * 00000001800B77EF: mov     dword ptr [rbp+1180h+var_7A0+0Ch], eax
 * 00000001800B77F5: mov     r10, 0E62CA6FE305B8A70h
 * 00000001800B77FF: mov     rdx, [rbp+1180h+var_11E0]
 * 00000001800B7803: mov     rcx, rdi
 * 00000001800B7806: mov     rax, cs:off_1801C0078
 * 00000001800B780D: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B7813: mov     r10, 0C0B816137ADF0070h
 * 00000001800B781D: mov     edx, 1
 * 00000001800B7822: mov     rcx, rdi
 * 00000001800B7825: mov     rax, cs:off_1801C0080
 * 00000001800B782C: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B7832: mov     r10, 0E62CA6FE305B8A70h
 * 00000001800B783C: mov     rdx, [rsp+1280h+var_1220]
 * 00000001800B7841: mov     rcx, rdi
 * 00000001800B7844: mov     rax, cs:off_1801C0078
 * 00000001800B784B: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B7851: mov     [rsp+1280h+var_1220], rax
 * 00000001800B7856: mov     rdi, cs:off_1801C00E8
 * 00000001800B785D: mov     r10, 0FD20BEF77ED52170h
 * 00000001800B7867: xor     ecx, ecx
 * 00000001800B7869: mov     rax, cs:off_1801C0070
 * 00000001800B7870: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B7876: mov     r8, rax
 * 00000001800B7879: mov     r10, 94F1065E3ADE9370h
 * 00000001800B7883: lea     rdx, [rbp+1180h+var_7A0]
 * 00000001800B788A: mov     rcx, [rbp+1180h+lpModuleName]
 * 00000001800B788E: mov     rax, rdi
 * 00000001800B7891: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B7897: mov     r10, 0FA2817DF7AD26370h
 * 00000001800B78A1: xor     eax, eax
 * 00000001800B78A3: mov     [rsp+1280h+var_1258], rax
 * 00000001800B78A8: mov     eax, dword ptr [rbp+1180h+var_11F8]
 * 00000001800B78AB: mov     dword ptr [rsp+1280h+var_1260], eax
 * 00000001800B78AF: lea     r9, [rbp+1180h+var_7A0]
 * 00000001800B78B6: mov     r8d, 0FFFFFFFFh
 * 00000001800B78BC: mov     rdx, [rbp+1180h+var_11A8]
 * 00000001800B78C0: mov     rdi, [rbp+1180h+lpModuleName]
 * 00000001800B78C4: mov     rcx, rdi
 * 00000001800B78C7: mov     rax, cs:off_1801C00D8
 * 00000001800B78CE: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B78D4: cmp     dword ptr [rbp+1180h+var_1200], 1
 * 00000001800B78D8: jnz     short loc_1800B7908
 * 00000001800B78DA: cmp     dword ptr [rsp+1280h+var_1218], 0
 * 00000001800B78DF: jz      short loc_1800B78FF
 * 00000001800B78E1: mov     r10, 8B0406AD5454F070h
 * 00000001800B78EB: mov     ecx, 8
 * 00000001800B78F0: mov     rax, cs:off_1801C0118
 * 00000001800B78F7: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B78FD: jmp     short loc_1800B790D
 * 00000001800B78FF: mov     dword ptr [rbp+1180h+var_1200], 0FFFFFFh
 * 00000001800B7906: jmp     short loc_1800B7913
 * 00000001800B7908: mov     eax, 0FFA8A8A8h
 * 00000001800B790D: mov     dword ptr [rbp+1180h+var_1200], eax
 * 00000001800B7910: mov     dword ptr [rbp+1180h+var_1190], eax
 * 00000001800B7913: mov     ecx, dword ptr [rbp+1180h+var_814+4]
 * 00000001800B7919: mov     eax, dword ptr [rbp+1180h+var_814]
 * 00000001800B791F: mov     r9d, eax
 * 00000001800B7922: neg     r9d
 * 00000001800B7925: test    eax, eax
 * 00000001800B7927: mov     r8d, 0
 * 00000001800B792D: cmovns  r9d, r8d
 * 00000001800B7931: mov     r10d, r8d
 * 00000001800B7934: cmovns  r10d, eax
 * 00000001800B7938: mov     edx, ecx
 * 00000001800B793A: neg     edx
 * 00000001800B793C: test    ecx, ecx
 * 00000001800B793E: cmovns  edx, r8d
 * 00000001800B7942: cmovns  r8d, ecx
 * 00000001800B7946: mov     ecx, dword ptr [rbp+1180h+var_7A0+8]
 * 00000001800B794C: sub     ecx, r9d
 * 00000001800B794F: mov     eax, dword ptr [rbp+1180h+var_11C0]
 * 00000001800B7952: sub     eax, r10d
 * 00000001800B7955: cmp     ecx, eax
 * 00000001800B7957: cmovge  ecx, eax
 * 00000001800B795A: mov     dword ptr [rsp+1280h+var_1218], ecx
 * 00000001800B795E: mov     r11d, dword ptr [rbp+1180h+var_7A0+0Ch]
 * 00000001800B7965: sub     r11d, edx
 * 00000001800B7968: mov     eax, [rbp+1180h+var_11D8]
 * 00000001800B796B: sub     eax, r8d
 * 00000001800B796E: cmp     r11d, eax
 * 00000001800B7971: cmovge  r11d, eax
 * 00000001800B7975: test    ecx, ecx
 * 00000001800B7977: jle     loc_1800B7B33
 * 00000001800B797D: test    r11d, r11d
 * 00000001800B7980: jle     loc_1800B7B33
 * 00000001800B7986: movsxd  rsi, dword ptr [rbp+1180h+var_7A0+8]
 * 00000001800B798D: imul    edx, esi
 * 00000001800B7990: movsxd  rcx, edx
 * 00000001800B7993: movsxd  rax, r9d
 * 00000001800B7996: add     rcx, rax
 * 00000001800B7999: mov     rax, [rbp+1180h+var_11A0]
 * 00000001800B799D: lea     rdi, [rax+rcx*4]
 * 00000001800B79A1: mov     [rbp+1180h+var_11A8], rdi
 * 00000001800B79A5: movsxd  rdx, dword ptr [rbp+1180h+var_11C0]
 * 00000001800B79A9: imul    r8d, edx
 * 00000001800B79AD: movsxd  rcx, r8d
 * 00000001800B79B0: movsxd  rax, r10d
 * 00000001800B79B3: add     rcx, rax
 * 00000001800B79B6: mov     rax, [rbp+1180h+var_11B8]
 * 00000001800B79BA: lea     rax, [rax+rcx*4]
 * 00000001800B79BE: mov     [rbp+1180h+var_11B8], rax
 * 00000001800B79C2: xor     r12d, r12d
 * 00000001800B79C5: mov     dword ptr [rbp+1180h+var_11F8], r12d
 * 00000001800B79C9: mov     rcx, rsi
 * 00000001800B79CC: shl     rcx, 2
 * 00000001800B79D0: mov     [rbp+1180h+var_11A0], rcx
 * 00000001800B79D4: mov     rcx, rdx
 * 00000001800B79D7: shl     rcx, 2
 * 00000001800B79DB: mov     esi, dword ptr [rsp+1280h+var_1218]
 * 00000001800B79DF: mov     rbx, [rbp+1180h+var_11A0]
 * 00000001800B79E3: mov     r13, rcx
 * 00000001800B79E6: mov     r15d, dword ptr [rbp+1180h+var_1190]
 * 00000001800B79EA: mov     r8d, r12d
 * 00000001800B79ED: mov     dword ptr [rsp+1280h+var_1218], r12d
 * 00000001800B79F2: lea     r9, [rdi+2]
 * 00000001800B79F6: mov     r10, rax
 * 00000001800B79F9: sub     r10, rdi
 * 00000001800B79FC: movzx   ecx, byte ptr [r9-1]
 * 00000001800B7A01: movzx   eax, byte ptr [r9-2]
 * 00000001800B7A06: lea     edx, [rax+rcx*2]
 * 00000001800B7A09: movzx   eax, byte ptr [r9]
 * 00000001800B7A0D: add     edx, eax
 * 00000001800B7A0F: shr     edx, 2
 * 00000001800B7A12: not     dl
 * 00000001800B7A14: test    dl, dl
 * 00000001800B7A16: jz      loc_1800B7AD0
 * 00000001800B7A1C: movzx   edi, byte ptr [r10+r9]
 * 00000001800B7A21: movzx   r8d, dl
 * 00000001800B7A25: movzx   ecx, r15b
 * 00000001800B7A29: sub     ecx, edi
 * 00000001800B7A2B: imul    ecx, r8d
 * 00000001800B7A2F: mov     eax, 80808081h
 * 00000001800B7A34: imul    ecx
 * 00000001800B7A36: add     edx, ecx
 * 00000001800B7A38: sar     edx, 7
 * 00000001800B7A3B: mov     eax, edx
 * 00000001800B7A3D: shr     eax, 1Fh
 * 00000001800B7A40: add     edx, eax
 * 00000001800B7A42: add     dl, dil
 * 00000001800B7A45: mov     [r10+r9], dl
 * 00000001800B7A49: movzx   edi, byte ptr [r10+r9-1]
 * 00000001800B7A4F: movzx   ecx, byte ptr [rbp+1180h+var_1200+1]
 * 00000001800B7A53: sub     ecx, edi
 * 00000001800B7A55: imul    ecx, r8d
 * 00000001800B7A59: mov     eax, 80808081h
 * 00000001800B7A5E: imul    ecx
 * 00000001800B7A60: add     edx, ecx
 * 00000001800B7A62: sar     edx, 7
 * 00000001800B7A65: mov     eax, edx
 * 00000001800B7A67: shr     eax, 1Fh
 * 00000001800B7A6A: add     edx, eax
 * 00000001800B7A6C: add     dl, dil
 * 00000001800B7A6F: mov     [r10+r9-1], dl
 * 00000001800B7A74: movzx   edi, byte ptr [r10+r9-2]
 * 00000001800B7A7A: movzx   ecx, byte ptr [rbp+1180h+var_1200+2]
 * 00000001800B7A7E: sub     ecx, edi
 * 00000001800B7A80: imul    ecx, r8d
 * 00000001800B7A84: mov     eax, 80808081h
 * 00000001800B7A89: imul    ecx
 * 00000001800B7A8B: add     edx, ecx
 * 00000001800B7A8D: sar     edx, 7
 * 00000001800B7A90: mov     eax, edx
 * 00000001800B7A92: shr     eax, 1Fh
 * 00000001800B7A95: add     edx, eax
 * 00000001800B7A97: add     dl, dil
 * 00000001800B7A9A: mov     [r10+r9-2], dl
 * 00000001800B7A9F: movzx   edi, byte ptr [r10+r9+1]
 * 00000001800B7AA5: mov     ecx, 0FFh
 * 00000001800B7AAA: sub     ecx, edi
 * 00000001800B7AAC: imul    ecx, r8d
 * 00000001800B7AB0: mov     eax, 80808081h
 * 00000001800B7AB5: imul    ecx
 * 00000001800B7AB7: add     edx, ecx
 * 00000001800B7AB9: sar     edx, 7
 * 00000001800B7ABC: mov     eax, edx
 * 00000001800B7ABE: shr     eax, 1Fh
 * 00000001800B7AC1: add     edx, eax
 * 00000001800B7AC3: add     dl, dil
 * 00000001800B7AC6: mov     [r10+r9+1], dl
 * 00000001800B7ACB: mov     r8d, dword ptr [rsp+1280h+var_1218]
 * 00000001800B7AD0: add     r9, 4
 * 00000001800B7AD4: inc     r8d
 * 00000001800B7AD7: mov     dword ptr [rsp+1280h+var_1218], r8d
 * 00000001800B7ADC: cmp     r8d, esi
 * 00000001800B7ADF: jl      loc_1800B79FC
 * 00000001800B7AE5: mov     rdi, [rbp+1180h+var_11A8]
 * 00000001800B7AE9: add     rdi, rbx
 * 00000001800B7AEC: mov     [rbp+1180h+var_11A8], rdi
 * 00000001800B7AF0: mov     rax, [rbp+1180h+var_11B8]
 * 00000001800B7AF4: add     rax, r13
 * 00000001800B7AF7: mov     [rbp+1180h+var_11B8], rax
 * 00000001800B7AFB: mov     ecx, dword ptr [rbp+1180h+var_11F8]
 * 00000001800B7AFE: inc     ecx
 * 00000001800B7B00: mov     dword ptr [rbp+1180h+var_11F8], ecx
 * 00000001800B7B03: cmp     ecx, r11d
 * 00000001800B7B06: jl      loc_1800B79EA
 * 00000001800B7B0C: mov     rbx, 0C81ECB17B1B54A58h
 * 00000001800B7B16: mov     rsi, 7F1137FAB69605Eh
 * 00000001800B7B20: mov     r15, [rbp+1180h+var_1128]
 * 00000001800B7B24: mov     r12, [rbp+1180h+var_1168]
 * 00000001800B7B28: mov     r13d, [rbp+1180h+var_10C8]
 * 00000001800B7B2F: mov     rdi, [rbp+1180h+lpModuleName]
 * 00000001800B7B33: mov     r10, 0B2E10636105E9A70h
 * 00000001800B7B3D: mov     rcx, [rbp+1180h+var_11E0]
 * 00000001800B7B41: mov     rax, cs:off_1801C0038
 * 00000001800B7B48: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B7B4E: mov     rax, [rsp+1280h+var_1220]
 * 00000001800B7B53: test    rax, rax
 * 00000001800B7B56: jz      short loc_1800B7B98
 * 00000001800B7B58: mov     r10, 0E62CA6FE305B8A70h
 * 00000001800B7B62: mov     rdx, rax
 * 00000001800B7B65: mov     rcx, rdi
 * 00000001800B7B68: mov     rax, cs:off_1801C0078
 * 00000001800B7B6F: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B7B75: mov     r10, 0C5540FA17E509B70h
 * 00000001800B7B7F: mov     rcx, rdi
 * 00000001800B7B82: mov     rax, cs:off_1801C0030
 * 00000001800B7B89: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B7B8F: mov     rdi, [rbp+1180h+var_1188]
 * 00000001800B7B93: jmp     loc_1800B8B61
 * 00000001800B7B98: mov     r10, 0C5540FA17E509B70h
 * 00000001800B7BA2: mov     rcx, rdi
 * 00000001800B7BA5: mov     rax, cs:off_1801C0030
 * 00000001800B7BAC: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B7BB2: cmp     dword ptr [rbp+1180h+var_11B0], 0
 * 00000001800B7BB6: jl      loc_1800B8BDD
 * 00000001800B7BBC: mov     rdi, [rbp+1180h+var_1188]
 * 00000001800B7BC0: jmp     loc_1800B8B61
 * 00000001800B7BC5: cmp     [rbp+1180h+var_85C], 0
 * 00000001800B7BCC: jnz     short loc_1800B7BD5
 * 00000001800B7BCE: cmp     edi, 1
 * 00000001800B7BD1: mov     al, 0C0h
 * 00000001800B7BD3: jnz     short loc_1800B7BD7
 * 00000001800B7BD5: mov     al, 0FFh
 * 00000001800B7BD7: mov     byte ptr [rsp+1280h+var_1218], 0
 * 00000001800B7BDC: mov     byte ptr [rsp+1280h+var_1218+1], 0
 * 00000001800B7BE1: mov     byte ptr [rsp+1280h+var_1218+2], al
 * 00000001800B7BE5: mov     byte ptr [rsp+1280h+var_1218+3], 1
 * 00000001800B7BEA: xor     eax, eax
 * 00000001800B7BEC: mov     dword ptr [rbp+1180h+var_DB8], eax
 * 00000001800B7BF2: mov     dword ptr [rbp+1180h+var_DB8+4], eax
 * 00000001800B7BF8: mov     dword ptr [rbp+1180h+var_DA8], eax
 * 00000001800B7BFE: mov     r10, 0B2ED17FC1CDCD370h
 * 00000001800B7C08: mov     rcx, [rsp+1280h+var_1208]
 * 00000001800B7C0D: mov     rax, cs:off_1801C0010
 * 00000001800B7C14: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B7C1A: mov     [rbp+1180h+var_1188], rax
 * 00000001800B7C1E: test    rax, rax
 * 00000001800B7C21: jnz     short loc_1800B7C34
 * 00000001800B7C23: call    cs:__imp_GetLastError
 * 00000001800B7C2A: nop     dword ptr [rax+rax+00h]
 * 00000001800B7C2F: jmp     loc_1800B8BDD
 * 00000001800B7C34: cmp     edi, 1
 * 00000001800B7C37: jnz     loc_1800B7D0B
 * 00000001800B7C3D: mov     edi, dword ptr [rbp+1180h+var_824+8]
 * 00000001800B7C43: mov     eax, edi
 * 00000001800B7C45: mov     r9d, dword ptr [rbp+1180h+var_824]
 * 00000001800B7C4C: sub     eax, r9d
 * 00000001800B7C4F: mov     edx, dword ptr [rbp+1180h+var_814+8]
 * 00000001800B7C55: mov     ecx, edx
 * 00000001800B7C57: mov     r10d, dword ptr [rbp+1180h+var_814]
 * 00000001800B7C5E: sub     ecx, r10d
 * 00000001800B7C61: cmp     ecx, eax
 * 00000001800B7C63: cmovle  ecx, eax
 * 00000001800B7C66: mov     dword ptr [rbp+1180h+var_11C0], ecx
 * 00000001800B7C69: mov     r8d, dword ptr [rbp+1180h+var_814+0Ch]
 * 00000001800B7C70: mov     r11d, dword ptr [rbp+1180h+var_824+4]
 * 00000001800B7C77: sub     r8d, r11d
 * 00000001800B7C7A: mov     [rbp+1180h+var_11D8], r8d
 * 00000001800B7C7E: xor     eax, eax
 * 00000001800B7C80: mov     dword ptr [rbp+1180h+var_11B0], eax
 * 00000001800B7C83: cmp     [rbp+1180h+var_860], eax
 * 00000001800B7C89: jz      short loc_1800B7CB6
 * 00000001800B7C8B: mov     r8d, ecx
 * 00000001800B7C8E: sub     r8d, edi
 * 00000001800B7C91: add     r8d, r9d
 * 00000001800B7C94: mov     dword ptr [rbp+1180h+var_DB8], r8d
 * 00000001800B7C9B: mov     eax, ecx
 * 00000001800B7C9D: sub     eax, edx
 * 00000001800B7C9F: add     eax, r10d
 * 00000001800B7CA2: mov     dword ptr [rbp+1180h+var_DA8], eax
 * 00000001800B7CA8: mov     [rbp+1180h+var_11E8], r8d
 * 00000001800B7CAC: mov     dword ptr [rbp+1180h+var_11B0], eax
 * 00000001800B7CAF: mov     r8d, [rbp+1180h+var_11D8]
 * 00000001800B7CB3: mov     eax, [rbp+1180h+var_11E8]
 * 00000001800B7CB6: sub     edi, r9d
 * 00000001800B7CB9: add     edi, eax
 * 00000001800B7CBB: mov     dword ptr [rbp+1180h+var_DB8+8], edi
 * 00000001800B7CC1: mov     eax, dword ptr [rbp+1180h+var_824+0Ch]
 * 00000001800B7CC7: sub     eax, r11d
 * 00000001800B7CCA: mov     [rbp+1180h+var_11E8], eax
 * 00000001800B7CCD: mov     dword ptr [rbp+1180h+var_DB8+0Ch], eax
 * 00000001800B7CD3: sub     edx, r10d
 * 00000001800B7CD6: add     edx, dword ptr [rbp+1180h+var_11B0]
 * 00000001800B7CD9: mov     dword ptr [rbp+1180h+var_11B0], edx
 * 00000001800B7CDC: mov     dword ptr [rbp+1180h+var_DA8+8], edx
 * 00000001800B7CE2: mov     edx, dword ptr [rbp+1180h+var_814+4]
 * 00000001800B7CE8: sub     edx, r11d
 * 00000001800B7CEB: mov     [rbp+1180h+var_1138], edx
 * 00000001800B7CEE: mov     dword ptr [rbp+1180h+var_DA8+4], edx
 * 00000001800B7CF4: sub     edx, dword ptr [rbp+1180h+var_814+4]
 * 00000001800B7CFA: add     edx, dword ptr [rbp+1180h+var_814+0Ch]
 * 00000001800B7D00: mov     dword ptr [rbp+1180h+psz], edx
 * 00000001800B7D03: mov     dword ptr [rbp+1180h+var_DA8+0Ch], edx
 * 00000001800B7D09: jmp     short loc_1800B7D65
 * 00000001800B7D0B: mov     ecx, dword ptr [rbp+1180h+var_7C0+8]
 * 00000001800B7D11: mov     dword ptr [rbp+1180h+var_11C0], ecx
 * 00000001800B7D14: mov     r8d, dword ptr [rbp+1180h+var_7C0+0Ch]
 * 00000001800B7D1B: mov     [rbp+1180h+var_11D8], r8d
 * 00000001800B7D1F: movups  xmm0, [rbp+1180h+var_824]
 * 00000001800B7D26: movups  [rbp+1180h+var_DB8], xmm0
 * 00000001800B7D2D: movups  xmm1, [rbp+1180h+var_814]
 * 00000001800B7D34: movups  [rbp+1180h+var_DA8], xmm1
 * 00000001800B7D3B: mov     eax, dword ptr [rbp+1180h+var_DB8+0Ch]
 * 00000001800B7D41: mov     [rbp+1180h+var_11E8], eax
 * 00000001800B7D44: mov     edi, dword ptr [rbp+1180h+var_DB8+8]
 * 00000001800B7D4A: mov     eax, dword ptr [rbp+1180h+var_DA8+0Ch]
 * 00000001800B7D50: mov     dword ptr [rbp+1180h+psz], eax
 * 00000001800B7D53: mov     eax, dword ptr [rbp+1180h+var_DA8+8]
 * 00000001800B7D59: mov     dword ptr [rbp+1180h+var_11B0], eax
 * 00000001800B7D5C: mov     eax, dword ptr [rbp+1180h+var_DA8+4]
 * 00000001800B7D62: mov     [rbp+1180h+var_1138], eax
 * 00000001800B7D65: xor     edx, edx
 * 00000001800B7D67: mov     [rbp+1180h+var_E80], rdx
 * 00000001800B7D6E: xorps   xmm0, xmm0
 * 00000001800B7D71: movdqu  [rbp+1180h+var_6F0], xmm0
 * 00000001800B7D79: mov     [rbp+1180h+var_6E0], rdx
 * 00000001800B7D80: mov     [rbp+1180h+var_6D8], edx
 * 00000001800B7D86: mov     dword ptr [rbp+1180h+var_700], 28h ; '('
 * 00000001800B7D90: mov     dword ptr [rbp+1180h+var_700+4], ecx
 * 00000001800B7D96: neg     r8d
 * 00000001800B7D99: mov     dword ptr [rbp+1180h+var_700+8], r8d
 * 00000001800B7DA0: mov     eax, 1
 * 00000001800B7DA5: mov     word ptr [rbp+1180h+var_700+0Ch], ax
 * 00000001800B7DAC: mov     eax, 20h ; ' '
 * 00000001800B7DB1: mov     word ptr [rbp+1180h+var_700+0Eh], ax
 * 00000001800B7DB8: mov     r10, 0CF05A77938531370h
 * 00000001800B7DC2: mov     dword ptr [rsp+1280h+var_1258], edx
 * 00000001800B7DC6: mov     [rsp+1280h+var_1260], rdx
 * 00000001800B7DCB: lea     r9, [rbp+1180h+var_E80]
 * 00000001800B7DD2: xor     r8d, r8d
 * 00000001800B7DD5: lea     rdx, [rbp+1180h+var_700]
 * 00000001800B7DDC: mov     rcx, [rbp+1180h+var_1188]
 * 00000001800B7DE0: mov     rax, cs:off_1801C0018
 * 00000001800B7DE7: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B7DED: mov     [rbp+1180h+var_1178], rax
 * 00000001800B7DF1: test    rax, rax
 * 00000001800B7DF4: jnz     short loc_1800B7E0B
 * 00000001800B7DF6: call    cs:__imp_GetLastError
 * 00000001800B7DFD: nop     dword ptr [rax+rax+00h]
 * 00000001800B7E02: mov     rdi, [rbp+1180h+var_1188]
 * 00000001800B7E06: jmp     loc_1800B8BC3
 * 00000001800B7E0B: mov     r10, 0E62CA6FE305B8A70h
 * 00000001800B7E15: mov     rdx, rax
 * 00000001800B7E18: mov     rcx, [rbp+1180h+var_1188]
 * 00000001800B7E1C: mov     rax, cs:off_1801C0078
 * 00000001800B7E23: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B7E29: cmp     dword ptr [rbp+1180h+var_1200], 1
 * 00000001800B7E2D: jnz     short loc_1800B7E7A
 * 00000001800B7E2F: mov     r8, [rbp+1180h+Size]
 * 00000001800B7E33: test    r8, r8
 * 00000001800B7E36: jz      short loc_1800B7E7A
 * 00000001800B7E38: xor     eax, eax
 * 00000001800B7E3A: mov     [rbp+1180h+var_790], eax
 * 00000001800B7E40: mov     [rbp+1180h+var_78C], eax
 * 00000001800B7E46: mov     eax, dword ptr [rbp+1180h+var_11C0]
 * 00000001800B7E49: mov     [rbp+1180h+var_788], eax
 * 00000001800B7E4F: mov     eax, [rbp+1180h+var_11D8]
 * 00000001800B7E52: mov     [rbp+1180h+var_784], eax
 * 00000001800B7E58: mov     r10, 94F1065E3ADE9370h
 * 00000001800B7E62: lea     rdx, [rbp+1180h+var_790]
 * 00000001800B7E69: mov     rcx, [rbp+1180h+var_1188]
 * 00000001800B7E6D: mov     rax, cs:off_1801C00E8
 * 00000001800B7E74: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B7E7A: mov     eax, [rbp+1180h+var_85C]
 * 00000001800B7E80: mov     dword ptr [rbp+1180h+var_1180], eax
 * 00000001800B7E83: mov     rax, [rbp+1180h+var_840]
 * 00000001800B7E8A: mov     [rsp+1280h+var_1220], rax
 * 00000001800B7E8F: mov     rax, [rbp+1180h+var_858]
 * 00000001800B7E96: mov     [rbp+1180h+var_11A8], rax
 * 00000001800B7E9A: xor     edx, edx; Val
 * 00000001800B7E9C: lea     r8d, [rdx+68h]; Size
 * 00000001800B7EA0: lea     rcx, [rbp+1180h+var_9B0]; void *
 * 00000001800B7EA7: call    memset_0
 * 00000001800B7EAC: xor     edx, edx; Val
 * 00000001800B7EAE: lea     r8d, [rdx+68h]; Size
 * 00000001800B7EB2: lea     rcx, [rbp+1180h+var_C50]; void *
 * 00000001800B7EB9: call    memset_0
 * 00000001800B7EBE: xor     eax, eax
 * 00000001800B7EC0: mov     [rbp+1180h+var_11B8], rax
 * 00000001800B7EC4: mov     dword ptr [rbp+1180h+var_11C8], eax
 * 00000001800B7EC7: mov     dword ptr [rbp+1180h+var_11D0], eax
 * 00000001800B7ECA: xorps   xmm0, xmm0
 * 00000001800B7ECD: movups  [rbp+1180h+var_670], xmm0
 * 00000001800B7ED4: movups  [rbp+1180h+var_660], xmm0
 * 00000001800B7EDB: mov     [rbp+1180h+var_650], rax
 * 00000001800B7EE2: mov     [rbp+1180h+var_648], eax
 * 00000001800B7EE8: movups  [rbp+1180h+var_7D0], xmm0
 * 00000001800B7EEF: cmp     [rbp+1180h+var_11A8], rax
 * 00000001800B7EF3: jz      loc_1800B8B9F
 * 00000001800B7EF9: mov     r10, 0EA2596A652D04370h
 * 00000001800B7F03: lea     edx, [rax+7]
 * 00000001800B7F06: mov     rcx, [rbp+1180h+var_1188]
 * 00000001800B7F0A: mov     rax, cs:off_1801C0050
 * 00000001800B7F11: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B7F17: test    rax, rax
 * 00000001800B7F1A: jz      loc_1800B8B93
 * 00000001800B7F20: mov     r10, 0EEC037B63C533370h
 * 00000001800B7F2A: lea     r8, [rbp+1180h+var_9B0]
 * 00000001800B7F31: mov     edx, 68h ; 'h'
 * 00000001800B7F36: mov     rcx, rax
 * 00000001800B7F39: mov     rax, cs:off_1801C0068
 * 00000001800B7F40: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B7F46: test    eax, eax
 * 00000001800B7F48: jz      short loc_1800B7F67
 * 00000001800B7F4A: mov     rax, [rbp+1180h+var_998]
 * 00000001800B7F51: mov     [rbp+1180h+var_11B8], rax
 * 00000001800B7F55: mov     eax, [rbp+1180h+var_9AC]
 * 00000001800B7F5B: mov     dword ptr [rbp+1180h+var_11C8], eax
 * 00000001800B7F5E: mov     eax, [rbp+1180h+var_9A8]
 * 00000001800B7F64: mov     dword ptr [rbp+1180h+var_11D0], eax
 * 00000001800B7F67: mov     r10, 0B2ED17FC1CDCD370h
 * 00000001800B7F71: mov     rcx, [rbp+1180h+var_1188]
 * 00000001800B7F75: mov     rax, cs:off_1801C0010
 * 00000001800B7F7C: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B7F82: mov     rcx, rax
 * 00000001800B7F85: mov     [rbp+1180h+lpModuleName], rax
 * 00000001800B7F89: test    rax, rax
 * 00000001800B7F8C: jz      loc_1800B8B93
 * 00000001800B7F92: mov     eax, [rbp+1180h+var_11E8]
 * 00000001800B7F95: sub     eax, dword ptr [rbp+1180h+var_DB8+4]
 * 00000001800B7F9B: mov     [rbp+1180h+var_11E8], eax
 * 00000001800B7F9E: sub     edi, dword ptr [rbp+1180h+var_DB8]
 * 00000001800B7FA4: xor     edx, edx
 * 00000001800B7FA6: mov     [rbp+1180h+var_E78], rdx
 * 00000001800B7FAD: mov     dword ptr [rsp+1280h+lpMem], edx
 * 00000001800B7FB1: xorps   xmm0, xmm0
 * 00000001800B7FB4: movdqu  [rbp+1180h+var_660], xmm0
 * 00000001800B7FBC: mov     [rbp+1180h+var_650], rdx
 * 00000001800B7FC3: mov     [rbp+1180h+var_648], edx
 * 00000001800B7FC9: mov     dword ptr [rbp+1180h+var_670], 28h ; '('
 * 00000001800B7FD3: mov     dword ptr [rbp+1180h+var_670+4], edi
 * 00000001800B7FD9: neg     eax
 * 00000001800B7FDB: mov     dword ptr [rbp+1180h+var_670+8], eax
 * 00000001800B7FE1: mov     eax, 1
 * 00000001800B7FE6: mov     word ptr [rbp+1180h+var_670+0Ch], ax
 * 00000001800B7FED: mov     eax, 20h ; ' '
 * 00000001800B7FF2: mov     word ptr [rbp+1180h+var_670+0Eh], ax
 * 00000001800B7FF9: mov     r10, 0CF05A77938531370h
 * 00000001800B8003: mov     dword ptr [rsp+1280h+var_1258], edx
 * 00000001800B8007: mov     [rsp+1280h+var_1260], rdx
 * 00000001800B800C: lea     r9, [rbp+1180h+var_E78]
 * 00000001800B8013: xor     r8d, r8d
 * 00000001800B8016: lea     rdx, [rbp+1180h+var_670]
 * 00000001800B801D: mov     rax, cs:off_1801C0018
 * 00000001800B8024: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B802A: mov     [rbp+1180h+var_11E0], rax
 * 00000001800B802E: test    rax, rax
 * 00000001800B8031: jnz     loc_1800B8162
 * 00000001800B8037: call    cs:__imp_GetLastError
 * 00000001800B803E: nop     dword ptr [rax+rax+00h]
 * 00000001800B8043: mov     dword ptr [rsp+1280h+lpMem], eax
 * 00000001800B8047: test    eax, eax
 * 00000001800B8049: jle     short loc_1800B8059
 * 00000001800B804B: movzx   eax, ax
 * 00000001800B804E: or      eax, 80070000h
 * 00000001800B8053: mov     dword ptr [rsp+1280h+lpMem], eax
 * 00000001800B8057: test    eax, eax
 * 00000001800B8059: jns     loc_1800B8142
 * 00000001800B805F: mov     rdi, [rbp+1180h+lpModuleName]
 * 00000001800B8063: mov     r10, 0C5540FA17E509B70h
 * 00000001800B806D: mov     rcx, rdi
 * 00000001800B8070: mov     rax, cs:off_1801C0030
 * 00000001800B8077: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B807D: cmp     dword ptr [rsp+1280h+lpMem], 0
 * 00000001800B8082: jl      loc_1800B8B9F
 * 00000001800B8088: mov     eax, [rbp+1180h+var_85C]
 * 00000001800B808E: mov     dword ptr [rsp+1280h+lpMem], eax
 * 00000001800B8092: mov     rax, [rbp+1180h+var_838]
 * 00000001800B8099: mov     [rsp+1280h+var_1220], rax
 * 00000001800B809E: mov     rdi, [rbp+1180h+var_850]
 * 00000001800B80A5: mov     [rbp+1180h+var_11A8], rdi
 * 00000001800B80A9: xor     edx, edx; Val
 * 00000001800B80AB: lea     r8d, [rdx+68h]; Size
 * 00000001800B80AF: lea     rcx, [rbp+1180h+var_940]; void *
 * 00000001800B80B6: call    memset_0
 * 00000001800B80BB: xor     edx, edx; Val
 * 00000001800B80BD: lea     r8d, [rdx+68h]; Size
 * 00000001800B80C1: lea     rcx, [rbp+1180h+var_8D0]; void *
 * 00000001800B80C8: call    memset_0
 * 00000001800B80CD: xor     eax, eax
 * 00000001800B80CF: mov     [rbp+1180h+var_11B8], rax
 * 00000001800B80D3: mov     dword ptr [rbp+1180h+var_11D0], eax
 * 00000001800B80D6: mov     dword ptr [rbp+1180h+var_11C8], eax
 * 00000001800B80D9: xorps   xmm0, xmm0
 * 00000001800B80DC: movups  [rbp+1180h+var_640], xmm0
 * 00000001800B80E3: movups  [rbp+1180h+var_630], xmm0
 * 00000001800B80EA: mov     [rbp+1180h+var_620], rax
 * 00000001800B80F1: mov     [rbp+1180h+var_618], eax
 * 00000001800B80F7: movups  [rbp+1180h+var_780], xmm0
 * 00000001800B80FE: test    rdi, rdi
 * 00000001800B8101: jz      loc_1800B8B9F
 * 00000001800B8107: mov     r10, 0EA2596A652D04370h
 * 00000001800B8111: lea     edx, [rax+7]
 * 00000001800B8114: mov     rdi, [rbp+1180h+var_1188]
 * 00000001800B8118: mov     rcx, rdi
 * 00000001800B811B: mov     rax, cs:off_1801C0050
 * 00000001800B8122: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B8128: test    rax, rax
 * 00000001800B812B: jnz     loc_1800B854D
 * 00000001800B8131: call    cs:__imp_GetLastError
 * 00000001800B8138: nop     dword ptr [rax+rax+00h]
 * 00000001800B813D: jmp     loc_1800B8BA3
 * 00000001800B8142: mov     r10, 0C5540FA17E509B70h
 * 00000001800B814C: mov     rcx, [rbp+1180h+lpModuleName]
 * 00000001800B8150: mov     rax, cs:off_1801C0030
 * 00000001800B8157: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B815D: jmp     loc_1800B8B9F
 * 00000001800B8162: mov     r10, 0EEC037B63C533370h
 * 00000001800B816C: lea     r8, [rbp+1180h+var_C50]
 * 00000001800B8173: mov     edx, 68h ; 'h'
 * 00000001800B8178: mov     rcx, rax
 * 00000001800B817B: mov     rax, cs:off_1801C0068
 * 00000001800B8182: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B8188: xor     ecx, ecx
 * 00000001800B818A: test    eax, eax
 * 00000001800B818C: cmovnz  rcx, [rbp+1180h+var_C38]
 * 00000001800B8194: mov     [rbp+1180h+var_11A0], rcx
 * 00000001800B8198: mov     dword ptr [rbp+1180h+var_7D0+8], edi
 * 00000001800B819E: mov     eax, [rbp+1180h+var_11E8]
 * 00000001800B81A1: mov     dword ptr [rbp+1180h+var_7D0+0Ch], eax
 * 00000001800B81A7: mov     r10, 0E62CA6FE305B8A70h
 * 00000001800B81B1: mov     rdx, [rbp+1180h+var_11E0]
 * 00000001800B81B5: mov     rdi, [rbp+1180h+lpModuleName]
 * 00000001800B81B9: mov     rcx, rdi
 * 00000001800B81BC: mov     rax, cs:off_1801C0078
 * 00000001800B81C3: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B81C9: mov     r10, 0C0B816137ADF0070h
 * 00000001800B81D3: mov     edx, 1
 * 00000001800B81D8: mov     rcx, rdi
 * 00000001800B81DB: mov     rax, cs:off_1801C0080
 * 00000001800B81E2: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B81E8: mov     r10, 0E62CA6FE305B8A70h
 * 00000001800B81F2: mov     rdx, [rsp+1280h+var_1220]
 * 00000001800B81F7: mov     rcx, rdi
 * 00000001800B81FA: mov     rax, cs:off_1801C0078
 * 00000001800B8201: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B8207: mov     [rsp+1280h+var_1220], rax
 * 00000001800B820C: mov     rdi, cs:off_1801C00E8
 * 00000001800B8213: mov     r10, 0FD20BEF77ED52170h
 * 00000001800B821D: xor     ecx, ecx
 * 00000001800B821F: mov     rax, cs:off_1801C0070
 * 00000001800B8226: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B822C: mov     r8, rax
 * 00000001800B822F: mov     r10, 94F1065E3ADE9370h
 * 00000001800B8239: lea     rdx, [rbp+1180h+var_7D0]
 * 00000001800B8240: mov     rcx, [rbp+1180h+lpModuleName]
 * 00000001800B8244: mov     rax, rdi
 * 00000001800B8247: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B824D: mov     r10, 0FA2817DF7AD26370h
 * 00000001800B8257: xor     eax, eax
 * 00000001800B8259: mov     [rsp+1280h+var_1258], rax
 * 00000001800B825E: mov     eax, dword ptr [rbp+1180h+var_11F8]
 * 00000001800B8261: mov     dword ptr [rsp+1280h+var_1260], eax
 * 00000001800B8265: lea     r9, [rbp+1180h+var_7D0]
 * 00000001800B826C: mov     r8d, 0FFFFFFFFh
 * 00000001800B8272: mov     rdx, [rbp+1180h+var_11A8]
 * 00000001800B8276: mov     rdi, [rbp+1180h+lpModuleName]
 * 00000001800B827A: mov     rcx, rdi
 * 00000001800B827D: mov     rax, cs:off_1801C00D8
 * 00000001800B8284: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B828A: cmp     dword ptr [rbp+1180h+var_1200], 1
 * 00000001800B828E: jnz     short loc_1800B82C0
 * 00000001800B8290: cmp     dword ptr [rbp+1180h+var_1180], 0
 * 00000001800B8294: jz      short loc_1800B82B7
 * 00000001800B8296: mov     r10, 8B0406AD5454F070h
 * 00000001800B82A0: mov     ecx, 8
 * 00000001800B82A5: mov     rax, cs:off_1801C0118
 * 00000001800B82AC: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B82B2: mov     dword ptr [rbp+1180h+var_1180], eax
 * 00000001800B82B5: jmp     short loc_1800B82C7
 * 00000001800B82B7: mov     dword ptr [rbp+1180h+var_1180], 0FFFFFFh
 * 00000001800B82BE: jmp     short loc_1800B82C7
 * 00000001800B82C0: mov     dword ptr [rbp+1180h+var_1180], 0FFA8A8A8h
 * 00000001800B82C7: mov     eax, dword ptr [rbp+1180h+var_DB8]
 * 00000001800B82CD: mov     edx, eax
 * 00000001800B82CF: neg     edx
 * 00000001800B82D1: test    eax, eax
 * 00000001800B82D3: mov     ecx, 0
 * 00000001800B82D8: cmovns  edx, ecx
 * 00000001800B82DB: mov     r9d, ecx
 * 00000001800B82DE: cmovns  r9d, eax
 * 00000001800B82E2: mov     eax, dword ptr [rbp+1180h+var_DB8+4]
 * 00000001800B82E8: mov     r8d, eax
 * 00000001800B82EB: neg     r8d
 * 00000001800B82EE: test    eax, eax
 * 00000001800B82F0: cmovns  r8d, ecx
 * 00000001800B82F4: mov     r10d, ecx
 * 00000001800B82F7: cmovns  r10d, eax
 * 00000001800B82FB: mov     ecx, dword ptr [rbp+1180h+var_7D0+8]
 * 00000001800B8301: sub     ecx, edx
 * 00000001800B8303: mov     eax, dword ptr [rbp+1180h+var_11C8]
 * 00000001800B8306: sub     eax, r9d
 * 00000001800B8309: cmp     ecx, eax
 * 00000001800B830B: cmovge  ecx, eax
 * 00000001800B830E: mov     [rbp+1180h+var_11E8], ecx
 * 00000001800B8311: mov     r11d, dword ptr [rbp+1180h+var_7D0+0Ch]
 * 00000001800B8318: sub     r11d, r8d
 * 00000001800B831B: mov     eax, dword ptr [rbp+1180h+var_11D0]
 * 00000001800B831E: sub     eax, r10d
 * 00000001800B8321: cmp     r11d, eax
 * 00000001800B8324: cmovge  r11d, eax
 * 00000001800B8328: test    ecx, ecx
 * 00000001800B832A: jle     loc_1800B84E8
 * 00000001800B8330: test    r11d, r11d
 * 00000001800B8333: jle     loc_1800B84E8
 * 00000001800B8339: movsxd  rbx, dword ptr [rbp+1180h+var_7D0+8]
 * 00000001800B8340: mov     eax, ebx
 * 00000001800B8342: imul    eax, r8d
 * 00000001800B8346: movsxd  rcx, eax
 * 00000001800B8349: movsxd  rax, edx
 * 00000001800B834C: add     rcx, rax
 * 00000001800B834F: mov     rax, [rbp+1180h+var_11A0]
 * 00000001800B8353: lea     rdi, [rax+rcx*4]
 * 00000001800B8357: mov     [rbp+1180h+var_11A8], rdi
 * 00000001800B835B: movsxd  rdx, dword ptr [rbp+1180h+var_11C8]
 * 00000001800B835F: mov     eax, edx
 * 00000001800B8361: imul    eax, r10d
 * 00000001800B8365: movsxd  rcx, eax
 * 00000001800B8368: movsxd  rax, r9d
 * 00000001800B836B: add     rcx, rax
 * 00000001800B836E: mov     rax, [rbp+1180h+var_11B8]
 * 00000001800B8372: lea     rax, [rax+rcx*4]
 * 00000001800B8376: mov     [rbp+1180h+var_11B8], rax
 * 00000001800B837A: xor     r15d, r15d
 * 00000001800B837D: mov     dword ptr [rbp+1180h+var_11D0], r15d
 * 00000001800B8381: mov     rcx, rbx
 * 00000001800B8384: shl     rcx, 2
 * 00000001800B8388: mov     [rbp+1180h+var_11A0], rcx
 * 00000001800B838C: mov     rcx, rdx
 * 00000001800B838F: shl     rcx, 2
 * 00000001800B8393: mov     esi, [rbp+1180h+var_11E8]
 * 00000001800B8396: mov     ebx, dword ptr [rbp+1180h+var_1180]
 * 00000001800B8399: mov     r12, [rbp+1180h+var_11A0]
 * 00000001800B839D: mov     r13, rcx
 * 00000001800B83A0: mov     r8d, r15d
 * 00000001800B83A3: mov     dword ptr [rbp+1180h+var_11C8], r15d
 * 00000001800B83A7: lea     r9, [rdi+2]
 * 00000001800B83AB: mov     r10, rax
 * 00000001800B83AE: sub     r10, rdi
 * 00000001800B83B1: movzx   ecx, byte ptr [r9-1]
 * 00000001800B83B6: movzx   eax, byte ptr [r9-2]
 * 00000001800B83BB: lea     edx, [rax+rcx*2]
 * 00000001800B83BE: movzx   eax, byte ptr [r9]
 * 00000001800B83C2: add     edx, eax
 * 00000001800B83C4: shr     edx, 2
 * 00000001800B83C7: not     dl
 * 00000001800B83C9: test    dl, dl
 * 00000001800B83CB: jz      loc_1800B8483
 * 00000001800B83D1: movzx   edi, byte ptr [r10+r9]
 * 00000001800B83D6: movzx   r8d, dl
 * 00000001800B83DA: movzx   ecx, bl
 * 00000001800B83DD: sub     ecx, edi
 * 00000001800B83DF: imul    ecx, r8d
 * 00000001800B83E3: mov     eax, 80808081h
 * 00000001800B83E8: imul    ecx
 * 00000001800B83EA: add     edx, ecx
 * 00000001800B83EC: sar     edx, 7
 * 00000001800B83EF: mov     eax, edx
 * 00000001800B83F1: shr     eax, 1Fh
 * 00000001800B83F4: add     edx, eax
 * 00000001800B83F6: add     dl, dil
 * 00000001800B83F9: mov     [r10+r9], dl
 * 00000001800B83FD: movzx   edi, byte ptr [r10+r9-1]
 * 00000001800B8403: movzx   ecx, byte ptr [rbp+1180h+var_1180+1]
 * 00000001800B8407: sub     ecx, edi
 * 00000001800B8409: imul    ecx, r8d
 * 00000001800B840D: mov     eax, 80808081h
 * 00000001800B8412: imul    ecx
 * 00000001800B8414: add     edx, ecx
 * 00000001800B8416: sar     edx, 7
 * 00000001800B8419: mov     eax, edx
 * 00000001800B841B: shr     eax, 1Fh
 * 00000001800B841E: add     edx, eax
 * 00000001800B8420: add     dl, dil
 * 00000001800B8423: mov     [r10+r9-1], dl
 * 00000001800B8428: movzx   edi, byte ptr [r10+r9-2]
 * 00000001800B842E: movzx   ecx, byte ptr [rbp+1180h+var_1180+2]
 * 00000001800B8432: sub     ecx, edi
 * 00000001800B8434: imul    ecx, r8d
 * 00000001800B8438: mov     eax, 80808081h
 * 00000001800B843D: imul    ecx
 * 00000001800B843F: add     edx, ecx
 * 00000001800B8441: sar     edx, 7
 * 00000001800B8444: mov     eax, edx
 * 00000001800B8446: shr     eax, 1Fh
 * 00000001800B8449: add     edx, eax
 * 00000001800B844B: add     dl, dil
 * 00000001800B844E: mov     [r10+r9-2], dl
 * 00000001800B8453: movzx   edi, byte ptr [r10+r9+1]
 * 00000001800B8459: mov     ecx, 0FFh
 * 00000001800B845E: sub     ecx, edi
 * 00000001800B8460: imul    ecx, r8d
 * 00000001800B8464: mov     eax, 80808081h
 * 00000001800B8469: imul    ecx
 * 00000001800B846B: add     edx, ecx
 * 00000001800B846D: sar     edx, 7
 * 00000001800B8470: mov     eax, edx
 * 00000001800B8472: shr     eax, 1Fh
 * 00000001800B8475: add     edx, eax
 * 00000001800B8477: add     dl, dil
 * 00000001800B847A: mov     [r10+r9+1], dl
 * 00000001800B847F: mov     r8d, dword ptr [rbp+1180h+var_11C8]
 * 00000001800B8483: add     r9, 4
 * 00000001800B8487: inc     r8d
 * 00000001800B848A: mov     dword ptr [rbp+1180h+var_11C8], r8d
 * 00000001800B848E: cmp     r8d, esi
 * 00000001800B8491: jl      loc_1800B83B1
 * 00000001800B8497: mov     rdi, [rbp+1180h+var_11A8]
 * 00000001800B849B: add     rdi, r12
 * 00000001800B849E: mov     [rbp+1180h+var_11A8], rdi
 * 00000001800B84A2: mov     rax, [rbp+1180h+var_11B8]
 * 00000001800B84A6: add     rax, r13
 * 00000001800B84A9: mov     [rbp+1180h+var_11B8], rax
 * 00000001800B84AD: mov     ecx, dword ptr [rbp+1180h+var_11D0]
 * 00000001800B84B0: inc     ecx
 * 00000001800B84B2: mov     dword ptr [rbp+1180h+var_11D0], ecx
 * 00000001800B84B5: cmp     ecx, r11d
 * 00000001800B84B8: jl      loc_1800B83A0
 * 00000001800B84BE: mov     rbx, 0C81ECB17B1B54A58h
 * 00000001800B84C8: mov     rsi, 7F1137FAB69605Eh
 * 00000001800B84D2: mov     r15, [rbp+1180h+var_1128]
 * 00000001800B84D6: lea     r12, [r15+0C0h]
 * 00000001800B84DD: mov     r13d, [rbp+1180h+var_10C8]
 * 00000001800B84E4: mov     rdi, [rbp+1180h+lpModuleName]
 * 00000001800B84E8: mov     r10, 0B2E10636105E9A70h
 * 00000001800B84F2: mov     rcx, [rbp+1180h+var_11E0]
 * 00000001800B84F6: mov     rax, cs:off_1801C0038
 * 00000001800B84FD: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B8503: mov     rax, [rsp+1280h+var_1220]
 * 00000001800B8508: test    rax, rax
 * 00000001800B850B: jz      loc_1800B8063
 * 00000001800B8511: mov     r10, 0E62CA6FE305B8A70h
 * 00000001800B851B: mov     rdx, rax
 * 00000001800B851E: mov     rcx, rdi
 * 00000001800B8521: mov     rax, cs:off_1801C0078
 * 00000001800B8528: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B852E: mov     r10, 0C5540FA17E509B70h
 * 00000001800B8538: mov     rcx, rdi
 * 00000001800B853B: mov     rax, cs:off_1801C0030
 * 00000001800B8542: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B8548: jmp     loc_1800B8088
 * 00000001800B854D: mov     r10, 0EEC037B63C533370h
 * 00000001800B8557: lea     r8, [rbp+1180h+var_940]
 * 00000001800B855E: mov     edx, 68h ; 'h'
 * 00000001800B8563: mov     rcx, rax
 * 00000001800B8566: mov     rax, cs:off_1801C0068
 * 00000001800B856D: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B8573: test    eax, eax
 * 00000001800B8575: jz      short loc_1800B8594
 * 00000001800B8577: mov     rax, [rbp+1180h+var_928]
 * 00000001800B857E: mov     [rbp+1180h+var_11B8], rax
 * 00000001800B8582: mov     eax, [rbp+1180h+var_93C]
 * 00000001800B8588: mov     dword ptr [rbp+1180h+var_11D0], eax
 * 00000001800B858B: mov     eax, [rbp+1180h+var_938]
 * 00000001800B8591: mov     dword ptr [rbp+1180h+var_11C8], eax
 * 00000001800B8594: mov     r10, 0B2ED17FC1CDCD370h
 * 00000001800B859E: mov     rcx, rdi
 * 00000001800B85A1: mov     rax, cs:off_1801C0010
 * 00000001800B85A8: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B85AE: mov     rcx, rax
 * 00000001800B85B1: mov     [rbp+1180h+lpModuleName], rax
 * 00000001800B85B5: test    rax, rax
 * 00000001800B85B8: jnz     short loc_1800B85CB
 * 00000001800B85BA: call    cs:__imp_GetLastError
 * 00000001800B85C1: nop     dword ptr [rax+rax+00h]
 * 00000001800B85C6: jmp     loc_1800B8BA3
 * 00000001800B85CB: mov     eax, dword ptr [rbp+1180h+psz]
 * 00000001800B85CE: sub     eax, [rbp+1180h+var_1138]
 * 00000001800B85D1: mov     dword ptr [rbp+1180h+psz], eax
 * 00000001800B85D4: mov     edi, dword ptr [rbp+1180h+var_11B0]
 * 00000001800B85D7: sub     edi, dword ptr [rbp+1180h+var_DA8]
 * 00000001800B85DD: xor     edx, edx
 * 00000001800B85DF: mov     [rbp+1180h+var_E70], rdx
 * 00000001800B85E6: mov     dword ptr [rbp+1180h+var_1180], edx
 * 00000001800B85E9: xorps   xmm0, xmm0
 * 00000001800B85EC: movdqu  [rbp+1180h+var_630], xmm0
 * 00000001800B85F4: mov     [rbp+1180h+var_620], rdx
 * 00000001800B85FB: mov     [rbp+1180h+var_618], edx
 * 00000001800B8601: mov     dword ptr [rbp+1180h+var_640], 28h ; '('
 * 00000001800B860B: mov     dword ptr [rbp+1180h+var_640+4], edi
 * 00000001800B8611: neg     eax
 * 00000001800B8613: mov     dword ptr [rbp+1180h+var_640+8], eax
 * 00000001800B8619: mov     eax, 1
 * 00000001800B861E: mov     word ptr [rbp+1180h+var_640+0Ch], ax
 * 00000001800B8625: mov     eax, 20h ; ' '
 * 00000001800B862A: mov     word ptr [rbp+1180h+var_640+0Eh], ax
 * 00000001800B8631: mov     r10, 0CF05A77938531370h
 * 00000001800B863B: mov     dword ptr [rsp+1280h+var_1258], edx
 * 00000001800B863F: mov     [rsp+1280h+var_1260], rdx
 * 00000001800B8644: lea     r9, [rbp+1180h+var_E70]
 * 00000001800B864B: xor     r8d, r8d
 * 00000001800B864E: lea     rdx, [rbp+1180h+var_640]
 * 00000001800B8655: mov     rax, cs:off_1801C0018
 * 00000001800B865C: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B8662: mov     [rbp+1180h+var_11E0], rax
 * 00000001800B8666: test    rax, rax
 * 00000001800B8669: jnz     loc_1800B871B
 * 00000001800B866F: call    cs:__imp_GetLastError
 * 00000001800B8676: nop     dword ptr [rax+rax+00h]
 * 00000001800B867B: mov     dword ptr [rbp+1180h+var_1180], eax
 * 00000001800B867E: test    eax, eax
 * 00000001800B8680: jle     short loc_1800B868F
 * 00000001800B8682: movzx   eax, ax
 * 00000001800B8685: or      eax, 80070000h
 * 00000001800B868A: mov     dword ptr [rbp+1180h+var_1180], eax
 * 00000001800B868D: test    eax, eax
 * 00000001800B868F: jns     loc_1800B8142
 * 00000001800B8695: mov     rdi, [rbp+1180h+lpModuleName]
 * 00000001800B8699: mov     r10, 0C5540FA17E509B70h
 * 00000001800B86A3: mov     rcx, rdi
 * 00000001800B86A6: mov     rax, cs:off_1801C0030
 * 00000001800B86AD: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B86B3: cmp     dword ptr [rbp+1180h+var_1180], 0
 * 00000001800B86B7: jl      loc_1800B8B9F
 * 00000001800B86BD: cmp     dword ptr [rbp+1180h+var_1200], 1
 * 00000001800B86C1: jnz     loc_1800B8B08
 * 00000001800B86C7: mov     r10, 0A3080F0C3650FA70h
 * 00000001800B86D1: mov     [rsp+1280h+var_1240], 0CC0020h
 * 00000001800B86D9: xor     eax, eax
 * 00000001800B86DB: mov     [rsp+1280h+var_1248], eax
 * 00000001800B86DF: mov     [rsp+1280h+var_1250], eax
 * 00000001800B86E3: mov     rdi, [rbp+1180h+var_1188]
 * 00000001800B86E7: mov     [rsp+1280h+var_1258], rdi
 * 00000001800B86EC: mov     eax, [rbp+1180h+var_11D8]
 * 00000001800B86EF: mov     dword ptr [rsp+1280h+var_1260], eax
 * 00000001800B86F3: mov     r9d, dword ptr [rbp+1180h+var_11C0]
 * 00000001800B86F7: mov     r8d, dword ptr [rbp+1180h+var_824+4]
 * 00000001800B86FE: mov     edx, dword ptr [rbp+1180h+var_824]
 * 00000001800B8704: mov     rcx, [rsp+1280h+var_1208]
 * 00000001800B8709: mov     rax, cs:off_1801C0000
 * 00000001800B8710: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B8716: jmp     loc_1800B8B61
 * 00000001800B871B: mov     r10, 0EEC037B63C533370h
 * 00000001800B8725: lea     r8, [rbp+1180h+var_8D0]
 * 00000001800B872C: mov     edx, 68h ; 'h'
 * 00000001800B8731: mov     rcx, rax
 * 00000001800B8734: mov     rax, cs:off_1801C0068
 * 00000001800B873B: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B8741: xor     ecx, ecx
 * 00000001800B8743: test    eax, eax
 * 00000001800B8745: cmovnz  rcx, [rbp+1180h+var_8B8]
 * 00000001800B874D: mov     [rbp+1180h+var_11A0], rcx
 * 00000001800B8751: mov     dword ptr [rbp+1180h+var_780+8], edi
 * 00000001800B8757: mov     eax, dword ptr [rbp+1180h+psz]
 * 00000001800B875A: mov     dword ptr [rbp+1180h+var_780+0Ch], eax
 * 00000001800B8760: mov     r10, 0E62CA6FE305B8A70h
 * 00000001800B876A: mov     rdx, [rbp+1180h+var_11E0]
 * 00000001800B876E: mov     rdi, [rbp+1180h+lpModuleName]
 * 00000001800B8772: mov     rcx, rdi
 * 00000001800B8775: mov     rax, cs:off_1801C0078
 * 00000001800B877C: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B8782: mov     r10, 0C0B816137ADF0070h
 * 00000001800B878C: mov     edx, 1
 * 00000001800B8791: mov     rcx, rdi
 * 00000001800B8794: mov     rax, cs:off_1801C0080
 * 00000001800B879B: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B87A1: mov     r10, 0E62CA6FE305B8A70h
 * 00000001800B87AB: mov     rdx, [rsp+1280h+var_1220]
 * 00000001800B87B0: mov     rcx, rdi
 * 00000001800B87B3: mov     rax, cs:off_1801C0078
 * 00000001800B87BA: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B87C0: mov     [rsp+1280h+var_1220], rax
 * 00000001800B87C5: mov     rdi, cs:off_1801C00E8
 * 00000001800B87CC: mov     r10, 0FD20BEF77ED52170h
 * 00000001800B87D6: xor     ecx, ecx
 * 00000001800B87D8: mov     rax, cs:off_1801C0070
 * 00000001800B87DF: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B87E5: mov     r8, rax
 * 00000001800B87E8: mov     r10, 94F1065E3ADE9370h
 * 00000001800B87F2: lea     rdx, [rbp+1180h+var_780]
 * 00000001800B87F9: mov     rcx, [rbp+1180h+lpModuleName]
 * 00000001800B87FD: mov     rax, rdi
 * 00000001800B8800: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B8806: mov     r10, 0FA2817DF7AD26370h
 * 00000001800B8810: xor     eax, eax
 * 00000001800B8812: mov     [rsp+1280h+var_1258], rax
 * 00000001800B8817: mov     eax, dword ptr [rbp+1180h+var_11F8]
 * 00000001800B881A: mov     dword ptr [rsp+1280h+var_1260], eax
 * 00000001800B881E: lea     r9, [rbp+1180h+var_780]
 * 00000001800B8825: mov     r8d, 0FFFFFFFFh
 * 00000001800B882B: mov     rdx, [rbp+1180h+var_11A8]
 * 00000001800B882F: mov     rdi, [rbp+1180h+lpModuleName]
 * 00000001800B8833: mov     rcx, rdi
 * 00000001800B8836: mov     rax, cs:off_1801C00D8
 * 00000001800B883D: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B8843: cmp     dword ptr [rbp+1180h+var_1200], 1
 * 00000001800B8847: jnz     short loc_1800B8878
 * 00000001800B8849: cmp     dword ptr [rsp+1280h+lpMem], 0
 * 00000001800B884E: jz      short loc_1800B886E
 * 00000001800B8850: mov     r10, 8B0406AD5454F070h
 * 00000001800B885A: mov     ecx, 8
 * 00000001800B885F: mov     rax, cs:off_1801C0118
 * 00000001800B8866: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B886C: jmp     short loc_1800B887D
 * 00000001800B886E: mov     dword ptr [rsp+1280h+lpMem], 0FFFFFFh
 * 00000001800B8876: jmp     short loc_1800B8884
 * 00000001800B8878: mov     eax, 0FFA8A8A8h
 * 00000001800B887D: mov     dword ptr [rsp+1280h+lpMem], eax
 * 00000001800B8881: mov     dword ptr [rbp+1180h+var_1190], eax
 * 00000001800B8884: mov     eax, dword ptr [rbp+1180h+var_DA8]
 * 00000001800B888A: mov     edx, eax
 * 00000001800B888C: neg     edx
 * 00000001800B888E: test    eax, eax
 * 00000001800B8890: mov     ecx, 0
 * 00000001800B8895: cmovns  edx, ecx
 * 00000001800B8898: mov     r9d, ecx
 * 00000001800B889B: cmovns  r9d, eax
 * 00000001800B889F: mov     eax, [rbp+1180h+var_1138]
 * 00000001800B88A2: mov     r8d, eax
 * 00000001800B88A5: neg     r8d
 * 00000001800B88A8: test    eax, eax
 * 00000001800B88AA: cmovns  r8d, ecx
 * 00000001800B88AE: mov     r10d, ecx
 * 00000001800B88B1: cmovns  r10d, eax
 * 00000001800B88B5: mov     ecx, dword ptr [rbp+1180h+var_780+8]
 * 00000001800B88BB: sub     ecx, edx
 * 00000001800B88BD: mov     eax, dword ptr [rbp+1180h+var_11D0]
 * 00000001800B88C0: sub     eax, r9d
 * 00000001800B88C3: cmp     ecx, eax
 * 00000001800B88C5: cmovge  ecx, eax
 * 00000001800B88C8: mov     dword ptr [rbp+1180h+psz], ecx
 * 00000001800B88CB: mov     r11d, dword ptr [rbp+1180h+var_780+0Ch]
 * 00000001800B88D2: sub     r11d, r8d
 * 00000001800B88D5: mov     eax, dword ptr [rbp+1180h+var_11C8]
 * 00000001800B88D8: sub     eax, r10d
 * 00000001800B88DB: cmp     r11d, eax
 * 00000001800B88DE: cmovge  r11d, eax
 * 00000001800B88E2: test    ecx, ecx
 * 00000001800B88E4: jle     loc_1800B8AA3
 * 00000001800B88EA: test    r11d, r11d
 * 00000001800B88ED: jle     loc_1800B8AA3
 * 00000001800B88F3: movsxd  rbx, dword ptr [rbp+1180h+var_780+8]
 * 00000001800B88FA: mov     eax, ebx
 * 00000001800B88FC: imul    eax, r8d
 * 00000001800B8900: movsxd  rcx, eax
 * 00000001800B8903: movsxd  rax, edx
 * 00000001800B8906: add     rcx, rax
 * 00000001800B8909: mov     rax, [rbp+1180h+var_11A0]
 * 00000001800B890D: lea     rdi, [rax+rcx*4]
 * 00000001800B8911: mov     [rbp+1180h+var_11A8], rdi
 * 00000001800B8915: movsxd  rdx, dword ptr [rbp+1180h+var_11D0]
 * 00000001800B8919: mov     eax, edx
 * 00000001800B891B: imul    eax, r10d
 * 00000001800B891F: movsxd  rcx, eax
 * 00000001800B8922: movsxd  rax, r9d
 * 00000001800B8925: add     rcx, rax
 * 00000001800B8928: mov     rax, [rbp+1180h+var_11B8]
 * 00000001800B892C: lea     rax, [rax+rcx*4]
 * 00000001800B8930: mov     [rbp+1180h+var_11B8], rax
 * 00000001800B8934: xor     r13d, r13d
 * 00000001800B8937: mov     dword ptr [rbp+1180h+var_11D0], r13d
 * 00000001800B893B: mov     rcx, rbx
 * 00000001800B893E: shl     rcx, 2
 * 00000001800B8942: mov     [rbp+1180h+var_11A0], rcx
 * 00000001800B8946: mov     rcx, rdx
 * 00000001800B8949: shl     rcx, 2
 * 00000001800B894D: mov     ebx, dword ptr [rbp+1180h+psz]
 * 00000001800B8950: mov     rsi, [rbp+1180h+var_11A0]
 * 00000001800B8954: mov     r15, rcx
 * 00000001800B8957: mov     r12d, dword ptr [rbp+1180h+var_1190]
 * 00000001800B895B: mov     r8d, r13d
 * 00000001800B895E: mov     dword ptr [rbp+1180h+var_11C8], r13d
 * 00000001800B8962: lea     r9, [rdi+2]
 * 00000001800B8966: mov     r10, rax
 * 00000001800B8969: sub     r10, rdi
 * 00000001800B896C: movzx   ecx, byte ptr [r9-1]
 * 00000001800B8971: movzx   eax, byte ptr [r9-2]
 * 00000001800B8976: lea     edx, [rax+rcx*2]
 * 00000001800B8979: movzx   eax, byte ptr [r9]
 * 00000001800B897D: add     edx, eax
 * 00000001800B897F: shr     edx, 2
 * 00000001800B8982: not     dl
 * 00000001800B8984: test    dl, dl
 * 00000001800B8986: jz      loc_1800B8A41
 * 00000001800B898C: movzx   edi, byte ptr [r10+r9]
 * 00000001800B8991: movzx   r8d, dl
 * 00000001800B8995: movzx   ecx, r12b
 * 00000001800B8999: sub     ecx, edi
 * 00000001800B899B: imul    ecx, r8d
 * 00000001800B899F: mov     eax, 80808081h
 * 00000001800B89A4: imul    ecx
 * 00000001800B89A6: add     edx, ecx
 * 00000001800B89A8: sar     edx, 7
 * 00000001800B89AB: mov     eax, edx
 * 00000001800B89AD: shr     eax, 1Fh
 * 00000001800B89B0: add     edx, eax
 * 00000001800B89B2: add     dl, dil
 * 00000001800B89B5: mov     [r10+r9], dl
 * 00000001800B89B9: movzx   edi, byte ptr [r10+r9-1]
 * 00000001800B89BF: movzx   ecx, byte ptr [rsp+1280h+lpMem+1]
 * 00000001800B89C4: sub     ecx, edi
 * 00000001800B89C6: imul    ecx, r8d
 * 00000001800B89CA: mov     eax, 80808081h
 * 00000001800B89CF: imul    ecx
 * 00000001800B89D1: add     edx, ecx
 * 00000001800B89D3: sar     edx, 7
 * 00000001800B89D6: mov     eax, edx
 * 00000001800B89D8: shr     eax, 1Fh
 * 00000001800B89DB: add     edx, eax
 * 00000001800B89DD: add     dl, dil
 * 00000001800B89E0: mov     [r10+r9-1], dl
 * 00000001800B89E5: movzx   edi, byte ptr [r10+r9-2]
 * 00000001800B89EB: movzx   ecx, byte ptr [rsp+1280h+lpMem+2]
 * 00000001800B89F0: sub     ecx, edi
 * 00000001800B89F2: imul    ecx, r8d
 * 00000001800B89F6: mov     eax, 80808081h
 * 00000001800B89FB: imul    ecx
 * 00000001800B89FD: add     edx, ecx
 * 00000001800B89FF: sar     edx, 7
 * 00000001800B8A02: mov     eax, edx
 * 00000001800B8A04: shr     eax, 1Fh
 * 00000001800B8A07: add     edx, eax
 * 00000001800B8A09: add     dl, dil
 * 00000001800B8A0C: mov     [r10+r9-2], dl
 * 00000001800B8A11: movzx   edi, byte ptr [r10+r9+1]
 * 00000001800B8A17: mov     ecx, 0FFh
 * 00000001800B8A1C: sub     ecx, edi
 * 00000001800B8A1E: imul    ecx, r8d
 * 00000001800B8A22: mov     eax, 80808081h
 * 00000001800B8A27: imul    ecx
 * 00000001800B8A29: add     edx, ecx
 * 00000001800B8A2B: sar     edx, 7
 * 00000001800B8A2E: mov     eax, edx
 * 00000001800B8A30: shr     eax, 1Fh
 * 00000001800B8A33: add     edx, eax
 * 00000001800B8A35: add     dl, dil
 * 00000001800B8A38: mov     [r10+r9+1], dl
 * 00000001800B8A3D: mov     r8d, dword ptr [rbp+1180h+var_11C8]
 * 00000001800B8A41: add     r9, 4
 * 00000001800B8A45: inc     r8d
 * 00000001800B8A48: mov     dword ptr [rbp+1180h+var_11C8], r8d
 * 00000001800B8A4C: cmp     r8d, ebx
 * 00000001800B8A4F: jl      loc_1800B896C
 * 00000001800B8A55: mov     rdi, [rbp+1180h+var_11A8]
 * 00000001800B8A59: add     rdi, rsi
 * 00000001800B8A5C: mov     [rbp+1180h+var_11A8], rdi
 * 00000001800B8A60: mov     rax, [rbp+1180h+var_11B8]
 * 00000001800B8A64: add     rax, r15
 * 00000001800B8A67: mov     [rbp+1180h+var_11B8], rax
 * 00000001800B8A6B: mov     ecx, dword ptr [rbp+1180h+var_11D0]
 * 00000001800B8A6E: inc     ecx
 * 00000001800B8A70: mov     dword ptr [rbp+1180h+var_11D0], ecx
 * 00000001800B8A73: cmp     ecx, r11d
 * 00000001800B8A76: jl      loc_1800B895B
 * 00000001800B8A7C: mov     rbx, 0C81ECB17B1B54A58h
 * 00000001800B8A86: mov     rsi, 7F1137FAB69605Eh
 * 00000001800B8A90: mov     r15, [rbp+1180h+var_1128]
 * 00000001800B8A94: mov     r12, [rbp+1180h+var_1168]
 * 00000001800B8A98: mov     r13d, [rbp+1180h+var_10C8]
 * 00000001800B8A9F: mov     rdi, [rbp+1180h+lpModuleName]
 * 00000001800B8AA3: mov     r10, 0B2E10636105E9A70h
 * 00000001800B8AAD: mov     rcx, [rbp+1180h+var_11E0]
 * 00000001800B8AB1: mov     rax, cs:off_1801C0038
 * 00000001800B8AB8: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B8ABE: mov     rax, [rsp+1280h+var_1220]
 * 00000001800B8AC3: test    rax, rax
 * 00000001800B8AC6: jz      loc_1800B8699
 * 00000001800B8ACC: mov     r10, 0E62CA6FE305B8A70h
 * 00000001800B8AD6: mov     rdx, rax
 * 00000001800B8AD9: mov     rcx, rdi
 * 00000001800B8ADC: mov     rax, cs:off_1801C0078
 * 00000001800B8AE3: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B8AE9: mov     r10, 0C5540FA17E509B70h
 * 00000001800B8AF3: mov     rcx, rdi
 * 00000001800B8AF6: mov     rax, cs:off_1801C0030
 * 00000001800B8AFD: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B8B03: jmp     loc_1800B86BD
 * 00000001800B8B08: mov     r10, 0F658A6F3125F5170h
 * 00000001800B8B12: mov     eax, dword ptr [rsp+1280h+var_1218]
 * 00000001800B8B16: mov     [rsp+1280h+var_1230], eax
 * 00000001800B8B1A: mov     ecx, [rbp+1180h+var_11D8]
 * 00000001800B8B1D: mov     [rsp+1280h+var_1238], ecx
 * 00000001800B8B21: mov     eax, dword ptr [rbp+1180h+var_11C0]
 * 00000001800B8B24: mov     [rsp+1280h+var_1240], eax
 * 00000001800B8B28: xor     edx, edx
 * 00000001800B8B2A: mov     [rsp+1280h+var_1248], edx
 * 00000001800B8B2E: mov     [rsp+1280h+var_1250], edx
 * 00000001800B8B32: mov     rdi, [rbp+1180h+var_1188]
 * 00000001800B8B36: mov     [rsp+1280h+var_1258], rdi
 * 00000001800B8B3B: mov     dword ptr [rsp+1280h+var_1260], ecx
 * 00000001800B8B3F: mov     r9d, eax
 * 00000001800B8B42: mov     r8d, dword ptr [rbp+1180h+var_7C0+4]
 * 00000001800B8B49: mov     edx, dword ptr [rbp+1180h+var_7C0]
 * 00000001800B8B4F: mov     rcx, [rsp+1280h+var_1208]
 * 00000001800B8B54: mov     rax, cs:off_1801C0040
 * 00000001800B8B5B: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B8B61: mov     rax, [rbp+1180h+var_1178]
 * 00000001800B8B65: mov     [rbp+1180h+var_1178], rax
 * 00000001800B8B69: mov     r10, 0C0B816137ADF0070h
 * 00000001800B8B73: mov     edx, dword ptr [rbp+1180h+var_1198]
 * 00000001800B8B76: mov     rcx, [rsp+1280h+var_1208]
 * 00000001800B8B7B: mov     rax, cs:off_1801C0080
 * 00000001800B8B82: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B8B88: mov     rcx, [rbp+1180h+var_1178]
 * 00000001800B8B8C: test    rcx, rcx
 * 00000001800B8B8F: jnz     short loc_1800B8BA7
 * 00000001800B8B91: jmp     short loc_1800B8BBE
 * 00000001800B8B93: call    cs:__imp_GetLastError
 * 00000001800B8B9A: nop     dword ptr [rax+rax+00h]
 * 00000001800B8B9F: mov     rdi, [rbp+1180h+var_1188]
 * 00000001800B8BA3: mov     rcx, [rbp+1180h+var_1178]
 * 00000001800B8BA7: mov     r10, 0B2E10636105E9A70h
 * 00000001800B8BB1: mov     rax, cs:off_1801C0038
 * 00000001800B8BB8: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B8BBE: test    rdi, rdi
 * 00000001800B8BC1: jz      short loc_1800B8BDD
 * 00000001800B8BC3: mov     r10, 0C5540FA17E509B70h
 * 00000001800B8BCD: mov     rcx, rdi
 * 00000001800B8BD0: mov     rax, cs:off_1801C0030
 * 00000001800B8BD7: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B8BDD: mov     rax, [rbp+1180h+Size]
 * 00000001800B8BE1: test    rax, rax
 * 00000001800B8BE4: jz      short loc_1800B8C00
 * 00000001800B8BE6: mov     r10, 0B2E10636105E9A70h
 * 00000001800B8BF0: mov     rcx, rax
 * 00000001800B8BF3: mov     rax, cs:off_1801C0038
 * 00000001800B8BFA: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B8C00: mov     rax, [rbp+1180h+var_858]
 * 00000001800B8C07: test    rax, rax
 * 00000001800B8C0A: jz      short loc_1800B8C61
 * 00000001800B8C0C: mov     rcx, 0FFFFFFFFFFFFFFFFh
 * 00000001800B8C13: lea     rcx, [rcx+1]
 * 00000001800B8C17: cmp     word ptr [rax+rcx*2], 0
 * 00000001800B8C1C: jnz     short loc_1800B8C13
 * 00000001800B8C1E: lea     rcx, ds:2[rcx*2]
 * 00000001800B8C26: mov     rdi, [rbp+1180h+var_858]
 * 00000001800B8C2D: xor     eax, eax
 * 00000001800B8C2F: rep stosb
 * 00000001800B8C31: mov     rdi, [rbp+1180h+var_858]
 * 00000001800B8C38: call    cs:__imp_GetProcessHeap
 * 00000001800B8C3F: nop     dword ptr [rax+rax+00h]
 * 00000001800B8C44: mov     rcx, rax; hHeap
 * 00000001800B8C47: mov     r8, rdi; lpMem
 * 00000001800B8C4A: xor     edx, edx; dwFlags
 * 00000001800B8C4C: call    cs:__imp_HeapFree
 * 00000001800B8C53: nop     dword ptr [rax+rax+00h]
 * 00000001800B8C58: xor     eax, eax
 * 00000001800B8C5A: mov     [rbp+1180h+var_858], rax
 * 00000001800B8C61: mov     rax, [rbp+1180h+var_850]
 * 00000001800B8C68: test    rax, rax
 * 00000001800B8C6B: jz      short loc_1800B8CC2
 * 00000001800B8C6D: mov     rcx, 0FFFFFFFFFFFFFFFFh
 * 00000001800B8C74: lea     rcx, [rcx+1]
 * 00000001800B8C78: cmp     word ptr [rax+rcx*2], 0
 * 00000001800B8C7D: jnz     short loc_1800B8C74
 * 00000001800B8C7F: lea     rcx, ds:2[rcx*2]
 * 00000001800B8C87: mov     rdi, [rbp+1180h+var_850]
 * 00000001800B8C8E: xor     eax, eax
 * 00000001800B8C90: rep stosb
 * 00000001800B8C92: mov     rdi, [rbp+1180h+var_850]
 * 00000001800B8C99: call    cs:__imp_GetProcessHeap
 * 00000001800B8CA0: nop     dword ptr [rax+rax+00h]
 * 00000001800B8CA5: mov     rcx, rax; hHeap
 * 00000001800B8CA8: mov     r8, rdi; lpMem
 * 00000001800B8CAB: xor     edx, edx; dwFlags
 * 00000001800B8CAD: call    cs:__imp_HeapFree
 * 00000001800B8CB4: nop     dword ptr [rax+rax+00h]
 * 00000001800B8CB9: xor     eax, eax
 * 00000001800B8CBB: mov     [rbp+1180h+var_850], rax
 * 00000001800B8CC2: mov     rdi, [rbp+1180h+var_848]
 * 00000001800B8CC9: test    rdi, rdi
 * 00000001800B8CCC: jz      short loc_1800B8D1C
 * 00000001800B8CCE: mov     rcx, 0FFFFFFFFFFFFFFFFh
 * 00000001800B8CD5: lea     rcx, [rcx+1]
 * 00000001800B8CD9: cmp     word ptr [rdi+rcx*2], 0
 * 00000001800B8CDE: jnz     short loc_1800B8CD5
 * 00000001800B8CE0: lea     rcx, ds:2[rcx*2]
 * 00000001800B8CE8: xor     eax, eax
 * 00000001800B8CEA: rep stosb
 * 00000001800B8CEC: mov     rdi, [rbp+1180h+var_848]
 * 00000001800B8CF3: call    cs:__imp_GetProcessHeap
 * 00000001800B8CFA: nop     dword ptr [rax+rax+00h]
 * 00000001800B8CFF: mov     rcx, rax; hHeap
 * 00000001800B8D02: mov     r8, rdi; lpMem
 * 00000001800B8D05: xor     edx, edx; dwFlags
 * 00000001800B8D07: call    cs:__imp_HeapFree
 * 00000001800B8D0E: nop     dword ptr [rax+rax+00h]
 * 00000001800B8D13: xor     edi, edi
 * 00000001800B8D15: mov     [rbp+1180h+var_848], rdi
 * 00000001800B8D1C: mov     rcx, [rbp+1180h+var_840]
 * 00000001800B8D23: test    rcx, rcx
 * 00000001800B8D26: jz      short loc_1800B8D46
 * 00000001800B8D28: mov     r10, 0B2E10636105E9A70h
 * 00000001800B8D32: mov     rax, cs:off_1801C0038
 * 00000001800B8D39: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B8D3F: mov     [rbp+1180h+var_840], rdi
 * 00000001800B8D46: mov     rcx, [rbp+1180h+var_838]
 * 00000001800B8D4D: test    rcx, rcx
 * 00000001800B8D50: jz      short loc_1800B8D70
 * 00000001800B8D52: mov     r10, 0B2E10636105E9A70h
 * 00000001800B8D5C: mov     rax, cs:off_1801C0038
 * 00000001800B8D63: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B8D69: mov     [rbp+1180h+var_838], rdi
 * 00000001800B8D70: mov     rcx, [rbp+1180h+var_830]
 * 00000001800B8D77: test    rcx, rcx
 * 00000001800B8D7A: jz      short loc_1800B8D9A
 * 00000001800B8D7C: mov     r10, 0B2E10636105E9A70h
 * 00000001800B8D86: mov     rax, cs:off_1801C0038
 * 00000001800B8D8D: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B8D93: mov     [rbp+1180h+var_830], rdi
 * 00000001800B8D9A: mov     ecx, 1
 * 00000001800B8D9F: xor     eax, eax
 * 00000001800B8DA1: lock cmpxchg cs:dword_1801C2A58, ecx
 * 00000001800B8DA9: jnz     short loc_1800B8D9F
 * 00000001800B8DAB: mov     eax, cs:dword_1801C23F0
 * 00000001800B8DB1: test    eax, eax
 * 00000001800B8DB3: jle     short loc_1800B8E22
 * 00000001800B8DB5: sub     eax, ecx
 * 00000001800B8DB7: mov     cs:dword_1801C23F0, eax
 * 00000001800B8DBD: jnz     short loc_1800B8E22
 * 00000001800B8DBF: lea     rdi, unk_1801C29C0
 * 00000001800B8DC6: mov     eax, 4
 * 00000001800B8DCB: mov     [rbp+1180h+var_1188], rax
 * 00000001800B8DCF: mov     rcx, [rdi]; hLibModule
 * 00000001800B8DD2: test    rcx, rcx
 * 00000001800B8DD5: jz      short loc_1800B8DE7
 * 00000001800B8DD7: call    cs:__imp_FreeLibrary
 * 00000001800B8DDE: nop     dword ptr [rax+rax+00h]
 * 00000001800B8DE3: mov     rax, [rbp+1180h+var_1188]
 * 00000001800B8DE7: add     rdi, 18h
 * 00000001800B8DEB: sub     rax, 1
 * 00000001800B8DEF: mov     [rbp+1180h+var_1188], rax
 * 00000001800B8DF3: jnz     short loc_1800B8DCF
 * 00000001800B8DF5: xor     edx, edx; Val
 * 00000001800B8DF7: lea     r8d, [rdx+60h]; Size
 * 00000001800B8DFB: lea     rcx, unk_1801C29C0; void *
 * 00000001800B8E02: call    memset_0
 * 00000001800B8E07: mov     r8d, 170h; Size
 * 00000001800B8E0D: lea     rdx, off_18016CF50; Src
 * 00000001800B8E14: lea     rcx, off_1801C0000; void *
 * 00000001800B8E1B: call    memcpy_0
 * 00000001800B8E20: xor     edi, edi
 * 00000001800B8E22: mov     eax, edi
 * 00000001800B8E24: xchg    eax, cs:dword_1801C2A58
 * 00000001800B8E2A: mov     eax, cs:dword_1801C23E0
 * 00000001800B8E30: mov     dword ptr [rsp+1280h+lpMem], eax
 * 00000001800B8E34: mov     r10, 0CD6CB78050552870h
 * 00000001800B8E3E: mov     rax, cs:off_1801C0098
 * 00000001800B8E45: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B8E4B: sub     eax, dword ptr cs:qword_1801C23E8
 * 00000001800B8E51: mov     [rbp+1180h+var_1188], rax
 * 00000001800B8E55: xorps   xmm0, xmm0
 * 00000001800B8E58: xor     eax, eax
 * 00000001800B8E5A: movups  [rbp+1180h+var_3D8], xmm0
 * 00000001800B8E61: movups  [rbp+1180h+var_3C8], xmm0
 * 00000001800B8E68: movups  [rbp+1180h+var_3B8], xmm0
 * 00000001800B8E6F: mov     [rbp+1180h+var_3A8], rax
 * 00000001800B8E76: mov     ecx, 1
 * 00000001800B8E7B: xor     eax, eax
 * 00000001800B8E7D: lock cmpxchg cs:dword_1801C2A58, ecx
 * 00000001800B8E85: jnz     short loc_1800B8E7B
 * 00000001800B8E87: mov     eax, cs:dword_1801C23F0
 * 00000001800B8E8D: test    eax, eax
 * 00000001800B8E8F: jnz     loc_1800B94A0
 * 00000001800B8E95: mov     dword ptr [rbp+1180h+var_11D0], edi
 * 00000001800B8E98: mov     dword ptr [rbp+1180h+var_11C8], edi
 * 00000001800B8E9B: mov     dword ptr [rbp+1180h+var_1180], edi
 * 00000001800B8E9E: mov     ecx, 338h; unsigned __int64
 * 00000001800B8EA3: call    ??2@YAPEAX_K@Z; operator new(unsigned __int64)
 * 00000001800B8EA8: mov     [rbp+1180h+var_1178], rax
 * 00000001800B8EAC: test    rax, rax
 * 00000001800B8EAF: jz      loc_1800B927E
 * 00000001800B8EB5: mov     r12d, edi
 * 00000001800B8EB8: mov     r13d, 0FFFFFFFFh
 * 00000001800B8EBE: mov     ebx, edi
 * 00000001800B8EC0: mov     r10d, edi
 * 00000001800B8EC3: lea     rsi, [rax+7]
 * 00000001800B8EC7: lea     r15, unk_180181002
 * 00000001800B8ECE: mov     r11d, 67h ; 'g'
 * 00000001800B8ED4: movzx   r9d, byte ptr [r15-2]
 * 00000001800B8ED9: shl     r9d, 8
 * 00000001800B8EDD: movzx   eax, byte ptr [r15-1]
 * 00000001800B8EE2: or      r9d, eax
 * 00000001800B8EE5: shl     r9d, 8
 * 00000001800B8EE9: movzx   eax, byte ptr [r15]
 * 00000001800B8EED: or      r9d, eax
 * 00000001800B8EF0: shl     r9d, 8
 * 00000001800B8EF4: movzx   eax, byte ptr [r15+1]
 * 00000001800B8EF9: or      r9d, eax
 * 00000001800B8EFC: movzx   r8d, byte ptr [r15+2]
 * 00000001800B8F01: shl     r8d, 8
 * 00000001800B8F05: movzx   eax, byte ptr [r15+3]
 * 00000001800B8F0A: or      r8d, eax
 * 00000001800B8F0D: shl     r8d, 8
 * 00000001800B8F11: movzx   eax, byte ptr [r15+4]
 * 00000001800B8F16: or      r8d, eax
 * 00000001800B8F19: shl     r8d, 8
 * 00000001800B8F1D: movzx   eax, byte ptr [r15+5]
 * 00000001800B8F22: or      r8d, eax
 * 00000001800B8F25: xor     r10d, r9d
 * 00000001800B8F28: lea     r15, [r15+8]
 * 00000001800B8F2C: mov     edi, r8d
 * 00000001800B8F2F: xor     edi, ebx
 * 00000001800B8F31: xor     edi, r10d
 * 00000001800B8F34: xor     edi, 0AC987321h
 * 00000001800B8F3A: lea     eax, [rdi+54969FA2h]
 * 00000001800B8F40: rol     eax, 5
 * 00000001800B8F43: mov     ecx, edi
 * 00000001800B8F45: rol     ecx, 0Ah
 * 00000001800B8F48: imul    eax, 137Fh
 * 00000001800B8F4E: add     ecx, eax
 * 00000001800B8F50: xor     r10d, ecx
 * 00000001800B8F53: lea     ecx, [r10+7F1137Fh]
 * 00000001800B8F5A: ror     ecx, 9
 * 00000001800B8F5D: mov     eax, r10d
 * 00000001800B8F60: rol     eax, 2
 * 00000001800B8F63: imul    ecx, 0AB69h
 * 00000001800B8F69: sub     ecx, eax
 * 00000001800B8F6B: xor     edi, ecx
 * 00000001800B8F6D: imul    ecx, edi, 605Eh
 * 00000001800B8F73: mov     eax, edi
 * 00000001800B8F75: shr     eax, 0Dh
 * 00000001800B8F78: sub     ecx, eax
 * 00000001800B8F7A: sub     ecx, 756C8A2h
 * 00000001800B8F80: xor     r10d, ecx
 * 00000001800B8F83: mov     ecx, r10d
 * 00000001800B8F86: xor     ecx, 0AB69h
 * 00000001800B8F8C: rol     ecx, 6
 * 00000001800B8F8F: mov     eax, r10d
 * 00000001800B8F92: rol     eax, 2
 * 00000001800B8F95: imul    ecx, 7F1h
 * 00000001800B8F9B: sub     ecx, eax
 * 00000001800B8F9D: xor     edi, ecx
 * 00000001800B8F9F: mov     eax, edi
 * 00000001800B8FA1: xor     eax, 0AB69605Eh
 * 00000001800B8FA6: mov     ecx, 7F1137Fh
 * 00000001800B8FAB: sub     ecx, eax
 * 00000001800B8FAD: xor     r10d, ecx
 * 00000001800B8FB0: mov     edx, r10d
 * 00000001800B8FB3: ror     edx, 6
 * 00000001800B8FB6: mov     eax, r10d
 * 00000001800B8FB9: xor     eax, 137Fh
 * 00000001800B8FBE: imul    ecx, eax, 0AB69h
 * 00000001800B8FC4: xor     edx, ecx
 * 00000001800B8FC6: xor     edi, edx
 * 00000001800B8FC8: lea     eax, [rdi+7F1137Fh]
 * 00000001800B8FCE: ror     eax, 0Fh
 * 00000001800B8FD1: mov     ecx, edi
 * 00000001800B8FD3: rol     ecx, 2
 * 00000001800B8FD6: imul    eax, 605Eh
 * 00000001800B8FDC: add     ecx, eax
 * 00000001800B8FDE: xor     r10d, ecx
 * 00000001800B8FE1: lea     ecx, [r10+54969FA2h]
 * 00000001800B8FE8: ror     ecx, 0Eh
 * 00000001800B8FEB: mov     eax, r10d
 * 00000001800B8FEE: rol     eax, 8
 * 00000001800B8FF1: imul    ecx, 7F1h
 * 00000001800B8FF7: sub     ecx, eax
 * 00000001800B8FF9: xor     edi, ecx
 * 00000001800B8FFB: mov     eax, edi
 * 00000001800B8FFD: xor     eax, 0AB69605Eh
 * 00000001800B9002: ror     eax, 0Ch
 * 00000001800B9005: mov     ecx, edi
 * 00000001800B9007: ror     ecx, 0Ah
 * 00000001800B900A: imul    eax, 137Fh
 * 00000001800B9010: xor     ecx, eax
 * 00000001800B9012: xor     r10d, ecx
 * 00000001800B9015: mov     eax, r10d
 * 00000001800B9018: xor     eax, 7F1h
 * 00000001800B901D: imul    ecx, eax, 0AB69h
 * 00000001800B9023: mov     eax, r10d
 * 00000001800B9026: shr     eax, 0Ah
 * 00000001800B9029: xor     ecx, eax
 * 00000001800B902B: xor     ecx, edi
 * 00000001800B902D: mov     eax, ecx
 * 00000001800B902F: not     eax
 * 00000001800B9031: ror     eax, 5
 * 00000001800B9034: add     eax, 605Eh
 * 00000001800B9039: imul    eax, 7F1h
 * 00000001800B903F: xor     r10d, eax
 * 00000001800B9042: lea     ebx, [r10-7F1h]
 * 00000001800B9049: xor     ebx, ecx
 * 00000001800B904B: xor     ebx, 0AB69605Eh
 * 00000001800B9051: mov     eax, ebx
 * 00000001800B9053: xor     eax, 7F1h
 * 00000001800B9058: rol     eax, 2
 * 00000001800B905B: imul    ecx, eax, 137Fh
 * 00000001800B9061: mov     eax, ebx
 * 00000001800B9063: shr     eax, 2
 * 00000001800B9066: add     ecx, eax
 * 00000001800B9068: xor     r10d, ecx
 * 00000001800B906B: lea     eax, [r10-7F1137Fh]
 * 00000001800B9072: ror     eax, 6
 * 00000001800B9075: mov     ecx, r10d
 * 00000001800B9078: rol     ecx, 7
 * 00000001800B907B: imul    eax, 0AB69h
 * 00000001800B9081: add     ecx, eax
 * 00000001800B9083: xor     ebx, ecx
 * 00000001800B9085: mov     edx, ebx
 * 00000001800B9087: ror     edx, 9
 * 00000001800B908A: mov     eax, ebx
 * 00000001800B908C: xor     eax, 137Fh
 * 00000001800B9091: imul    ecx, eax, 605Eh
 * 00000001800B9097: add     edx, ecx
 * 00000001800B9099: xor     r10d, edx
 * 00000001800B909C: mov     eax, r10d
 * 00000001800B909F: xor     eax, 0AB69h
 * 00000001800B90A4: rol     eax, 5
 * 00000001800B90A7: mov     ecx, r10d
 * 00000001800B90AA: rol     ecx, 7
 * 00000001800B90AD: imul    eax, 7F1h
 * 00000001800B90B3: add     ecx, eax
 * 00000001800B90B5: xor     ebx, ecx
 * 00000001800B90B7: xor     r10d, ebx
 * 00000001800B90BA: xor     r10d, 0AC987321h
 * 00000001800B90C1: mov     eax, r10d
 * 00000001800B90C4: ror     eax, 3
 * 00000001800B90C7: imul    ecx, eax, 137Fh
 * 00000001800B90CD: sub     ecx, 0D0DD417h
 * 00000001800B90D3: xor     ebx, ecx
 * 00000001800B90D5: lea     ecx, [rbx-7F1137Fh]
 * 00000001800B90DB: ror     ecx, 1
 * 00000001800B90DD: mov     eax, ebx
 * 00000001800B90DF: ror     eax, 6
 * 00000001800B90E2: imul    ecx, 605Eh
 * 00000001800B90E8: sub     ecx, eax
 * 00000001800B90EA: xor     r10d, ecx
 * 00000001800B90ED: lea     eax, [r10-54969FA2h]
 * 00000001800B90F4: rol     eax, 3
 * 00000001800B90F7: mov     ecx, r10d
 * 00000001800B90FA: rol     ecx, 0Eh
 * 00000001800B90FD: imul    eax, 7F1h
 * 00000001800B9103: add     ecx, eax
 * 00000001800B9105: xor     ebx, ecx
 * 00000001800B9107: lea     ecx, [rbx-54969FA2h]
 * 00000001800B910D: rol     ecx, 0Fh
 * 00000001800B9110: mov     eax, ebx
 * 00000001800B9112: ror     eax, 0Eh
 * 00000001800B9115: imul    ecx, 137Fh
 * 00000001800B911B: sub     ecx, eax
 * 00000001800B911D: xor     r10d, ecx
 * 00000001800B9120: mov     eax, r10d
 * 00000001800B9123: xor     eax, 605Eh
 * 00000001800B9128: imul    ecx, eax, 0AB69h
 * 00000001800B912E: mov     eax, r10d
 * 00000001800B9131: shr     eax, 3
 * 00000001800B9134: xor     ecx, eax
 * 00000001800B9136: xor     ebx, ecx
 * 00000001800B9138: mov     eax, ebx
 * 00000001800B913A: xor     eax, 7F1137Fh
 * 00000001800B913F: rol     eax, 4
 * 00000001800B9142: mov     ecx, ebx
 * 00000001800B9144: rol     ecx, 2
 * 00000001800B9147: imul    eax, 605Eh
 * 00000001800B914D: xor     ecx, eax
 * 00000001800B914F: xor     ecx, r12d
 * 00000001800B9152: xor     r10d, ecx
 * 00000001800B9155: xor     ebx, r13d
 * 00000001800B9158: mov     [rsi-4], r10b
 * 00000001800B915C: ror     r10d, 8
 * 00000001800B9160: mov     [rsi], bl
 * 00000001800B9162: ror     ebx, 8
 * 00000001800B9165: mov     [rsi-5], r10b
 * 00000001800B9169: ror     r10d, 8
 * 00000001800B916D: mov     [rsi-1], bl
 * 00000001800B9170: ror     ebx, 8
 * 00000001800B9173: mov     [rsi-6], r10b
 * 00000001800B9177: ror     r10d, 8
 * 00000001800B917B: mov     [rsi-2], bl
 * 00000001800B917E: ror     ebx, 8
 * 00000001800B9181: mov     [rsi-7], r10b
 * 00000001800B9185: mov     [rsi-3], bl
 * 00000001800B9188: ror     r10d, 8
 * 00000001800B918C: ror     ebx, 8
 * 00000001800B918F: mov     r12d, r9d
 * 00000001800B9192: mov     r13d, r8d
 * 00000001800B9195: lea     rsi, [rsi+8]
 * 00000001800B9199: sub     r11, 1
 * 00000001800B919D: jnz     loc_1800B8ED4
 * 00000001800B91A3: xor     eax, eax
 * 00000001800B91A5: xorps   xmm1, xmm1
 * 00000001800B91A8: xorps   xmm2, xmm2
 * 00000001800B91AB: mov     rbx, 0C81ECB17B1B54A58h
 * 00000001800B91B5: mov     rsi, 7F1137FAB69605Eh
 * 00000001800B91BF: mov     r15, [rbp+1180h+var_1128]
 * 00000001800B91C3: lea     r12, [r15+0C0h]
 * 00000001800B91CA: mov     r13d, [rbp+1180h+var_10C8]
 * 00000001800B91D1: mov     r11, [rbp+1180h+var_1178]
 * 00000001800B91D5: movdqu  xmm0, xmmword ptr [r11+rax]
 * 00000001800B91DB: pxor    xmm1, xmm0
 * 00000001800B91DF: movdqu  xmm0, xmmword ptr [r11+rax+10h]
 * 00000001800B91E6: pxor    xmm0, xmm2
 * 00000001800B91EA: movdqa  xmm2, xmm0
 * 00000001800B91EE: add     rax, 20h ; ' '
 * 00000001800B91F2: cmp     rax, 320h
 * 00000001800B91F8: jb      short loc_1800B91D5
 * 00000001800B91FA: pxor    xmm1, xmm0
 * 00000001800B91FE: movdqa  xmm0, xmm1
 * 00000001800B9202: psrldq  xmm0, 8
 * 00000001800B9207: pxor    xmm1, xmm0
 * 00000001800B920B: movdqa  xmm0, xmm1
 * 00000001800B920F: psrldq  xmm0, 4
 * 00000001800B9214: pxor    xmm1, xmm0
 * 00000001800B9218: movdqa  xmm0, xmm1
 * 00000001800B921C: psrldq  xmm0, 2
 * 00000001800B9221: pxor    xmm1, xmm0
 * 00000001800B9225: movdqa  xmm0, xmm1
 * 00000001800B9229: psrldq  xmm0, 1
 * 00000001800B922E: pxor    xmm1, xmm0
 * 00000001800B9232: movd    ecx, xmm1
 * 00000001800B9236: cmp     rax, 338h
 * 00000001800B923C: jnb     short loc_1800B924D
 * 00000001800B923E: xor     cl, [r11+rax]
 * 00000001800B9242: inc     rax
 * 00000001800B9245: cmp     rax, 338h
 * 00000001800B924B: jb      short loc_1800B923E
 * 00000001800B924D: movzx   eax, cl
 * 00000001800B9250: cmp     rax, cs:qword_180181338
 * 00000001800B9257: jz      loc_1800B92E6
 * 00000001800B925D: call    cs:__imp_GetProcessHeap
 * 00000001800B9264: nop     dword ptr [rax+rax+00h]
 * 00000001800B9269: mov     rcx, rax; hHeap
 * 00000001800B926C: mov     r8, [rbp+1180h+var_1178]; lpMem
 * 00000001800B9270: xor     edx, edx; dwFlags
 * 00000001800B9272: call    cs:__imp_HeapFree
 * 00000001800B9279: nop     dword ptr [rax+rax+00h]
 * 00000001800B927E: lea     rdi, unk_1801C29C0
 * 00000001800B9285: mov     eax, 4
 * 00000001800B928A: mov     [rbp+1180h+var_1178], rax
 * 00000001800B928E: mov     rcx, [rdi]; hLibModule
 * 00000001800B9291: test    rcx, rcx
 * 00000001800B9294: jz      short loc_1800B92A6
 * 00000001800B9296: call    cs:__imp_FreeLibrary
 * 00000001800B929D: nop     dword ptr [rax+rax+00h]
 * 00000001800B92A2: mov     rax, [rbp+1180h+var_1178]
 * 00000001800B92A6: add     rdi, 18h
 * 00000001800B92AA: sub     rax, 1
 * 00000001800B92AE: mov     [rbp+1180h+var_1178], rax
 * 00000001800B92B2: jnz     short loc_1800B928E
 * 00000001800B92B4: xor     edx, edx; Val
 * 00000001800B92B6: lea     r8d, [rdx+60h]; Size
 * 00000001800B92BA: lea     rcx, unk_1801C29C0; void *
 * 00000001800B92C1: call    memset_0
 * 00000001800B92C6: mov     r8d, 170h; Size
 * 00000001800B92CC: lea     rdx, off_18016CF50; Src
 * 00000001800B92D3: lea     rcx, off_1801C0000; void *
 * 00000001800B92DA: call    memcpy_0
 * 00000001800B92DF: xor     edi, edi
 * 00000001800B92E1: jmp     loc_1800B94A8
 * 00000001800B92E6: mov     rdi, r11
 * 00000001800B92E9: mov     byte ptr [r11+337h], 0
 * 00000001800B92F1: xor     edx, edx; Val
 * 00000001800B92F3: lea     r8d, [rdx+60h]; Size
 * 00000001800B92F7: lea     rcx, unk_1801C29C0; void *
 * 00000001800B92FE: call    memset_0
 * 00000001800B9303: mov     rax, rdi
 * 00000001800B9306: cmp     byte ptr [rax], 0
 * 00000001800B9309: jz      loc_1800B946D
 * 00000001800B930F: mov     rdx, rdi; lpModuleName
 * 00000001800B9312: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B9319: lea     rax, [rax+1]
 * 00000001800B931D: cmp     word ptr [rdi+rax*2], 0
 * 00000001800B9322: jnz     short loc_1800B9319
 * 00000001800B9324: lea     rdi, [rdi+rax*2]
 * 00000001800B9328: mov     eax, dword ptr [rbp+1180h+var_1180]
 * 00000001800B932B: lea     rcx, [rax+rax*2]
 * 00000001800B932F: lea     rax, unk_1801C29C0
 * 00000001800B9336: lea     r8, [rax+rcx*8]; phModule
 * 00000001800B933A: mov     [rbp+1180h+Size], r8
 * 00000001800B933E: xor     ecx, ecx; dwFlags
 * 00000001800B9340: call    cs:__imp_GetModuleHandleExW
 * 00000001800B9347: nop     dword ptr [rax+rax+00h]
 * 00000001800B934C: test    eax, eax
 * 00000001800B934E: jz      loc_1800B9466
 * 00000001800B9354: xor     r9d, r9d
 * 00000001800B9357: mov     ecx, r9d
 * 00000001800B935A: mov     dword ptr [rbp+1180h+var_11C8], ecx
 * 00000001800B935D: mov     r8, [rbp+1180h+Size]
 * 00000001800B9361: mov     rax, [r8]
 * 00000001800B9364: mov     edx, 5A4Dh
 * 00000001800B9369: cmp     [rax], dx
 * 00000001800B936C: jz      short loc_1800B9378
 * 00000001800B936E: mov     ecx, 0C000007Bh
 * 00000001800B9373: mov     dword ptr [rbp+1180h+var_11C8], ecx
 * 00000001800B9376: jmp     short loc_1800B93E8
 * 00000001800B9378: movsxd  rdx, dword ptr [rax+3Ch]
 * 00000001800B937C: cmp     edx, 10000000h
 * 00000001800B9382: jb      short loc_1800B938E
 * 00000001800B9384: mov     ecx, 0C000007Bh
 * 00000001800B9389: mov     dword ptr [rbp+1180h+var_11C8], ecx
 * 00000001800B938C: jmp     short loc_1800B93E8
 * 00000001800B938E: add     rdx, [r8]
 * 00000001800B9391: cmp     rdx, [r8]
 * 00000001800B9394: jnb     short loc_1800B93A0
 * 00000001800B9396: mov     ecx, 0C000007Bh
 * 00000001800B939B: mov     dword ptr [rbp+1180h+var_11C8], ecx
 * 00000001800B939E: jmp     short loc_1800B93E8
 * 00000001800B93A0: cmp     dword ptr [rdx], 4550h
 * 00000001800B93A6: jz      short loc_1800B93B2
 * 00000001800B93A8: mov     ecx, 0C000007Bh
 * 00000001800B93AD: mov     dword ptr [rbp+1180h+var_11C8], ecx
 * 00000001800B93B0: jmp     short loc_1800B93E8
 * 00000001800B93B2: movzx   eax, word ptr [rdx+18h]
 * 00000001800B93B6: mov     r10d, 10Bh
 * 00000001800B93BC: sub     ax, r10w
 * 00000001800B93C0: mov     r10d, 0FEFFh
 * 00000001800B93C6: test    r10w, ax
 * 00000001800B93CA: jz      short loc_1800B93D6
 * 00000001800B93CC: mov     ecx, 0C000000Dh
 * 00000001800B93D1: mov     dword ptr [rbp+1180h+var_11C8], ecx
 * 00000001800B93D4: jmp     short loc_1800B93E8
 * 00000001800B93D6: mov     rax, [rdx+88h]
 * 00000001800B93DD: mov     [r8+0Ch], rax
 * 00000001800B93E1: mov     eax, [rdx+50h]
 * 00000001800B93E4: mov     [r8+8], eax
 * 00000001800B93E8: mov     eax, [rdi+2]
 * 00000001800B93EB: mov     dword ptr [rbp+1180h+psz], eax
 * 00000001800B93EE: add     rdi, 6
 * 00000001800B93F2: mov     edx, r9d
 * 00000001800B93F5: mov     dword ptr [rbp+1180h+var_1200], edx
 * 00000001800B93F8: test    eax, eax
 * 00000001800B93FA: jz      short loc_1800B9458
 * 00000001800B93FC: mov     r9, rdi
 * 00000001800B93FF: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 00000001800B9406: inc     rax
 * 00000001800B9409: cmp     byte ptr [rdi+rax], 0
 * 00000001800B940D: jnz     short loc_1800B9406
 * 00000001800B940F: inc     rdi
 * 00000001800B9412: add     rdi, rax
 * 00000001800B9415: test    ecx, ecx
 * 00000001800B9417: js      short loc_1800B944B
 * 00000001800B9419: mov     rdx, r9; lpProcName
 * 00000001800B941C: mov     rcx, [r8]; hModule
 * 00000001800B941F: call    cs:__imp_GetProcAddress
 * 00000001800B9426: nop     dword ptr [rax+rax+00h]
 * 00000001800B942B: mov     rcx, rax
 * 00000001800B942E: test    rax, rax
 * 00000001800B9431: jz      short loc_1800B946D
 * 00000001800B9433: mov     eax, dword ptr [rbp+1180h+var_11D0]
 * 00000001800B9436: lea     rdx, off_1801C0000
 * 00000001800B943D: mov     [rdx+rax*8], rcx
 * 00000001800B9441: mov     ecx, dword ptr [rbp+1180h+var_11C8]
 * 00000001800B9444: mov     r8, [rbp+1180h+Size]
 * 00000001800B9448: mov     edx, dword ptr [rbp+1180h+var_1200]
 * 00000001800B944B: inc     dword ptr [rbp+1180h+var_11D0]
 * 00000001800B944E: inc     edx
 * 00000001800B9450: mov     dword ptr [rbp+1180h+var_1200], edx
 * 00000001800B9453: cmp     edx, dword ptr [rbp+1180h+psz]
 * 00000001800B9456: jb      short loc_1800B93FC
 * 00000001800B9458: inc     dword ptr [rbp+1180h+var_1180]
 * 00000001800B945B: cmp     byte ptr [rdi], 0
 * 00000001800B945E: jnz     loc_1800B930F
 * 00000001800B9464: jmp     short loc_1800B946D
 * 00000001800B9466: mov     dword ptr [rbp+1180h+var_11C8], 0C000007Ah
 * 00000001800B946D: call    cs:__imp_GetProcessHeap
 * 00000001800B9474: nop     dword ptr [rax+rax+00h]
 * 00000001800B9479: mov     r8, [rbp+1180h+var_1178]; lpMem
 * 00000001800B947D: xor     edx, edx; dwFlags
 * 00000001800B947F: mov     rcx, rax; hHeap
 * 00000001800B9482: call    cs:__imp_HeapFree
 * 00000001800B9489: nop     dword ptr [rax+rax+00h]
 * 00000001800B948E: cmp     dword ptr [rbp+1180h+var_11C8], 0
 * 00000001800B9492: jl      loc_1800B927E
 * 00000001800B9498: mov     eax, cs:dword_1801C23F0
 * 00000001800B949E: xor     edi, edi
 * 00000001800B94A0: inc     eax
 * 00000001800B94A2: mov     cs:dword_1801C23F0, eax
 * 00000001800B94A8: mov     eax, edi
 * 00000001800B94AA: xchg    eax, cs:dword_1801C2A58
 * 00000001800B94B0: mov     rcx, [rbp+1180h+var_1188]
 * 00000001800B94B4: mov     dword ptr [rbp+1180h+var_3D8], ecx
 * 00000001800B94BA: mov     ecx, 1
 * 00000001800B94BF: mov     [rbp+1180h+var_3E0], ecx
 * 00000001800B94C5: mov     dword ptr [rbp+1180h+var_3C8], 9966F291h
 * 00000001800B94CF: mov     dword ptr [rbp+1180h+var_3D8+8], ecx
 * 00000001800B94D5: mov     dword ptr [rbp+1180h+var_3B8], ecx
 * 00000001800B94DB: mov     dword ptr [rbp+1180h+var_3C8+8], ecx
 * 00000001800B94E1: mov     eax, dword ptr [rsp+1280h+lpMem]
 * 00000001800B94E5: mov     dword ptr [rbp+1180h+var_3A8], eax
 * 00000001800B94EB: mov     dword ptr [rbp+1180h+var_3B8+8], ecx
 * 00000001800B94F1: mov     r10, 0C9CC1E45325AD070h
 * 00000001800B94FB: lea     r9, [rbp+1180h+var_3E0]
 * 00000001800B9502: mov     edx, 2021h
 * 00000001800B9507: xor     ecx, ecx
 * 00000001800B9509: lea     r8d, [rcx+4]
 * 00000001800B950D: mov     rax, cs:qword_1801C00D0
 * 00000001800B9514: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B951A: mov     ecx, 1
 * 00000001800B951F: xor     eax, eax
 * 00000001800B9521: lock cmpxchg cs:dword_1801C2A58, ecx
 * 00000001800B9529: jnz     short loc_1800B951F
 * 00000001800B952B: mov     eax, cs:dword_1801C23F0
 * 00000001800B9531: test    eax, eax
 * 00000001800B9533: jle     short loc_1800B95A2
 * 00000001800B9535: sub     eax, ecx
 * 00000001800B9537: mov     cs:dword_1801C23F0, eax
 * 00000001800B953D: jnz     short loc_1800B95A2
 * 00000001800B953F: lea     rdi, unk_1801C29C0
 * 00000001800B9546: mov     eax, 4
 * 00000001800B954B: mov     [rbp+1180h+var_1188], rax
 * 00000001800B954F: mov     rcx, [rdi]; hLibModule
 * 00000001800B9552: test    rcx, rcx
 * 00000001800B9555: jz      short loc_1800B9567
 * 00000001800B9557: call    cs:__imp_FreeLibrary
 * 00000001800B955E: nop     dword ptr [rax+rax+00h]
 * 00000001800B9563: mov     rax, [rbp+1180h+var_1188]
 * 00000001800B9567: add     rdi, 18h
 * 00000001800B956B: sub     rax, 1
 * 00000001800B956F: mov     [rbp+1180h+var_1188], rax
 * 00000001800B9573: jnz     short loc_1800B954F
 * 00000001800B9575: xor     edx, edx; Val
 * 00000001800B9577: lea     r8d, [rdx+60h]; Size
 * 00000001800B957B: lea     rcx, unk_1801C29C0; void *
 * 00000001800B9582: call    memset_0
 * 00000001800B9587: mov     r8d, 170h; Size
 * 00000001800B958D: lea     rdx, off_18016CF50; Src
 * 00000001800B9594: lea     rcx, off_1801C0000; void *
 * 00000001800B959B: call    memcpy_0
 * 00000001800B95A0: xor     edi, edi
 * 00000001800B95A2: mov     eax, edi
 * 00000001800B95A4: xchg    eax, cs:dword_1801C2A58
 * 00000001800B95AA: mov     r10, 0B7B1B729165E9270h
 * 00000001800B95B4: mov     rdx, [rsp+1280h+var_1208]
 * 00000001800B95B9: xor     ecx, ecx
 * 00000001800B95BB: mov     rax, cs:off_1801C0160
 * 00000001800B95C2: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800B95C8: mov     rax, [rbp+1180h+var_1148]
 * 00000001800B95CC: mov     [rbp+1180h+var_11A0], rax
 * 00000001800B95D0: jmp     loc_1800AFF85
 * 00000001800B95D5: mov     rdi, [rbp+1180h+var_CE4+4]
 * 00000001800B95DC: mov     [rbp+1180h+var_E60], rdi
 * 00000001800B95E3: test    r10d, r10d
 * 00000001800B95E6: jz      short loc_1800B962D
 * 00000001800B95E8: lea     r8, [rbp+1180h+var_1098]
 * 00000001800B95EF: mov     edx, [rdi]
 * 00000001800B95F1: mov     ecx, r11d
 * 00000001800B95F4: call    RtlUIntAdd
 * 00000001800B95F9: test    eax, eax
 * 00000001800B95FB: js      loc_1800BBD49
 * 00000001800B9601: mov     edx, [rbp+1180h+var_1098]
 * 00000001800B9607: lea     r8, [rbp+1180h+var_E60]
 * 00000001800B960E: mov     rcx, rdi
 * 00000001800B9611: call    RtlULongLongAdd
 * 00000001800B9616: test    eax, eax
 * 00000001800B9618: js      loc_1800BBD49
 * 00000001800B961E: inc     r9d
 * 00000001800B9621: mov     rdi, [rbp+1180h+var_E60]
 * 00000001800B9628: cmp     r9d, r10d
 * 00000001800B962B: jb      short loc_1800B95E8
 * 00000001800B962D: lea     r8, [rbp+1180h+var_D90]
 * 00000001800B9634: mov     rdx, r11
 * 00000001800B9637: mov     rcx, rdi
 * 00000001800B963A: call    RtlULongLongAdd
 * 00000001800B963F: test    eax, eax
 * 00000001800B9641: js      loc_1800BBD49
 * 00000001800B9647: mov     ecx, dword ptr [rbp+1180h+var_CE4]
 * 00000001800B964D: add     rcx, [rbp+1180h+var_CE4+4]
 * 00000001800B9654: lea     rax, [rdi+0A4h]
 * 00000001800B965B: cmp     rax, rcx
 * 00000001800B965E: ja      loc_1800BBD49
 * 00000001800B9664: mov     dword ptr [rdi], 0A0h
 * 00000001800B966A: mov     rax, [rbp+1180h+var_D90]
 * 00000001800B9671: mov     rcx, [rbp+1180h+var_1178]
 * 00000001800B9675: movups  xmm0, xmmword ptr [rcx]
 * 00000001800B9678: movups  xmmword ptr [rax], xmm0
 * 00000001800B967B: movups  xmm1, xmmword ptr [rcx+10h]
 * 00000001800B967F: movups  xmmword ptr [rax+10h], xmm1
 * 00000001800B9683: movups  xmm0, xmmword ptr [rcx+20h]
 * 00000001800B9687: movups  xmmword ptr [rax+20h], xmm0
 * 00000001800B968B: movups  xmm1, xmmword ptr [rcx+30h]
 * 00000001800B968F: movups  xmmword ptr [rax+30h], xmm1
 * 00000001800B9693: movups  xmm0, xmmword ptr [rcx+40h]
 * 00000001800B9697: movups  xmmword ptr [rax+40h], xmm0
 * 00000001800B969B: movups  xmm1, xmmword ptr [rcx+50h]
 * 00000001800B969F: movups  xmmword ptr [rax+50h], xmm1
 * 00000001800B96A3: movups  xmm0, xmmword ptr [rcx+60h]
 * 00000001800B96A7: movups  xmmword ptr [rax+60h], xmm0
 * 00000001800B96AB: movups  xmm1, xmmword ptr [rcx+70h]
 * 00000001800B96AF: movups  xmmword ptr [rax+70h], xmm1
 * 00000001800B96B3: movups  xmm0, xmmword ptr [rcx+80h]
 * 00000001800B96BA: movups  xmmword ptr [rax+80h], xmm0
 * 00000001800B96C1: movups  xmm1, xmmword ptr [rcx+90h]
 * 00000001800B96C8: movups  xmmword ptr [rax+90h], xmm1
 * 00000001800B96CF: mov     edi, [rbp+1180h+var_CE8]
 * 00000001800B96D5: inc     edi
 * 00000001800B96D7: mov     [rbp+1180h+var_CE8], edi
 * 00000001800B96DD: cmp     [rbp+1180h+var_CE4+4], 0
 * 00000001800B96E5: jnz     short loc_1800B9728
 * 00000001800B96E7: lea     r8, [rbp+1180h+var_1094]
 * 00000001800B96EE: mov     edx, 8
 * 00000001800B96F3: mov     ecx, r11d
 * 00000001800B96F6: call    RtlUIntAdd
 * 00000001800B96FB: test    eax, eax
 * 00000001800B96FD: js      loc_1800BBD49
 * 00000001800B9703: lea     r8, [rbp+1180h+var_CE4]
 * 00000001800B970A: mov     edx, [rbp+1180h+var_1094]
 * 00000001800B9710: mov     ecx, dword ptr [rbp+1180h+var_CE4]
 * 00000001800B9716: call    RtlUIntAdd
 * 00000001800B971B: test    eax, eax
 * 00000001800B971D: jns     loc_1800B97D1
 * 00000001800B9723: jmp     loc_1800BBD49
 * 00000001800B9728: mov     r9, [rbp+1180h+var_CE4+4]
 * 00000001800B972F: mov     [rbp+1180h+var_E58], r9
 * 00000001800B9736: xor     eax, eax
 * 00000001800B9738: mov     r10d, eax
 * 00000001800B973B: test    edi, edi
 * 00000001800B973D: jz      short loc_1800B9785
 * 00000001800B973F: lea     r8, [rbp+1180h+var_1090]
 * 00000001800B9746: mov     edx, [r9]
 * 00000001800B9749: mov     ecx, r11d
 * 00000001800B974C: call    RtlUIntAdd
 * 00000001800B9751: test    eax, eax
 * 00000001800B9753: js      loc_1800BBD49
 * 00000001800B9759: mov     edx, [rbp+1180h+var_1090]
 * 00000001800B975F: lea     r8, [rbp+1180h+var_E58]
 * 00000001800B9766: mov     rcx, r9
 * 00000001800B9769: call    RtlULongLongAdd
 * 00000001800B976E: test    eax, eax
 * 00000001800B9770: js      loc_1800BBD49
 * 00000001800B9776: inc     r10d
 * 00000001800B9779: mov     r9, [rbp+1180h+var_E58]
 * 00000001800B9780: cmp     r10d, edi
 * 00000001800B9783: jb      short loc_1800B973F
 * 00000001800B9785: lea     r8, [rbp+1180h+var_D50]
 * 00000001800B978C: mov     rdx, r11
 * 00000001800B978F: mov     rcx, r9
 * 00000001800B9792: call    RtlULongLongAdd
 * 00000001800B9797: test    eax, eax
 * 00000001800B9799: js      loc_1800BBD49
 * 00000001800B979F: mov     ecx, dword ptr [rbp+1180h+var_CE4]
 * 00000001800B97A5: add     rcx, [rbp+1180h+var_CE4+4]
 * 00000001800B97AC: lea     rax, [r9+0Ch]
 * 00000001800B97B0: cmp     rax, rcx
 * 00000001800B97B3: ja      loc_1800BBD49
 * 00000001800B97B9: mov     dword ptr [r9], 8
 * 00000001800B97C0: mov     rcx, [rbp+1180h+Size]
 * 00000001800B97C4: mov     rcx, [rcx]
 * 00000001800B97C7: mov     rax, [rbp+1180h+var_D50]
 * 00000001800B97CE: mov     [rax], rcx
 * 00000001800B97D1: mov     edi, [rbp+1180h+var_CE8]
 * 00000001800B97D7: inc     edi
 * 00000001800B97D9: mov     [rbp+1180h+var_CE8], edi
 * 00000001800B97DF: cmp     [rbp+1180h+var_CE4+4], 0
 * 00000001800B97E7: jnz     short loc_1800B982A
 * 00000001800B97E9: lea     r8, [rbp+1180h+var_108C]
 * 00000001800B97F0: mov     edx, 8
 * 00000001800B97F5: mov     ecx, r11d
 * 00000001800B97F8: call    RtlUIntAdd
 * 00000001800B97FD: test    eax, eax
 * 00000001800B97FF: js      loc_1800BBD49
 * 00000001800B9805: lea     r8, [rbp+1180h+var_CE4]
 * 00000001800B980C: mov     edx, [rbp+1180h+var_108C]
 * 00000001800B9812: mov     ecx, dword ptr [rbp+1180h+var_CE4]
 * 00000001800B9818: call    RtlUIntAdd
 * 00000001800B981D: test    eax, eax
 * 00000001800B981F: jns     loc_1800B98D1
 * 00000001800B9825: jmp     loc_1800BBD49
 * 00000001800B982A: mov     r9, [rbp+1180h+var_CE4+4]
 * 00000001800B9831: mov     [rbp+1180h+var_E50], r9
 * 00000001800B9838: xor     eax, eax
 * 00000001800B983A: mov     r10d, eax
 * 00000001800B983D: test    edi, edi
 * 00000001800B983F: jz      short loc_1800B9887
 * 00000001800B9841: lea     r8, [rbp+1180h+var_1088]
 * 00000001800B9848: mov     edx, [r9]
 * 00000001800B984B: mov     ecx, r11d
 * 00000001800B984E: call    RtlUIntAdd
 * 00000001800B9853: test    eax, eax
 * 00000001800B9855: js      loc_1800BBD49
 * 00000001800B985B: mov     edx, [rbp+1180h+var_1088]
 * 00000001800B9861: lea     r8, [rbp+1180h+var_E50]
 * 00000001800B9868: mov     rcx, r9
 * 00000001800B986B: call    RtlULongLongAdd
 * 00000001800B9870: test    eax, eax
 * 00000001800B9872: js      loc_1800BBD49
 * 00000001800B9878: inc     r10d
 * 00000001800B987B: mov     r9, [rbp+1180h+var_E50]
 * 00000001800B9882: cmp     r10d, edi
 * 00000001800B9885: jb      short loc_1800B9841
 * 00000001800B9887: lea     r8, [rbp+1180h+var_D80]
 * 00000001800B988E: mov     rdx, r11
 * 00000001800B9891: mov     rcx, r9
 * 00000001800B9894: call    RtlULongLongAdd
 * 00000001800B9899: test    eax, eax
 * 00000001800B989B: js      loc_1800BBD49
 * 00000001800B98A1: mov     ecx, dword ptr [rbp+1180h+var_CE4]
 * 00000001800B98A7: add     rcx, [rbp+1180h+var_CE4+4]
 * 00000001800B98AE: lea     rax, [r9+0Ch]
 * 00000001800B98B2: cmp     rax, rcx
 * 00000001800B98B5: ja      loc_1800BBD49
 * 00000001800B98BB: mov     dword ptr [r9], 8
 * 00000001800B98C2: mov     rax, [rbp+1180h+var_D80]
 * 00000001800B98C9: mov     rcx, [rsp+1280h+var_1220]
 * 00000001800B98CE: mov     [rax], rcx
 * 00000001800B98D1: inc     [rbp+1180h+var_CE8]
 * 00000001800B98D7: lea     r8, [rbp+1180h+var_1084]
 * 00000001800B98DE: mov     edx, r11d
 * 00000001800B98E1: mov     ecx, r11d
 * 00000001800B98E4: call    RtlUIntAdd
 * 00000001800B98E9: test    eax, eax
 * 00000001800B98EB: js      loc_1800BBD49
 * 00000001800B98F1: mov     edi, [rbp+1180h+var_1084]
 * 00000001800B98F7: mov     [rbp+1180h+var_1080], edi
 * 00000001800B98FD: lea     r8, [rbp+1180h+var_107C]
 * 00000001800B9904: mov     edx, 8
 * 00000001800B9909: call    RtlUIntAdd
 * 00000001800B990E: test    eax, eax
 * 00000001800B9910: js      loc_1800BBD49
 * 00000001800B9916: lea     r8, [rbp+1180h+var_1080]
 * 00000001800B991D: mov     edx, [rbp+1180h+var_107C]
 * 00000001800B9923: mov     ecx, edi
 * 00000001800B9925: call    RtlUIntAdd
 * 00000001800B992A: test    eax, eax
 * 00000001800B992C: js      loc_1800BBD49
 * 00000001800B9932: mov     eax, [rbp+1180h+var_1080]
 * 00000001800B9938: mov     dword ptr [rsp+1280h+lpMem], eax
 * 00000001800B993C: xor     eax, eax
 * 00000001800B993E: mov     r9d, eax
 * 00000001800B9941: mov     [rbp+1180h+var_1178], rax
 * 00000001800B9945: mov     [rbp+1180h+Size], rax
 * 00000001800B9949: mov     r10d, eax
 * 00000001800B994C: mov     [rsp+1280h+var_1220], rax
 * 00000001800B9951: mov     dword ptr [rbp+1180h+var_11C8], eax
 * 00000001800B9954: mov     r11d, eax
 * 00000001800B9957: mov     [rbp+1180h+var_11A8], rax
 * 00000001800B995B: mov     [rbp+1180h+var_11B8], rax
 * 00000001800B995F: mov     [rbp+1180h+lpModuleName], rax
 * 00000001800B9963: rdtsc
 * 00000001800B9965: shl     rdx, 20h
 * 00000001800B9969: or      rax, rdx
 * 00000001800B996C: mov     [rbp+1180h+var_11E0], rax
 * 00000001800B9970: mov     [rbp+1180h+var_1078], 8
 * 00000001800B997A: lea     r8, [rbp+1180h+var_1078]
 * 00000001800B9981: mov     edx, dword ptr [rbp+1180h+var_CE4]
 * 00000001800B9987: lea     ecx, [r11+8]
 * 00000001800B998B: call    RtlUIntAdd
 * 00000001800B9990: mov     edi, eax
 * 00000001800B9992: test    eax, eax
 * 00000001800B9994: js      loc_1800B9AA8
 * 00000001800B999A: mov     ecx, [rbp+1180h+var_1078]
 * 00000001800B99A0: lea     rdx, [rcx+7]
 * 00000001800B99A4: and     edx, 0FFFFFFF8h
 * 00000001800B99A7: cmp     edx, ecx
 * 00000001800B99A9: jb      loc_1800BBD43
 * 00000001800B99AF: mov     [rbp+1180h+var_1078], edx
 * 00000001800B99B5: mov     edi, edx
 * 00000001800B99B7: call    cs:__imp_GetProcessHeap
 * 00000001800B99BE: nop     dword ptr [rax+rax+00h]
 * 00000001800B99C3: mov     rcx, rax; hHeap
 * 00000001800B99C6: mov     r8d, edi; dwBytes
 * 00000001800B99C9: mov     edx, 8; dwFlags
 * 00000001800B99CE: call    cs:__imp_HeapAlloc
 * 00000001800B99D5: nop     dword ptr [rax+rax+00h]
 * 00000001800B99DA: mov     r9, rax
 * 00000001800B99DD: mov     [rbp+1180h+var_1148], rax
 * 00000001800B99E1: test    rax, rax
 * 00000001800B99E4: jz      loc_1800BBD43
 * 00000001800B99EA: mov     [rbp+1180h+var_E48], rax
 * 00000001800B99F1: mov     eax, [rbp+1180h+var_CE8]
 * 00000001800B99F7: mov     [r9], eax
 * 00000001800B99FA: lea     r8, [rbp+1180h+var_E48]
 * 00000001800B9A01: mov     r10d, 4
 * 00000001800B9A07: mov     edx, r10d
 * 00000001800B9A0A: mov     rcx, r9
 * 00000001800B9A0D: call    RtlULongLongAdd
 * 00000001800B9A12: mov     edi, eax
 * 00000001800B9A14: test    eax, eax
 * 00000001800B9A16: js      short loc_1800B9A7D
 * 00000001800B9A18: mov     rcx, [rbp+1180h+var_E48]
 * 00000001800B9A1F: mov     eax, dword ptr [rbp+1180h+var_CE4]
 * 00000001800B9A25: mov     [rcx], eax
 * 00000001800B9A27: lea     r8, [rbp+1180h+var_E48]
 * 00000001800B9A2E: mov     edx, r10d
 * 00000001800B9A31: call    RtlULongLongAdd
 * 00000001800B9A36: mov     edi, eax
 * 00000001800B9A38: test    eax, eax
 * 00000001800B9A3A: js      short loc_1800B9A7D
 * 00000001800B9A3C: mov     eax, [rbp+1180h+var_1078]
 * 00000001800B9A42: mov     rcx, [rbp+1180h+var_11E0]
 * 00000001800B9A46: mov     [rax+r9-8], rcx
 * 00000001800B9A4B: mov     r8d, dword ptr [rbp+1180h+var_CE4]; Size
 * 00000001800B9A52: mov     rdx, [rbp+1180h+var_CE4+4]; Src
 * 00000001800B9A59: mov     rcx, [rbp+1180h+var_E48]; void *
 * 00000001800B9A60: call    memcpy_0
 * 00000001800B9A65: mov     r9, [rbp+1180h+var_1148]
 * 00000001800B9A69: mov     [rbp+1180h+var_1178], r9
 * 00000001800B9A6D: mov     eax, [rbp+1180h+var_1078]
 * 00000001800B9A73: mov     r10, [rsp+1280h+var_1220]
 * 00000001800B9A78: mov     r11, r10
 * 00000001800B9A7B: jmp     short loc_1800B9AAB
 * 00000001800B9A7D: call    cs:__imp_GetProcessHeap
 * 00000001800B9A84: nop     dword ptr [rax+rax+00h]
 * 00000001800B9A89: mov     rcx, rax; hHeap
 * 00000001800B9A8C: mov     r8, [rbp+1180h+var_1148]; lpMem
 * 00000001800B9A90: xor     edx, edx; dwFlags
 * 00000001800B9A92: call    cs:__imp_HeapFree
 * 00000001800B9A99: nop     dword ptr [rax+rax+00h]
 * 00000001800B9A9E: mov     r9, [rbp+1180h+var_1178]
 * 00000001800B9AA2: mov     r10, r9
 * 00000001800B9AA5: mov     r11, r9
 * 00000001800B9AA8: mov     eax, r9d
 * 00000001800B9AAB: or      edi, 10000000h
 * 00000001800B9AB1: jl      loc_1800BBAB2
 * 00000001800B9AB7: test    r9, r9
 * 00000001800B9ABA: jz      loc_1800BBD43
 * 00000001800B9AC0: mov     edi, eax
 * 00000001800B9AC2: mov     [rbp+1180h+var_11E0], rdi
 * 00000001800B9AC6: test    eax, eax
 * 00000001800B9AC8: jz      loc_1800BBAA2
 * 00000001800B9ACE: lea     rcx, [rdi+8]; unsigned __int64
 * 00000001800B9AD2: call    ??2@YAPEAX_K@Z; operator new(unsigned __int64)
 * 00000001800B9AD7: mov     r11, rax
 * 00000001800B9ADA: mov     [rbp+1180h+var_1148], rax
 * 00000001800B9ADE: test    rax, rax
 * 00000001800B9AE1: jz      loc_1800BBAA2
 * 00000001800B9AE7: xor     dl, dl
 * 00000001800B9AE9: mov     dword ptr [rbp+1180h+var_11D0], edx
 * 00000001800B9AEC: xor     eax, eax
 * 00000001800B9AEE: mov     ecx, eax
 * 00000001800B9AF0: mov     rax, [rbp+1180h+var_1178]
 * 00000001800B9AF4: test    rdi, rdi
 * 00000001800B9AF7: jz      loc_1800B9B81
 * 00000001800B9AFD: cmp     rdi, 20h ; ' '
 * 00000001800B9B01: jb      short loc_1800B9B73
 * 00000001800B9B03: mov     edx, edi
 * 00000001800B9B05: and     rdx, 0FFFFFFFFFFFFFFE0h
 * 00000001800B9B09: xorps   xmm1, xmm1
 * 00000001800B9B0C: xorps   xmm2, xmm2
 * 00000001800B9B0F: movdqu  xmm0, xmmword ptr [rcx+rax]
 * 00000001800B9B14: pxor    xmm1, xmm0
 * 00000001800B9B18: movdqu  xmm0, xmmword ptr [rcx+rax+10h]
 * 00000001800B9B1E: pxor    xmm0, xmm2
 * 00000001800B9B22: movdqa  xmm2, xmm0
 * 00000001800B9B26: add     rcx, 20h ; ' '
 * 00000001800B9B2A: cmp     rcx, rdx
 * 00000001800B9B2D: jb      short loc_1800B9B0F
 * 00000001800B9B2F: pxor    xmm1, xmm0
 * 00000001800B9B33: movdqa  xmm0, xmm1
 * 00000001800B9B37: psrldq  xmm0, 8
 * 00000001800B9B3C: pxor    xmm1, xmm0
 * 00000001800B9B40: movdqa  xmm0, xmm1
 * 00000001800B9B44: psrldq  xmm0, 4
 * 00000001800B9B49: pxor    xmm1, xmm0
 * 00000001800B9B4D: movdqa  xmm0, xmm1
 * 00000001800B9B51: psrldq  xmm0, 2
 * 00000001800B9B56: pxor    xmm1, xmm0
 * 00000001800B9B5A: movdqa  xmm0, xmm1
 * 00000001800B9B5E: psrldq  xmm0, 1
 * 00000001800B9B63: pxor    xmm1, xmm0
 * 00000001800B9B67: movd    edx, xmm1
 * 00000001800B9B6B: mov     dword ptr [rbp+1180h+var_11D0], edx
 * 00000001800B9B6E: cmp     rcx, rdi
 * 00000001800B9B71: jnb     short loc_1800B9B81
 * 00000001800B9B73: xor     dl, [rcx+rax]
 * 00000001800B9B76: inc     rcx
 * 00000001800B9B79: cmp     rcx, rdi
 * 00000001800B9B7C: jb      short loc_1800B9B73
 * 00000001800B9B7E: mov     dword ptr [rbp+1180h+var_11D0], edx
 * 00000001800B9B81: mov     [rbp+1180h+var_7F0], rbx
 * 00000001800B9B88: mov     r8, rax
 * 00000001800B9B8B: mov     rcx, r11
 * 00000001800B9B8E: mov     [rbp+1180h+var_1168], rcx
 * 00000001800B9B92: xor     edx, edx
 * 00000001800B9B94: mov     r9d, edx
 * 00000001800B9B97: mov     r10d, 0FFFFFFFFh
 * 00000001800B9B9D: mov     dword ptr [rbp+1180h+var_1180], edx
 * 00000001800B9BA0: mov     dword ptr [rbp+1180h+psz], edx
 * 00000001800B9BA3: mov     rdx, rdi
 * 00000001800B9BA6: and     edx, 7
 * 00000001800B9BA9: jz      loc_1800B9C86
 * 00000001800B9BAF: xor     ecx, ecx
 * 00000001800B9BB1: mov     r10d, ecx
 * 00000001800B9BB4: mov     dword ptr [rbp+1180h+var_1200], ecx
 * 00000001800B9BB7: test    edx, edx
 * 00000001800B9BB9: jz      loc_1800BA175
 * 00000001800B9BBF: mov     esi, r14d
 * 00000001800B9BC2: movzx   r11d, byte ptr [r8]
 * 00000001800B9BC6: inc     r8
 * 00000001800B9BC9: cmp     ecx, 4
 * 00000001800B9BCC: jge     short loc_1800B9BD9
 * 00000001800B9BCE: lea     ecx, [rsi-20h]
 * 00000001800B9BD1: shl     r11d, cl
 * 00000001800B9BD4: or      r9d, r11d
 * 00000001800B9BD7: jmp     short loc_1800B9BE1
 * 00000001800B9BD9: mov     ecx, esi
 * 00000001800B9BDB: shl     r11d, cl
 * 00000001800B9BDE: or      r10d, r11d
 * 00000001800B9BE1: mov     dword ptr [rbp+1180h+var_1180], r10d
 * 00000001800B9BE5: mov     dword ptr [rbp+1180h+psz], r9d
 * 00000001800B9BE9: mov     ecx, dword ptr [rbp+1180h+var_1200]
 * 00000001800B9BEC: inc     ecx
 * 00000001800B9BEE: mov     dword ptr [rbp+1180h+var_1200], ecx
 * 00000001800B9BF1: sub     esi, 8
 * 00000001800B9BF4: cmp     ecx, edx
 * 00000001800B9BF6: jl      short loc_1800B9BC2
 * 00000001800B9BF8: xor     r9d, 0B17A307Ah
 * 00000001800B9BFF: xor     r10d, 42F6B18Dh
 * 00000001800B9C06: xor     ecx, ecx
 * 00000001800B9C08: mov     ebx, ecx
 * 00000001800B9C0A: mov     ecx, r9d
 * 00000001800B9C0D: mov     r11d, r10d
 * 00000001800B9C10: mov     [rbp+1180h+var_1178], rax
 * 00000001800B9C14: mov     rsi, 7F1137FAB69605Eh
 * 00000001800B9C1E: mov     rax, [rbp+1180h+var_1168]
 * 00000001800B9C22: lea     r13, [rax+1]
 * 00000001800B9C26: mov     [rbp+1180h+var_1168], r13
 * 00000001800B9C2A: cmp     ebx, 4
 * 00000001800B9C2D: jge     short loc_1800B9C37
 * 00000001800B9C2F: rol     ecx, 8
 * 00000001800B9C32: mov     r13d, ecx
 * 00000001800B9C35: jmp     short loc_1800B9C3E
 * 00000001800B9C37: rol     r11d, 8
 * 00000001800B9C3B: mov     r13d, r11d
 * 00000001800B9C3E: mov     [rax], r13b
 * 00000001800B9C41: inc     ebx
 * 00000001800B9C43: mov     r13, [rbp+1180h+var_1168]
 * 00000001800B9C47: mov     rax, r13
 * 00000001800B9C4A: cmp     ebx, edx
 * 00000001800B9C4C: jl      short loc_1800B9C22
 * 00000001800B9C4E: mov     rcx, r13
 * 00000001800B9C51: mov     [rbp+1180h+var_1168], rcx
 * 00000001800B9C55: cmp     edx, 4
 * 00000001800B9C58: mov     rbx, 0C81ECB17B1B54A58h
 * 00000001800B9C62: mov     r13d, [rbp+1180h+var_10C8]
 * 00000001800B9C69: jbe     loc_1800BA161
 * 00000001800B9C6F: mov     ecx, 8
 * 00000001800B9C74: sub     ecx, edx
 * 00000001800B9C76: shl     ecx, 3
 * 00000001800B9C79: shr     r10d, cl
 * 00000001800B9C7C: shl     r10d, cl
 * 00000001800B9C7F: mov     rcx, rax
 * 00000001800B9C82: mov     r11, [rbp+1180h+var_1148]
 * 00000001800B9C86: mov     rax, rdi
 * 00000001800B9C89: shr     rax, 3
 * 00000001800B9C8D: mov     [rbp+1180h+var_1168], rax
 * 00000001800B9C91: test    rax, rax
 * 00000001800B9C94: jz      loc_1800B9FD7
 * 00000001800B9C9A: mov     edx, dword ptr [rbp+1180h+var_7F0+4]
 * 00000001800B9CA0: mov     r12d, edx
 * 00000001800B9CA3: shr     r12d, 10h
 * 00000001800B9CA7: movzx   eax, bx
 * 00000001800B9CAA: mov     dword ptr [rbp+1180h+var_1200], eax
 * 00000001800B9CAD: movzx   eax, word ptr [rbp+1180h+var_7F0+2]
 * 00000001800B9CB4: mov     dword ptr [rsp+1280h+var_1218], eax
 * 00000001800B9CB8: movzx   r14d, dx
 * 00000001800B9CBC: movzx   eax, bx
 * 00000001800B9CBF: mov     dword ptr [rbp+1180h+var_1198], eax
 * 00000001800B9CC2: mov     eax, edx
 * 00000001800B9CC4: xor     eax, ebx
 * 00000001800B9CC6: add     rcx, 7
 * 00000001800B9CCA: mov     [rbp+1180h+var_11F8], rcx
 * 00000001800B9CCE: lea     rcx, [r8+2]
 * 00000001800B9CD2: mov     rsi, [rbp+1180h+var_1168]
 * 00000001800B9CD6: mov     r15d, eax
 * 00000001800B9CD9: mov     r13d, dword ptr [rbp+1180h+var_1180]
 * 00000001800B9CDD: mov     r11d, dword ptr [rbp+1180h+psz]
 * 00000001800B9CE1: movzx   r8d, byte ptr [rcx-2]
 * 00000001800B9CE6: shl     r8d, 8
 * 00000001800B9CEA: movzx   eax, byte ptr [rcx-1]
 * 00000001800B9CEE: or      r8d, eax
 * 00000001800B9CF1: shl     r8d, 8
 * 00000001800B9CF5: movzx   eax, byte ptr [rcx]
 * 00000001800B9CF8: or      r8d, eax
 * 00000001800B9CFB: shl     r8d, 8
 * 00000001800B9CFF: movzx   eax, byte ptr [rcx+1]
 * 00000001800B9D03: or      r8d, eax
 * 00000001800B9D06: movzx   edi, byte ptr [rcx+2]
 * 00000001800B9D0A: shl     edi, 8
 * 00000001800B9D0D: movzx   eax, byte ptr [rcx+3]
 * 00000001800B9D11: or      edi, eax
 * 00000001800B9D13: shl     edi, 8
 * 00000001800B9D16: movzx   eax, byte ptr [rcx+4]
 * 00000001800B9D1A: or      edi, eax
 * 00000001800B9D1C: shl     edi, 8
 * 00000001800B9D1F: movzx   eax, byte ptr [rcx+5]
 * 00000001800B9D23: or      edi, eax
 * 00000001800B9D25: xor     r10d, edi
 * 00000001800B9D28: add     rcx, 8
 * 00000001800B9D2C: mov     [rbp+1180h+var_1168], rcx
 * 00000001800B9D30: mov     eax, r10d
 * 00000001800B9D33: sub     eax, dword ptr [rbp+1180h+var_1200]
 * 00000001800B9D36: xor     eax, edx
 * 00000001800B9D38: xor     eax, r8d
 * 00000001800B9D3B: xor     r9d, eax
 * 00000001800B9D3E: mov     ecx, edx
 * 00000001800B9D40: xor     ecx, r9d
 * 00000001800B9D43: ror     ecx, 0Fh
 * 00000001800B9D46: mov     eax, r9d
 * 00000001800B9D49: ror     eax, 7
 * 00000001800B9D4C: movzx   edx, word ptr [rbp+1180h+var_7F0+2]
 * 00000001800B9D53: imul    ecx, edx
 * 00000001800B9D56: add     eax, ecx
 * 00000001800B9D58: xor     r10d, eax
 * 00000001800B9D5B: lea     ecx, [rbx+r10]
 * 00000001800B9D5F: ror     ecx, 9
 * 00000001800B9D62: mov     eax, r10d
 * 00000001800B9D65: ror     eax, 0Ah
 * 00000001800B9D68: imul    ecx, r14d
 * 00000001800B9D6C: sub     ecx, eax
 * 00000001800B9D6E: xor     r9d, ecx
 * 00000001800B9D71: mov     edx, r9d
 * 00000001800B9D74: xor     edx, r14d
 * 00000001800B9D77: rol     edx, 4
 * 00000001800B9D7A: mov     ecx, r9d
 * 00000001800B9D7D: rol     ecx, 5
 * 00000001800B9D80: mov     eax, r12d
 * 00000001800B9D83: imul    eax, edx
 * 00000001800B9D86: add     ecx, eax
 * 00000001800B9D88: xor     r10d, ecx
 * 00000001800B9D8B: mov     eax, ebx
 * 00000001800B9D8D: xor     eax, r10d
 * 00000001800B9D90: mov     ecx, dword ptr [rbp+1180h+var_7F0+4]
 * 00000001800B9D96: sub     ecx, eax
 * 00000001800B9D98: xor     r9d, ecx
 * 00000001800B9D9B: mov     ecx, r9d
 * 00000001800B9D9E: sub     ecx, dword ptr [rbp+1180h+var_1198]
 * 00000001800B9DA1: movzx   eax, word ptr [rbp+1180h+var_7F0+2]
 * 00000001800B9DA8: imul    ecx, eax
 * 00000001800B9DAB: mov     eax, r9d
 * 00000001800B9DAE: shr     eax, 6
 * 00000001800B9DB1: sub     ecx, eax
 * 00000001800B9DB3: xor     r10d, ecx
 * 00000001800B9DB6: mov     eax, r10d
 * 00000001800B9DB9: ror     eax, 0Fh
 * 00000001800B9DBC: xor     eax, r14d
 * 00000001800B9DBF: imul    eax, dword ptr [rbp+1180h+var_1198]
 * 00000001800B9DC3: xor     r9d, eax
 * 00000001800B9DC6: mov     eax, r9d
 * 00000001800B9DC9: not     eax
 * 00000001800B9DCB: ror     eax, 3
 * 00000001800B9DCE: add     eax, r12d
 * 00000001800B9DD1: imul    eax, r14d
 * 00000001800B9DD5: xor     r10d, eax
 * 00000001800B9DD8: mov     eax, r10d
 * 00000001800B9DDB: sub     eax, dword ptr [rbp+1180h+var_1200]
 * 00000001800B9DDE: sub     eax, dword ptr [rbp+1180h+var_7F0+4]
 * 00000001800B9DE4: xor     r9d, eax
 * 00000001800B9DE7: mov     ecx, r9d
 * 00000001800B9DEA: ror     ecx, 0Ah
 * 00000001800B9DED: mov     eax, r12d
 * 00000001800B9DF0: xor     eax, r9d
 * 00000001800B9DF3: movzx   edx, word ptr [rbp+1180h+var_7F0+2]
 * 00000001800B9DFA: imul    eax, edx
 * 00000001800B9DFD: xor     ecx, eax
 * 00000001800B9DFF: xor     r10d, ecx
 * 00000001800B9E02: mov     ecx, dword ptr [rbp+1180h+var_1198]
 * 00000001800B9E05: xor     ecx, r10d
 * 00000001800B9E08: rol     ecx, 6
 * 00000001800B9E0B: mov     eax, r10d
 * 00000001800B9E0E: ror     eax, 3
 * 00000001800B9E11: imul    ecx, r14d
 * 00000001800B9E15: xor     eax, ecx
 * 00000001800B9E17: xor     r9d, eax
 * 00000001800B9E1A: mov     eax, r9d
 * 00000001800B9E1D: ror     eax, 0Fh
 * 00000001800B9E20: sub     eax, r12d
 * 00000001800B9E23: imul    eax, dword ptr [rbp+1180h+var_1198]
 * 00000001800B9E27: xor     r10d, eax
 * 00000001800B9E2A: mov     ecx, r12d
 * 00000001800B9E2D: xor     ecx, r10d
 * 00000001800B9E30: imul    ecx, dword ptr [rbp+1180h+var_1200]
 * 00000001800B9E34: mov     eax, r10d
 * 00000001800B9E37: shr     eax, 1
 * 00000001800B9E39: xor     ecx, eax
 * 00000001800B9E3B: xor     r9d, ecx
 * 00000001800B9E3E: mov     eax, r10d
 * 00000001800B9E41: sub     eax, r14d
 * 00000001800B9E44: rol     eax, 3
 * 00000001800B9E47: mov     ecx, dword ptr [rbp+1180h+var_1200]
 * 00000001800B9E4A: imul    ecx, eax
 * 00000001800B9E4D: mov     eax, r10d
 * 00000001800B9E50: shr     eax, 0Fh
 * 00000001800B9E53: xor     ecx, eax
 * 00000001800B9E55: xor     r9d, ecx
 * 00000001800B9E58: mov     ecx, r9d
 * 00000001800B9E5B: sub     ecx, r14d
 * 00000001800B9E5E: imul    ecx, edx
 * 00000001800B9E61: mov     eax, r9d
 * 00000001800B9E64: shr     eax, 0Dh
 * 00000001800B9E67: sub     ecx, eax
 * 00000001800B9E69: xor     r10d, ecx
 * 00000001800B9E6C: mov     ecx, ebx
 * 00000001800B9E6E: sub     ecx, r10d
 * 00000001800B9E71: ror     ecx, 9
 * 00000001800B9E74: mov     eax, r10d
 * 00000001800B9E77: ror     eax, 0Bh
 * 00000001800B9E7A: imul    ecx, r14d
 * 00000001800B9E7E: xor     eax, ecx
 * 00000001800B9E80: xor     r9d, eax
 * 00000001800B9E83: mov     eax, r9d
 * 00000001800B9E86: sub     eax, r12d
 * 00000001800B9E89: sub     eax, ebx
 * 00000001800B9E8B: xor     r10d, eax
 * 00000001800B9E8E: mov     eax, r10d
 * 00000001800B9E91: ror     eax, 7
 * 00000001800B9E94: mov     ecx, r10d
 * 00000001800B9E97: xor     ecx, edx
 * 00000001800B9E99: imul    ecx, dword ptr [rbp+1180h+var_1200]
 * 00000001800B9E9D: sub     ecx, eax
 * 00000001800B9E9F: xor     r9d, ecx
 * 00000001800B9EA2: mov     ecx, r12d
 * 00000001800B9EA5: xor     ecx, r9d
 * 00000001800B9EA8: rol     ecx, 4
 * 00000001800B9EAB: mov     eax, r9d
 * 00000001800B9EAE: ror     eax, 10h
 * 00000001800B9EB1: imul    ecx, edx
 * 00000001800B9EB4: sub     ecx, eax
 * 00000001800B9EB6: xor     r10d, ecx
 * 00000001800B9EB9: mov     ecx, ebx
 * 00000001800B9EBB: sub     ecx, r10d
 * 00000001800B9EBE: ror     ecx, 0Ah
 * 00000001800B9EC1: mov     eax, r10d
 * 00000001800B9EC4: ror     eax, 4
 * 00000001800B9EC7: imul    ecx, r14d
 * 00000001800B9ECB: add     eax, ecx
 * 00000001800B9ECD: xor     r9d, eax
 * 00000001800B9ED0: mov     edx, r9d
 * 00000001800B9ED3: sub     edx, ebx
 * 00000001800B9ED5: ror     edx, 4
 * 00000001800B9ED8: mov     ecx, r9d
 * 00000001800B9EDB: ror     ecx, 9
 * 00000001800B9EDE: mov     eax, r12d
 * 00000001800B9EE1: imul    eax, edx
 * 00000001800B9EE4: xor     ecx, eax
 * 00000001800B9EE6: xor     r10d, ecx
 * 00000001800B9EE9: mov     edx, dword ptr [rbp+1180h+var_7F0+4]
 * 00000001800B9EEF: xor     edx, r10d
 * 00000001800B9EF2: rol     edx, 8
 * 00000001800B9EF5: mov     eax, r10d
 * 00000001800B9EF8: rol     eax, 2
 * 00000001800B9EFB: mov     ecx, dword ptr [rbp+1180h+var_1200]
 * 00000001800B9EFE: imul    ecx, edx
 * 00000001800B9F01: sub     ecx, eax
 * 00000001800B9F03: xor     r9d, ecx
 * 00000001800B9F06: mov     edx, dword ptr [rbp+1180h+var_7F0+4]
 * 00000001800B9F0C: mov     ecx, edx
 * 00000001800B9F0E: sub     ecx, r9d
 * 00000001800B9F11: ror     ecx, 0Bh
 * 00000001800B9F14: mov     eax, r9d
 * 00000001800B9F17: ror     eax, 0Ch
 * 00000001800B9F1A: imul    ecx, dword ptr [rsp+1280h+var_1218]
 * 00000001800B9F1F: sub     ecx, eax
 * 00000001800B9F21: xor     r10d, ecx
 * 00000001800B9F24: mov     ecx, r10d
 * 00000001800B9F27: movzx   eax, word ptr [rbp+1180h+var_7F0+2]
 * 00000001800B9F2E: xor     ecx, eax
 * 00000001800B9F30: imul    ecx, r14d
 * 00000001800B9F34: mov     eax, r10d
 * 00000001800B9F37: shr     eax, 8
 * 00000001800B9F3A: xor     ecx, eax
 * 00000001800B9F3C: xor     r9d, ecx
 * 00000001800B9F3F: mov     eax, r15d
 * 00000001800B9F42: xor     eax, r9d
 * 00000001800B9F45: xor     r10d, eax
 * 00000001800B9F48: xor     r9d, r11d
 * 00000001800B9F4B: xor     r10d, r13d
 * 00000001800B9F4E: mov     rax, [rbp+1180h+var_11F8]
 * 00000001800B9F52: mov     [rax-4], r9b
 * 00000001800B9F56: ror     r9d, 8
 * 00000001800B9F5A: mov     [rax], r10b
 * 00000001800B9F5D: ror     r10d, 8
 * 00000001800B9F61: mov     [rax-5], r9b
 * 00000001800B9F65: ror     r9d, 8
 * 00000001800B9F69: mov     [rax-1], r10b
 * 00000001800B9F6D: ror     r10d, 8
 * 00000001800B9F71: mov     [rax-6], r9b
 * 00000001800B9F75: ror     r9d, 8
 * 00000001800B9F79: mov     [rax-2], r10b
 * 00000001800B9F7D: ror     r10d, 8
 * 00000001800B9F81: mov     [rax-7], r9b
 * 00000001800B9F85: mov     [rax-3], r10b
 * 00000001800B9F89: ror     r9d, 8
 * 00000001800B9F8D: ror     r10d, 8
 * 00000001800B9F91: mov     r11d, r8d
 * 00000001800B9F94: mov     r13d, edi
 * 00000001800B9F97: add     rax, 8
 * 00000001800B9F9B: mov     [rbp+1180h+var_11F8], rax
 * 00000001800B9F9F: sub     rsi, 1
 * 00000001800B9FA3: mov     rcx, [rbp+1180h+var_1168]
 * 00000001800B9FA7: jnz     loc_1800B9CE1
 * 00000001800B9FAD: mov     rsi, 7F1137FAB69605Eh
 * 00000001800B9FB7: mov     r15, [rbp+1180h+var_1128]
 * 00000001800B9FBB: lea     r12, [r15+0C0h]
 * 00000001800B9FC2: mov     r13d, [rbp+1180h+var_10C8]
 * 00000001800B9FC9: mov     r14d, 38h ; '8'
 * 00000001800B9FCF: mov     rdi, [rbp+1180h+var_11E0]
 * 00000001800B9FD3: mov     r11, [rbp+1180h+var_1148]
 * 00000001800B9FD7: movzx   eax, byte ptr [rbp+1180h+var_11D0]
 * 00000001800B9FDB: mov     [r11+rdi], rax
 * 00000001800B9FDF: lea     rbx, [rdi+8]
 * 00000001800B9FE3: mov     [rbp+1180h+var_E38], rbx
 * 00000001800B9FEA: mov     [rbp+1180h+var_E30], 8
 * 00000001800B9FF5: mov     [rbp+1180h+var_E28], 0A0h
 * 00000001800BA000: call    cs:__imp_GetProcessHeap
 * 00000001800BA007: nop     dword ptr [rax+rax+00h]
 * 00000001800BA00C: mov     rcx, rax; hHeap
 * 00000001800BA00F: mov     edx, 8; dwFlags
 * 00000001800BA014: lea     r8d, [rdx+28h]; dwBytes
 * 00000001800BA018: call    cs:__imp_HeapAlloc
 * 00000001800BA01F: nop     dword ptr [rax+rax+00h]
 * 00000001800BA024: mov     rdi, rax
 * 00000001800BA027: test    rax, rax
 * 00000001800BA02A: jz      loc_1800BA249
 * 00000001800BA030: mov     ebx, ebx
 * 00000001800BA032: mov     [rax], ebx
 * 00000001800BA034: call    cs:__imp_GetProcessHeap
 * 00000001800BA03B: nop     dword ptr [rax+rax+00h]
 * 00000001800BA040: mov     rcx, rax; hHeap
 * 00000001800BA043: mov     r8d, ebx; dwBytes
 * 00000001800BA046: mov     edx, 8; dwFlags
 * 00000001800BA04B: call    cs:__imp_HeapAlloc
 * 00000001800BA052: nop     dword ptr [rax+rax+00h]
 * 00000001800BA057: test    rax, rax
 * 00000001800BA05A: jz      loc_1800BA19C
 * 00000001800BA060: mov     [rdi+8], rax
 * 00000001800BA064: mov     r8d, ebx; Size
 * 00000001800BA067: mov     rdx, [rbp+1180h+var_1148]; Src
 * 00000001800BA06B: mov     rcx, rax; void *
 * 00000001800BA06E: call    memcpy_0
 * 00000001800BA073: mov     dword ptr [rdi+10h], 0A0h
 * 00000001800BA07A: call    cs:__imp_GetProcessHeap
 * 00000001800BA081: nop     dword ptr [rax+rax+00h]
 * 00000001800BA086: mov     rcx, rax; hHeap
 * 00000001800BA089: mov     edx, 8; dwFlags
 * 00000001800BA08E: mov     r8d, 0A0h; dwBytes
 * 00000001800BA094: call    cs:__imp_HeapAlloc
 * 00000001800BA09B: nop     dword ptr [rax+rax+00h]
 * 00000001800BA0A0: test    rax, rax
 * 00000001800BA0A3: jz      loc_1800BA19C
 * 00000001800BA0A9: mov     [rdi+18h], rax
 * 00000001800BA0AD: lea     rcx, __ImageBase
 * 00000001800BA0B4: lea     rcx, rva unk_1801C1860[rcx]
 * 00000001800BA0BB: movups  xmm0, xmmword ptr [rcx]
 * 00000001800BA0BE: movups  xmmword ptr [rax], xmm0
 * 00000001800BA0C1: movups  xmm1, xmmword ptr [rcx+10h]
 * 00000001800BA0C5: movups  xmmword ptr [rax+10h], xmm1
 * 00000001800BA0C9: movups  xmm0, xmmword ptr [rcx+20h]
 * 00000001800BA0CD: movups  xmmword ptr [rax+20h], xmm0
 * 00000001800BA0D1: movups  xmm1, xmmword ptr [rcx+30h]
 * 00000001800BA0D5: movups  xmmword ptr [rax+30h], xmm1
 * 00000001800BA0D9: movups  xmm0, xmmword ptr [rcx+40h]
 * 00000001800BA0DD: movups  xmmword ptr [rax+40h], xmm0
 * 00000001800BA0E1: movups  xmm1, xmmword ptr [rcx+50h]
 * 00000001800BA0E5: movups  xmmword ptr [rax+50h], xmm1
 * 00000001800BA0E9: movups  xmm0, xmmword ptr [rcx+60h]
 * 00000001800BA0ED: movups  xmmword ptr [rax+60h], xmm0
 * 00000001800BA0F1: movups  xmm1, xmmword ptr [rcx+70h]
 * 00000001800BA0F5: movups  xmmword ptr [rax+70h], xmm1
 * 00000001800BA0F9: movups  xmm0, xmmword ptr [rcx+80h]
 * 00000001800BA100: movups  xmmword ptr [rax+80h], xmm0
 * 00000001800BA107: movups  xmm1, xmmword ptr [rcx+90h]
 * 00000001800BA10E: movups  xmmword ptr [rax+90h], xmm1
 * 00000001800BA115: mov     dword ptr [rdi+20h], 8
 * 00000001800BA11C: call    cs:__imp_GetProcessHeap
 * 00000001800BA123: nop     dword ptr [rax+rax+00h]
 * 00000001800BA128: mov     rcx, rax; hHeap
 * 00000001800BA12B: mov     edx, 8; dwFlags
 * 00000001800BA130: mov     r8d, edx; dwBytes
 * 00000001800BA133: call    cs:__imp_HeapAlloc
 * 00000001800BA13A: nop     dword ptr [rax+rax+00h]
 * 00000001800BA13F: mov     rcx, rax
 * 00000001800BA142: test    rax, rax
 * 00000001800BA145: jz      short loc_1800BA19C
 * 00000001800BA147: mov     [rdi+28h], rax
 * 00000001800BA14B: mov     rax, cs:qword_1801C1900
 * 00000001800BA152: mov     [rcx], rax
 * 00000001800BA155: mov     rbx, rdi
 * 00000001800BA158: xor     ecx, ecx
 * 00000001800BA15A: mov     edi, ecx
 * 00000001800BA15C: jmp     loc_1800BA252
 * 00000001800BA161: xor     eax, eax
 * 00000001800BA163: mov     r10d, eax
 * 00000001800BA166: cmp     edx, 4
 * 00000001800BA169: jnb     loc_1800B9C82
 * 00000001800BA16F: mov     r11, [rbp+1180h+var_1148]
 * 00000001800BA173: jmp     short loc_1800BA183
 * 00000001800BA175: xor     eax, eax
 * 00000001800BA177: mov     r9d, 0B17A307Ah
 * 00000001800BA17D: mov     dword ptr [rbp+1180h+psz], eax
 * 00000001800BA180: mov     dword ptr [rbp+1180h+var_1180], eax
 * 00000001800BA183: mov     ecx, 4
 * 00000001800BA188: sub     ecx, edx
 * 00000001800BA18A: shl     ecx, 3
 * 00000001800BA18D: shr     r9d, cl
 * 00000001800BA190: shl     r9d, cl
 * 00000001800BA193: mov     rcx, [rbp+1180h+var_1168]
 * 00000001800BA197: jmp     loc_1800B9C86
 * 00000001800BA19C: mov     rbx, [rdi+8]
 * 00000001800BA1A0: test    rbx, rbx
 * 00000001800BA1A3: jz      short loc_1800BA1CB
 * 00000001800BA1A5: call    cs:__imp_GetProcessHeap
 * 00000001800BA1AC: nop     dword ptr [rax+rax+00h]
 * 00000001800BA1B1: mov     rcx, rax; hHeap
 * 00000001800BA1B4: mov     r8, rbx; lpMem
 * 00000001800BA1B7: xor     edx, edx; dwFlags
 * 00000001800BA1B9: call    cs:__imp_HeapFree
 * 00000001800BA1C0: nop     dword ptr [rax+rax+00h]
 * 00000001800BA1C5: xor     eax, eax
 * 00000001800BA1C7: mov     [rdi+8], rax
 * 00000001800BA1CB: mov     rbx, [rdi+18h]
 * 00000001800BA1CF: test    rbx, rbx
 * 00000001800BA1D2: jz      short loc_1800BA1FA
 * 00000001800BA1D4: call    cs:__imp_GetProcessHeap
 * 00000001800BA1DB: nop     dword ptr [rax+rax+00h]
 * 00000001800BA1E0: mov     rcx, rax; hHeap
 * 00000001800BA1E3: mov     r8, rbx; lpMem
 * 00000001800BA1E6: xor     edx, edx; dwFlags
 * 00000001800BA1E8: call    cs:__imp_HeapFree
 * 00000001800BA1EF: nop     dword ptr [rax+rax+00h]
 * 00000001800BA1F4: xor     eax, eax
 * 00000001800BA1F6: mov     [rdi+18h], rax
 * 00000001800BA1FA: mov     rbx, [rdi+28h]
 * 00000001800BA1FE: test    rbx, rbx
 * 00000001800BA201: jz      short loc_1800BA229
 * 00000001800BA203: call    cs:__imp_GetProcessHeap
 * 00000001800BA20A: nop     dword ptr [rax+rax+00h]
 * 00000001800BA20F: mov     rcx, rax; hHeap
 * 00000001800BA212: mov     r8, rbx; lpMem
 * 00000001800BA215: xor     edx, edx; dwFlags
 * 00000001800BA217: call    cs:__imp_HeapFree
 * 00000001800BA21E: nop     dword ptr [rax+rax+00h]
 * 00000001800BA223: xor     eax, eax
 * 00000001800BA225: mov     [rdi+28h], rax
 * 00000001800BA229: call    cs:__imp_GetProcessHeap
 * 00000001800BA230: nop     dword ptr [rax+rax+00h]
 * 00000001800BA235: mov     rcx, rax; hHeap
 * 00000001800BA238: mov     r8, rdi; lpMem
 * 00000001800BA23B: xor     edx, edx; dwFlags
 * 00000001800BA23D: call    cs:__imp_HeapFree
 * 00000001800BA244: nop     dword ptr [rax+rax+00h]
 * 00000001800BA249: mov     rbx, [rbp+1180h+Size]
 * 00000001800BA24D: mov     edi, 0C0000017h
 * 00000001800BA252: mov     r8, [rbp+1180h+var_1178]
 * 00000001800BA256: mov     [rbp+1180h+var_1178], r8
 * 00000001800BA25A: call    cs:__imp_GetProcessHeap
 * 00000001800BA261: nop     dword ptr [rax+rax+00h]
 * 00000001800BA266: mov     rcx, rax; hHeap
 * 00000001800BA269: mov     r8, [rbp+1180h+var_1148]; lpMem
 * 00000001800BA26D: xor     edx, edx; dwFlags
 * 00000001800BA26F: call    cs:__imp_HeapFree
 * 00000001800BA276: nop     dword ptr [rax+rax+00h]
 * 00000001800BA27B: xor     eax, eax
 * 00000001800BA27D: mov     r9, [rbp+1180h+var_1178]
 * 00000001800BA281: or      edi, 10000000h
 * 00000001800BA287: jl      loc_1800BBABE
 * 00000001800BA28D: mov     r10d, 4
 * 00000001800BA293: mov     dword ptr [rbp+1180h+var_1074], r10d
 * 00000001800BA29A: lea     r8, [rbp+1180h+var_1074]
 * 00000001800BA2A1: mov     edx, [rbx]
 * 00000001800BA2A3: mov     ecx, r10d
 * 00000001800BA2A6: call    RtlUIntAdd
 * 00000001800BA2AB: mov     edi, eax
 * 00000001800BA2AD: test    eax, eax
 * 00000001800BA2AF: js      short loc_1800BA325
 * 00000001800BA2B1: lea     r8, [rbp+1180h+var_1074]
 * 00000001800BA2B8: mov     edx, r10d
 * 00000001800BA2BB: mov     ecx, dword ptr [rbp+1180h+var_1074]
 * 00000001800BA2C1: call    RtlUIntAdd
 * 00000001800BA2C6: mov     edi, eax
 * 00000001800BA2C8: test    eax, eax
 * 00000001800BA2CA: js      short loc_1800BA325
 * 00000001800BA2CC: lea     r8, [rbp+1180h+var_1074]
 * 00000001800BA2D3: mov     edx, [rbx+10h]
 * 00000001800BA2D6: mov     ecx, dword ptr [rbp+1180h+var_1074]
 * 00000001800BA2DC: call    RtlUIntAdd
 * 00000001800BA2E1: mov     edi, eax
 * 00000001800BA2E3: test    eax, eax
 * 00000001800BA2E5: js      short loc_1800BA325
 * 00000001800BA2E7: lea     r8, [rbp+1180h+var_1074]
 * 00000001800BA2EE: mov     edx, r10d
 * 00000001800BA2F1: mov     ecx, dword ptr [rbp+1180h+var_1074]
 * 00000001800BA2F7: call    RtlUIntAdd
 * 00000001800BA2FC: mov     edi, eax
 * 00000001800BA2FE: test    eax, eax
 * 00000001800BA300: js      short loc_1800BA325
 * 00000001800BA302: lea     r8, [rbp+1180h+var_1074]
 * 00000001800BA309: mov     edx, [rbx+20h]
 * 00000001800BA30C: mov     ecx, dword ptr [rbp+1180h+var_1074]
 * 00000001800BA312: call    RtlUIntAdd
 * 00000001800BA317: mov     edi, eax
 * 00000001800BA319: test    eax, eax
 * 00000001800BA31B: js      short loc_1800BA325
 * 00000001800BA31D: mov     eax, dword ptr [rbp+1180h+var_1074]
 * 00000001800BA323: jmp     short loc_1800BA333
 * 00000001800BA325: test    edi, edi
 * 00000001800BA327: js      loc_1800BA4BF
 * 00000001800BA32D: mov     eax, [rbp+1180h+var_1040]
 * 00000001800BA333: mov     dword ptr [rbp+1180h+var_11D0], eax
 * 00000001800BA336: mov     edi, eax
 * 00000001800BA338: call    cs:__imp_GetProcessHeap
 * 00000001800BA33F: nop     dword ptr [rax+rax+00h]
 * 00000001800BA344: mov     rcx, rax; hHeap
 * 00000001800BA347: mov     r8d, edi; dwBytes
 * 00000001800BA34A: mov     edx, 8; dwFlags
 * 00000001800BA34F: call    cs:__imp_HeapAlloc
 * 00000001800BA356: nop     dword ptr [rax+rax+00h]
 * 00000001800BA35B: mov     rcx, rax
 * 00000001800BA35E: mov     [rbp+1180h+Size], rax
 * 00000001800BA362: test    rax, rax
 * 00000001800BA365: jnz     short loc_1800BA383
 * 00000001800BA367: mov     edi, 0D0000017h
 * 00000001800BA36C: mov     r9, [rbp+1180h+var_1178]
 * 00000001800BA370: mov     r10, [rsp+1280h+var_1220]
 * 00000001800BA375: mov     r11, r10
 * 00000001800BA378: mov     r14, r10
 * 00000001800BA37B: mov     rax, r10
 * 00000001800BA37E: jmp     loc_1800BBAD8
 * 00000001800BA383: mov     [rbp+1180h+var_E20], rcx
 * 00000001800BA38A: mov     eax, [rbx]
 * 00000001800BA38C: mov     [rcx], eax
 * 00000001800BA38E: lea     r8, [rbp+1180h+var_E20]
 * 00000001800BA395: mov     edx, 4
 * 00000001800BA39A: call    RtlULongLongAdd
 * 00000001800BA39F: mov     edi, eax
 * 00000001800BA3A1: test    eax, eax
 * 00000001800BA3A3: js      loc_1800BA49A
 * 00000001800BA3A9: mov     r8d, [rbx]; Size
 * 00000001800BA3AC: mov     rdx, [rbx+8]; Src
 * 00000001800BA3B0: mov     rcx, [rbp+1180h+var_E20]; void *
 * 00000001800BA3B7: call    memcpy_0
 * 00000001800BA3BC: mov     edx, [rbx]
 * 00000001800BA3BE: lea     r8, [rbp+1180h+var_E20]
 * 00000001800BA3C5: mov     rcx, [rbp+1180h+var_E20]
 * 00000001800BA3CC: call    RtlULongLongAdd
 * 00000001800BA3D1: mov     edi, eax
 * 00000001800BA3D3: test    eax, eax
 * 00000001800BA3D5: js      loc_1800BA49A
 * 00000001800BA3DB: mov     eax, [rbx+10h]
 * 00000001800BA3DE: mov     rcx, [rbp+1180h+var_E20]
 * 00000001800BA3E5: mov     [rcx], eax
 * 00000001800BA3E7: lea     r8, [rbp+1180h+var_E20]
 * 00000001800BA3EE: mov     edx, 4
 * 00000001800BA3F3: call    RtlULongLongAdd
 * 00000001800BA3F8: mov     edi, eax
 * 00000001800BA3FA: test    eax, eax
 * 00000001800BA3FC: js      loc_1800BA49A
 * 00000001800BA402: mov     r8d, [rbx+10h]; Size
 * 00000001800BA406: mov     rdx, [rbx+18h]; Src
 * 00000001800BA40A: mov     rcx, [rbp+1180h+var_E20]; void *
 * 00000001800BA411: call    memcpy_0
 * 00000001800BA416: mov     edx, [rbx+10h]
 * 00000001800BA419: lea     r8, [rbp+1180h+var_E20]
 * 00000001800BA420: mov     rcx, [rbp+1180h+var_E20]
 * 00000001800BA427: call    RtlULongLongAdd
 * 00000001800BA42C: mov     edi, eax
 * 00000001800BA42E: test    eax, eax
 * 00000001800BA430: js      short loc_1800BA49A
 * 00000001800BA432: mov     eax, [rbx+20h]
 * 00000001800BA435: mov     rcx, [rbp+1180h+var_E20]
 * 00000001800BA43C: mov     [rcx], eax
 * 00000001800BA43E: lea     r8, [rbp+1180h+var_E20]
 * 00000001800BA445: mov     edx, 4
 * 00000001800BA44A: call    RtlULongLongAdd
 * 00000001800BA44F: mov     edi, eax
 * 00000001800BA451: test    eax, eax
 * 00000001800BA453: js      short loc_1800BA49A
 * 00000001800BA455: mov     r8d, [rbx+20h]; Size
 * 00000001800BA459: mov     rdx, [rbx+28h]; Src
 * 00000001800BA45D: mov     rcx, [rbp+1180h+var_E20]; void *
 * 00000001800BA464: call    memcpy_0
 * 00000001800BA469: mov     edx, [rbx+20h]
 * 00000001800BA46C: lea     r8, [rbp+1180h+var_E20]
 * 00000001800BA473: mov     rcx, [rbp+1180h+var_E20]
 * 00000001800BA47A: call    RtlULongLongAdd
 * 00000001800BA47F: mov     edi, eax
 * 00000001800BA481: test    eax, eax
 * 00000001800BA483: js      short loc_1800BA49A
 * 00000001800BA485: mov     r10, [rbp+1180h+Size]
 * 00000001800BA489: mov     [rsp+1280h+var_1220], r10
 * 00000001800BA48E: mov     eax, dword ptr [rbp+1180h+var_11D0]
 * 00000001800BA491: mov     dword ptr [rbp+1180h+var_11C8], eax
 * 00000001800BA494: mov     r9, [rbp+1180h+var_1178]
 * 00000001800BA498: jmp     short loc_1800BA4C4
 * 00000001800BA49A: call    cs:__imp_GetProcessHeap
 * 00000001800BA4A1: nop     dword ptr [rax+rax+00h]
 * 00000001800BA4A6: mov     rcx, rax; hHeap
 * 00000001800BA4A9: mov     r8, [rbp+1180h+Size]; lpMem
 * 00000001800BA4AD: xor     edx, edx; dwFlags
 * 00000001800BA4AF: call    cs:__imp_HeapFree
 * 00000001800BA4B6: nop     dword ptr [rax+rax+00h]
 * 00000001800BA4BB: mov     r9, [rbp+1180h+var_1178]
 * 00000001800BA4BF: mov     r10, [rsp+1280h+var_1220]
 * 00000001800BA4C4: or      edi, 10000000h
 * 00000001800BA4CA: jl      loc_1800BBACE
 * 00000001800BA4D0: mov     [rbp+1180h+var_106C], 8
 * 00000001800BA4DA: lea     r8, [rbp+1180h+var_106C]
 * 00000001800BA4E1: mov     edx, dword ptr [rsp+1280h+lpMem]
 * 00000001800BA4E5: mov     ecx, 8
 * 00000001800BA4EA: call    RtlUIntAdd
 * 00000001800BA4EF: mov     edi, eax
 * 00000001800BA4F1: or      edi, 10000000h
 * 00000001800BA4F7: jl      loc_1800BA732
 * 00000001800BA4FD: mov     eax, [rbp+1180h+var_106C]
 * 00000001800BA503: lea     rcx, [rax+7]
 * 00000001800BA507: and     ecx, 0FFFFFFF8h
 * 00000001800BA50A: cmp     ecx, eax
 * 00000001800BA50C: jnb     short loc_1800BA518
 * 00000001800BA50E: mov     edi, 0C0000095h
 * 00000001800BA513: jmp     loc_1800BBACE
 * 00000001800BA518: mov     [rbp+1180h+var_1068], ecx
 * 00000001800BA51E: lea     r8, [rbp+1180h+var_1068]
 * 00000001800BA525: mov     edx, 8
 * 00000001800BA52A: call    RtlUIntAdd
 * 00000001800BA52F: mov     edi, eax
 * 00000001800BA531: test    eax, eax
 * 00000001800BA533: js      loc_1800BBACE
 * 00000001800BA539: cmp     [rbp+1180h+var_CE4+4], 0
 * 00000001800BA541: jz      loc_1800BBAC9
 * 00000001800BA547: mov     r11d, [rbp+1180h+var_CE8]
 * 00000001800BA54E: cmp     r11d, 1
 * 00000001800BA552: jbe     loc_1800BBAC9
 * 00000001800BA558: mov     rcx, [rbp+1180h+var_CE4+4]
 * 00000001800BA55F: mov     [rbp+1180h+var_E18], rcx
 * 00000001800BA566: mov     eax, [rcx]
 * 00000001800BA568: mov     dword ptr [rsp+1280h+lpMem], eax
 * 00000001800BA56C: lea     r8, [rbp+1180h+var_E18]
 * 00000001800BA573: mov     edx, 4
 * 00000001800BA578: call    RtlULongLongAdd
 * 00000001800BA57D: mov     edi, eax
 * 00000001800BA57F: test    eax, eax
 * 00000001800BA581: js      loc_1800BA724
 * 00000001800BA587: mov     edx, dword ptr [rsp+1280h+lpMem]
 * 00000001800BA58B: lea     r8, [rbp+1180h+var_E18]
 * 00000001800BA592: mov     rcx, [rbp+1180h+var_E18]
 * 00000001800BA599: call    RtlULongLongAdd
 * 00000001800BA59E: mov     edi, eax
 * 00000001800BA5A0: test    eax, eax
 * 00000001800BA5A2: js      loc_1800BA724
 * 00000001800BA5A8: mov     rcx, [rbp+1180h+var_E18]
 * 00000001800BA5AF: mov     eax, [rcx]
 * 00000001800BA5B1: mov     dword ptr [rsp+1280h+lpMem], eax
 * 00000001800BA5B5: lea     r8, [rbp+1180h+var_E18]
 * 00000001800BA5BC: mov     edx, 4
 * 00000001800BA5C1: call    RtlULongLongAdd
 * 00000001800BA5C6: mov     edi, eax
 * 00000001800BA5C8: test    eax, eax
 * 00000001800BA5CA: js      loc_1800BA724
 * 00000001800BA5D0: mov     [rsp+1280h+var_1220], r10
 * 00000001800BA5D5: mov     [rbp+1180h+var_1178], r9
 * 00000001800BA5D9: cmp     r11d, 2
 * 00000001800BA5DD: jbe     loc_1800BBAC9
 * 00000001800BA5E3: mov     rcx, [rbp+1180h+var_CE4+4]
 * 00000001800BA5EA: mov     [rbp+1180h+var_E10], rcx
 * 00000001800BA5F1: xor     eax, eax
 * 00000001800BA5F3: mov     r11d, eax
 * 00000001800BA5F6: mov     eax, dword ptr [rbp+1180h+var_11C8]
 * 00000001800BA5F9: mov     dword ptr [rbp+1180h+var_11C8], eax
 * 00000001800BA5FC: mov     eax, [rcx]
 * 00000001800BA5FE: mov     dword ptr [rbp+1180h+var_11D0], eax
 * 00000001800BA601: lea     r8, [rbp+1180h+var_E10]
 * 00000001800BA608: mov     edx, 4
 * 00000001800BA60D: call    RtlULongLongAdd
 * 00000001800BA612: mov     edi, eax
 * 00000001800BA614: test    eax, eax
 * 00000001800BA616: js      loc_1800BBACE
 * 00000001800BA61C: mov     edx, dword ptr [rbp+1180h+var_11D0]
 * 00000001800BA61F: lea     r8, [rbp+1180h+var_E10]
 * 00000001800BA626: mov     rcx, [rbp+1180h+var_E10]
 * 00000001800BA62D: call    RtlULongLongAdd
 * 00000001800BA632: mov     edi, eax
 * 00000001800BA634: test    eax, eax
 * 00000001800BA636: js      loc_1800BBACE
 * 00000001800BA63C: inc     r11d
 * 00000001800BA63F: mov     rcx, [rbp+1180h+var_E10]
 * 00000001800BA646: cmp     r11d, 2
 * 00000001800BA64A: jb      short loc_1800BA5FC
 * 00000001800BA64C: mov     r11d, [rcx]
 * 00000001800BA64F: lea     r8, [rbp+1180h+var_E10]
 * 00000001800BA656: mov     edx, 4
 * 00000001800BA65B: call    RtlULongLongAdd
 * 00000001800BA660: mov     edi, eax
 * 00000001800BA662: test    eax, eax
 * 00000001800BA664: js      loc_1800BBACE
 * 00000001800BA66A: mov     eax, 4
 * 00000001800BA66F: mov     dword ptr [rbp+1180h+var_1060], eax
 * 00000001800BA675: lea     r8, [rbp+1180h+var_1060]
 * 00000001800BA67C: mov     edx, [rbp+1180h+var_1068]
 * 00000001800BA682: mov     ecx, eax
 * 00000001800BA684: call    RtlUIntAdd
 * 00000001800BA689: mov     edi, eax
 * 00000001800BA68B: test    eax, eax
 * 00000001800BA68D: js      short loc_1800BA705
 * 00000001800BA68F: lea     r8, [rbp+1180h+var_1060]
 * 00000001800BA696: mov     edx, ecx
 * 00000001800BA698: mov     ecx, dword ptr [rbp+1180h+var_1060]
 * 00000001800BA69E: call    RtlUIntAdd
 * 00000001800BA6A3: mov     edi, eax
 * 00000001800BA6A5: test    eax, eax
 * 00000001800BA6A7: js      short loc_1800BA705
 * 00000001800BA6A9: lea     r8, [rbp+1180h+var_1060]
 * 00000001800BA6B0: mov     edx, dword ptr [rsp+1280h+lpMem]
 * 00000001800BA6B4: mov     ecx, dword ptr [rbp+1180h+var_1060]
 * 00000001800BA6BA: call    RtlUIntAdd
 * 00000001800BA6BF: mov     edi, eax
 * 00000001800BA6C1: test    eax, eax
 * 00000001800BA6C3: js      short loc_1800BA705
 * 00000001800BA6C5: lea     r8, [rbp+1180h+var_1060]
 * 00000001800BA6CC: mov     edx, 4
 * 00000001800BA6D1: mov     ecx, dword ptr [rbp+1180h+var_1060]
 * 00000001800BA6D7: call    RtlUIntAdd
 * 00000001800BA6DC: mov     edi, eax
 * 00000001800BA6DE: test    eax, eax
 * 00000001800BA6E0: js      short loc_1800BA705
 * 00000001800BA6E2: lea     r8, [rbp+1180h+var_1060]
 * 00000001800BA6E9: mov     edx, r11d
 * 00000001800BA6EC: mov     ecx, dword ptr [rbp+1180h+var_1060]
 * 00000001800BA6F2: call    RtlUIntAdd
 * 00000001800BA6F7: mov     edi, eax
 * 00000001800BA6F9: test    eax, eax
 * 00000001800BA6FB: js      short loc_1800BA705
 * 00000001800BA6FD: mov     eax, dword ptr [rbp+1180h+var_1060]
 * 00000001800BA703: jmp     short loc_1800BA70F
 * 00000001800BA705: test    edi, edi
 * 00000001800BA707: js      short loc_1800BA732
 * 00000001800BA709: mov     eax, dword ptr [rbp+1180h+var_1060+4]
 * 00000001800BA70F: mov     dword ptr [rsp+1280h+lpMem], eax
 * 00000001800BA713: cmp     eax, 400000h
 * 00000001800BA718: jbe     short loc_1800BA740
 * 00000001800BA71A: mov     edi, 8000FFFFh
 * 00000001800BA71F: jmp     loc_1800BBACE
 * 00000001800BA724: mov     [rsp+1280h+var_1220], r10
 * 00000001800BA729: mov     [rbp+1180h+var_1178], r9
 * 00000001800BA72D: jmp     loc_1800BBACE
 * 00000001800BA732: xor     eax, eax
 * 00000001800BA734: mov     dword ptr [rsp+1280h+lpMem], eax
 * 00000001800BA738: test    edi, edi
 * 00000001800BA73A: js      loc_1800BBAC1
 * 00000001800BA740: mov     [rbp+1180h+var_11E0], r9
 * 00000001800BA744: mov     [rbp+1180h+var_1148], rbx
 * 00000001800BA748: mov     [rbp+1180h+var_1168], r10
 * 00000001800BA74C: mov     edi, eax
 * 00000001800BA74E: call    cs:__imp_GetProcessHeap
 * 00000001800BA755: nop     dword ptr [rax+rax+00h]
 * 00000001800BA75A: mov     rcx, rax; hHeap
 * 00000001800BA75D: mov     r8d, edi; dwBytes
 * 00000001800BA760: mov     edx, 8; dwFlags
 * 00000001800BA765: call    cs:__imp_HeapAlloc
 * 00000001800BA76C: nop     dword ptr [rax+rax+00h]
 * 00000001800BA771: mov     [rbp+1180h+psz], rax
 * 00000001800BA775: test    rax, rax
 * 00000001800BA778: jnz     short loc_1800BA78D
 * 00000001800BA77A: mov     edi, 0D0000017h
 * 00000001800BA77F: mov     r9, [rbp+1180h+var_1178]
 * 00000001800BA783: mov     r10, [rsp+1280h+var_1220]
 * 00000001800BA788: jmp     loc_1800BBACE
 * 00000001800BA78D: mov     rcx, [rbp+1180h+var_1168]
 * 00000001800BA791: test    rcx, rcx
 * 00000001800BA794: jnz     short loc_1800BA7BE
 * 00000001800BA796: mov     edi, 80070057h
 * 00000001800BA79B: mov     r11, rax
 * 00000001800BA79E: mov     [rbp+1180h+var_11A8], rax
 * 00000001800BA7A2: mov     r10, rcx
 * 00000001800BA7A5: mov     [rsp+1280h+var_1220], rcx
 * 00000001800BA7AA: mov     r9, [rbp+1180h+var_11E0]
 * 00000001800BA7AE: mov     [rbp+1180h+var_1178], r9
 * 00000001800BA7B2: mov     r14, [rbp+1180h+var_11B8]
 * 00000001800BA7B6: mov     rax, r14
 * 00000001800BA7B9: jmp     loc_1800BBAD8
 * 00000001800BA7BE: mov     [rbp+1180h+var_C78], rcx
 * 00000001800BA7C5: mov     eax, dword ptr [rbp+1180h+var_11C8]
 * 00000001800BA7C8: mov     [rbp+1180h+var_C68], eax
 * 00000001800BA7CE: mov     rbx, [rbp+1180h+psz]
 * 00000001800BA7D2: mov     [rbp+1180h+var_C70], rbx
 * 00000001800BA7D9: mov     eax, dword ptr [rsp+1280h+lpMem]
 * 00000001800BA7DD: mov     [rbp+1180h+var_C64], eax
 * 00000001800BA7E3: xor     eax, eax
 * 00000001800BA7E5: mov     [rbp+1180h+var_C60], eax
 * 00000001800BA7EB: lea     r8, [rbp+1180h+hModule]; phModule
 * 00000001800BA7F2: lea     rdx, aNtdllDll_1; "ntdll.dll"
 * 00000001800BA7F9: lea     ecx, [rax+1]; dwFlags
 * 00000001800BA7FC: call    cs:__imp_GetModuleHandleExW
 * 00000001800BA803: nop     dword ptr [rax+rax+00h]
 * 00000001800BA808: test    eax, eax
 * 00000001800BA80A: jnz     loc_1800BA89A
 * 00000001800BA810: call    cs:__imp_GetLastError
 * 00000001800BA817: nop     dword ptr [rax+rax+00h]
 * 00000001800BA81C: mov     edi, eax
 * 00000001800BA81E: test    eax, eax
 * 00000001800BA820: jle     short loc_1800BA82B
 * 00000001800BA822: movzx   edi, ax
 * 00000001800BA825: or      edi, 80070000h
 * 00000001800BA82B: test    edi, edi
 * 00000001800BA82D: js      short loc_1800BA85C
 * 00000001800BA82F: mov     edi, 80004005h
 * 00000001800BA834: mov     r11, rbx
 * 00000001800BA837: mov     [rbp+1180h+var_11A8], rbx
 * 00000001800BA83B: mov     r10, [rbp+1180h+var_1168]
 * 00000001800BA83F: mov     [rsp+1280h+var_1220], r10
 * 00000001800BA844: mov     rbx, [rbp+1180h+var_1148]
 * 00000001800BA848: mov     r9, [rbp+1180h+var_11E0]
 * 00000001800BA84C: mov     [rbp+1180h+var_1178], r9
 * 00000001800BA850: mov     r14, [rbp+1180h+var_11B8]
 * 00000001800BA854: mov     rax, r14
 * 00000001800BA857: jmp     loc_1800BBAD8
 * 00000001800BA85C: mov     r8d, dword ptr [rsp+1280h+lpMem]
 * 00000001800BA861: mov     r11, rbx
 * 00000001800BA864: mov     [rbp+1180h+var_11A8], rbx
 * 00000001800BA868: cmp     edi, 0D0000023h
 * 00000001800BA86E: jnz     loc_1800BA968
 * 00000001800BA874: mov     edi, 8007007Ah
 * 00000001800BA879: mov     r10, [rbp+1180h+var_1168]
 * 00000001800BA87D: mov     [rsp+1280h+var_1220], r10
 * 00000001800BA882: mov     rbx, [rbp+1180h+var_1148]
 * 00000001800BA886: mov     r9, [rbp+1180h+var_11E0]
 * 00000001800BA88A: mov     [rbp+1180h+var_1178], r9
 * 00000001800BA88E: mov     r14, [rbp+1180h+var_11B8]
 * 00000001800BA892: mov     rax, r14
 * 00000001800BA895: jmp     loc_1800BBAD8
 * 00000001800BA89A: lea     rdx, aNtquerysystemi; "NtQuerySystemInformation"
 * 00000001800BA8A1: mov     rcx, [rbp+1180h+hModule]; hModule
 * 00000001800BA8A8: call    cs:__imp_GetProcAddress
 * 00000001800BA8AF: nop     dword ptr [rax+rax+00h]
 * 00000001800BA8B4: test    rax, rax
 * 00000001800BA8B7: jnz     short loc_1800BA914
 * 00000001800BA8B9: call    cs:__imp_GetLastError
 * 00000001800BA8C0: nop     dword ptr [rax+rax+00h]
 * 00000001800BA8C5: mov     edi, eax
 * 00000001800BA8C7: test    eax, eax
 * 00000001800BA8C9: jle     short loc_1800BA8D4
 * 00000001800BA8CB: movzx   edi, ax
 * 00000001800BA8CE: or      edi, 80070000h
 * 00000001800BA8D4: test    edi, edi
 * 00000001800BA8D6: js      short loc_1800BA905
 * 00000001800BA8D8: mov     edi, 80004005h
 * 00000001800BA8DD: mov     r11, rbx
 * 00000001800BA8E0: mov     [rbp+1180h+var_11A8], rbx
 * 00000001800BA8E4: mov     r10, [rbp+1180h+var_1168]
 * 00000001800BA8E8: mov     [rsp+1280h+var_1220], r10
 * 00000001800BA8ED: mov     rbx, [rbp+1180h+var_1148]
 * 00000001800BA8F1: mov     r9, [rbp+1180h+var_11E0]
 * 00000001800BA8F5: mov     [rbp+1180h+var_1178], r9
 * 00000001800BA8F9: mov     r14, [rbp+1180h+var_11B8]
 * 00000001800BA8FD: mov     rax, r14
 * 00000001800BA900: jmp     loc_1800BBAD8
 * 00000001800BA905: mov     r8d, dword ptr [rsp+1280h+lpMem]
 * 00000001800BA90A: mov     dword ptr [rsp+1280h+lpMem], r8d
 * 00000001800BA90F: jmp     loc_1800BA861
 * 00000001800BA914: mov     r10, 86712EA7345E2B70h
 * 00000001800BA91E: xor     r9d, r9d
 * 00000001800BA921: lea     r8d, [r9+20h]
 * 00000001800BA925: lea     rdx, [rbp+1180h+var_C78]
 * 00000001800BA92C: lea     ecx, [r8+66h]
 * 00000001800BA930: call    cs:__guard_xfg_dispatch_icall_fptr
 * 00000001800BA936: mov     edi, eax
 * 00000001800BA938: or      edi, 10000000h
 * 00000001800BA93E: mov     r8d, dword ptr [rsp+1280h+lpMem]
 * 00000001800BA943: mov     dword ptr [rsp+1280h+lpMem], r8d
 * 00000001800BA948: jl      loc_1800BA861
 * 00000001800BA94E: mov     r8d, [rbp+1180h+var_C64]
 * 00000001800BA955: mov     dword ptr [rsp+1280h+lpMem], r8d
 * 00000001800BA95A: mov     rax, [rbp+1180h+var_1168]
 * 00000001800BA95E: mov     rcx, [rbp+1180h+var_11E0]
 * 00000001800BA962: mov     rdx, [rbp+1180h+var_1148]
 * 00000001800BA966: jmp     short loc_1800BA991
 * 00000001800BA968: mov     rax, [rbp+1180h+var_1168]
 * 00000001800BA96C: mov     r10, rax
 * 00000001800BA96F: mov     [rsp+1280h+var_1220], rax
 * 00000001800BA974: mov     rdx, [rbp+1180h+var_1148]
 * 00000001800BA978: mov     rbx, rdx
 * 00000001800BA97B: mov     rcx, [rbp+1180h+var_11E0]
 * 00000001800BA97F: mov     r9, rcx
 * 00000001800BA982: mov     [rbp+1180h+var_1178], rcx
 * 00000001800BA986: test    edi, edi
 * 00000001800BA988: js      loc_1800BA7B2
 * 00000001800BA98E: mov     rbx, r11
 * 00000001800BA991: xor     edi, edi
 * 00000001800BA993: mov     [rbp+1180h+var_1058], edi
 * 00000001800BA999: mov     [rbp+1180h+var_E00], rbx
 * 00000001800BA9A0: cmp     r8d, 4
 * 00000001800BA9A4: jnb     short loc_1800BA9D0
 * 00000001800BA9A6: mov     edi, 0D000003Eh
 * 00000001800BA9AB: mov     r11, rbx
 * 00000001800BA9AE: mov     [rbp+1180h+var_11A8], rbx
 * 00000001800BA9B2: mov     r10, rax
 * 00000001800BA9B5: mov     [rsp+1280h+var_1220], rax
 * 00000001800BA9BA: mov     rbx, rdx
 * 00000001800BA9BD: mov     r9, rcx
 * 00000001800BA9C0: mov     [rbp+1180h+var_1178], rcx
 * 00000001800BA9C4: mov     r14, [rbp+1180h+var_11B8]
 * 00000001800BA9C8: mov     rax, r14
 * 00000001800BA9CB: jmp     loc_1800BBAD8
 * 00000001800BA9D0: mov     eax, [rbx]
 * 00000001800BA9D2: mov     dword ptr [rbp+1180h+var_11D0], eax
 * 00000001800BA9D5: lea     r8, [rbp+1180h+var_E00]
 * 00000001800BA9DC: mov     edx, 4
 * 00000001800BA9E1: mov     rcx, rbx
 * 00000001800BA9E4: call    RtlULongLongAdd
 * 00000001800BA9E9: mov     edi, eax
 * 00000001800BA9EB: mov     r11, rbx
 * 00000001800BA9EE: mov     [rbp+1180h+var_11A8], rbx
 * 00000001800BA9F2: mov     r10, [rbp+1180h+var_1168]
 * 00000001800BA9F6: mov     [rsp+1280h+var_1220], r10
 * 00000001800BA9FB: mov     rbx, [rbp+1180h+var_1148]
 * 00000001800BA9FF: mov     r9, [rbp+1180h+var_11E0]
 * 00000001800BAA03: mov     [rbp+1180h+var_1178], r9
 * 00000001800BAA07: test    eax, eax
 * 00000001800BAA09: js      loc_1800BAFFC
 * 00000001800BAA0F: lea     r8, [rbp+1180h+var_1058]
 * 00000001800BAA16: mov     edx, 4
 * 00000001800BAA1B: xor     ecx, ecx
 * 00000001800BAA1D: call    RtlUIntAdd
 * 00000001800BAA22: mov     edi, eax
 * 00000001800BAA24: mov     rcx, [rbp+1180h+psz]
 * 00000001800BAA28: mov     r11, rcx
 * 00000001800BAA2B: mov     [rbp+1180h+var_11A8], rcx
 * 00000001800BAA2F: mov     rdx, r10
 * 00000001800BAA32: mov     [rsp+1280h+var_1220], r10
 * 00000001800BAA37: mov     r8, r9
 * 00000001800BAA3A: mov     [rbp+1180h+var_1178], r9
 * 00000001800BAA3E: test    eax, eax
 * 00000001800BAA40: js      loc_1800BAFFC
 * 00000001800BAA46: mov     eax, dword ptr [rsp+1280h+lpMem]
 * 00000001800BAA4A: sub     eax, [rbp+1180h+var_1058]
 * 00000001800BAA50: mov     edi, dword ptr [rbp+1180h+var_11D0]
 * 00000001800BAA53: cmp     eax, edi
 * 00000001800BAA55: jnb     short loc_1800BAA75
 * 00000001800BAA57: mov     edi, 0D000003Eh
 * 00000001800BAA5C: mov     [rbp+1180h+var_11A8], rcx
 * 00000001800BAA60: mov     [rsp+1280h+var_1220], rdx
 * 00000001800BAA65: mov     [rbp+1180h+var_1178], r9
 * 00000001800BAA69: mov     r14, [rbp+1180h+var_11B8]
 * 00000001800BAA6D: mov     rax, r14
 * 00000001800BAA70: jmp     loc_1800BBAD8
 * 00000001800BAA75: mov     rax, [rbp+1180h+var_E00]
 * 00000001800BAA7C: mov     [rbp+1180h+var_1150], rax
 * 00000001800BAA80: mov     [rbp+1180h+var_1200], rdi
 * 00000001800BAA84: lea     r8, [rbp+1180h+var_E00]
 * 00000001800BAA8B: mov     rdx, rdi
 * 00000001800BAA8E: mov     rcx, rax
 * 00000001800BAA91: call    RtlULongLongAdd
 * 00000001800BAA96: mov     edi, eax
 * 00000001800BAA98: mov     [rbp+1180h+var_11A8], r11
 * 00000001800BAA9C: mov     [rsp+1280h+var_1220], r10
 * 00000001800BAAA1: mov     [rbp+1180h+var_1178], r9
 * 00000001800BAAA5: test    eax, eax
 * 00000001800BAAA7: js      loc_1800BAFFC
 * 00000001800BAAAD: lea     r8, [rbp+1180h+var_1058]
 * 00000001800BAAB4: mov     edx, dword ptr [rbp+1180h+var_11D0]
 * 00000001800BAAB7: mov     ecx, [rbp+1180h+var_1058]
 * 00000001800BAABD: call    RtlUIntAdd
 * 00000001800BAAC2: mov     edi, eax
 * 00000001800BAAC4: mov     rcx, r11
 * 00000001800BAAC7: mov     [rbp+1180h+var_11A8], r11
 * 00000001800BAACB: mov     rdx, r10
 * 00000001800BAACE: mov     [rsp+1280h+var_1220], r10
 * 00000001800BAAD3: mov     r8, r9
 * 00000001800BAAD6: mov     [rbp+1180h+var_1178], r9
 * 00000001800BAADA: test    eax, eax
 * 00000001800BAADC: js      loc_1800BAFFC
 * 00000001800BAAE2: mov     eax, dword ptr [rsp+1280h+lpMem]
 * 00000001800BAAE6: sub     eax, [rbp+1180h+var_1058]
 * 00000001800BAAEC: cmp     eax, 4
 * 00000001800BAAEF: jnb     short loc_1800BAB0F
 * 00000001800BAAF1: mov     edi, 0D000003Eh
 * 00000001800BAAF6: mov     [rbp+1180h+var_11A8], rcx
 * 00000001800BAAFA: mov     [rsp+1280h+var_1220], rdx
 * 00000001800BAAFF: mov     [rbp+1180h+var_1178], r9
 * 00000001800BAB03: mov     r14, [rbp+1180h+var_11B8]
 * 00000001800BAB07: mov     rax, r14
 * 00000001800BAB0A: jmp     loc_1800BBAD8
 * 00000001800BAB0F: mov     rcx, [rbp+1180h+var_E00]
 * 00000001800BAB16: mov     eax, [rcx]
 * 00000001800BAB18: mov     dword ptr [rbp+1180h+var_11C8], eax
 * 00000001800BAB1B: lea     r8, [rbp+1180h+var_E00]
 * 00000001800BAB22: mov     edx, 4
 * 00000001800BAB27: call    RtlULongLongAdd
 * 00000001800BAB2C: mov     edi, eax
 * 00000001800BAB2E: mov     [rbp+1180h+var_11A8], r11
 * 00000001800BAB32: mov     [rsp+1280h+var_1220], r10
 * 00000001800BAB37: mov     [rbp+1180h+var_1178], r9
 * 00000001800BAB3B: test    eax, eax
 * 00000001800BAB3D: js      loc_1800BAFFC
 * 00000001800BAB43: lea     r8, [rbp+1180h+var_1058]
 * 00000001800BAB4A: mov     edx, 4
 * 00000001800BAB4F: mov     ecx, [rbp+1180h+var_1058]
 * 00000001800BAB55: call    RtlUIntAdd
 * 00000001800BAB5A: mov     edi, eax
 * 00000001800BAB5C: mov     rcx, r11
 * 00000001800BAB5F: mov     [rbp+1180h+var_11A8], r11
 * 00000001800BAB63: mov     rdx, r10
 * 00000001800BAB66: mov     [rsp+1280h+var_1220], r10
 * 00000001800BAB6B: mov     r8, r9
 * 00000001800BAB6E: mov     [rbp+1180h+var_1178], r9
 * 00000001800BAB72: test    eax, eax
 * 00000001800BAB74: js      loc_1800BAFFC
 * 00000001800BAB7A: mov     eax, dword ptr [rsp+1280h+lpMem]
 * 00000001800BAB7E: sub     eax, [rbp+1180h+var_1058]
 * 00000001800BAB84: mov     edi, dword ptr [rbp+1180h+var_11C8]
 * 00000001800BAB87: cmp     eax, edi
 * 00000001800BAB89: jnb     short loc_1800BABA9
 * 00000001800BAB8B: mov     edi, 0D000003Eh
 * 00000001800BAB90: mov     [rbp+1180h+var_11A8], rcx
 * 00000001800BAB94: mov     [rsp+1280h+var_1220], rdx
 * 00000001800BAB99: mov     [rbp+1180h+var_1178], r9
 * 00000001800BAB9D: mov     r14, [rbp+1180h+var_11B8]
 * 00000001800BABA1: mov     rax, r14
 * 00000001800BABA4: jmp     loc_1800BBAD8
 * 00000001800BABA9: mov     rax, [rbp+1180h+var_E00]
 * 00000001800BABB0: mov     [rsp+1280h+var_1218], rax
 * 00000001800BABB5: mov     rdx, rdi
 * 00000001800BABB8: lea     r8, [rbp+1180h+var_E00]
 * 00000001800BABBF: mov     rcx, rax
 * 00000001800BABC2: call    RtlULongLongAdd
 * 00000001800BABC7: mov     edi, eax
 * 00000001800BABC9: mov     [rbp+1180h+var_11A8], r11
 * 00000001800BABCD: mov     [rsp+1280h+var_1220], r10
 * 00000001800BABD2: mov     [rbp+1180h+var_1178], r9
 * 00000001800BABD6: test    eax, eax
 * 00000001800BABD8: js      loc_1800BAFFC
 * 00000001800BABDE: lea     r8, [rbp+1180h+var_1058]
 * 00000001800BABE5: mov     edx, dword ptr [rbp+1180h+var_11C8]
 * 00000001800BABE8: mov     ecx, [rbp+1180h+var_1058]
 * 00000001800BABEE: call    RtlUIntAdd
 * 00000001800BABF3: mov     edi, eax
 * 00000001800BABF5: mov     rcx, r11
 * 00000001800BABF8: mov     [rbp+1180h+var_11A8], r11
 * 00000001800BABFC: mov     rdx, r10
 * 00000001800BABFF: mov     [rsp+1280h+var_1220], r10
 * 00000001800BAC04: mov     r8, r9
 * 00000001800BAC07: mov     [rbp+1180h+var_1178], r9
 * 00000001800BAC0B: test    eax, eax
 * 00000001800BAC0D: js      loc_1800BAFFC
 * 00000001800BAC13: mov     eax, dword ptr [rsp+1280h+lpMem]
 * 00000001800BAC17: sub     eax, [rbp+1180h+var_1058]
 * 00000001800BAC1D: cmp     eax, 4
 * 00000001800BAC20: jnb     short loc_1800BAC40
 * 00000001800BAC22: mov     edi, 0D000003Eh
 * 00000001800BAC27: mov     [rbp+1180h+var_11A8], rcx
 * 00000001800BAC2B: mov     [rsp+1280h+var_1220], rdx
 * 00000001800BAC30: mov     [rbp+1180h+var_1178], r9
 * 00000001800BAC34: mov     r14, [rbp+1180h+var_11B8]
 * 00000001800BAC38: mov     rax, r14
 * 00000001800BAC3B: jmp     loc_1800BBAD8
 * 00000001800BAC40: mov     rcx, [rbp+1180h+var_E00]
 * 00000001800BAC47: mov     eax, [rcx]
 * 00000001800BAC49: mov     dword ptr [rbp+1180h+var_1180], eax
 * 00000001800BAC4C: lea     r8, [rbp+1180h+var_E00]
 * 00000001800BAC53: mov     edx, 4
 * 00000001800BAC58: call    RtlULongLongAdd
 * 00000001800BAC5D: mov     edi, eax
 * 00000001800BAC5F: mov     [rbp+1180h+var_11A8], r11
 * 00000001800BAC63: mov     [rsp+1280h+var_1220], r10
 * 00000001800BAC68: mov     [rbp+1180h+var_1178], r9
 * 00000001800BAC6C: test    eax, eax
 * 00000001800BAC6E: js      loc_1800BAFFC
 * 00000001800BAC74: lea     r8, [rbp+1180h+var_1058]
 * 00000001800BAC7B: mov     edx, 4
 * 00000001800BAC80: mov     ecx, [rbp+1180h+var_1058]
 * 00000001800BAC86: call    RtlUIntAdd
 * 00000001800BAC8B: mov     edi, eax
 * 00000001800BAC8D: mov     rcx, r11
 * 00000001800BAC90: mov     [rbp+1180h+var_11A8], r11
 * 00000001800BAC94: mov     rdx, r10
 * 00000001800BAC97: mov     [rsp+1280h+var_1220], r10
 * 00000001800BAC9C: mov     r8, r9
 * 00000001800BAC9F: mov     [rbp+1180h+var_1178], r9
 * 00000001800BACA3: test    eax, eax
 * 00000001800BACA5: js      loc_1800BAFFC
 * 00000001800BACAB: mov     eax, dword ptr [rsp+1280h+lpMem]
 * 00000001800BACAF: mov     r9d, [rbp+1180h+var_1058]
 * 00000001800BACB6: sub     eax, r9d
 * 00000001800BACB9: mov     edi, dword ptr [rbp+1180h+var_1180]
 * 00000001800BACBC: cmp     eax, edi
 * 00000001800BACBE: jnb     short loc_1800BACE1
 * 00000001800BACC0: mov     edi, 0D000003Eh
 * 00000001800BACC5: mov     [rbp+1180h+var_11A8], rcx
 * 00000001800BACC9: mov     [rsp+1280h+var_1220], rdx
 * 00000001800BACCE: mov     r9, r8
 * 00000001800BACD1: mov     [rbp+1180h+var_1178], r8
 * 00000001800BACD5: mov     r14, [rbp+1180h+var_11B8]
 * 00000001800BACD9: mov     rax, r14
 * 00000001800BACDC: jmp     loc_1800BBAD8
 * 00000001800BACE1: lea     r8, [rbp+1180h+var_1058]
 * 00000001800BACE8: mov     edx, edi
 * 00000001800BACEA: mov     ecx, r9d
 * 00000001800BACED: call    RtlUIntAdd
 * 00000001800BACF2: mov     edi, eax
 * 00000001800BACF4: mov     rdx, r11
 * 00000001800BACF7: mov     [rbp+1180h+var_11A8], r11
 * 00000001800BACFB: mov     r8, r10
 * 00000001800BACFE: mov     [rsp+1280h+var_1220], r10
 * 00000001800BAD03: mov     rcx, [rbp+1180h+var_11E0]
 * 00000001800BAD07: mov     r9, rcx
 * 00000001800BAD0A: mov     [rbp+1180h+var_1178], rcx
 * 00000001800BAD0E: test    eax, eax
 * 00000001800BAD10: js      loc_1800BAFFC
 * 00000001800BAD16: mov     edi, dword ptr [rsp+1280h+lpMem]
 * 00000001800BAD1A: cmp     edi, [rbp+1180h+var_1058]
 * 00000001800BAD20: jz      short loc_1800BAD40
 * 00000001800BAD22: mov     edi, 0D000003Eh
 * 00000001800BAD27: mov     [rbp+1180h+var_11A8], rdx
 * 00000001800BAD2B: mov     [rsp+1280h+var_1220], r10
 * 00000001800BAD30: mov     [rbp+1180h+var_1178], rcx
 * 00000001800BAD34: mov     r14, [rbp+1180h+var_11B8]
 * 00000001800BAD38: mov     rax, r14
 * 00000001800BAD3B: jmp     loc_1800BBAD8
 * 00000001800BAD40: mov     ebx, dword ptr [rbp+1180h+var_11C8]
 * 00000001800BAD43: mov     ecx, dword ptr [rbp+1180h+var_11D0]
 * 00000001800BAD46: add     ecx, ebx
 * 00000001800BAD48: add     ecx, dword ptr [rbp+1180h+var_1180]
 * 00000001800BAD4B: add     rcx, 0Ch
 * 00000001800BAD4F: cmp     rcx, rdi
 * 00000001800BAD52: jz      short loc_1800BAD76
 * 00000001800BAD54: mov     edi, 0D000003Eh
 * 00000001800BAD59: mov     [rbp+1180h+var_11A8], rdx
 * 00000001800BAD5D: mov     [rsp+1280h+var_1220], r8
 * 00000001800BAD62: mov     rbx, [rbp+1180h+var_1148]
 * 00000001800BAD66: mov     [rbp+1180h+var_1178], r9
 * 00000001800BAD6A: mov     r14, [rbp+1180h+var_11B8]
 * 00000001800BAD6E: mov     rax, r14
 * 00000001800BAD71: jmp     loc_1800BBAD8
 * 00000001800BAD76: call    cs:__imp_GetProcessHeap
 * 00000001800BAD7D: nop     dword ptr [rax+rax+00h]
 * 00000001800BAD82: mov     rcx, rax; hHeap
 * 00000001800BAD85: mov     edx, 8; dwFlags
 * 00000001800BAD8A: lea     r8d, [rdx+28h]; dwBytes
 * 00000001800BAD8E: call    cs:__imp_HeapAlloc
 * 00000001800BAD95: nop     dword ptr [rax+rax+00h]
 * 00000001800BAD9A: mov     rdi, rax
 * 00000001800BAD9D: test    rax, rax
 * 00000001800BADA0: jnz     short loc_1800BADD0
 * 00000001800BADA2: mov     edi, 0D0000017h
 * 00000001800BADA7: mov     r11, [rbp+1180h+psz]
 * 00000001800BADAB: mov     [rbp+1180h+var_11A8], r11
 * 00000001800BADAF: mov     r10, [rbp+1180h+var_1168]
 * 00000001800BADB3: mov     [rsp+1280h+var_1220], r10
 * 00000001800BADB8: mov     rbx, [rbp+1180h+var_1148]
 * 00000001800BADBC: mov     r9, [rbp+1180h+var_11E0]
 * 00000001800BADC0: mov     [rbp+1180h+var_1178], r9
 * 00000001800BADC4: mov     r14, [rbp+1180h+var_11B8]
 * 00000001800BADC8: mov     rax, r14
 * 00000001800BADCB: jmp     loc_1800BBAD8
 * 00000001800BADD0: cmp     [rbp+1180h+var_1150], 0
 * 00000001800BADD5: jz      short loc_1800BAE21
 * 00000001800BADD7: mov     eax, dword ptr [rbp+1180h+var_11D0]
 * 00000001800BADDA: mov     [rdi], eax
 * 00000001800BADDC: call    cs:__imp_GetProcessHeap
 * 00000001800BADE3: nop     dword ptr [rax+rax+00h]
 * 00000001800BADE8: mov     rcx, rax; hHeap
 * 00000001800BADEB: mov     r8, [rbp+1180h+var_1200]; dwBytes
 * 00000001800BADEF: mov     edx, 8; dwFlags
 * 00000001800BADF4: call    cs:__imp_HeapAlloc
 * 00000001800BADFB: nop     dword ptr [rax+rax+00h]
 * 00000001800BAE00: test    rax, rax
 * 00000001800BAE03: jz      loc_1800BAED6
 * 00000001800BAE09: mov     [rdi+8], rax
 * 00000001800BAE0D: mov     r8, [rbp+1180h+var_1200]; Size
 * 00000001800BAE11: mov     rdx, [rbp+1180h+var_1150]; Src
 * 00000001800BAE15: mov     rcx, rax; void *
 * 00000001800BAE18: call    memcpy_0
 * 00000001800BAE1D: xor     eax, eax
 * 00000001800BAE1F: jmp     short loc_1800BAE29
 * 00000001800BAE21: xor     eax, eax
 * 00000001800BAE23: mov     [rdi], eax
 * 00000001800BAE25: mov     [rdi+8], rax
 * 00000001800BAE29: cmp     [rsp+1280h+var_1218], 0
 * 00000001800BAE2F: jz      short loc_1800BAE74
 * 00000001800BAE31: mov     [rdi+10h], ebx
 * 00000001800BAE34: call    cs:__imp_GetProcessHeap
 * 00000001800BAE3B: nop     dword ptr [rax+rax+00h]
 * 00000001800BAE40: mov     rcx, rax; hHeap
 * 00000001800BAE43: mov     r8, rbx; dwBytes
 * 00000001800BAE46: mov     edx, 8; dwFlags
 * 00000001800BAE4B: call    cs:__imp_HeapAlloc
 * 00000001800BAE52: nop     dword ptr [rax+rax+00h]
 * 00000001800BAE57: test    rax, rax
 * 00000001800BAE5A: jz      short loc_1800BAED6
 * 00000001800BAE5C: mov     [rdi+18h], rax
 * 00000001800BAE60: mov     r8, rbx; Size
 * 00000001800BAE63: mov     rdx, [rsp+1280h+var_1218]; Src
 * 00000001800BAE68: mov     rcx, rax; void *
 * 00000001800BAE6B: call    memcpy_0
 * 00000001800BAE70: xor     eax, eax
 * 00000001800BAE72: jmp     short loc_1800BAE7B
 * 00000001800BAE74: mov     [rdi+10h], eax
 * 00000001800BAE77: mov     [rdi+18h], rax
 * 00000001800BAE7B: mov     rbx, [rbp+1180h+var_E00]
 * 00000001800BAE82: test    rbx, rbx
 * 00000001800BAE85: jz      loc_1800BAFB1
 * 00000001800BAE8B: mov     eax, dword ptr [rbp+1180h+var_1180]
 * 00000001800BAE8E: mov     [rdi+20h], eax
 * 00000001800BAE91: mov     [rbp+1180h+var_1178], rax
 * 00000001800BAE95: call    cs:__imp_GetProcessHeap
 * 00000001800BAE9C: nop     dword ptr [rax+rax+00h]
 * 00000001800BAEA1: mov     rcx, rax; hHeap
 * 00000001800BAEA4: mov     r8, [rbp+1180h+var_1178]; dwBytes
 * 00000001800BAEA8: mov     edx, 8; dwFlags
 * 00000001800BAEAD: call    cs:__imp_HeapAlloc
 * 00000001800BAEB4: nop     dword ptr [rax+rax+00h]
 * 00000001800BAEB9: test    rax, rax
 * 00000001800BAEBC: jz      short loc_1800BAED6
 * 00000001800BAEBE: mov     [rdi+28h], rax
 * 00000001800BAEC2: mov     r8, [rbp+1180h+var_1178]; Size
 * 00000001800BAEC6: mov     rdx, rbx; Src
 * 00000001800BAEC9: mov     rcx, rax; void *
 * 00000001800BAECC: call    memcpy_0
 * 00000001800BAED1: jmp     loc_1800BAFB8
 * 00000001800BAED6: mov     rbx, [rdi+8]
 * 00000001800BAEDA: test    rbx, rbx
 * 00000001800BAEDD: jz      short loc_1800BAF07
 * 00000001800BAEDF: call    cs:__imp_GetProcessHeap
 * 00000001800BAEE6: nop     dword ptr [rax+rax+00h]
 * 00000001800BAEEB: mov     rcx, rax; hHeap
 * 00000001800BAEEE: mov     r8, rbx; lpMem
 * 00000001800BAEF1: xor     edx, edx; dwFlags
 * 00000001800BAEF3: call    cs:__imp_HeapFree
 * 00000001800BAEFA: nop     dword ptr [rax+rax+00h]
 * 00000001800BAEFF: xor     esi, esi
 * 00000001800BAF01: mov     [rdi+8], rsi
 * 00000001800BAF05: jmp     short loc_1800BAF09
 * 00000001800BAF07: xor     esi, esi
 * 00000001800BAF09: mov     rbx, [rdi+18h]
 * 00000001800BAF0D: test    rbx, rbx
 * 00000001800BAF10: jz      short loc_1800BAF36
 * 00000001800BAF12: call    cs:__imp_GetProcessHeap
 * 00000001800BAF19: nop     dword ptr [rax+rax+00h]
 * 00000001800BAF1E: mov     rcx, rax; hHeap
 * 00000001800BAF21: mov     r8, rbx; lpMem
 * 00000001800BAF24: xor     edx, edx; dwFlags
 * 00000001800BAF26: call    cs:__imp_HeapFree
 * 00000001800BAF2D: nop     dword ptr [rax+rax+00h]
 * 00000001800BAF32: mov     [rdi+18h], rsi
 * 00000001800BAF36: mov     rbx, [rdi+28h]
 * 00000001800BAF3A: test    rbx, rbx
 * 00000001800BAF3D: jz      short loc_1800BAF63
 * 00000001800BAF3F: call    cs:__imp_GetProcessHeap
 * 00000001800BAF46: nop     dword ptr [rax+rax+00h]
 * 00000001800BAF4B: mov     rcx, rax; hHeap
 * 00000001800BAF4E: mov     r8, rbx; lpMem
 * 00000001800BAF51: xor     edx, edx; dwFlags
 * 00000001800BAF53: call    cs:__imp_HeapFree
 * 00000001800BAF5A: nop     dword ptr [rax+rax+00h]
 * 00000001800BAF5F: mov     [rdi+28h], rsi
 * 00000001800BAF63: call    cs:__imp_GetProcessHeap
 * 00000001800BAF6A: nop     dword ptr [rax+rax+00h]
 * 00000001800BAF6F: mov     rcx, rax; hHeap
 * 00000001800BAF72: mov     r8, rdi; lpMem
 * 00000001800BAF75: xor     edx, edx; dwFlags
 * 00000001800BAF77: call    cs:__imp_HeapFree
 * 00000001800BAF7E: nop     dword ptr [rax+rax+00h]
 * 00000001800BAF83: mov     edi, 0D0000017h
 * 00000001800BAF88: mov     r11, [rbp+1180h+psz]
 * 00000001800BAF8C: mov     [rbp+1180h+var_11A8], r11
 * 00000001800BAF90: mov     r10, [rbp+1180h+var_1168]
 * 00000001800BAF94: mov     [rsp+1280h+var_1220], r10
 * 00000001800BAF99: mov     rbx, [rbp+1180h+var_1148]
 * 00000001800BAF9D: mov     r9, [rbp+1180h+var_11E0]
 * 00000001800BAFA1: mov     [rbp+1180h+var_1178], r9
 * 00000001800BAFA5: mov     r14, [rbp+1180h+var_11B8]
 * 00000001800BAFA9: mov     rax, r14
 * 00000001800BAFAC: jmp     loc_1800BBADA
 * 00000001800BAFB1: mov     [rdi+20h], eax
 * 00000001800BAFB4: mov     [rdi+28h], rax
 * 00000001800BAFB8: mov     [rbp+1180h+var_11B8], rdi
 * 00000001800BAFBC: mov     r11, [rbp+1180h+psz]
 * 00000001800BAFC0: mov     [rbp+1180h+var_11A8], r11
 * 00000001800BAFC4: mov     r10, [rbp+1180h+var_1168]
 * 00000001800BAFC8: mov     [rsp+1280h+var_1220], r10
 * 00000001800BAFCD: mov     rbx, [rbp+1180h+var_1148]
 * 00000001800BAFD1: mov     [rbp+1180h+Size], rbx
 * 00000001800BAFD5: mov     r9, [rbp+1180h+var_11E0]
 * 00000001800BAFD9: mov     [rbp+1180h+var_1178], r9
 * 00000001800BAFDD: mov     rax, [rdi+8]
 * 00000001800BAFE1: mov     [rbp+1180h+var_11E0], rax
 * 00000001800BAFE5: test    rax, rax
 * 00000001800BAFE8: jnz     short loc_1800BB019
 * 00000001800BAFEA: mov     edi, 0D000000Dh
 * 00000001800BAFEF: mov     r14, [rbp+1180h+var_11B8]
 * 00000001800BAFF3: mov     rax, [rbp+1180h+lpModuleName]
 * 00000001800BAFF7: jmp     loc_1800BBAD8
 * 00000001800BAFFC: or      edi, 10000000h
 * 00000001800BB002: jl      loc_1800BA7B2
 * 00000001800BB008: mov     edi, 0D000000Dh
 * 00000001800BB00D: mov     r14, [rbp+1180h+var_11B8]
 * 00000001800BB011: mov     rax, r14
 * 00000001800BB014: jmp     loc_1800BBAD8
 * 00000001800BB019: mov     eax, [rdi]
 * 00000001800BB01B: test    eax, eax
 * 00000001800BB01D: jnz     short loc_1800BB031
 * 00000001800BB01F: mov     edi, 0D000000Dh
 * 00000001800BB024: mov     r14, [rbp+1180h+var_11B8]
 * 00000001800BB028: mov     rax, [rbp+1180h+lpModuleName]
 * 00000001800BB02C: jmp     loc_1800BBAD8
 * 00000001800BB031: add     rax, 0FFFFFFFFFFFFFFF8h
 * 00000001800BB035: mov     [rbp+1180h+var_1148], rax
 * 00000001800BB039: mov     rcx, rax; unsigned __int64
 * 00000001800BB03C: call    ??2@YAPEAX_K@Z; operator new(unsigned __int64)
 * 00000001800BB041: mov     [rbp+1180h+var_1168], rax
 * 00000001800BB045: test    rax, rax
 * 00000001800BB048: jz      loc_1800BBA87
 * 00000001800BB04E: mov     byte ptr [rsp+1280h+lpMem], 0
 * 00000001800BB053: mov     [rbp+1180h+var_7E0], rsi
 * 00000001800BB05A: mov     r11, [rbp+1180h+var_11E0]
 * 00000001800BB05E: mov     [rbp+1180h+var_1150], r11
 * 00000001800BB062: mov     [rbp+1180h+var_1198], rax
 * 00000001800BB066: mov     r8, [rbp+1180h+var_1148]
 * 00000001800BB06A: mov     rcx, r8
 * 00000001800BB06D: and     ecx, 7
 * 00000001800BB070: mov     [rbp+1180h+var_1180], rcx
 * 00000001800BB074: mov     r9, [rsp+1280h+var_1220]
 * 00000001800BB079: mov     r10, [rbp+1180h+var_11A8]
 * 00000001800BB07D: jz      loc_1800BB1C9
 * 00000001800BB083: xor     eax, eax
 * 00000001800BB085: mov     [rbp+1180h+var_1134], eax
 * 00000001800BB088: mov     dword ptr [rbp+1180h+var_11D0], eax
 * 00000001800BB08B: test    ecx, ecx
 * 00000001800BB08D: jz      loc_1800BB19C
 * 00000001800BB093: mov     rax, [rbp+1180h+var_1178]
 * 00000001800BB097: mov     esi, dword ptr [rbp+1180h+var_11D0]
 * 00000001800BB09A: mov     r15d, esi
 * 00000001800BB09D: movzx   edx, byte ptr [r11]
 * 00000001800BB0A1: inc     r11
 * 00000001800BB0A4: cmp     r15d, 4
 * 00000001800BB0A8: jge     short loc_1800BB0B4
 * 00000001800BB0AA: lea     ecx, [r14-20h]
 * 00000001800BB0AE: shl     edx, cl
 * 00000001800BB0B0: or      esi, edx
 * 00000001800BB0B2: jmp     short loc_1800BB0BC
 * 00000001800BB0B4: mov     ecx, r14d
 * 00000001800BB0B7: shl     edx, cl
 * 00000001800BB0B9: or      [rbp+1180h+var_1134], edx
 * 00000001800BB0BC: inc     r15d
 * 00000001800BB0BF: sub     r14d, 8
 * 00000001800BB0C3: mov     rcx, [rbp+1180h+var_1180]
 * 00000001800BB0C7: cmp     r15d, ecx
 * 00000001800BB0CA: jl      short loc_1800BB09D
 * 00000001800BB0CC: mov     dword ptr [rbp+1180h+var_11D0], esi
 * 00000001800BB0CF: mov     [rbp+1180h+var_1150], r11
 * 00000001800BB0D3: mov     [rbp+1180h+var_11B8], rdi
 * 00000001800BB0D7: mov     r11d, esi
 * 00000001800BB0DA: xor     r11d, 92F65A5h
 * 00000001800BB0E1: mov     edx, [rbp+1180h+var_1134]
 * 00000001800BB0E4: xor     edx, 699A899Ch
 * 00000001800BB0EA: xor     edi, edi
 * 00000001800BB0EC: mov     dword ptr [rbp+1180h+var_11C8], edi
 * 00000001800BB0EF: mov     rdi, [rbp+1180h+var_1150]
 * 00000001800BB0F3: mov     r14, [rbp+1180h+var_11B8]
 * 00000001800BB0F7: mov     [rbp+1180h+var_11B8], r14
 * 00000001800BB0FB: mov     [rbp+1180h+var_11A8], r10
 * 00000001800BB0FF: mov     [rsp+1280h+var_1220], r9
 * 00000001800BB104: mov     [rbp+1180h+Size], rbx
 * 00000001800BB108: mov     [rbp+1180h+var_1178], rax
 * 00000001800BB10C: mov     rsi, 7F1137FAB69605Eh
 * 00000001800BB116: mov     r15, [rbp+1180h+var_1128]
 * 00000001800BB11A: mov     r12d, r11d
 * 00000001800BB11D: mov     r8d, edx
 * 00000001800BB120: mov     r10, [rbp+1180h+var_1198]
 * 00000001800BB124: mov     r9d, dword ptr [rbp+1180h+var_11C8]
 * 00000001800BB128: lea     r13, [r10+1]
 * 00000001800BB12C: mov     [rbp+1180h+var_1150], r13
 * 00000001800BB130: cmp     r9d, 4
 * 00000001800BB134: jge     short loc_1800BB13F
 * 00000001800BB136: rol     r12d, 8
 * 00000001800BB13A: mov     r13d, r12d
 * 00000001800BB13D: jmp     short loc_1800BB146
 * 00000001800BB13F: rol     r8d, 8
 * 00000001800BB143: mov     r13d, r8d
 * 00000001800BB146: mov     [r10], r13b
 * 00000001800BB149: inc     r9d
 * 00000001800BB14C: mov     r13, [rbp+1180h+var_1150]
 * 00000001800BB150: mov     r10, r13
 * 00000001800BB153: cmp     r9d, ecx
 * 00000001800BB156: jl      short loc_1800BB128
 * 00000001800BB158: mov     [rbp+1180h+var_1198], r13
 * 00000001800BB15C: cmp     ecx, 4
 * 00000001800BB15F: lea     r12, [r15+0C0h]
 * 00000001800BB166: mov     r13d, [rbp+1180h+var_10C8]
 * 00000001800BB16D: mov     r9, [rsp+1280h+var_1220]
 * 00000001800BB172: mov     r10, [rbp+1180h+var_11A8]
 * 00000001800BB176: mov     r8, [rbp+1180h+var_1148]
 * 00000001800BB17A: jbe     short loc_1800BB190
 * 00000001800BB17C: mov     ecx, 8
 * 00000001800BB181: sub     ecx, dword ptr [rbp+1180h+var_1180]
 * 00000001800BB184: shl     ecx, 3
 * 00000001800BB187: shr     edx, cl
 * 00000001800BB189: shl     edx, cl
 * 00000001800BB18B: mov     dword ptr [rbp+1180h+var_11C8], edx
 * 00000001800BB18E: jmp     short loc_1800BB1DF
 * 00000001800BB190: xor     edx, edx
 * 00000001800BB192: mov     dword ptr [rbp+1180h+var_11C8], edx
 * 00000001800BB195: cmp     ecx, 4
 * 00000001800BB198: jb      short loc_1800BB1B6
 * 00000001800BB19A: jmp     short loc_1800BB1DF
 * 00000001800BB19C: mov     r11d, 92F65A5h
 * 00000001800BB1A2: mov     dword ptr [rbp+1180h+var_11D0], eax
 * 00000001800BB1A5: mov     [rbp+1180h+var_1134], eax
 * 00000001800BB1A8: mov     dword ptr [rbp+1180h+var_11C8], eax
 * 00000001800BB1AB: mov     rax, [rbp+1180h+var_1178]
 * 00000001800BB1AF: mov     r14, rdi
 * 00000001800BB1B2: mov     rdi, [rbp+1180h+var_1150]
 * 00000001800BB1B6: mov     ecx, 4
 * 00000001800BB1BB: sub     ecx, dword ptr [rbp+1180h+var_1180]
 * 00000001800BB1BE: shl     ecx, 3
 * 00000001800BB1C1: shr     r11d, cl
 * 00000001800BB1C4: shl     r11d, cl
 * 00000001800BB1C7: jmp     short loc_1800BB1DF
 * 00000001800BB1C9: xor     eax, eax
 * 00000001800BB1CB: mov     dword ptr [rbp+1180h+var_11D0], eax
 * 00000001800BB1CE: mov     dword ptr [rbp+1180h+var_11C8], eax
 * 00000001800BB1D1: mov     r11d, eax
 * 00000001800BB1D4: mov     rax, [rbp+1180h+var_1178]
 * 00000001800BB1D8: mov     r14, rdi
 * 00000001800BB1DB: mov     rdi, [rbp+1180h+var_1150]
 * 00000001800BB1DF: mov     rcx, r8
 * 00000001800BB1E2: shr     rcx, 3
 * 00000001800BB1E6: test    rcx, rcx
 * 00000001800BB1E9: jz      loc_1800BB52A
 * 00000001800BB1EF: mov     r9d, dword ptr [rbp+1180h+var_7E0+4]
 * 00000001800BB1F6: mov     eax, r9d
 * 00000001800BB1F9: shr     eax, 10h
 * 00000001800BB1FC: mov     dword ptr [rbp+1180h+var_1180], eax
 * 00000001800BB1FF: movzx   eax, r9w
 * 00000001800BB203: mov     dword ptr [rbp+1180h+psz], eax
 * 00000001800BB206: movzx   eax, si
 * 00000001800BB209: mov     dword ptr [rbp+1180h+var_1200], eax
 * 00000001800BB20C: mov     eax, esi
 * 00000001800BB20E: xor     eax, r9d
 * 00000001800BB211: mov     dword ptr [rsp+1280h+var_1218], eax
 * 00000001800BB215: mov     r13, [rbp+1180h+var_1198]
 * 00000001800BB219: add     r13, 7
 * 00000001800BB21D: lea     rbx, [rdi+2]
 * 00000001800BB221: mov     r12d, dword ptr [rbp+1180h+var_11C8]
 * 00000001800BB225: mov     r10d, dword ptr [rbp+1180h+var_11D0]
 * 00000001800BB229: mov     r14d, dword ptr [rbp+1180h+var_1180]
 * 00000001800BB22D: mov     r15, rcx
 * 00000001800BB230: movzx   r8d, byte ptr [rbx-2]
 * 00000001800BB235: shl     r8d, 8
 * 00000001800BB239: movzx   eax, byte ptr [rbx-1]
 * 00000001800BB23D: or      r8d, eax
 * 00000001800BB240: shl     r8d, 8
 * 00000001800BB244: movzx   eax, byte ptr [rbx]
 * 00000001800BB247: or      r8d, eax
 * 00000001800BB24A: shl     r8d, 8
 * 00000001800BB24E: movzx   eax, byte ptr [rbx+1]
 * 00000001800BB252: or      r8d, eax
 * 00000001800BB255: movzx   edi, byte ptr [rbx+2]
 * 00000001800BB259: shl     edi, 8
 * 00000001800BB25C: movzx   eax, byte ptr [rbx+3]
 * 00000001800BB260: or      edi, eax
 * 00000001800BB262: shl     edi, 8
 * 00000001800BB265: movzx   eax, byte ptr [rbx+4]
 * 00000001800BB269: or      edi, eax
 * 00000001800BB26B: shl     edi, 8
 * 00000001800BB26E: movzx   eax, byte ptr [rbx+5]
 * 00000001800BB272: or      edi, eax
 * 00000001800BB274: xor     r11d, r8d
 * 00000001800BB277: xor     r12d, edi
 * 00000001800BB27A: lea     rbx, [rbx+8]
 * 00000001800BB27E: mov     eax, esi
 * 00000001800BB280: xor     eax, r9d
 * 00000001800BB283: xor     eax, r11d
 * 00000001800BB286: xor     r12d, eax
 * 00000001800BB289: mov     edx, r12d
 * 00000001800BB28C: sub     edx, esi
 * 00000001800BB28E: rol     edx, 5
 * 00000001800BB291: mov     ecx, r12d
 * 00000001800BB294: rol     ecx, 0Ah
 * 00000001800BB297: mov     eax, dword ptr [rbp+1180h+psz]
 * 00000001800BB29A: imul    eax, edx
 * 00000001800BB29D: add     ecx, eax
 * 00000001800BB29F: xor     r11d, ecx
 * 00000001800BB2A2: lea     edx, [r9+r11]
 * 00000001800BB2A6: ror     edx, 9
 * 00000001800BB2A9: mov     eax, r11d
 * 00000001800BB2AC: rol     eax, 2
 * 00000001800BB2AF: movzx   ecx, word ptr [rbp+1180h+var_7E0+2]
 * 00000001800BB2B6: imul    ecx, edx
 * 00000001800BB2B9: sub     ecx, eax
 * 00000001800BB2BB: xor     r12d, ecx
 * 00000001800BB2BE: mov     ecx, r12d
 * 00000001800BB2C1: sub     ecx, dword ptr [rbp+1180h+psz]
 * 00000001800BB2C4: imul    ecx, dword ptr [rbp+1180h+var_1200]
 * 00000001800BB2C8: mov     eax, r12d
 * 00000001800BB2CB: shr     eax, 0Dh
 * 00000001800BB2CE: sub     ecx, eax
 * 00000001800BB2D0: xor     r11d, ecx
 * 00000001800BB2D3: movzx   edx, word ptr [rbp+1180h+var_7E0+2]
 * 00000001800BB2DA: xor     edx, r11d
 * 00000001800BB2DD: rol     edx, 6
 * 00000001800BB2E0: mov     eax, r11d
 * 00000001800BB2E3: rol     eax, 2
 * 00000001800BB2E6: mov     ecx, r14d
 * 00000001800BB2E9: imul    ecx, edx
 * 00000001800BB2EC: sub     ecx, eax
 * 00000001800BB2EE: xor     r12d, ecx
 * 00000001800BB2F1: mov     eax, esi
 * 00000001800BB2F3: xor     eax, r12d
 * 00000001800BB2F6: mov     ecx, r9d
 * 00000001800BB2F9: sub     ecx, eax
 * 00000001800BB2FB: xor     r11d, ecx
 * 00000001800BB2FE: mov     ecx, r11d
 * 00000001800BB301: ror     ecx, 6
 * 00000001800BB304: mov     eax, dword ptr [rbp+1180h+psz]
 * 00000001800BB307: xor     eax, r11d
 * 00000001800BB30A: movzx   edx, word ptr [rbp+1180h+var_7E0+2]
 * 00000001800BB311: imul    eax, edx
 * 00000001800BB314: xor     ecx, eax
 * 00000001800BB316: xor     r12d, ecx
 * 00000001800BB319: lea     ecx, [r9+r12]
 * 00000001800BB31D: ror     ecx, 0Fh
 * 00000001800BB320: mov     edx, r12d
 * 00000001800BB323: rol     edx, 2
 * 00000001800BB326: mov     eax, dword ptr [rbp+1180h+var_1200]
 * 00000001800BB329: imul    eax, ecx
 * 00000001800BB32C: add     edx, eax
 * 00000001800BB32E: xor     r11d, edx
 * 00000001800BB331: mov     edx, r11d
 * 00000001800BB334: sub     edx, esi
 * 00000001800BB336: ror     edx, 0Eh
 * 00000001800BB339: mov     eax, r11d
 * 00000001800BB33C: rol     eax, 8
 * 00000001800BB33F: mov     ecx, r14d
 * 00000001800BB342: imul    ecx, edx
 * 00000001800BB345: sub     ecx, eax
 * 00000001800BB347: xor     r12d, ecx
 * 00000001800BB34A: mov     edx, esi
 * 00000001800BB34C: xor     edx, r12d
 * 00000001800BB34F: ror     edx, 0Ch
 * 00000001800BB352: mov     ecx, r12d
 * 00000001800BB355: ror     ecx, 0Ah
 * 00000001800BB358: mov     eax, dword ptr [rbp+1180h+psz]
 * 00000001800BB35B: imul    eax, edx
 * 00000001800BB35E: xor     ecx, eax
 * 00000001800BB360: xor     r11d, ecx
 * 00000001800BB363: mov     ecx, r14d
 * 00000001800BB366: xor     ecx, r11d
 * 00000001800BB369: movzx   eax, word ptr [rbp+1180h+var_7E0+2]
 * 00000001800BB370: imul    ecx, eax
 * 00000001800BB373: mov     eax, r11d
 * 00000001800BB376: shr     eax, 0Ah
 * 00000001800BB379: xor     ecx, eax
 * 00000001800BB37B: xor     r12d, ecx
 * 00000001800BB37E: mov     eax, r12d
 * 00000001800BB381: not     eax
 * 00000001800BB383: ror     eax, 5
 * 00000001800BB386: add     eax, dword ptr [rbp+1180h+var_1200]
 * 00000001800BB389: imul    eax, r14d
 * 00000001800BB38D: xor     r11d, eax
 * 00000001800BB390: mov     eax, r11d
 * 00000001800BB393: sub     eax, r14d
 * 00000001800BB396: xor     eax, esi
 * 00000001800BB398: xor     r12d, eax
 * 00000001800BB39B: mov     eax, r14d
 * 00000001800BB39E: xor     eax, r12d
 * 00000001800BB3A1: rol     eax, 2
 * 00000001800BB3A4: mov     ecx, dword ptr [rbp+1180h+psz]
 * 00000001800BB3A7: imul    ecx, eax
 * 00000001800BB3AA: mov     eax, r12d
 * 00000001800BB3AD: shr     eax, 2
 * 00000001800BB3B0: add     ecx, eax
 * 00000001800BB3B2: xor     r11d, ecx
 * 00000001800BB3B5: mov     edx, r11d
 * 00000001800BB3B8: sub     edx, r9d
 * 00000001800BB3BB: ror     edx, 6
 * 00000001800BB3BE: mov     ecx, r11d
 * 00000001800BB3C1: rol     ecx, 7
 * 00000001800BB3C4: movzx   eax, word ptr [rbp+1180h+var_7E0+2]
 * 00000001800BB3CB: imul    eax, edx
 * 00000001800BB3CE: add     ecx, eax
 * 00000001800BB3D0: xor     r12d, ecx
 * 00000001800BB3D3: mov     ecx, r12d
 * 00000001800BB3D6: ror     ecx, 9
 * 00000001800BB3D9: mov     eax, dword ptr [rbp+1180h+psz]
 * 00000001800BB3DC: xor     eax, r12d
 * 00000001800BB3DF: imul    eax, dword ptr [rbp+1180h+var_1200]
 * 00000001800BB3E3: add     ecx, eax
 * 00000001800BB3E5: xor     r11d, ecx
 * 00000001800BB3E8: movzx   edx, word ptr [rbp+1180h+var_7E0+2]
 * 00000001800BB3EF: xor     edx, r11d
 * 00000001800BB3F2: rol     edx, 5
 * 00000001800BB3F5: mov     ecx, r11d
 * 00000001800BB3F8: rol     ecx, 7
 * 00000001800BB3FB: mov     eax, r14d
 * 00000001800BB3FE: imul    eax, edx
 * 00000001800BB401: add     ecx, eax
 * 00000001800BB403: xor     r12d, ecx
 * 00000001800BB406: mov     eax, dword ptr [rsp+1280h+var_1218]
 * 00000001800BB40A: xor     eax, r12d
 * 00000001800BB40D: xor     r11d, eax
 * 00000001800BB410: mov     eax, r11d
 * 00000001800BB413: ror     eax, 3
 * 00000001800BB416: movzx   ecx, word ptr [rbp+1180h+var_7E0+2]
 * 00000001800BB41D: sub     eax, ecx
 * 00000001800BB41F: imul    eax, dword ptr [rbp+1180h+psz]
 * 00000001800BB423: xor     r12d, eax
 * 00000001800BB426: mov     edx, r12d
 * 00000001800BB429: sub     edx, r9d
 * 00000001800BB42C: ror     edx, 1
 * 00000001800BB42E: mov     eax, r12d
 * 00000001800BB431: ror     eax, 6
 * 00000001800BB434: mov     ecx, dword ptr [rbp+1180h+var_1200]
 * 00000001800BB437: imul    ecx, edx
 * 00000001800BB43A: sub     ecx, eax
 * 00000001800BB43C: xor     r11d, ecx
 * 00000001800BB43F: lea     ecx, [rsi+r11]
 * 00000001800BB443: rol     ecx, 3
 * 00000001800BB446: mov     edx, r11d
 * 00000001800BB449: rol     edx, 0Eh
 * 00000001800BB44C: mov     eax, r14d
 * 00000001800BB44F: imul    eax, ecx
 * 00000001800BB452: add     edx, eax
 * 00000001800BB454: xor     r12d, edx
 * 00000001800BB457: lea     edx, [rsi+r12]
 * 00000001800BB45B: rol     edx, 0Fh
 * 00000001800BB45E: mov     eax, r12d
 * 00000001800BB461: ror     eax, 0Eh
 * 00000001800BB464: mov     ecx, dword ptr [rbp+1180h+psz]
 * 00000001800BB467: imul    ecx, edx
 * 00000001800BB46A: sub     ecx, eax
 * 00000001800BB46C: xor     r11d, ecx
 * 00000001800BB46F: mov     ecx, dword ptr [rbp+1180h+var_1200]
 * 00000001800BB472: xor     ecx, r11d
 * 00000001800BB475: movzx   eax, word ptr [rbp+1180h+var_7E0+2]
 * 00000001800BB47C: imul    ecx, eax
 * 00000001800BB47F: mov     eax, r11d
 * 00000001800BB482: shr     eax, 3
 * 00000001800BB485: xor     ecx, eax
 * 00000001800BB487: xor     r12d, ecx
 * 00000001800BB48A: mov     ecx, r9d
 * 00000001800BB48D: xor     ecx, r12d
 * 00000001800BB490: rol     ecx, 4
 * 00000001800BB493: mov     edx, r12d
 * 00000001800BB496: rol     edx, 2
 * 00000001800BB499: mov     eax, dword ptr [rbp+1180h+var_1200]
 * 00000001800BB49C: imul    eax, ecx
 * 00000001800BB49F: xor     edx, eax
 * 00000001800BB4A1: xor     edx, r10d
 * 00000001800BB4A4: xor     r11d, edx
 * 00000001800BB4A7: xor     r12d, [rbp+1180h+var_1134]
 * 00000001800BB4AB: mov     [r13-4], r11b
 * 00000001800BB4AF: ror     r11d, 8
 * 00000001800BB4B3: mov     [r13+0], r12b
 * 00000001800BB4B7: ror     r12d, 8
 * 00000001800BB4BB: mov     [r13-5], r11b
 * 00000001800BB4BF: ror     r11d, 8
 * 00000001800BB4C3: mov     [r13-1], r12b
 * 00000001800BB4C7: ror     r12d, 8
 * 00000001800BB4CB: mov     [r13-6], r11b
 * 00000001800BB4CF: ror     r11d, 8
 * 00000001800BB4D3: mov     [r13-2], r12b
 * 00000001800BB4D7: ror     r12d, 8
 * 00000001800BB4DB: mov     [r13-7], r11b
 * 00000001800BB4DF: mov     [r13-3], r12b
 * 00000001800BB4E3: ror     r11d, 8
 * 00000001800BB4E7: ror     r12d, 8
 * 00000001800BB4EB: mov     r10d, r8d
 * 00000001800BB4EE: mov     [rbp+1180h+var_1134], edi
 * 00000001800BB4F1: lea     r13, [r13+8]
 * 00000001800BB4F5: sub     r15, 1
 * 00000001800BB4F9: jnz     loc_1800BB230
 * 00000001800BB4FF: mov     r15, [rbp+1180h+var_1128]
 * 00000001800BB503: lea     r12, [r15+0C0h]
 * 00000001800BB50A: mov     r13d, [rbp+1180h+var_10C8]
 * 00000001800BB511: mov     rbx, [rbp+1180h+Size]
 * 00000001800BB515: mov     rax, [rbp+1180h+var_1178]
 * 00000001800BB519: mov     r9, [rsp+1280h+var_1220]
 * 00000001800BB51E: mov     r10, [rbp+1180h+var_11A8]
 * 00000001800BB522: mov     r14, [rbp+1180h+var_11B8]
 * 00000001800BB526: mov     r8, [rbp+1180h+var_1148]
 * 00000001800BB52A: xor     edx, edx
 * 00000001800BB52C: mov     ecx, edx
 * 00000001800BB52E: mov     rsi, [rbp+1180h+var_1168]
 * 00000001800BB532: test    r8, r8
 * 00000001800BB535: jz      loc_1800BB5C8
 * 00000001800BB53B: cmp     r8, 20h ; ' '
 * 00000001800BB53F: jb      short loc_1800BB5B5
 * 00000001800BB541: mov     rdx, r8
 * 00000001800BB544: and     rdx, 0FFFFFFFFFFFFFFE0h
 * 00000001800BB548: xorps   xmm1, xmm1
 * 00000001800BB54B: xorps   xmm2, xmm2
 * 00000001800BB54E: movdqu  xmm0, xmmword ptr [rcx+rsi]
 * 00000001800BB553: pxor    xmm1, xmm0
 * 00000001800BB557: movdqu  xmm0, xmmword ptr [rcx+rsi+10h]
 * 00000001800BB55D: pxor    xmm0, xmm2
 * 00000001800BB561: movdqa  xmm2, xmm0
 * 00000001800BB565: add     rcx, 20h ; ' '
 * 00000001800BB569: cmp     rcx, rdx
 * 00000001800BB56C: jb      short loc_1800BB54E
 * 00000001800BB56E: pxor    xmm1, xmm0
 * 00000001800BB572: movdqa  xmm0, xmm1
 * 00000001800BB576: psrldq  xmm0, 8
 * 00000001800BB57B: pxor    xmm1, xmm0
 * 00000001800BB57F: movdqa  xmm0, xmm1
 * 00000001800BB583: psrldq  xmm0, 4
 * 00000001800BB588: pxor    xmm1, xmm0
 * 00000001800BB58C: movdqa  xmm0, xmm1
 * 00000001800BB590: psrldq  xmm0, 2
 * 00000001800BB595: pxor    xmm1, xmm0
 * 00000001800BB599: movdqa  xmm0, xmm1
 * 00000001800BB59D: psrldq  xmm0, 1
 * 00000001800BB5A2: pxor    xmm1, xmm0
 * 00000001800BB5A6: movd    edx, xmm1
 * 00000001800BB5AA: mov     dword ptr [rsp+1280h+lpMem], edx
 * 00000001800BB5AE: cmp     rcx, r8
 * 00000001800BB5B1: jb      short loc_1800BB5B9
 * 00000001800BB5B3: jmp     short loc_1800BB5C8
 * 00000001800BB5B5: mov     edx, dword ptr [rsp+1280h+lpMem]
 * 00000001800BB5B9: xor     dl, [rcx+rsi]
 * 00000001800BB5BC: inc     rcx
 * 00000001800BB5BF: cmp     rcx, r8
 * 00000001800BB5C2: jb      short loc_1800BB5B9
 * 00000001800BB5C4: mov     dword ptr [rsp+1280h+lpMem], edx
 * 00000001800BB5C8: mov     rcx, rax
 * 00000001800BB5CB: mov     [rbp+1180h+Size], rax
 * 00000001800BB5CF: movzx   eax, byte ptr [rsp+1280h+lpMem]
 * 00000001800BB5D4: mov     rdi, [rbp+1180h+var_11E0]
 * 00000001800BB5D8: cmp     rax, [r8+rdi]
 * 00000001800BB5DC: jz      short loc_1800BB603
 * 00000001800BB5DE: call    cs:__imp_GetProcessHeap
 * 00000001800BB5E5: nop     dword ptr [rax+rax+00h]
 * 00000001800BB5EA: mov     rcx, rax; hHeap
 * 00000001800BB5ED: mov     r8, rsi; lpMem
 * 00000001800BB5F0: xor     edx, edx; dwFlags
 * 00000001800BB5F2: call    cs:__imp_HeapFree
 * 00000001800BB5F9: nop     dword ptr [rax+rax+00h]
 * 00000001800BB5FE: jmp     loc_1800BBA8A
 * 00000001800BB603: mov     [rbp+1180h+var_DF8], r8
 * 00000001800BB60A: xor     eax, eax
 * 00000001800BB60C: mov     [rbp+1180h+var_1054], eax
 * 00000001800BB612: mov     [rbp+1180h+var_DF0], rsi
 * 00000001800BB619: cmp     r8d, 4
 * 00000001800BB61D: jnb     short loc_1800BB63A
 * 00000001800BB61F: mov     r11, r10
 * 00000001800BB622: mov     [rbp+1180h+var_11A8], r10
 * 00000001800BB626: mov     r10, r9
 * 00000001800BB629: mov     [rsp+1280h+var_1220], r9
 * 00000001800BB62E: mov     r9, rcx
 * 00000001800BB631: mov     [rbp+1180h+var_1178], rcx
 * 00000001800BB635: jmp     loc_1800BBA75
 * 00000001800BB63A: mov     eax, [rsi]
 * 00000001800BB63C: mov     dword ptr [rsp+1280h+lpMem], eax
 * 00000001800BB640: lea     r8, [rbp+1180h+var_DF0]
 * 00000001800BB647: mov     edx, 4
 * 00000001800BB64C: mov     rcx, rsi
 * 00000001800BB64F: call    RtlULongLongAdd
 * 00000001800BB654: mov     edi, eax
 * 00000001800BB656: mov     rax, rsi
 * 00000001800BB659: mov     [rbp+1180h+lpModuleName], rax
 * 00000001800BB65D: mov     r11, r10
 * 00000001800BB660: mov     [rbp+1180h+var_11A8], r10
 * 00000001800BB664: mov     r10, r9
 * 00000001800BB667: mov     [rsp+1280h+var_1220], r9
 * 00000001800BB66C: mov     r9, [rbp+1180h+Size]
 * 00000001800BB670: mov     [rbp+1180h+var_1178], r9
 * 00000001800BB674: test    edi, edi
 * 00000001800BB676: js      loc_1800BBA81
 * 00000001800BB67C: lea     r8, [rbp+1180h+var_1054]
 * 00000001800BB683: mov     edx, 4
 * 00000001800BB688: xor     ecx, ecx
 * 00000001800BB68A: call    RtlUIntAdd
 * 00000001800BB68F: mov     edi, eax
 * 00000001800BB691: mov     rax, rsi
 * 00000001800BB694: mov     [rbp+1180h+lpModuleName], rax
 * 00000001800BB698: mov     [rbp+1180h+var_11A8], r11
 * 00000001800BB69C: mov     r8, r10
 * 00000001800BB69F: mov     [rsp+1280h+var_1220], r10
 * 00000001800BB6A4: mov     rdx, rbx
 * 00000001800BB6A7: mov     rcx, r9
 * 00000001800BB6AA: mov     [rbp+1180h+var_1178], rcx
 * 00000001800BB6AE: test    edi, edi
 * 00000001800BB6B0: js      loc_1800BBA81
 * 00000001800BB6B6: mov     eax, dword ptr [rbp+1180h+var_1148]
 * 00000001800BB6B9: sub     eax, [rbp+1180h+var_1054]
 * 00000001800BB6BF: cmp     eax, 4
 * 00000001800BB6C2: jnb     short loc_1800BB6D2
 * 00000001800BB6C4: mov     [rsp+1280h+var_1220], r10
 * 00000001800BB6C9: mov     [rbp+1180h+var_1178], rcx
 * 00000001800BB6CD: jmp     loc_1800BBA71
 * 00000001800BB6D2: mov     rcx, [rbp+1180h+var_DF0]
 * 00000001800BB6D9: mov     eax, [rcx]
 * 00000001800BB6DB: mov     dword ptr [rbp+1180h+var_11D0], eax
 * 00000001800BB6DE: lea     r8, [rbp+1180h+var_DF0]
 * 00000001800BB6E5: mov     edx, 4
 * 00000001800BB6EA: call    RtlULongLongAdd
 * 00000001800BB6EF: mov     edi, eax
 * 00000001800BB6F1: mov     rax, rsi
 * 00000001800BB6F4: mov     [rbp+1180h+lpModuleName], rax
 * 00000001800BB6F8: mov     [rbp+1180h+var_11A8], r11
 * 00000001800BB6FC: mov     [rsp+1280h+var_1220], r10
 * 00000001800BB701: mov     [rbp+1180h+var_1178], r9
 * 00000001800BB705: test    edi, edi
 * 00000001800BB707: js      loc_1800BBA81
 * 00000001800BB70D: lea     r8, [rbp+1180h+var_1054]
 * 00000001800BB714: mov     edx, 4
 * 00000001800BB719: mov     ecx, [rbp+1180h+var_1054]
 * 00000001800BB71F: call    RtlUIntAdd
 * 00000001800BB724: mov     edi, eax
 * 00000001800BB726: mov     rax, rsi
 * 00000001800BB729: mov     [rbp+1180h+lpModuleName], rax
 * 00000001800BB72D: mov     [rbp+1180h+var_11A8], r11
 * 00000001800BB731: mov     r8, r10
 * 00000001800BB734: mov     [rsp+1280h+var_1220], r10
 * 00000001800BB739: mov     rdx, rbx
 * 00000001800BB73C: mov     rcx, r9
 * 00000001800BB73F: mov     [rbp+1180h+var_1178], rcx
 * 00000001800BB743: test    edi, edi
 * 00000001800BB745: js      loc_1800BBA81
 * 00000001800BB74B: mov     eax, dword ptr [rbp+1180h+var_1148]
 * 00000001800BB74E: mov     r9d, [rbp+1180h+var_1054]
 * 00000001800BB755: sub     eax, r9d
 * 00000001800BB758: mov     edi, dword ptr [rbp+1180h+var_11D0]
 * 00000001800BB75B: cmp     eax, edi
 * 00000001800BB75D: jnb     short loc_1800BB770
 * 00000001800BB75F: mov     [rsp+1280h+var_1220], r10
 * 00000001800BB764: mov     r9, rcx
 * 00000001800BB767: mov     [rbp+1180h+var_1178], rcx
 * 00000001800BB76B: jmp     loc_1800BBA71
 * 00000001800BB770: lea     r8, [rbp+1180h+var_1054]
 * 00000001800BB777: mov     edx, edi
 * 00000001800BB779: mov     ecx, r9d
 * 00000001800BB77C: call    RtlUIntAdd
 * 00000001800BB781: mov     edi, eax
 * 00000001800BB783: mov     rax, rsi
 * 00000001800BB786: mov     [rbp+1180h+lpModuleName], rax
 * 00000001800BB78A: mov     [rbp+1180h+var_11A8], r11
 * 00000001800BB78E: mov     [rsp+1280h+var_1220], r10
 * 00000001800BB793: mov     r8, rbx
 * 00000001800BB796: mov     rdx, [rbp+1180h+Size]
 * 00000001800BB79A: mov     r9, rdx
 * 00000001800BB79D: mov     [rbp+1180h+var_1178], rdx
 * 00000001800BB7A1: test    edi, edi
 * 00000001800BB7A3: js      loc_1800BBA81
 * 00000001800BB7A9: mov     edi, dword ptr [rbp+1180h+var_1148]
 * 00000001800BB7AC: mov     r9d, dword ptr [rbp+1180h+var_11D0]
 * 00000001800BB7B0: mov     [rbp+1180h+var_11E0], r9
 * 00000001800BB7B4: lea     rcx, [rdi+rsi]
 * 00000001800BB7B8: mov     rax, [rbp+1180h+var_DF0]
 * 00000001800BB7BF: add     rax, r9
 * 00000001800BB7C2: cmp     rcx, rax
 * 00000001800BB7C5: jb      loc_1800BBA65
 * 00000001800BB7CB: sub     rdi, r9
 * 00000001800BB7CE: mov     rcx, [rbp+1180h+var_DF0]
 * 00000001800BB7D5: sub     rdi, rcx
 * 00000001800BB7D8: add     rdi, rsi
 * 00000001800BB7DB: cmp     rdi, 8
 * 00000001800BB7DF: jnb     loc_1800BBA65
 * 00000001800BB7E5: xor     eax, eax
 * 00000001800BB7E7: mov     [rbp+1180h+var_1148], rax
 * 00000001800BB7EB: mov     edi, eax
 * 00000001800BB7ED: mov     dword ptr [rbp+1180h+var_11C8], eax
 * 00000001800BB7F0: mov     rax, rsi
 * 00000001800BB7F3: mov     [rbp+1180h+lpModuleName], rax
 * 00000001800BB7F7: mov     [rbp+1180h+var_11A8], r11
 * 00000001800BB7FB: mov     [rsp+1280h+var_1220], r10
 * 00000001800BB800: mov     r9, rdx
 * 00000001800BB803: mov     [rbp+1180h+var_1178], rdx
 * 00000001800BB807: test    rcx, rcx
 * 00000001800BB80A: jz      loc_1800BB9AA
 * 00000001800BB810: mov     [rbp+1180h+var_1180], rcx
 * 00000001800BB814: lea     r8, [rbp+1180h+var_DE8]
 * 00000001800BB81B: mov     rdx, [rbp+1180h+var_11E0]
 * 00000001800BB81F: call    RtlULongLongAdd
 * 00000001800BB824: mov     edi, eax
 * 00000001800BB826: mov     rax, rsi
 * 00000001800BB829: mov     [rbp+1180h+lpModuleName], rax
 * 00000001800BB82D: mov     [rbp+1180h+var_11A8], r11
 * 00000001800BB831: mov     r8, r10
 * 00000001800BB834: mov     [rsp+1280h+var_1220], r10
 * 00000001800BB839: mov     rdx, rbx
 * 00000001800BB83C: mov     rcx, r9
 * 00000001800BB83F: mov     [rbp+1180h+var_1178], rcx
 * 00000001800BB843: test    edi, edi
 * 00000001800BB845: js      loc_1800BBA81
 * 00000001800BB84B: mov     [rbp+1180h+lpModuleName], rax
 * 00000001800BB84F: mov     [rbp+1180h+var_11A8], r11
 * 00000001800BB853: mov     [rsp+1280h+var_1220], r10
 * 00000001800BB858: mov     [rbp+1180h+var_1178], r9
 * 00000001800BB85C: mov     r8, [rbp+1180h+var_DE8]
 * 00000001800BB863: cmp     [rbp+1180h+var_1180], r8
 * 00000001800BB867: jnb     loc_1800BB987
 * 00000001800BB86D: mov     r8, rsi
 * 00000001800BB870: mov     [rbp+1180h+lpModuleName], rsi
 * 00000001800BB874: mov     [rbp+1180h+var_11A8], r11
 * 00000001800BB878: mov     [rsp+1280h+var_1220], r10
 * 00000001800BB87D: mov     [rbp+1180h+var_1178], rcx
 * 00000001800BB881: mov     rsi, [rbp+1180h+var_1180]
 * 00000001800BB885: mov     [rbp+1180h+var_1180], r8
 * 00000001800BB889: lea     r8, [rbp+1180h+var_DE0]
 * 00000001800BB890: mov     edx, 4
 * 00000001800BB895: mov     rcx, rsi
 * 00000001800BB898: call    RtlULongLongAdd
 * 00000001800BB89D: mov     edi, eax
 * 00000001800BB89F: test    eax, eax
 * 00000001800BB8A1: js      loc_1800BB99A
 * 00000001800BB8A7: mov     rax, [rbp+1180h+var_DE8]
 * 00000001800BB8AE: cmp     [rbp+1180h+var_DE0], rax
 * 00000001800BB8B5: ja      loc_1800BB979
 * 00000001800BB8BB: lea     r8, [rbp+1180h+var_1050]
 * 00000001800BB8C2: mov     edx, [rsi]
 * 00000001800BB8C4: mov     ecx, 4
 * 00000001800BB8C9: call    RtlUIntAdd
 * 00000001800BB8CE: mov     edi, eax
 * 00000001800BB8D0: test    eax, eax
 * 00000001800BB8D2: js      loc_1800BB97E
 * 00000001800BB8D8: mov     edx, [rbp+1180h+var_1050]
 * 00000001800BB8DE: lea     r8, [rbp+1180h+var_DD8]
 * 00000001800BB8E5: mov     rcx, rsi
 * 00000001800BB8E8: call    RtlULongLongAdd
 * 00000001800BB8ED: mov     edi, eax
 * 00000001800BB8EF: mov     rax, [rbp+1180h+var_1180]
 * 00000001800BB8F3: mov     [rbp+1180h+lpModuleName], rax
 * 00000001800BB8F7: mov     [rbp+1180h+var_11A8], r11
 * 00000001800BB8FB: mov     r8, r10
 * 00000001800BB8FE: mov     [rsp+1280h+var_1220], r10
 * 00000001800BB903: mov     rdx, rbx
 * 00000001800BB906: mov     rcx, r9
 * 00000001800BB909: mov     [rbp+1180h+var_1178], rcx
 * 00000001800BB90D: test    edi, edi
 * 00000001800BB90F: js      loc_1800BBA81
 * 00000001800BB915: mov     rsi, [rbp+1180h+var_DD8]
 * 00000001800BB91C: mov     rax, [rbp+1180h+var_DE8]
 * 00000001800BB923: mov     [rbp+1180h+var_1178], rcx
 * 00000001800BB927: mov     [rbp+1180h+var_11A8], r11
 * 00000001800BB92B: cmp     rsi, rax
 * 00000001800BB92E: ja      short loc_1800BB966
 * 00000001800BB930: inc     dword ptr [rbp+1180h+var_11C8]
 * 00000001800BB933: mov     r8, [rbp+1180h+var_1180]
 * 00000001800BB937: mov     [rbp+1180h+lpModuleName], r8
 * 00000001800BB93B: mov     [rsp+1280h+var_1220], r10
 * 00000001800BB940: cmp     rsi, rax
 * 00000001800BB943: jb      loc_1800BB885
 * 00000001800BB949: mov     rax, r8
 * 00000001800BB94C: mov     [rbp+1180h+lpModuleName], rax
 * 00000001800BB950: mov     [rbp+1180h+var_11A8], r11
 * 00000001800BB954: mov     [rsp+1280h+var_1220], r10
 * 00000001800BB959: mov     [rbp+1180h+var_1178], r9
 * 00000001800BB95D: mov     r8, [rbp+1180h+var_DE8]
 * 00000001800BB964: jmp     short loc_1800BB98B
 * 00000001800BB966: mov     edi, 0C000000Dh
 * 00000001800BB96B: mov     rax, [rbp+1180h+var_1180]
 * 00000001800BB96F: mov     [rsp+1280h+var_1220], r8
 * 00000001800BB974: jmp     loc_1800BBA7D
 * 00000001800BB979: mov     edi, 0C000000Dh
 * 00000001800BB97E: mov     rax, [rbp+1180h+lpModuleName]
 * 00000001800BB982: jmp     loc_1800BBA81
 * 00000001800BB987: mov     rsi, [rbp+1180h+var_1180]
 * 00000001800BB98B: cmp     rsi, r8
 * 00000001800BB98E: jz      short loc_1800BB9A3
 * 00000001800BB990: mov     edi, 0C000000Dh
 * 00000001800BB995: jmp     loc_1800BBA81
 * 00000001800BB99A: mov     rax, [rbp+1180h+lpModuleName]
 * 00000001800BB99E: jmp     loc_1800BBA4E
 * 00000001800BB9A3: mov     rcx, [rbp+1180h+var_DF0]
 * 00000001800BB9AA: cmp     dword ptr [rbp+1180h+var_11D0], 0
 * 00000001800BB9AE: jz      short loc_1800BBA0C
 * 00000001800BB9B0: call    cs:__imp_GetProcessHeap
 * 00000001800BB9B7: nop     dword ptr [rax+rax+00h]
 * 00000001800BB9BC: mov     rcx, rax; hHeap
 * 00000001800BB9BF: mov     rsi, [rbp+1180h+var_11E0]
 * 00000001800BB9C3: mov     r8, rsi; dwBytes
 * 00000001800BB9C6: mov     edx, 8; dwFlags
 * 00000001800BB9CB: call    cs:__imp_HeapAlloc
 * 00000001800BB9D2: nop     dword ptr [rax+rax+00h]
 * 00000001800BB9D7: mov     [rbp+1180h+var_1148], rax
 * 00000001800BB9DB: mov     r9, [rbp+1180h+var_1178]
 * 00000001800BB9DF: mov     r10, [rsp+1280h+var_1220]
 * 00000001800BB9E4: mov     r11, [rbp+1180h+var_11A8]
 * 00000001800BB9E8: test    rax, rax
 * 00000001800BB9EB: jnz     short loc_1800BB9FB
 * 00000001800BB9ED: mov     edi, 0C0000017h
 * 00000001800BB9F2: mov     rax, [rbp+1180h+lpModuleName]
 * 00000001800BB9F6: jmp     loc_1800BBA81
 * 00000001800BB9FB: xor     eax, eax
 * 00000001800BB9FD: mov     edi, eax
 * 00000001800BB9FF: mov     rax, [rbp+1180h+lpModuleName]
 * 00000001800BBA03: mov     rcx, [rbp+1180h+var_DF0]
 * 00000001800BBA0A: jmp     short loc_1800BBA10
 * 00000001800BBA0C: mov     rsi, [rbp+1180h+var_11E0]
 * 00000001800BBA10: test    rcx, rcx
 * 00000001800BBA13: jz      short loc_1800BBA3A
 * 00000001800BBA15: mov     r8, rsi; Size
 * 00000001800BBA18: mov     rdx, rcx; Src
 * 00000001800BBA1B: mov     rsi, [rbp+1180h+var_1148]
 * 00000001800BBA1F: mov     rcx, rsi; void *
 * 00000001800BBA22: call    memcpy_0
 * 00000001800BBA27: mov     r9, [rbp+1180h+var_1178]
 * 00000001800BBA2B: mov     r10, [rsp+1280h+var_1220]
 * 00000001800BBA30: mov     r11, [rbp+1180h+var_11A8]
 * 00000001800BBA34: mov     rax, [rbp+1180h+lpModuleName]
 * 00000001800BBA38: jmp     short loc_1800BBA3E
 * 00000001800BBA3A: mov     rsi, [rbp+1180h+var_1148]
 * 00000001800BBA3E: mov     [rbp+1180h+var_CB8+8], rsi
 * 00000001800BBA45: mov     ecx, dword ptr [rbp+1180h+var_11C8]
 * 00000001800BBA48: mov     dword ptr [rbp+1180h+var_CB8], ecx
 * 00000001800BBA4E: test    edi, edi
 * 00000001800BBA50: js      short loc_1800BBA81
 * 00000001800BBA52: mov     ecx, dword ptr [rsp+1280h+lpMem]
 * 00000001800BBA56: cmp     ecx, dword ptr [rbp+1180h+var_CB8]
 * 00000001800BBA5C: jz      short loc_1800BBA81
 * 00000001800BBA5E: mov     edi, 0C000003Eh
 * 00000001800BBA63: jmp     short loc_1800BBA81
 * 00000001800BBA65: mov     [rsp+1280h+var_1220], r10
 * 00000001800BBA6A: mov     r9, rdx
 * 00000001800BBA6D: mov     [rbp+1180h+var_1178], rdx
 * 00000001800BBA71: mov     [rbp+1180h+var_11A8], r11
 * 00000001800BBA75: mov     rax, rsi
 * 00000001800BBA78: mov     edi, 0C000003Eh
 * 00000001800BBA7D: mov     [rbp+1180h+lpModuleName], rax
 * 00000001800BBA81: bts     edi, 1Ch
 * 00000001800BBA85: jmp     short loc_1800BBAD8
 * 00000001800BBA87: mov     r14, rdi
 * 00000001800BBA8A: mov     edi, 0D0000001h
 * 00000001800BBA8F: mov     r9, [rbp+1180h+var_1178]
 * 00000001800BBA93: mov     r10, [rsp+1280h+var_1220]
 * 00000001800BBA98: mov     r11, [rbp+1180h+var_11A8]
 * 00000001800BBA9C: mov     rax, [rbp+1180h+lpModuleName]
 * 00000001800BBAA0: jmp     short loc_1800BBAD8
 * 00000001800BBAA2: mov     edi, 0D0000001h
 * 00000001800BBAA7: mov     rbx, [rbp+1180h+Size]
 * 00000001800BBAAB: mov     r14, rbx
 * 00000001800BBAAE: xor     esi, esi
 * 00000001800BBAB0: jmp     short loc_1800BBADF
 * 00000001800BBAB2: mov     rbx, [rbp+1180h+Size]
 * 00000001800BBAB6: mov     r14, rbx
 * 00000001800BBAB9: mov     rax, rbx
 * 00000001800BBABC: jmp     short loc_1800BBAD8
 * 00000001800BBABE: mov     r10, rax
 * 00000001800BBAC1: mov     r11, rax
 * 00000001800BBAC4: mov     r14, rax
 * 00000001800BBAC7: jmp     short loc_1800BBAD8
 * 00000001800BBAC9: mov     edi, 0C000000Dh
 * 00000001800BBACE: mov     r11, [rbp+1180h+var_11A8]
 * 00000001800BBAD2: mov     rax, r11
 * 00000001800BBAD5: mov     r14, r11
 * 00000001800BBAD8: xor     esi, esi
 * 00000001800BBADA: test    r9, r9
 * 00000001800BBADD: jz      short loc_1800BBB0D
 * 00000001800BBADF: call    cs:__imp_GetProcessHeap
 * 00000001800BBAE6: nop     dword ptr [rax+rax+00h]
 * 00000001800BBAEB: mov     rcx, rax; hHeap
 * 00000001800BBAEE: mov     r8, [rbp+1180h+var_1178]; lpMem
 * 00000001800BBAF2: xor     edx, edx; dwFlags
 * 00000001800BBAF4: call    cs:__imp_HeapFree
 * 00000001800BBAFB: nop     dword ptr [rax+rax+00h]
 * 00000001800BBB00: mov     r10, [rsp+1280h+var_1220]
 * 00000001800BBB05: mov     r11, [rbp+1180h+var_11A8]
 * 00000001800BBB09: mov     rax, [rbp+1180h+lpModuleName]
 * 00000001800BBB0D: test    rbx, rbx
 * 00000001800BBB10: jz      loc_1800BBBD0
 * 00000001800BBB16: mov     rsi, [rbx+8]
 * 00000001800BBB1A: test    rsi, rsi
 * 00000001800BBB1D: jz      short loc_1800BBB45
 * 00000001800BBB1F: call    cs:__imp_GetProcessHeap
 * 00000001800BBB26: nop     dword ptr [rax+rax+00h]
 * 00000001800BBB2B: mov     rcx, rax; hHeap
 * 00000001800BBB2E: mov     r8, rsi; lpMem
 * 00000001800BBB31: xor     edx, edx; dwFlags
 * 00000001800BBB33: call    cs:__imp_HeapFree
 * 00000001800BBB3A: nop     dword ptr [rax+rax+00h]
 * 00000001800BBB3F: xor     eax, eax
 * 00000001800BBB41: mov     [rbx+8], rax
 * 00000001800BBB45: mov     rsi, [rbx+18h]
 * 00000001800BBB49: test    rsi, rsi
 * 00000001800BBB4C: jz      short loc_1800BBB74
 * 00000001800BBB4E: call    cs:__imp_GetProcessHeap
 * 00000001800BBB55: nop     dword ptr [rax+rax+00h]
 * 00000001800BBB5A: mov     rcx, rax; hHeap
 * 00000001800BBB5D: mov     r8, rsi; lpMem
 * 00000001800BBB60: xor     edx, edx; dwFlags
 * 00000001800BBB62: call    cs:__imp_HeapFree
 * 00000001800BBB69: nop     dword ptr [rax+rax+00h]
 * 00000001800BBB6E: xor     eax, eax
 * 00000001800BBB70: mov     [rbx+18h], rax
 * 00000001800BBB74: mov     rsi, [rbx+28h]
 * 00000001800BBB78: test    rsi, rsi
 * 00000001800BBB7B: jz      short loc_1800BBBA3
 * 00000001800BBB7D: call    cs:__imp_GetProcessHeap
 * 00000001800BBB84: nop     dword ptr [rax+rax+00h]
 * 00000001800BBB89: mov     rcx, rax; hHeap
 * 00000001800BBB8C: mov     r8, rsi; lpMem
 * 00000001800BBB8F: xor     edx, edx; dwFlags
 * 00000001800BBB91: call    cs:__imp_HeapFree
 * 00000001800BBB98: nop     dword ptr [rax+rax+00h]
 * 00000001800BBB9D: xor     esi, esi
 * 00000001800BBB9F: mov     [rbx+28h], rsi
 * 00000001800BBBA3: call    cs:__imp_GetProcessHeap
 * 00000001800BBBAA: nop     dword ptr [rax+rax+00h]
 * 00000001800BBBAF: mov     rcx, rax; hHeap
 * 00000001800BBBB2: mov     r8, rbx; lpMem
 * 00000001800BBBB5: xor     edx, edx; dwFlags
 * 00000001800BBBB7: call    cs:__imp_HeapFree
 * 00000001800BBBBE: nop     dword ptr [rax+rax+00h]
 * 00000001800BBBC3: mov     r10, [rsp+1280h+var_1220]
 * 00000001800BBBC8: mov     r11, [rbp+1180h+var_11A8]
 * 00000001800BBBCC: mov     rax, [rbp+1180h+lpModuleName]
 * 00000001800BBBD0: test    r10, r10
 * 00000001800BBBD3: jz      short loc_1800BBBFF
 * 00000001800BBBD5: call    cs:__imp_GetProcessHeap
 * 00000001800BBBDC: nop     dword ptr [rax+rax+00h]
 * 00000001800BBBE1: mov     rcx, rax; hHeap
 * 00000001800BBBE4: mov     r8, [rsp+1280h+var_1220]; lpMem
 * 00000001800BBBE9: xor     edx, edx; dwFlags
 * 00000001800BBBEB: call    cs:__imp_HeapFree
 * 00000001800BBBF2: nop     dword ptr [rax+rax+00h]
 * 00000001800BBBF7: mov     r11, [rbp+1180h+var_11A8]
 * 00000001800BBBFB: mov     rax, [rbp+1180h+lpModuleName]
 * 00000001800BBBFF: test    r11, r11
 * 00000001800BBC02: jz      short loc_1800BBC29
 * 00000001800BBC04: call    cs:__imp_GetProcessHeap
 * 00000001800BBC0B: nop     dword ptr [rax+rax+00h]
 * 00000001800BBC10: mov     rcx, rax; hHeap
 * 00000001800BBC13: mov     r8, [rbp+1180h+var_11A8]; lpMem
 * 00000001800BBC17: xor     edx, edx; dwFlags
 * 00000001800BBC19: call    cs:__imp_HeapFree
 * 00000001800BBC20: nop     dword ptr [rax+rax+00h]
 * 00000001800BBC25: mov     rax, [rbp+1180h+lpModuleName]
 * 00000001800BBC29: test    r14, r14
 * 00000001800BBC2C: jz      loc_1800BBCDD
 * 00000001800BBC32: mov     rbx, [r14+8]
 * 00000001800BBC36: test    rbx, rbx
 * 00000001800BBC39: jz      short loc_1800BBC5F
 * 00000001800BBC3B: call    cs:__imp_GetProcessHeap
 * 00000001800BBC42: nop     dword ptr [rax+rax+00h]
 * 00000001800BBC47: mov     rcx, rax; hHeap
 * 00000001800BBC4A: mov     r8, rbx; lpMem
 * 00000001800BBC4D: xor     edx, edx; dwFlags
 * 00000001800BBC4F: call    cs:__imp_HeapFree
 * 00000001800BBC56: nop     dword ptr [rax+rax+00h]
 * 00000001800BBC5B: mov     [r14+8], rsi
 * 00000001800BBC5F: mov     rbx, [r14+18h]
 * 00000001800BBC63: test    rbx, rbx
 * 00000001800BBC66: jz      short loc_1800BBC8C
 * 00000001800BBC68: call    cs:__imp_GetProcessHeap
 * 00000001800BBC6F: nop     dword ptr [rax+rax+00h]
 * 00000001800BBC74: mov     rcx, rax; hHeap
 * 00000001800BBC77: mov     r8, rbx; lpMem
 * 00000001800BBC7A: xor     edx, edx; dwFlags
 * 00000001800BBC7C: call    cs:__imp_HeapFree
 * 00000001800BBC83: nop     dword ptr [rax+rax+00h]
 * 00000001800BBC88: mov     [r14+18h], rsi
 * 00000001800BBC8C: mov     rbx, [r14+28h]
 * 00000001800BBC90: test    rbx, rbx
 * 00000001800BBC93: jz      short loc_1800BBCB9
 * 00000001800BBC95: call    cs:__imp_GetProcessHeap
 * 00000001800BBC9C: nop     dword ptr [rax+rax+00h]
 * 00000001800BBCA1: mov     rcx, rax; hHeap
 * 00000001800BBCA4: mov     r8, rbx; lpMem
 * 00000001800BBCA7: xor     edx, edx; dwFlags
 * 00000001800BBCA9: call    cs:__imp_HeapFree
 * 00000001800BBCB0: nop     dword ptr [rax+rax+00h]
 * 00000001800BBCB5: mov     [r14+28h], rsi
 * 00000001800BBCB9: call    cs:__imp_GetProcessHeap
 * 00000001800BBCC0: nop     dword ptr [rax+rax+00h]
 * 00000001800BBCC5: mov     rcx, rax; hHeap
 * 00000001800BBCC8: mov     r8, r14; lpMem
 * 00000001800BBCCB: xor     edx, edx; dwFlags
 * 00000001800BBCCD: call    cs:__imp_HeapFree
 * 00000001800BBCD4: nop     dword ptr [rax+rax+00h]
 * 00000001800BBCD9: mov     rax, [rbp+1180h+lpModuleName]
 * 00000001800BBCDD: test    rax, rax
 * 00000001800BBCE0: jz      short loc_1800BBD03
 * 00000001800BBCE2: call    cs:__imp_GetProcessHeap
 * 00000001800BBCE9: nop     dword ptr [rax+rax+00h]
 * 00000001800BBCEE: mov     rcx, rax; hHeap
 * 00000001800BBCF1: mov     r8, [rbp+1180h+lpModuleName]; lpMem
 * 00000001800BBCF5: xor     edx, edx; dwFlags
 * 00000001800BBCF7: call    cs:__imp_HeapFree
 * 00000001800BBCFE: nop     dword ptr [rax+rax+00h]
 * 00000001800BBD03: test    edi, edi
 * 00000001800BBD05: js      short loc_1800BBD43
 * 00000001800BBD07: mov     eax, dword ptr [rbp+1180h+var_CB8]
 * 00000001800BBD0D: cmp     eax, 1
 * 00000001800BBD10: jb      short loc_1800BBD43
 * 00000001800BBD12: mov     rdi, [rbp+1180h+var_CB8+8]
 * 00000001800BBD19: test    rdi, rdi
 * 00000001800BBD1C: jz      short loc_1800BBD43
 * 00000001800BBD1E: mov     r11d, 4
 * 00000001800BBD24: test    eax, eax
 * 00000001800BBD26: jz      short loc_1800BBD49
 * 00000001800BBD28: mov     [rbp+1180h+var_DD0], rdi
 * 00000001800BBD2F: lea     r8, [rbp+1180h+var_DD0]
 * 00000001800BBD36: mov     edx, r11d
 * 00000001800BBD39: mov     rcx, rdi
 * 00000001800BBD3C: call    RtlULongLongAdd
 * 00000001800BBD41: jmp     short loc_1800BBD49
 * 00000001800BBD43: mov     r11d, 4
 * 00000001800BBD49: xor     r14d, r14d
 * 00000001800BBD4C: mov     dword ptr [rbp+1180h+var_CE4], r14d
 * 00000001800BBD53: mov     [rbp+1180h+var_CE8], r14d
 * 00000001800BBD5A: mov     rdi, [rbp+1180h+var_CE4+4]
 * 00000001800BBD61: test    rdi, rdi
 * 00000001800BBD64: jz      short loc_1800BBD91
 * 00000001800BBD66: call    cs:__imp_GetProcessHeap
 * 00000001800BBD6D: nop     dword ptr [rax+rax+00h]
 * 00000001800BBD72: mov     rcx, rax; hHeap
 * 00000001800BBD75: mov     r8, rdi; lpMem
 * 00000001800BBD78: xor     edx, edx; dwFlags
 * 00000001800BBD7A: call    cs:__imp_HeapFree
 * 00000001800BBD81: nop     dword ptr [rax+rax+00h]
 * 00000001800BBD86: mov     [rbp+1180h+var_CE4+4], r14
 * 00000001800BBD8D: lea     r11d, [r14+4]
 * 00000001800BBD91: mov     dword ptr [rbp+1180h+var_CB8+4], r14d
 * 00000001800BBD98: mov     dword ptr [rbp+1180h+var_CB8], r14d
 * 00000001800BBD9F: mov     rdi, [rbp+1180h+var_CB8+8]
 * 00000001800BBDA6: test    rdi, rdi
 * 00000001800BBDA9: jz      short loc_1800BBDD8
 * 00000001800BBDAB: call    cs:__imp_GetProcessHeap
 * 00000001800BBDB2: nop     dword ptr [rax+rax+00h]
 * 00000001800BBDB7: mov     rcx, rax; hHeap
 * 00000001800BBDBA: mov     r8, rdi; lpMem
 * 00000001800BBDBD: xor     edx, edx; dwFlags
 * 00000001800BBDBF: call    cs:__imp_HeapFree
 * 00000001800BBDC6: nop     dword ptr [rax+rax+00h]
 * 00000001800BBDCB: mov     [rbp+1180h+var_CB8+8], r14
 * 00000001800BBDD2: mov     r11d, 4
 * 00000001800BBDD8: mov     rdi, [rsp+1280h+var_1208]
 * 00000001800BBDDD: test    rdi, rdi
 * 00000001800BBDE0: jz      short loc_1800BBE08
 * 00000001800BBDE2: call    cs:__imp_GetProcessHeap
 * 00000001800BBDE9: nop     dword ptr [rax+rax+00h]
 * 00000001800BBDEE: mov     rcx, rax; hHeap
 * 00000001800BBDF1: mov     r8, rdi; lpMem
 * 00000001800BBDF4: xor     edx, edx; dwFlags
 * 00000001800BBDF6: call    cs:__imp_HeapFree
 * 00000001800BBDFD: nop     dword ptr [rax+rax+00h]
 * 00000001800BBE02: mov     r11d, 4
 * 00000001800BBE08: mov     rdi, [rbp+1180h+var_1188]
 * 00000001800BBE0C: test    rdi, rdi
 * 00000001800BBE0F: jz      short loc_1800BBE3C
 * 00000001800BBE11: call    cs:__imp_GetProcessHeap
 * 00000001800BBE18: nop     dword ptr [rax+rax+00h]
 * 00000001800BBE1D: mov     rcx, rax; hHeap
 * 00000001800BBE20: mov     r8, rdi; lpMem
 * 00000001800BBE23: xor     edx, edx; dwFlags
 * 00000001800BBE25: call    cs:__imp_HeapFree
 * 00000001800BBE2C: nop     dword ptr [rax+rax+00h]
 * 00000001800BBE31: mov     r11d, 4
 * 00000001800BBE37: jmp     short loc_1800BBE3C
 * 00000001800BBE39: xor     r14d, r14d
 * 00000001800BBE3C: mov     [rbp+1180h+var_1148], r14
 * 00000001800BBE40: mov     rax, [rbp+1180h+var_11A0]
 * 00000001800BBE44: mov     [rbp+1180h+var_F88], rax
 * 00000001800BBE4B: mov     edi, dword ptr [rbp+1180h+var_1140]
 * 00000001800BBE4E: jmp     short loc_1800BBE5A
 * 00000001800BBE50: mov     edi, dword ptr [rbp+1180h+var_1140]
 * 00000001800BBE53: xor     r14d, r14d
 * 00000001800BBE56: mov     r13d, [rbp+1180h+var_112C]
 * 00000001800BBE5A: mov     ecx, 1
 * 00000001800BBE5F: xor     eax, eax
 * 00000001800BBE61: lock cmpxchg cs:dword_1801C2A58, ecx
 * 00000001800BBE69: jnz     short loc_1800BBE5F
 * 00000001800BBE6B: mov     eax, cs:dword_1801C23F0
 * 00000001800BBE71: test    eax, eax
 * 00000001800BBE73: jle     short loc_1800BBEDD
 * 00000001800BBE75: sub     eax, ecx
 * 00000001800BBE77: mov     cs:dword_1801C23F0, eax
 * 00000001800BBE7D: jnz     short loc_1800BBEDD
 * 00000001800BBE7F: lea     rbx, unk_1801C29C0
 * 00000001800BBE86: mov     rcx, [rbx]; hLibModule
 * 00000001800BBE89: test    rcx, rcx
 * 00000001800BBE8C: jz      short loc_1800BBEA1
 * 00000001800BBE8E: call    cs:__imp_FreeLibrary
 * 00000001800BBE95: nop     dword ptr [rax+rax+00h]
 * 00000001800BBE9A: mov     r11, [rbp+1180h+var_EA0]
 * 00000001800BBEA1: add     rbx, 18h
 * 00000001800BBEA5: sub     r11, 1
 * 00000001800BBEA9: mov     [rbp+1180h+var_EA0], r11
 * 00000001800BBEB0: jnz     short loc_1800BBE86
 * 00000001800BBEB2: xor     edx, edx; Val
 * 00000001800BBEB4: lea     r8d, [rdx+60h]; Size
 * 00000001800BBEB8: lea     rcx, unk_1801C29C0; void *
 * 00000001800BBEBF: call    memset_0
 * 00000001800BBEC4: mov     r8d, 170h; Size
 * 00000001800BBECA: lea     rdx, off_18016CF50; Src
 * 00000001800BBED1: lea     rcx, off_1801C0000; void *
 * 00000001800BBED8: call    memcpy_0
 * 00000001800BBEDD: mov     eax, r14d
 * 00000001800BBEE0: xchg    eax, cs:dword_1801C2A58
 * 00000001800BBEE6: lea     rcx, [rbp+1180h+var_1148]
 * 00000001800BBEEA: call    ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ; SP<uchar,SP_HLOCAL<uchar>>::Reset(void)
 * 00000001800BBEEF: test    edi, edi
 * 00000001800BBEF1: js      loc_18005964C
 * 00000001800BBEF7: jmp     loc_180059632
 */
