/*
 * XREFs of ?ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ @ 0x1800F2784
 * Callers:
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800F17E4 (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800E46A0 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$_Sort_unchecked@PEAEU?$less@X@std@@@std@@YAXPEAE0_JU?$less@X@0@@Z @ 0x1800EFB94 (--$_Sort_unchecked@PEAEU-$less@X@std@@@std@@YAXPEAE0_JU-$less@X@0@@Z.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800F2CF4 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall HidLampArrayDevice::ValidateReportParsers(HidLampArrayDevice *this)
{
  __int64 v2; // rcx
  int v3; // edi
  char *v4; // rsi
  unsigned __int64 i; // rax
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r10
  _QWORD *v9; // rax
  unsigned __int8 *v10; // rdx
  __int64 v11; // r9
  _DWORD *v12; // rcx
  __int64 v13; // r9
  __int64 v14; // r9
  __int64 v15; // r9
  const char *v17; // rax
  __int64 v18; // rdx
  char *v19; // [rsp+28h] [rbp-60h]
  char *v20; // [rsp+28h] [rbp-60h]
  int v21; // [rsp+30h] [rbp-58h]
  BOOL v22; // [rsp+30h] [rbp-58h]
  __int64 v23; // [rsp+38h] [rbp-50h]
  BOOL v24; // [rsp+38h] [rbp-50h]
  int v25; // [rsp+40h] [rbp-48h]
  BOOL v26; // [rsp+40h] [rbp-48h]
  BOOL v27; // [rsp+48h] [rbp-40h]
  BOOL v28; // [rsp+50h] [rbp-38h]
  _QWORD v29[4]; // [rsp+60h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v2 = *((_QWORD *)this + 72);
  v3 = 0;
  if ( v2
    && *((_QWORD *)this + 73)
    && *((_QWORD *)this + 74)
    && *((_QWORD *)this + 75)
    && *((_QWORD *)this + 76)
    && *((_QWORD *)this + 77) )
  {
    v4 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(6uLL);
    v29[0] = v4;
    v29[2] = v4 + 6;
    *(_DWORD *)v4 = 0;
    *((_WORD *)v4 + 2) = 0;
    v29[1] = v4 + 6;
    *v4 = *(_BYTE *)(*((_QWORD *)this + 72) + 16LL);
    v4[1] = *(_BYTE *)(*((_QWORD *)this + 73) + 16LL);
    v4[2] = *(_BYTE *)(*((_QWORD *)this + 74) + 16LL);
    v4[3] = *(_BYTE *)(*((_QWORD *)this + 75) + 16LL);
    v4[4] = *(_BYTE *)(*((_QWORD *)this + 76) + 16LL);
    v4[5] = *(_BYTE *)(*((_QWORD *)this + 77) + 16LL);
    std::_Sort_unchecked<unsigned char *,std::less<void>>((__int64)v4, (unsigned __int8 *)v4 + 6, 6LL, 0);
    for ( i = 0LL; i < 6; ++i )
    {
      if ( (_BYTE)v3 == v4[i] )
      {
        LODWORD(v19) = (unsigned __int8)v3;
        wil::details::in1diag3::Return_HrMsg(
          retaddr,
          (void *)0x301,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
          (const char *)0x80070057LL,
          (int)"Reports have duplicate Id:%d",
          v19);
        goto LABEL_25;
      }
      LOBYTE(v3) = v4[i];
    }
    v6 = *((_QWORD *)this + 72);
    v7 = *(int *)(v6 + 56);
    v8 = *(_QWORD *)(*((_QWORD *)this + 74) + 56LL);
    if ( v7 == v8
      && v7 == *(_QWORD *)(*((_QWORD *)this + 75) + 56LL)
      && (_DWORD)v7 == *(_DWORD *)(*((_QWORD *)this + 76) + 192LL)
      && (v9 = (_QWORD *)*((_QWORD *)this + 77), v7 == v9[16]) )
    {
      v10 = (unsigned __int8 *)*((_QWORD *)this + 75);
      v11 = v10[632];
      v12 = (_DWORD *)*((_QWORD *)this + 76);
      if ( (_DWORD)v11 == v12[56] && v11 == v9[34] )
      {
        v13 = v10[704];
        if ( (_DWORD)v13 == v12[64] && v13 == v9[43] )
        {
          v14 = v10[776];
          if ( (_DWORD)v14 == v12[72] && v14 == v9[52] )
          {
            v15 = v10[848];
            if ( (_DWORD)v15 == v12[80] && v15 == v9[61] )
            {
              std::vector<unsigned char>::_Tidy(v29);
              return 0LL;
            }
            v23 = v9[61];
            v21 = v12[80];
            v20 = (char *)*((_QWORD *)v10 + 106);
            v17 = "GainChannelMax is not the same across reports.  LampAttributesResponse:%d, LampMultiUpdate:%d, LampRangeUpdate:%d";
            v18 = 821LL;
          }
          else
          {
            v23 = v9[52];
            v21 = v12[72];
            v20 = (char *)*((_QWORD *)v10 + 97);
            v17 = "BlueChannelMax is not the same across reports.  LampAttributesResponse:%d, LampMultiUpdate:%d, LampRangeUpdate:%d";
            v18 = 812LL;
          }
        }
        else
        {
          v23 = v9[43];
          v21 = v12[64];
          v20 = (char *)*((_QWORD *)v10 + 88);
          v17 = "GreenChannelMax is not the same across reports.  LampAttributesResponse:%d, LampMultiUpdate:%d, LampRangeUpdate:%d";
          v18 = 803LL;
        }
      }
      else
      {
        v23 = v9[34];
        v21 = v12[56];
        v20 = (char *)*((_QWORD *)v10 + 79);
        v17 = "RedChannelMax is not the same across reports.  LampAttributesResponse:%d, LampMultiUpdate:%d, LampRangeUpdate:%d";
        v18 = 794LL;
      }
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)v18,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
        (const char *)0x80070057LL,
        (int)v17,
        v20,
        v21,
        v23);
    }
    else
    {
      v25 = *(_DWORD *)(*((_QWORD *)this + 76) + 192LL);
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x311,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
        (const char *)0x80070057LL,
        (int)"LampCount is not the same across reports. LampArrayAttributes:%d, LampAttributesRequest:%d, LampAttributesR"
             "esponse:%d, LampMultiUpdate:%d, LampRangeUpdate:%d",
        *(const char **)(v6 + 56),
        v8,
        *(_QWORD *)(*((_QWORD *)this + 75) + 56LL),
        v25,
        *(_QWORD *)(*((_QWORD *)this + 77) + 128LL));
    }
LABEL_25:
    std::vector<unsigned char>::_Tidy(v29);
  }
  else
  {
    LOBYTE(v3) = v2 == 0;
    v28 = *((_QWORD *)this + 77) == 0LL;
    v27 = *((_QWORD *)this + 76) == 0LL;
    v26 = *((_QWORD *)this + 75) == 0LL;
    v24 = *((_QWORD *)this + 74) == 0LL;
    v22 = *((_QWORD *)this + 73) == 0LL;
    LODWORD(v19) = v3;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x2F0,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)0x80070057LL,
      (int)"One or more ReportParsers are null.  LampArrayAttributes:%d, LampArrayControl:%d, LampAttributesRequest:%d, L"
           "ampAttributesResponse:%d, LampMultiUpdate:%d, LampRangeUpdate:%d",
      v19,
      v22,
      v24,
      v26,
      v27,
      v28);
  }
  return 2147942487LL;
}
