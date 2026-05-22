/*
 * XREFs of ?TryCreateAndInitialize@HidLampArrayAttributesReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800DA310
 * Callers:
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800D7D4C (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003B3D0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0HidLampArrayAttributesReportParser@@AEAA@XZ @ 0x1800D9F58 (--0HidLampArrayAttributesReportParser@@AEAA@XZ.c)
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x1800DCDC8 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HidLampArrayAttributesReportParser::TryCreateAndInitialize(
        const struct ParsedHidReportDescriptor *a1,
        struct HidLampArrayAttributesReportParser **a2)
{
  HidLampArrayAttributesReportParser *v4; // rax
  HidLampArrayAttributesReportParser *v5; // rdi
  HidLampArrayAttributesReportParser *v6; // rbx
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
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v4 = (HidLampArrayAttributesReportParser *)RefCountedObject::operator new(0x1C8uLL);
  if ( v4 )
    v5 = HidLampArrayAttributesReportParser::HidLampArrayAttributesReportParser(v4);
  else
    v5 = 0LL;
  v6 = v5;
  if ( v5 )
  {
    (*(void (__fastcall **)(HidLampArrayAttributesReportParser *))(*(_QWORD *)v5 + 8LL))(v5);
    *((_BYTE *)v5 + 16) = *((_BYTE *)a1 + 4);
    if ( *(_DWORD *)a1 == 2 )
    {
      *((_BYTE *)v5 + 17) = 2;
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 2); i = (unsigned int)(i + 1) )
      {
        v9 = *((_QWORD *)a1 + 2);
        if ( *(_WORD *)(v9 + 72 * i + 18) == 2 && *(_WORD *)(v9 + 72 * i + 16) == 89 )
        {
          v10 = *(_WORD *)(v9 + 72 * i + 10);
          switch ( v10 )
          {
            case 3:
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
            case 4:
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
            case 5:
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
            case 6:
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
            case 7:
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
            default:
              if ( v10 == 8 && *(_WORD *)(v9 + 72 * i + 8) == 89 )
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
          }
        }
      }
    }
    v35 = 9LL * (unsigned int)(*((_DWORD *)a1 + 2) - 1);
    *((_DWORD *)v5 + 5) = (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 2)
                                                   + 72LL * (unsigned int)(*((_DWORD *)a1 + 2) - 1)
                                                   + 4)
                                       + *(_DWORD *)(*((_QWORD *)a1 + 2) + 72LL
                                                                         * (unsigned int)(*((_DWORD *)a1 + 2) - 1))
                                       + 7) >> 3;
    if ( *((_BYTE *)v5 + 17) == 2
      && HidChannelValueInfo::IsValid((HidLampArrayAttributesReportParser *)((char *)v5 + 24), v35, 0x7FFFFFFFLL)
      && HidChannelValueInfo::IsValid((HidLampArrayAttributesReportParser *)((char *)v5 + 96), v36, v37)
      && HidChannelValueInfo::IsValid((HidLampArrayAttributesReportParser *)((char *)v5 + 168), v38, v39)
      && HidChannelValueInfo::IsValid((HidLampArrayAttributesReportParser *)((char *)v5 + 240), v40, v41)
      && HidChannelValueInfo::IsValid((HidLampArrayAttributesReportParser *)((char *)v5 + 312), v42, v43)
      && HidChannelValueInfo::IsValid((HidLampArrayAttributesReportParser *)((char *)v5 + 384), v44, v45) )
    {
      v6 = 0LL;
      *a2 = v5;
    }
    if ( v6 )
      (*(void (__fastcall **)(HidLampArrayAttributesReportParser *))(*(_QWORD *)v6 + 16LL))(v6);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparrayattributesreportparser.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
