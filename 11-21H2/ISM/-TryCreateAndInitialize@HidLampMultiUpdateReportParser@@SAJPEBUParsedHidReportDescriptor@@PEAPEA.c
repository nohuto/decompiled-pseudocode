/*
 * XREFs of ?TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800DBEC4
 * Callers:
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800D7D4C (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003B3D0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBVHidChannelValueInfo@@@?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@QEAAPEAVHidChannelValueInfo@@QEAV2@AEBV2@@Z @ 0x1800D5268 (--$_Emplace_reallocate@AEBVHidChannelValueInfo@@@-$vector@VHidChannelValueInfo@@V-$allocator@VHi.c)
 *     ??0HidLampMultiUpdateReportParser@@AEAA@XZ @ 0x1800DB67C (--0HidLampMultiUpdateReportParser@@AEAA@XZ.c)
 *     ?IsParserValid@HidLampMultiUpdateReportParser@@CA_NPEAV1@@Z @ 0x1800DBC94 (-IsParserValid@HidLampMultiUpdateReportParser@@CA_NPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HidLampMultiUpdateReportParser::TryCreateAndInitialize(
        const struct ParsedHidReportDescriptor *a1,
        struct HidLampMultiUpdateReportParser **a2)
{
  HidLampMultiUpdateReportParser *v4; // rax
  HidLampMultiUpdateReportParser *updated; // rax
  struct HidLampMultiUpdateReportParser *v6; // rbx
  const char *v7; // r9
  __int64 result; // rax
  __int64 i; // rsi
  __int64 v10; // r8
  __int16 v11; // ax
  __int128 v12; // xmm2
  __int128 v13; // xmm3
  __int128 v14; // xmm4
  __int64 v15; // xmm0_8
  __int128 v16; // xmm2
  __int128 v17; // xmm3
  __int128 v18; // xmm4
  __int64 v19; // xmm0_8
  __int64 *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  struct HidLampMultiUpdateReportParser *v23; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v4 = (HidLampMultiUpdateReportParser *)RefCountedObject::operator new(0x148uLL);
  if ( v4 )
  {
    updated = HidLampMultiUpdateReportParser::HidLampMultiUpdateReportParser(v4);
    v6 = updated;
  }
  else
  {
    v6 = 0LL;
  }
  try
  {
    if ( v6 )
    {
      (*(void (__fastcall **)(struct HidLampMultiUpdateReportParser *))(*(_QWORD *)v6 + 8LL))(v6);
      *((_BYTE *)v6 + 16) = *((_BYTE *)a1 + 4);
      if ( *(_DWORD *)a1 == 2 )
      {
        *((_BYTE *)v6 + 17) = 2;
        for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 2); i = (unsigned int)(i + 1) )
        {
          v10 = *((_QWORD *)a1 + 2) + 72 * i;
          if ( *(_WORD *)(v10 + 18) == 80 && *(_WORD *)(v10 + 16) == 89 )
          {
            v11 = *(_WORD *)(v10 + 10);
            switch ( v11 )
            {
              case 3:
                if ( *(_WORD *)(v10 + 8) == 89 )
                {
                  v12 = *(_OWORD *)(v10 + 16);
                  v13 = *(_OWORD *)(v10 + 32);
                  v14 = *(_OWORD *)(v10 + 48);
                  v15 = *(_QWORD *)(v10 + 64);
                  *(_OWORD *)((char *)v6 + 24) = *(_OWORD *)v10;
                  *(_OWORD *)((char *)v6 + 40) = v12;
                  *(_OWORD *)((char *)v6 + 56) = v13;
                  *(_OWORD *)((char *)v6 + 72) = v14;
                  *((_QWORD *)v6 + 11) = v15;
                }
                break;
              case 85:
                if ( *(_WORD *)(v10 + 8) == 89 )
                {
                  v16 = *(_OWORD *)(v10 + 16);
                  v17 = *(_OWORD *)(v10 + 32);
                  v18 = *(_OWORD *)(v10 + 48);
                  v19 = *(_QWORD *)(v10 + 64);
                  *((_OWORD *)v6 + 6) = *(_OWORD *)v10;
                  *((_OWORD *)v6 + 7) = v16;
                  *((_OWORD *)v6 + 8) = v17;
                  *((_OWORD *)v6 + 9) = v18;
                  *((_QWORD *)v6 + 20) = v19;
                }
                break;
              case 33:
                if ( *(_WORD *)(v10 + 8) != 89 )
                  continue;
                v20 = (__int64 *)((char *)v6 + 168);
                goto LABEL_21;
              case 81:
                if ( *(_WORD *)(v10 + 8) != 89 )
                  continue;
                v20 = (__int64 *)((char *)v6 + 200);
                goto LABEL_21;
              case 82:
                if ( *(_WORD *)(v10 + 8) != 89 )
                  continue;
                v20 = (__int64 *)((char *)v6 + 232);
                goto LABEL_21;
              case 83:
                if ( *(_WORD *)(v10 + 8) != 89 )
                  continue;
                v20 = (__int64 *)((char *)v6 + 264);
LABEL_21:
                v21 = v20[1];
                if ( v21 != v20[2] )
                  goto LABEL_35;
LABEL_36:
                std::vector<HidChannelValueInfo>::_Emplace_reallocate<HidChannelValueInfo const &>(v20, v21, v10);
                continue;
              default:
                if ( v11 == 84 && *(_WORD *)(v10 + 8) == 89 )
                {
                  v20 = (__int64 *)((char *)v6 + 296);
                  v21 = *((_QWORD *)v6 + 38);
                  if ( v21 != *((_QWORD *)v6 + 39) )
                  {
LABEL_35:
                    *(_OWORD *)v21 = *(_OWORD *)v10;
                    *(_OWORD *)(v21 + 16) = *(_OWORD *)(v10 + 16);
                    *(_OWORD *)(v21 + 32) = *(_OWORD *)(v10 + 32);
                    *(_OWORD *)(v21 + 48) = *(_OWORD *)(v10 + 48);
                    *(_QWORD *)(v21 + 64) = *(_QWORD *)(v10 + 64);
                    v20[1] += 72LL;
                    continue;
                  }
                  goto LABEL_36;
                }
                break;
            }
          }
        }
      }
      v22 = 9LL * (unsigned int)(*((_DWORD *)a1 + 2) - 1);
      *((_DWORD *)v6 + 5) = (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 2)
                                                     + 72LL * (unsigned int)(*((_DWORD *)a1 + 2) - 1)
                                                     + 4)
                                         + 7
                                         + *(_DWORD *)(*((_QWORD *)a1 + 2)
                                                     + 72LL * (unsigned int)(*((_DWORD *)a1 + 2) - 1))) >> 3;
      if ( HidLampMultiUpdateReportParser::IsParserValid(v6, v22) )
      {
        v23 = v6;
        v6 = 0LL;
        *a2 = v23;
      }
      if ( v6 )
        (*(void (__fastcall **)(struct HidLampMultiUpdateReportParser *))(*(_QWORD *)v6 + 16LL))(v6);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x23,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampmultiupdatereportparser.cpp",
        (const char *)0x8007000ELL);
      result = 2147942414LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x6B,
                           (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampmult"
                                "iupdatereportparser.cpp",
                           v7);
  }
  return result;
}
