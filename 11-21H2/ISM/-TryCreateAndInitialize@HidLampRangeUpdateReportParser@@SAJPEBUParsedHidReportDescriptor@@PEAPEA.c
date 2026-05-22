/*
 * XREFs of ?TryCreateAndInitialize@HidLampRangeUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800DC658
 * Callers:
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800D7D4C (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003B3D0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0HidLampRangeUpdateReportParser@@AEAA@XZ @ 0x1800DC1BC (--0HidLampRangeUpdateReportParser@@AEAA@XZ.c)
 *     ?IsParserValid@HidLampRangeUpdateReportParser@@CA_NPEBV1@@Z @ 0x1800DC5D0 (-IsParserValid@HidLampRangeUpdateReportParser@@CA_NPEBV1@@Z.c)
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x1800DCDC8 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HidLampRangeUpdateReportParser::TryCreateAndInitialize(
        const struct ParsedHidReportDescriptor *a1,
        struct HidLampRangeUpdateReportParser **a2)
{
  HidLampRangeUpdateReportParser *v4; // rax
  struct HidLampRangeUpdateReportParser *updated; // rdi
  struct HidLampRangeUpdateReportParser *v6; // rbx
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
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v4 = (HidLampRangeUpdateReportParser *)RefCountedObject::operator new(0x218uLL);
  if ( v4 )
    updated = HidLampRangeUpdateReportParser::HidLampRangeUpdateReportParser(v4);
  else
    updated = 0LL;
  v6 = updated;
  if ( updated )
  {
    (*(void (__fastcall **)(struct HidLampRangeUpdateReportParser *))(*(_QWORD *)updated + 8LL))(updated);
    *((_BYTE *)updated + 16) = *((_BYTE *)a1 + 4);
    if ( *(_DWORD *)a1 == 2 )
    {
      *((_BYTE *)updated + 17) = 2;
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 2); i = (unsigned int)(i + 1) )
      {
        v9 = *((_QWORD *)a1 + 2);
        if ( *(_WORD *)(v9 + 72 * i + 18) == 96 && *(_WORD *)(v9 + 72 * i + 16) == 89 )
        {
          v10 = *(_WORD *)(v9 + 72 * i + 10);
          switch ( v10 )
          {
            case 'U':
              if ( *(_WORD *)(v9 + 72 * i + 8) == 89 )
              {
                v11 = *(_OWORD *)(v9 + 72 * i + 16);
                v12 = *(_OWORD *)(v9 + 72 * i + 32);
                v13 = *(_OWORD *)(v9 + 72 * i + 48);
                v14 = *(_QWORD *)(v9 + 72 * i + 64);
                *(_OWORD *)((char *)updated + 24) = *(_OWORD *)(v9 + 72 * i);
                *(_OWORD *)((char *)updated + 40) = v11;
                *(_OWORD *)((char *)updated + 56) = v12;
                *(_OWORD *)((char *)updated + 72) = v13;
                *((_QWORD *)updated + 11) = v14;
              }
              break;
            case 'a':
              if ( *(_WORD *)(v9 + 72 * i + 8) == 89 )
              {
                v15 = *(_OWORD *)(v9 + 72 * i + 16);
                v16 = *(_OWORD *)(v9 + 72 * i + 32);
                v17 = *(_OWORD *)(v9 + 72 * i + 48);
                v18 = *(_QWORD *)(v9 + 72 * i + 64);
                *((_OWORD *)updated + 6) = *(_OWORD *)(v9 + 72 * i);
                *((_OWORD *)updated + 7) = v15;
                *((_OWORD *)updated + 8) = v16;
                *((_OWORD *)updated + 9) = v17;
                *((_QWORD *)updated + 20) = v18;
              }
              break;
            case 'b':
              if ( *(_WORD *)(v9 + 72 * i + 8) == 89 )
              {
                v19 = *(_OWORD *)(v9 + 72 * i + 16);
                v20 = *(_OWORD *)(v9 + 72 * i + 32);
                v21 = *(_OWORD *)(v9 + 72 * i + 48);
                v22 = *(_QWORD *)(v9 + 72 * i + 64);
                *(_OWORD *)((char *)updated + 168) = *(_OWORD *)(v9 + 72 * i);
                *(_OWORD *)((char *)updated + 184) = v19;
                *(_OWORD *)((char *)updated + 200) = v20;
                *(_OWORD *)((char *)updated + 216) = v21;
                *((_QWORD *)updated + 29) = v22;
              }
              break;
            case 'Q':
              if ( *(_WORD *)(v9 + 72 * i + 8) == 89 )
              {
                v23 = *(_OWORD *)(v9 + 72 * i + 16);
                v24 = *(_OWORD *)(v9 + 72 * i + 32);
                v25 = *(_OWORD *)(v9 + 72 * i + 48);
                v26 = *(_QWORD *)(v9 + 72 * i + 64);
                *((_OWORD *)updated + 15) = *(_OWORD *)(v9 + 72 * i);
                *((_OWORD *)updated + 16) = v23;
                *((_OWORD *)updated + 17) = v24;
                *((_OWORD *)updated + 18) = v25;
                *((_QWORD *)updated + 38) = v26;
              }
              break;
            case 'R':
              if ( *(_WORD *)(v9 + 72 * i + 8) == 89 )
              {
                v27 = *(_OWORD *)(v9 + 72 * i + 16);
                v28 = *(_OWORD *)(v9 + 72 * i + 32);
                v29 = *(_OWORD *)(v9 + 72 * i + 48);
                v30 = *(_QWORD *)(v9 + 72 * i + 64);
                *(_OWORD *)((char *)updated + 312) = *(_OWORD *)(v9 + 72 * i);
                *(_OWORD *)((char *)updated + 328) = v27;
                *(_OWORD *)((char *)updated + 344) = v28;
                *(_OWORD *)((char *)updated + 360) = v29;
                *((_QWORD *)updated + 47) = v30;
              }
              break;
            case 'S':
              if ( *(_WORD *)(v9 + 72 * i + 8) == 89 )
              {
                v31 = *(_OWORD *)(v9 + 72 * i + 16);
                v32 = *(_OWORD *)(v9 + 72 * i + 32);
                v33 = *(_OWORD *)(v9 + 72 * i + 48);
                v34 = *(_QWORD *)(v9 + 72 * i + 64);
                *((_OWORD *)updated + 24) = *(_OWORD *)(v9 + 72 * i);
                *((_OWORD *)updated + 25) = v31;
                *((_OWORD *)updated + 26) = v32;
                *((_OWORD *)updated + 27) = v33;
                *((_QWORD *)updated + 56) = v34;
              }
              break;
            default:
              if ( v10 == 84 && *(_WORD *)(v9 + 72 * i + 8) == 89 )
              {
                v35 = *(_OWORD *)(v9 + 72 * i + 16);
                v36 = *(_OWORD *)(v9 + 72 * i + 32);
                v37 = *(_OWORD *)(v9 + 72 * i + 48);
                v38 = *(_QWORD *)(v9 + 72 * i + 64);
                *(_OWORD *)((char *)updated + 456) = *(_OWORD *)(v9 + 72 * i);
                *(_OWORD *)((char *)updated + 472) = v35;
                *(_OWORD *)((char *)updated + 488) = v36;
                *(_OWORD *)((char *)updated + 504) = v37;
                *((_QWORD *)updated + 65) = v38;
              }
              break;
          }
        }
      }
    }
    v39 = 9LL * (unsigned int)(*((_DWORD *)a1 + 2) - 1);
    *((_DWORD *)updated + 5) = (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 2)
                                                        + 72LL * (unsigned int)(*((_DWORD *)a1 + 2) - 1)
                                                        + 4)
                                            + 7
                                            + *(_DWORD *)(*((_QWORD *)a1 + 2)
                                                        + 72LL * (unsigned int)(*((_DWORD *)a1 + 2) - 1))) >> 3;
    *((_BYTE *)updated + 528) = HidChannelValueInfo::IsValid(
                                  (struct HidLampRangeUpdateReportParser *)((char *)updated + 240),
                                  v39,
                                  255LL);
    *((_BYTE *)updated + 529) = HidChannelValueInfo::IsValid(
                                  (struct HidLampRangeUpdateReportParser *)((char *)updated + 312),
                                  v40,
                                  v41);
    *((_BYTE *)updated + 530) = HidChannelValueInfo::IsValid(
                                  (struct HidLampRangeUpdateReportParser *)((char *)updated + 384),
                                  v42,
                                  v43);
    *((_BYTE *)updated + 531) = HidChannelValueInfo::IsValid(
                                  (struct HidLampRangeUpdateReportParser *)((char *)updated + 456),
                                  v44,
                                  v45);
    if ( HidLampRangeUpdateReportParser::IsParserValid(updated) )
    {
      v6 = 0LL;
      *a2 = updated;
    }
    if ( v6 )
      (*(void (__fastcall **)(struct HidLampRangeUpdateReportParser *))(*(_QWORD *)v6 + 16LL))(v6);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamprangeupdatereportparser.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
