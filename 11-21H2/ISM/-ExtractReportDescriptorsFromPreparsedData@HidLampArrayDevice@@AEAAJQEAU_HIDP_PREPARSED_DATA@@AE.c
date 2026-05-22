/*
 * XREFs of ?ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@PEAI@Z @ 0x1800D6C90
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800D743C (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_V@YAXPEAX_K@Z @ 0x18004A958 (--_V@YAXPEAX_K@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18004AAF0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B774 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18004B780 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@std@@@std@@YAXPEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@0@QEAV10@AEAV?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@0@@Z @ 0x1800D51FC (--$_Destroy_range@V-$allocator@V-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo.c)
 *     ??$_Emplace_reallocate@AEBVHidChannelValueInfo@@@?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@QEAAPEAVHidChannelValueInfo@@QEAV2@AEBV2@@Z @ 0x1800D5268 (--$_Emplace_reallocate@AEBVHidChannelValueInfo@@@-$vector@VHidChannelValueInfo@@V-$allocator@VHi.c)
 *     ??$_Emplace_reallocate@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@?$vector@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@V?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@2@@std@@QEAAPEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800D53E4 (--$_Emplace_reallocate@V-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo@@@std@@.c)
 *     std::_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800D62E4 (std--_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall HidLampArrayDevice::ExtractReportDescriptorsFromPreparsedData(
        char a1,
        __int64 a2,
        char **a3,
        _DWORD *a4)
{
  char *v5; // rsi
  unsigned __int8 v6; // cl
  unsigned __int16 v7; // r12
  char *v8; // r15
  unsigned int **v9; // r14
  __int64 v10; // rdi
  void *v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // r13
  int i; // r9d
  __int64 v15; // rcx
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // r11
  int v18; // r8d
  int v19; // r8d
  int v20; // ecx
  int v21; // eax
  __int64 *v22; // rcx
  __int64 v23; // rdx
  unsigned int **j; // rbx
  unsigned __int64 v25; // r12
  __int64 v26; // rax
  bool v27; // cf
  size_t v28; // rax
  char *v29; // rax
  const char *v30; // r9
  char *v31; // rbx
  __int64 result; // rax
  unsigned __int8 k; // al
  __int64 v34; // r13
  unsigned __int64 v35; // rdi
  __int64 v36; // rax
  size_t v37; // rax
  char *v38; // rax
  char *v39; // rdi
  char *v40; // rcx
  char *v41; // rdi
  unsigned __int64 v42; // r8
  __int64 v43; // rcx
  unsigned int *v44; // rdx
  __int128 v45; // xmm2
  __int128 v46; // xmm3
  __int128 v47; // xmm4
  __int64 v48; // xmm0_8
  __int64 v49; // rax
  char *v50; // rax
  char *v51; // rcx
  char *v52; // rdi
  __int128 v53; // [rsp+30h] [rbp-D8h] BYREF
  char *v54; // [rsp+40h] [rbp-C8h]
  __int128 v55; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v56; // [rsp+60h] [rbp-A8h]
  __int128 v57; // [rsp+70h] [rbp-98h]
  __int128 v58; // [rsp+80h] [rbp-88h]
  __int64 v59; // [rsp+90h] [rbp-78h]
  unsigned __int64 v60; // [rsp+A0h] [rbp-68h]
  __int128 v61; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v62; // [rsp+B8h] [rbp-50h]
  char *v63; // [rsp+C0h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]
  int v65; // [rsp+110h] [rbp+8h]
  unsigned __int8 v66; // [rsp+110h] [rbp+8h]
  char *v67; // [rsp+118h] [rbp+10h] BYREF
  char **v68; // [rsp+120h] [rbp+18h]
  _DWORD *v69; // [rsp+128h] [rbp+20h]

  v69 = a4;
  v68 = a3;
  LOBYTE(v65) = a1;
  v53 = 0LL;
  v5 = 0LL;
  v54 = 0LL;
  v6 = 0;
  v7 = *(_WORD *)(a2 + 32);
  v8 = 0LL;
  v9 = 0LL;
  try
  {
    while ( v7 < *(_WORD *)(a2 + 36) )
    {
      v10 = 104LL * v7;
      if ( *(_WORD *)(v10 + a2 + 50) )
      {
        if ( *(_BYTE *)(v10 + a2 + 46) > v6 )
        {
          v61 = 0LL;
          v62 = 0LL;
          if ( v8 == v5 )
          {
            std::vector<std::vector<HidChannelValueInfo>>::_Emplace_reallocate<std::vector<HidChannelValueInfo>>(
              (__int64 *)&v53,
              (__int64)v8,
              &v61);
            v5 = v54;
            v8 = (char *)*((_QWORD *)&v53 + 1);
            v9 = (unsigned int **)v53;
            v12 = v62;
            v11 = (void *)v61;
          }
          else
          {
            *(_QWORD *)v8 = 0LL;
            *((_QWORD *)v8 + 1) = 0LL;
            *((_QWORD *)v8 + 2) = 0LL;
            v11 = 0LL;
            v12 = 0LL;
            v8 += 24;
            *((_QWORD *)&v53 + 1) = v8;
          }
          if ( v11 )
            std::_Deallocate<16,0>(v11, 8 * ((v12 - (__int64)v11) >> 3));
        }
        v13 = *(unsigned __int8 *)(v10 + a2 + 47) + 8LL * *(unsigned __int16 *)(v10 + a2 + 52);
        for ( i = 0; ; ++i )
        {
          v65 = i;
          if ( i >= *(unsigned __int16 *)(v10 + a2 + 50) )
            break;
          v15 = *(unsigned __int16 *)(v10 + a2 + 48);
          v16 = (v15 + v13 - 1) >> 3;
          v17 = v13 >> 3;
          if ( (unsigned int)v15 >= 0x20 )
            v18 = 0;
          else
            v18 = 1 << v15;
          v19 = v18 - 1;
          WORD4(v55) = *(_WORD *)(v10 + a2 + 44);
          WORD5(v55) = *(_WORD *)(v10 + a2 + 104);
          LODWORD(v56) = *(_DWORD *)(v10 + a2 + 64);
          HIDWORD(v55) = *(unsigned __int16 *)(v10 + a2 + 62);
          LODWORD(v55) = i * v15 + 8 * *(unsigned __int16 *)(v10 + a2 + 52);
          DWORD1(v55) = v15;
          *((_QWORD *)&v56 + 1) = (unsigned int)v19 & *(_DWORD *)(v10 + a2 + 124);
          *(_QWORD *)&v57 = (unsigned int)v19 & *(_DWORD *)(v10 + a2 + 128);
          DWORD2(v57) = (unsigned __int8)(v16 - v17 + 1);
          HIDWORD(v57) = v13 & 7;
          LODWORD(v58) = (unsigned __int16)(v16 - 1);
          DWORD1(v58) = v19;
          DWORD2(v58) = (unsigned __int16)(v17 - 1);
          BYTE12(v58) = *(_BYTE *)(v10 + a2 + 46);
          v20 = *(_DWORD *)(v10 + a2 + 68) & 8;
          v21 = 0;
          if ( !v20 )
            v21 = 4;
          DWORD1(v56) = v21;
          if ( (*(_BYTE *)(v10 + a2 + 68) & 2) != 0 )
            DWORD1(v56) = v20 != 0 ? 1 : 5;
          v22 = (__int64 *)&v9[((v8 - (char *)v9) >> 3) - 3];
          v23 = v22[1];
          if ( v23 == v22[2] )
          {
            std::vector<HidChannelValueInfo>::_Emplace_reallocate<HidChannelValueInfo const &>(v22, v23, (__int64)&v55);
            i = v65;
          }
          else
          {
            *(_OWORD *)v23 = v55;
            *(_OWORD *)(v23 + 16) = v56;
            *(_OWORD *)(v23 + 32) = v57;
            *(_OWORD *)(v23 + 48) = v58;
            *(_QWORD *)(v23 + 64) = v59;
            v22[1] += 72LL;
          }
          v13 += *(unsigned __int16 *)(v10 + a2 + 48);
        }
        v6 = *(_BYTE *)(v10 + a2 + 46);
      }
      ++v7;
    }
    for ( j = v9; j != (unsigned int **)v8; j += 3 )
      std::_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(
        *j,
        j[1],
        0x8E38E38E38E38E39uLL * (((char *)j[1] - (char *)*j) >> 3),
        v65);
    v25 = 0xAAAAAAAAAAAAAAABuLL * ((v8 - (char *)v9) >> 3);
    v26 = 8 * ((v8 - (char *)v9) >> 3);
    if ( !is_mul_ok(v25, 0x18uLL) )
      v26 = -1LL;
    v27 = __CFADD__(v26, 8LL);
    v28 = v26 + 8;
    if ( v27 )
      v28 = -1LL;
    v29 = (char *)operator new[](v28, (const struct std::nothrow_t *)&std::nothrow);
    if ( v29 )
    {
      *(_QWORD *)v29 = v25;
      v31 = v29 + 8;
      `eh vector constructor iterator'(
        v29 + 8,
        24LL,
        0xAAAAAAAAAAAAAAABuLL * ((v8 - (char *)v9) >> 3),
        (void (*)(void *))ParsedHidReportDescriptor::ParsedHidReportDescriptor);
    }
    else
    {
      v31 = 0LL;
    }
    v67 = v31;
    if ( v31 )
    {
      for ( k = 0; ; k = v66 + 1 )
      {
        v66 = k;
        if ( k >= v25 )
          break;
        v34 = 3LL * k;
        *(_DWORD *)&v31[8 * v34] = 2;
        v31[8 * v34 + 4] = *((_BYTE *)v9[3 * k] + 60);
        v35 = 954437177 * (unsigned int)(((char *)v9[3 * k + 1] - (char *)v9[3 * k]) >> 3);
        v60 = v35;
        *(_DWORD *)&v31[8 * v34 + 8] = v35;
        v36 = 72 * v35;
        if ( !is_mul_ok(v35, 0x48uLL) )
          v36 = -1LL;
        v27 = __CFADD__(v36, 8LL);
        v37 = v36 + 8;
        if ( v27 )
          v37 = -1LL;
        v38 = (char *)operator new[](v37, (const struct std::nothrow_t *)&std::nothrow);
        v63 = v38;
        if ( v38 )
        {
          *(_QWORD *)v38 = v35;
          v39 = v38 + 8;
          `eh vector constructor iterator'(
            v38 + 8,
            72LL,
            v60,
            (void (*)(void *))HidChannelValueInfo::HidChannelValueInfo);
        }
        else
        {
          v39 = 0LL;
        }
        v40 = *(char **)&v31[8 * v34 + 16];
        *(_QWORD *)&v31[8 * v34 + 16] = v39;
        if ( v40 )
        {
          v41 = v40 - 8;
          `eh vector destructor iterator'(
            v40,
            72LL,
            *((_QWORD *)v40 - 1),
            (void (*)(void *))std::_Ref_count_base::~_Ref_count_base);
          operator delete[](v41);
          v39 = *(char **)&v31[8 * v34 + 16];
        }
        if ( !v39 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x252,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
            (const char *)0x8007000ELL);
          `eh vector destructor iterator'(
            v31,
            24LL,
            *((_QWORD *)v31 - 1),
            (void (*)(void *))ParsedHidReportDescriptor::~ParsedHidReportDescriptor);
          operator delete[](v31 - 8);
          if ( v9 )
          {
            std::_Destroy_range<std::allocator<std::vector<HidChannelValueInfo>>>((__int64)v9, (__int64)v8);
            std::_Deallocate<16,0>(v9, 8 * ((v5 - (char *)v9) >> 3));
          }
          return 2147942414LL;
        }
        v42 = 0LL;
        v43 = 0LL;
        v30 = (const char *)0x8E38E38E38E38E39LL;
        while ( 1 )
        {
          v44 = v9[v34];
          if ( v42 >= 0x8E38E38E38E38E39uLL * (((char *)v9[v34 + 1] - (char *)v44) >> 3) )
            break;
          v45 = *(_OWORD *)&v44[v43 + 4];
          v46 = *(_OWORD *)&v44[v43 + 8];
          v47 = *(_OWORD *)&v44[v43 + 12];
          v48 = *(_QWORD *)&v44[v43 + 16];
          v49 = *(_QWORD *)&v31[8 * v34 + 16];
          *(_OWORD *)(v49 + v43 * 4) = *(_OWORD *)&v44[v43];
          *(_OWORD *)(v49 + v43 * 4 + 16) = v45;
          *(_OWORD *)(v49 + v43 * 4 + 32) = v46;
          *(_OWORD *)(v49 + v43 * 4 + 48) = v47;
          *(_QWORD *)(v49 + v43 * 4 + 64) = v48;
          ++v42;
          v43 += 18LL;
        }
      }
      if ( v68 != &v67 )
      {
        v50 = v31;
        v31 = 0LL;
        v67 = 0LL;
        v51 = *v68;
        *v68 = v50;
        if ( v51 )
        {
          v52 = v51 - 8;
          `eh vector destructor iterator'(
            v51,
            24LL,
            *((_QWORD *)v51 - 1),
            (void (*)(void *))ParsedHidReportDescriptor::~ParsedHidReportDescriptor);
          operator delete[](v52);
        }
      }
      *v69 = v25;
      if ( v31 )
      {
        `eh vector destructor iterator'(
          v31,
          24LL,
          *((_QWORD *)v31 - 1),
          (void (*)(void *))ParsedHidReportDescriptor::~ParsedHidReportDescriptor);
        operator delete[](v31 - 8);
      }
      if ( v9 )
      {
        std::_Destroy_range<std::allocator<std::vector<HidChannelValueInfo>>>((__int64)v9, (__int64)v8);
        std::_Deallocate<16,0>(v9, 8 * ((v5 - (char *)v9) >> 3));
      }
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24A,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
        (const char *)0x8007000ELL);
      if ( v9 )
      {
        std::_Destroy_range<std::allocator<std::vector<HidChannelValueInfo>>>((__int64)v9, (__int64)v8);
        std::_Deallocate<16,0>(v9, 8 * ((v5 - (char *)v9) >> 3));
      }
      result = 2147942414LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x25F,
                           (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
                           v30);
  }
  return result;
}
