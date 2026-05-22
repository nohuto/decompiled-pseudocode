/*
 * XREFs of ?TryCreateAndInitialize@HidLampAttributesResponseReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800DB0F4
 * Callers:
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800D7D4C (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003B3D0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0HidLampAttributesResponseReportParser@@AEAA@XZ @ 0x1800DA9C4 (--0HidLampAttributesResponseReportParser@@AEAA@XZ.c)
 *     ?IsParserValid@HidLampAttributesResponseReportParser@@CA_NPEBV1@@Z @ 0x1800DADB8 (-IsParserValid@HidLampAttributesResponseReportParser@@CA_NPEBV1@@Z.c)
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x1800DCDC8 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HidLampAttributesResponseReportParser::TryCreateAndInitialize(
        const struct ParsedHidReportDescriptor *a1,
        struct HidLampAttributesResponseReportParser **a2)
{
  HidLampAttributesResponseReportParser *v4; // rax
  struct HidLampAttributesResponseReportParser *v5; // rdi
  struct HidLampAttributesResponseReportParser *v6; // rbx
  __int64 i; // r8
  __int64 v9; // rax
  __int16 v10; // dx
  __int128 v11; // xmm2
  __int128 v12; // xmm3
  __int128 v13; // xmm4
  __int64 v14; // xmm0_8
  __int128 v15; // xmm2
  __int128 v16; // xmm3
  __int128 v17; // xmm4
  __int64 v18; // xmm0_8
  __int128 v19; // xmm2
  __int128 v20; // xmm3
  __int128 v21; // xmm4
  __int64 v22; // xmm0_8
  __int128 v23; // xmm2
  __int128 v24; // xmm3
  __int128 v25; // xmm4
  __int64 v26; // xmm0_8
  __int128 v27; // xmm2
  __int128 v28; // xmm3
  __int128 v29; // xmm4
  __int64 v30; // xmm0_8
  __int128 v31; // xmm2
  __int128 v32; // xmm3
  __int128 v33; // xmm4
  __int64 v34; // xmm0_8
  __int128 v35; // xmm2
  __int128 v36; // xmm3
  __int128 v37; // xmm4
  __int64 v38; // xmm0_8
  __int128 v39; // xmm2
  __int128 v40; // xmm3
  __int128 v41; // xmm4
  __int64 v42; // xmm0_8
  __int128 v43; // xmm2
  __int128 v44; // xmm3
  __int128 v45; // xmm4
  __int64 v46; // xmm0_8
  __int128 v47; // xmm2
  __int128 v48; // xmm3
  __int128 v49; // xmm4
  __int64 v50; // xmm0_8
  __int128 v51; // xmm2
  __int128 v52; // xmm3
  __int128 v53; // xmm4
  __int64 v54; // xmm0_8
  __int128 v55; // xmm2
  __int128 v56; // xmm3
  __int128 v57; // xmm4
  __int64 v58; // xmm0_8
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // rdx
  __int64 v67; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v4 = (HidLampAttributesResponseReportParser *)RefCountedObject::operator new(0x380uLL);
  if ( v4 )
    v5 = HidLampAttributesResponseReportParser::HidLampAttributesResponseReportParser(v4);
  else
    v5 = 0LL;
  v6 = v5;
  if ( v5 )
  {
    (*(void (__fastcall **)(struct HidLampAttributesResponseReportParser *))(*(_QWORD *)v5 + 8LL))(v5);
    *((_BYTE *)v5 + 16) = *((_BYTE *)a1 + 4);
    if ( *(_DWORD *)a1 == 2 )
    {
      *((_BYTE *)v5 + 17) = 2;
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 2); i = (unsigned int)(i + 1) )
      {
        v9 = *((_QWORD *)a1 + 2);
        if ( *(_WORD *)(v9 + 72 * i + 18) == 34 && *(_WORD *)(v9 + 72 * i + 16) == 89 )
        {
          v10 = *(_WORD *)(v9 + 72 * i + 10);
          switch ( v10 )
          {
            case '!':
              if ( *(_WORD *)(v9 + 72 * i + 8) == 89 )
              {
                v11 = *(_OWORD *)(v9 + 72 * i + 16);
                v12 = *(_OWORD *)(v9 + 72 * i + 32);
                v13 = *(_OWORD *)(v9 + 72 * i + 48);
                v14 = *(_QWORD *)(v9 + 72 * i + 64);
                *(_OWORD *)((char *)v5 + 24) = *(_OWORD *)(v9 + 72 * i);
                *(_OWORD *)((char *)v5 + 40) = v11;
                *(_OWORD *)((char *)v5 + 56) = v12;
                *(_OWORD *)((char *)v5 + 72) = v13;
                *((_QWORD *)v5 + 11) = v14;
              }
              break;
            case '#':
              if ( *(_WORD *)(v9 + 72 * i + 8) == 89 )
              {
                v15 = *(_OWORD *)(v9 + 72 * i + 16);
                v16 = *(_OWORD *)(v9 + 72 * i + 32);
                v17 = *(_OWORD *)(v9 + 72 * i + 48);
                v18 = *(_QWORD *)(v9 + 72 * i + 64);
                *((_OWORD *)v5 + 6) = *(_OWORD *)(v9 + 72 * i);
                *((_OWORD *)v5 + 7) = v15;
                *((_OWORD *)v5 + 8) = v16;
                *((_OWORD *)v5 + 9) = v17;
                *((_QWORD *)v5 + 20) = v18;
              }
              break;
            case '$':
              if ( *(_WORD *)(v9 + 72 * i + 8) == 89 )
              {
                v19 = *(_OWORD *)(v9 + 72 * i + 16);
                v20 = *(_OWORD *)(v9 + 72 * i + 32);
                v21 = *(_OWORD *)(v9 + 72 * i + 48);
                v22 = *(_QWORD *)(v9 + 72 * i + 64);
                *(_OWORD *)((char *)v5 + 168) = *(_OWORD *)(v9 + 72 * i);
                *(_OWORD *)((char *)v5 + 184) = v19;
                *(_OWORD *)((char *)v5 + 200) = v20;
                *(_OWORD *)((char *)v5 + 216) = v21;
                *((_QWORD *)v5 + 29) = v22;
              }
              break;
            case '%':
              if ( *(_WORD *)(v9 + 72 * i + 8) == 89 )
              {
                v23 = *(_OWORD *)(v9 + 72 * i + 16);
                v24 = *(_OWORD *)(v9 + 72 * i + 32);
                v25 = *(_OWORD *)(v9 + 72 * i + 48);
                v26 = *(_QWORD *)(v9 + 72 * i + 64);
                *((_OWORD *)v5 + 15) = *(_OWORD *)(v9 + 72 * i);
                *((_OWORD *)v5 + 16) = v23;
                *((_OWORD *)v5 + 17) = v24;
                *((_OWORD *)v5 + 18) = v25;
                *((_QWORD *)v5 + 38) = v26;
              }
              break;
            case '\'':
              if ( *(_WORD *)(v9 + 72 * i + 8) == 89 )
              {
                v27 = *(_OWORD *)(v9 + 72 * i + 16);
                v28 = *(_OWORD *)(v9 + 72 * i + 32);
                v29 = *(_OWORD *)(v9 + 72 * i + 48);
                v30 = *(_QWORD *)(v9 + 72 * i + 64);
                *(_OWORD *)((char *)v5 + 312) = *(_OWORD *)(v9 + 72 * i);
                *(_OWORD *)((char *)v5 + 328) = v27;
                *(_OWORD *)((char *)v5 + 344) = v28;
                *(_OWORD *)((char *)v5 + 360) = v29;
                *((_QWORD *)v5 + 47) = v30;
              }
              break;
            case '&':
              if ( *(_WORD *)(v9 + 72 * i + 8) == 89 )
              {
                v31 = *(_OWORD *)(v9 + 72 * i + 16);
                v32 = *(_OWORD *)(v9 + 72 * i + 32);
                v33 = *(_OWORD *)(v9 + 72 * i + 48);
                v34 = *(_QWORD *)(v9 + 72 * i + 64);
                *((_OWORD *)v5 + 24) = *(_OWORD *)(v9 + 72 * i);
                *((_OWORD *)v5 + 25) = v31;
                *((_OWORD *)v5 + 26) = v32;
                *((_OWORD *)v5 + 27) = v33;
                *((_QWORD *)v5 + 56) = v34;
              }
              break;
            case '(':
              if ( *(_WORD *)(v9 + 72 * i + 8) == 89 )
              {
                v35 = *(_OWORD *)(v9 + 72 * i + 16);
                v36 = *(_OWORD *)(v9 + 72 * i + 32);
                v37 = *(_OWORD *)(v9 + 72 * i + 48);
                v38 = *(_QWORD *)(v9 + 72 * i + 64);
                *(_OWORD *)((char *)v5 + 600) = *(_OWORD *)(v9 + 72 * i);
                *(_OWORD *)((char *)v5 + 616) = v35;
                *(_OWORD *)((char *)v5 + 632) = v36;
                *(_OWORD *)((char *)v5 + 648) = v37;
                *((_QWORD *)v5 + 83) = v38;
              }
              break;
            case ')':
              if ( *(_WORD *)(v9 + 72 * i + 8) == 89 )
              {
                v39 = *(_OWORD *)(v9 + 72 * i + 16);
                v40 = *(_OWORD *)(v9 + 72 * i + 32);
                v41 = *(_OWORD *)(v9 + 72 * i + 48);
                v42 = *(_QWORD *)(v9 + 72 * i + 64);
                *((_OWORD *)v5 + 42) = *(_OWORD *)(v9 + 72 * i);
                *((_OWORD *)v5 + 43) = v39;
                *((_OWORD *)v5 + 44) = v40;
                *((_OWORD *)v5 + 45) = v41;
                *((_QWORD *)v5 + 92) = v42;
              }
              break;
            case '*':
              if ( *(_WORD *)(v9 + 72 * i + 8) == 89 )
              {
                v43 = *(_OWORD *)(v9 + 72 * i + 16);
                v44 = *(_OWORD *)(v9 + 72 * i + 32);
                v45 = *(_OWORD *)(v9 + 72 * i + 48);
                v46 = *(_QWORD *)(v9 + 72 * i + 64);
                *(_OWORD *)((char *)v5 + 744) = *(_OWORD *)(v9 + 72 * i);
                *(_OWORD *)((char *)v5 + 760) = v43;
                *(_OWORD *)((char *)v5 + 776) = v44;
                *(_OWORD *)((char *)v5 + 792) = v45;
                *((_QWORD *)v5 + 101) = v46;
              }
              break;
            case '+':
              if ( *(_WORD *)(v9 + 72 * i + 8) == 89 )
              {
                v47 = *(_OWORD *)(v9 + 72 * i + 16);
                v48 = *(_OWORD *)(v9 + 72 * i + 32);
                v49 = *(_OWORD *)(v9 + 72 * i + 48);
                v50 = *(_QWORD *)(v9 + 72 * i + 64);
                *((_OWORD *)v5 + 51) = *(_OWORD *)(v9 + 72 * i);
                *((_OWORD *)v5 + 52) = v47;
                *((_OWORD *)v5 + 53) = v48;
                *((_OWORD *)v5 + 54) = v49;
                *((_QWORD *)v5 + 110) = v50;
              }
              break;
            case ',':
              if ( *(_WORD *)(v9 + 72 * i + 8) == 89 )
              {
                v51 = *(_OWORD *)(v9 + 72 * i + 16);
                v52 = *(_OWORD *)(v9 + 72 * i + 32);
                v53 = *(_OWORD *)(v9 + 72 * i + 48);
                v54 = *(_QWORD *)(v9 + 72 * i + 64);
                *(_OWORD *)((char *)v5 + 456) = *(_OWORD *)(v9 + 72 * i);
                *(_OWORD *)((char *)v5 + 472) = v51;
                *(_OWORD *)((char *)v5 + 488) = v52;
                *(_OWORD *)((char *)v5 + 504) = v53;
                *((_QWORD *)v5 + 65) = v54;
              }
              break;
            default:
              if ( v10 == 45 && *(_WORD *)(v9 + 72 * i + 8) == 89 )
              {
                v55 = *(_OWORD *)(v9 + 72 * i + 16);
                v56 = *(_OWORD *)(v9 + 72 * i + 32);
                v57 = *(_OWORD *)(v9 + 72 * i + 48);
                v58 = *(_QWORD *)(v9 + 72 * i + 64);
                *((_OWORD *)v5 + 33) = *(_OWORD *)(v9 + 72 * i);
                *((_OWORD *)v5 + 34) = v55;
                *((_OWORD *)v5 + 35) = v56;
                *((_OWORD *)v5 + 36) = v57;
                *((_QWORD *)v5 + 74) = v58;
              }
              break;
          }
        }
      }
    }
    v59 = 9LL * (unsigned int)(*((_DWORD *)a1 + 2) - 1);
    *((_DWORD *)v5 + 5) = (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 2)
                                                   + 72LL * (unsigned int)(*((_DWORD *)a1 + 2) - 1)
                                                   + 4)
                                       + 7
                                       + *(_DWORD *)(*((_QWORD *)a1 + 2) + 72LL
                                                                         * (unsigned int)(*((_DWORD *)a1 + 2) - 1))) >> 3;
    *((_BYTE *)v5 + 888) = HidChannelValueInfo::IsValid(
                             (struct HidLampAttributesResponseReportParser *)((char *)v5 + 600),
                             v59,
                             255LL);
    *((_BYTE *)v5 + 889) = HidChannelValueInfo::IsValid(
                             (struct HidLampAttributesResponseReportParser *)((char *)v5 + 672),
                             v60,
                             v61);
    *((_BYTE *)v5 + 890) = HidChannelValueInfo::IsValid(
                             (struct HidLampAttributesResponseReportParser *)((char *)v5 + 744),
                             v62,
                             v63);
    *((_BYTE *)v5 + 891) = HidChannelValueInfo::IsValid(
                             (struct HidLampAttributesResponseReportParser *)((char *)v5 + 816),
                             v64,
                             v65);
    *((_BYTE *)v5 + 892) = HidChannelValueInfo::IsValid(
                             (struct HidLampAttributesResponseReportParser *)((char *)v5 + 528),
                             v66,
                             0x7FFFFFFFLL);
    if ( HidLampAttributesResponseReportParser::IsParserValid(v5, v67) )
    {
      v6 = 0LL;
      *a2 = v5;
    }
    if ( v6 )
      (*(void (__fastcall **)(struct HidLampAttributesResponseReportParser *))(*(_QWORD *)v6 + 16LL))(v6);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampattributesresponsereportparser.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
