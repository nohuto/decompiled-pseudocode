/*
 * XREFs of ?RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z @ 0x180155EE8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_::_Do_call @ 0x1800EB120 (std--_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_--_Do_call.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ @ 0x180041C20 (-RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180064DB8 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1801522D8 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_G_ea_1801522D8.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180152370 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU__ea_180152370.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x1801525E4 (--$_Destroy_range@V-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@st.c)
 *     ?GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x180154004 (-GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV-$vector@V-$basic_string@GU-$char_traits@G@st.c)
 *     ?MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z @ 0x180155390 (-MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z.c)
 *     ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x180155800 (-PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AtmosCheck::RefreshLicenseStatus(AtmosCheck *this, const unsigned __int16 *a2)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v7; // eax
  int CurrentEndpointsUnderLock; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // esi
  __int64 v12; // rdx
  char v13; // r14
  _QWORD *i; // rbx
  const unsigned __int16 *v15; // rax
  __int64 v16; // rcx
  char v17; // si
  void (__fastcall ***v18)(_QWORD); // rcx
  __int128 v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  void *v22; // [rsp+90h] [rbp+40h] BYREF
  void *v23; // [rsp+98h] [rbp+48h] BYREF

  if ( CompareStringOrdinal(a2, -1, L"{00000000-0000-0000-0000-000000000000}", -1, 1) == 2 )
  {
    AtmosCheck::RefreshPlatformLicenses(this);
    return 0LL;
  }
  if ( !*((_BYTE *)this + 96) )
  {
    v5 = -2147418113;
    v6 = 2217LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)v5);
    return v5;
  }
  if ( !*((_BYTE *)this + 217) )
  {
    v5 = -2147467259;
    v6 = 2218LL;
    goto LABEL_5;
  }
  v7 = AtmosCheck::MapSubtypeToCommonTechIndex(this, a2);
  if ( v7 == -1 )
  {
    v5 = -2147024809;
    v6 = 2223LL;
    goto LABEL_5;
  }
  if ( !*((_BYTE *)this + 48 * v7 + 272) )
  {
    v5 = -2147024809;
    v6 = 2224LL;
    goto LABEL_5;
  }
  v19 = 0LL;
  v20 = 0LL;
  CurrentEndpointsUnderLock = AtmosCheck::GetCurrentEndpointsUnderLock((__int64)this, (__int64 *)&v19);
  v11 = CurrentEndpointsUnderLock;
  if ( CurrentEndpointsUnderLock >= 0 )
  {
    v13 = 0;
    for ( i = (_QWORD *)v19; i != *((_QWORD **)&v19 + 1); i += 4 )
    {
      LOBYTE(v22) = 0;
      v15 = (const unsigned __int16 *)std::wstring::c_str(i);
      CurrentEndpointsUnderLock = AtmosCheck::PerformLicenseCheckForSpatialAudioSubtype(this, v15, a2, (bool *)&v22);
      v11 = CurrentEndpointsUnderLock;
      if ( CurrentEndpointsUnderLock < 0 )
      {
        v12 = 2234LL;
        goto LABEL_24;
      }
      v17 = (char)v22;
      if ( (unsigned int)dword_1801C02B0 > 5 )
      {
        v23 = (void *)a2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>>(
          v16,
          byte_18018FB5A,
          v9,
          v10,
          &v23,
          (__int64)&v22);
      }
      if ( v13 || v17 )
        v13 = 1;
    }
    if ( v13 )
    {
      v18 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 5);
      if ( v18 )
      {
        if ( (unsigned int)dword_1801C02B0 > 5 )
        {
          v22 = (void *)a2;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
            (__int64)v18,
            byte_18018F835,
            v9,
            v10,
            &v22);
          v18 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 5);
        }
        (**v18)(v18);
      }
    }
    v11 = 0;
  }
  else
  {
    v12 = 2228LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)(unsigned int)CurrentEndpointsUnderLock);
  }
  if ( (_QWORD)v19 )
  {
    std::_Destroy_range<std::allocator<std::wstring>>(v19, *((__int64 *)&v19 + 1));
    std::_Deallocate<16,0>((void *)v19, (v20 - v19) & 0xFFFFFFFFFFFFFFE0uLL);
  }
  return v11;
}
