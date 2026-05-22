/*
 * XREFs of ?ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@PEAI@Z @ 0x1800FF8FC
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1801000B4 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_V@YAXPEAX_K@Z @ 0x1800574E4 (--_V@YAXPEAX_K@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180057680 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058470 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18005847C (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@std@@@std@@YAXPEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@0@QEAV10@AEAV?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@0@@Z @ 0x1800FDD54 (--$_Destroy_range@V-$allocator@V-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo.c)
 *     ??$_Emplace_reallocate@AEBVHidChannelValueInfo@@@?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@QEAAPEAVHidChannelValueInfo@@QEAV2@AEBV2@@Z @ 0x1800FDDC0 (--$_Emplace_reallocate@AEBVHidChannelValueInfo@@@-$vector@VHidChannelValueInfo@@V-$allocator@VHi.c)
 *     ??$_Emplace_reallocate@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@?$vector@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@V?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@2@@std@@QEAAPEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800FDF40 (--$_Emplace_reallocate@V-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo@@@std@@.c)
 *     std::_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800FEEE8 (std--_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall HidLampArrayDevice::ExtractReportDescriptorsFromPreparsedData(
        char a1,
        __int64 a2,
        char **a3,
        _DWORD *a4)
{
  int v5; // r13d
  char *v6; // rsi
  unsigned __int8 v7; // cl
  unsigned __int16 v8; // r12
  char *v9; // r15
  unsigned int **v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rax
  void *v13; // rcx
  unsigned __int64 v14; // r11
  __int64 v15; // r8
  int v16; // edx
  int v17; // eax
  __int64 *v18; // rcx
  __int64 v19; // rdx
  unsigned int **i; // rbx
  unsigned __int64 v21; // rdi
  __int64 v22; // rax
  bool v23; // cf
  size_t v24; // rax
  char *v25; // rax
  __int64 v26; // r9
  char *v27; // rbx
  __int64 result; // rax
  unsigned __int8 j; // al
  unsigned __int64 v30; // r12
  __int64 v31; // r12
  unsigned __int64 v32; // rdi
  __int64 v33; // rax
  size_t v34; // rax
  char *v35; // rax
  char *v36; // rdi
  char *v37; // rcx
  char *v38; // rdi
  unsigned __int64 v39; // r8
  __int64 v40; // rcx
  unsigned int *v41; // rdx
  __int128 v42; // xmm2
  __int128 v43; // xmm3
  __int128 v44; // xmm4
  __int64 v45; // xmm0_8
  __int64 v46; // rax
  char *v47; // rax
  char *v48; // rcx
  char *v49; // rdi
  __int128 v50; // [rsp+30h] [rbp-D8h] BYREF
  char *v51; // [rsp+40h] [rbp-C8h]
  __int128 v52; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v53; // [rsp+60h] [rbp-A8h]
  __int128 v54; // [rsp+70h] [rbp-98h]
  __int128 v55; // [rsp+80h] [rbp-88h]
  __int64 v56; // [rsp+90h] [rbp-78h]
  unsigned __int64 v57; // [rsp+A0h] [rbp-68h]
  __int128 v58; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v59; // [rsp+B8h] [rbp-50h]
  char *v60; // [rsp+C0h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]
  unsigned __int64 v62; // [rsp+110h] [rbp+8h]
  unsigned __int8 v63; // [rsp+110h] [rbp+8h]
  char *v64; // [rsp+118h] [rbp+10h] BYREF
  char **v65; // [rsp+120h] [rbp+18h]
  _DWORD *v66; // [rsp+128h] [rbp+20h]

  v66 = a4;
  v65 = a3;
  LOBYTE(v62) = a1;
  v50 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v51 = 0LL;
  v7 = 0;
  v8 = *(_WORD *)(a2 + 32);
  v9 = 0LL;
  v10 = 0LL;
  try
  {
    while ( v8 < *(_WORD *)(a2 + 36) )
    {
      v11 = 104LL * v8;
      if ( *(_WORD *)(v11 + a2 + 50) )
      {
        if ( *(_BYTE *)(v11 + a2 + 46) > v7 )
        {
          v58 = 0LL;
          v59 = 0LL;
          if ( v9 == v6 )
          {
            std::vector<std::vector<HidChannelValueInfo>>::_Emplace_reallocate<std::vector<HidChannelValueInfo>>(
              (__int64 *)&v50,
              (__int64)v9,
              (__int64 *)&v58);
            v6 = v51;
            v9 = (char *)*((_QWORD *)&v50 + 1);
            v10 = (unsigned int **)v50;
            v12 = v59;
            v13 = (void *)v58;
          }
          else
          {
            v12 = 0LL;
            v13 = 0LL;
            *(_QWORD *)v9 = 0LL;
            *((_QWORD *)v9 + 1) = 0LL;
            *((_QWORD *)v9 + 2) = 0LL;
            v9 += 24;
            *((_QWORD *)&v50 + 1) = v9;
          }
          if ( v13 )
            std::_Deallocate<16,0>(v13, 8 * ((v12 - (__int64)v13) >> 3));
        }
        v14 = *(unsigned __int8 *)(v11 + a2 + 47) + 8LL * *(unsigned __int16 *)(v11 + a2 + 52);
        while ( 1 )
        {
          v62 = v14;
          if ( v5 >= *(unsigned __int16 *)(v11 + a2 + 50) )
            break;
          DWORD1(v53) = 0;
          v15 = *(unsigned __int16 *)(v11 + a2 + 48);
          v16 = (unsigned int)v15 < 0x20 ? (1 << *(_WORD *)(v11 + a2 + 48)) - 1 : -1;
          WORD4(v52) = *(_WORD *)(v11 + a2 + 44);
          WORD5(v52) = *(_WORD *)(v11 + a2 + 104);
          LODWORD(v53) = *(_DWORD *)(v11 + a2 + 64);
          HIDWORD(v52) = *(unsigned __int16 *)(v11 + a2 + 62);
          LODWORD(v52) = v5 * v15 + 8 * *(unsigned __int16 *)(v11 + a2 + 52);
          DWORD1(v52) = v15;
          *((_QWORD *)&v53 + 1) = (unsigned int)v16 & *(_DWORD *)(v11 + a2 + 124);
          *(_QWORD *)&v54 = (unsigned int)v16 & *(_DWORD *)(v11 + a2 + 128);
          DWORD2(v54) = (unsigned __int8)(((v15 + v14 - 1) >> 3) - (v14 >> 3) + 1);
          HIDWORD(v54) = v14 & 7;
          LODWORD(v55) = (unsigned __int16)(((v15 + v14 - 1) >> 3) - 1);
          DWORD1(v55) = v16;
          DWORD2(v55) = (unsigned __int16)((v14 >> 3) - 1);
          BYTE12(v55) = *(_BYTE *)(v11 + a2 + 46);
          v17 = 0;
          if ( (*(_BYTE *)(v11 + a2 + 68) & 8) == 0 )
          {
            v17 = 4;
            DWORD1(v53) = 4;
          }
          if ( (*(_BYTE *)(v11 + a2 + 68) & 2) != 0 )
            DWORD1(v53) = v17 | 1;
          v18 = (__int64 *)&v10[((v9 - (char *)v10) >> 3) - 3];
          v19 = v18[1];
          if ( v19 == v18[2] )
          {
            std::vector<HidChannelValueInfo>::_Emplace_reallocate<HidChannelValueInfo const &>(v18, v19, (__int64)&v52);
            v14 = v62;
          }
          else
          {
            *(_OWORD *)v19 = v52;
            *(_OWORD *)(v19 + 16) = v53;
            *(_OWORD *)(v19 + 32) = v54;
            *(_OWORD *)(v19 + 48) = v55;
            *(_QWORD *)(v19 + 64) = v56;
            v18[1] += 72LL;
          }
          v14 += *(unsigned __int16 *)(v11 + a2 + 48);
          ++v5;
        }
        v7 = *(_BYTE *)(v11 + a2 + 46);
        v5 = 0;
      }
      ++v8;
    }
    for ( i = v10; i != (unsigned int **)v9; i += 3 )
      std::_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(
        *i,
        i[1],
        0x8E38E38E38E38E39uLL * (((char *)i[1] - (char *)*i) >> 3),
        v62);
    v21 = 0xAAAAAAAAAAAAAAABuLL * ((v9 - (char *)v10) >> 3);
    v22 = 8 * ((v9 - (char *)v10) >> 3);
    if ( !is_mul_ok(v21, 0x18uLL) )
      v22 = -1LL;
    v23 = __CFADD__(v22, 8LL);
    v24 = v22 + 8;
    if ( v23 )
      v24 = -1LL;
    v25 = (char *)operator new[](v24, (const struct std::nothrow_t *)&std::nothrow);
    if ( v25 )
    {
      *(_QWORD *)v25 = v21;
      v27 = v25 + 8;
      `eh vector constructor iterator'(
        v25 + 8,
        24LL,
        0xAAAAAAAAAAAAAAABuLL * ((v9 - (char *)v10) >> 3),
        (void (*)(void *))ParsedHidReportDescriptor::ParsedHidReportDescriptor);
    }
    else
    {
      v27 = 0LL;
    }
    v64 = v27;
    if ( v27 )
    {
      for ( j = 0; ; j = v63 + 1 )
      {
        v63 = j;
        v30 = 0xAAAAAAAAAAAAAAABuLL * ((v9 - (char *)v10) >> 3);
        if ( j >= v30 )
          break;
        v31 = 3LL * j;
        *(_DWORD *)&v27[8 * v31] = 2;
        v27[8 * v31 + 4] = *((_BYTE *)v10[3 * j] + 60);
        v32 = 954437177 * (unsigned int)(((char *)v10[3 * j + 1] - (char *)v10[3 * j]) >> 3);
        v57 = v32;
        *(_DWORD *)&v27[8 * v31 + 8] = v32;
        v33 = 72 * v32;
        if ( !is_mul_ok(v32, 0x48uLL) )
          v33 = -1LL;
        v23 = __CFADD__(v33, 8LL);
        v34 = v33 + 8;
        if ( v23 )
          v34 = -1LL;
        v35 = (char *)operator new[](v34, (const struct std::nothrow_t *)&std::nothrow);
        v60 = v35;
        if ( v35 )
        {
          *(_QWORD *)v35 = v32;
          v36 = v35 + 8;
          `eh vector constructor iterator'(
            v35 + 8,
            72LL,
            v57,
            (void (*)(void *))HidChannelValueInfo::HidChannelValueInfo);
        }
        else
        {
          v36 = 0LL;
        }
        v37 = *(char **)&v27[8 * v31 + 16];
        *(_QWORD *)&v27[8 * v31 + 16] = v36;
        if ( v37 )
        {
          v38 = v37 - 8;
          `eh vector destructor iterator'(
            v37,
            72LL,
            *((_QWORD *)v37 - 1),
            (void (*)(void *))std::_Ref_count_base::~_Ref_count_base);
          operator delete[](v38);
        }
        if ( !*(_QWORD *)&v27[8 * v31 + 16] )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2C3,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
            (const char *)0x8007000ELL);
          `eh vector destructor iterator'(
            v27,
            24LL,
            *((_QWORD *)v27 - 1),
            (void (*)(void *))ParsedHidReportDescriptor::~ParsedHidReportDescriptor);
          operator delete[](v27 - 8);
          if ( v10 )
          {
            std::_Destroy_range<std::allocator<std::vector<HidChannelValueInfo>>>((__int64)v10, (__int64)v9);
            std::_Deallocate<16,0>(v10, 8 * ((v6 - (char *)v10) >> 3));
          }
          return 2147942414LL;
        }
        v39 = 0LL;
        v40 = 0LL;
        v26 = 1LL;
        while ( 1 )
        {
          v41 = v10[v31];
          if ( v39 >= 0x8E38E38E38E38E39uLL * (((char *)v10[v31 + 1] - (char *)v41) >> 3) )
            break;
          v42 = *(_OWORD *)&v41[v40 + 4];
          v43 = *(_OWORD *)&v41[v40 + 8];
          v44 = *(_OWORD *)&v41[v40 + 12];
          v45 = *(_QWORD *)&v41[v40 + 16];
          v46 = *(_QWORD *)&v27[8 * v31 + 16];
          *(_OWORD *)(v40 * 4 + v46) = *(_OWORD *)&v41[v40];
          *(_OWORD *)(v40 * 4 + v46 + 16) = v42;
          *(_OWORD *)(v40 * 4 + v46 + 32) = v43;
          *(_OWORD *)(v40 * 4 + v46 + 48) = v44;
          *(_QWORD *)(v40 * 4 + v46 + 64) = v45;
          ++v39;
          v40 += 18LL;
        }
      }
      if ( v65 != &v64 )
      {
        v47 = v27;
        v27 = 0LL;
        v64 = 0LL;
        v48 = *v65;
        *v65 = v47;
        if ( v48 )
        {
          v49 = v48 - 8;
          `eh vector destructor iterator'(
            v48,
            24LL,
            *((_QWORD *)v48 - 1),
            (void (*)(void *))ParsedHidReportDescriptor::~ParsedHidReportDescriptor);
          operator delete[](v49);
        }
      }
      *v66 = v30;
      if ( v27 )
      {
        `eh vector destructor iterator'(
          v27,
          24LL,
          *((_QWORD *)v27 - 1),
          (void (*)(void *))ParsedHidReportDescriptor::~ParsedHidReportDescriptor);
        operator delete[](v27 - 8);
      }
      if ( v10 )
      {
        std::_Destroy_range<std::allocator<std::vector<HidChannelValueInfo>>>((__int64)v10, (__int64)v9);
        std::_Deallocate<16,0>(v10, 8 * ((v6 - (char *)v10) >> 3));
      }
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2BB,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
        (const char *)0x8007000ELL);
      if ( v10 )
      {
        std::_Destroy_range<std::allocator<std::vector<HidChannelValueInfo>>>((__int64)v10, (__int64)v9);
        std::_Deallocate<16,0>(v10, 8 * ((v6 - (char *)v10) >> 3));
      }
      result = 2147942414LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2D0,
                           (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
                           (const char *)v26);
  }
  return result;
}
