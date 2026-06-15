/*
 * XREFs of ?RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z @ 0x18015CED8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_::_Do_call @ 0x180117480 (std--_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_--_Do_call.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ @ 0x18003969C (-RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x18007067C (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180159690 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_G_ea_180159690.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180159728 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU__ea_180159728.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x18015999C (--$_Destroy_range@V-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@st.c)
 *     ??1?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x18015A040 (--1-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$basic_.c)
 *     ?GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x18015B088 (-GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV-$vector@V-$basic_string@GU-$char_traits@G@st.c)
 *     ?MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z @ 0x18015C2E8 (-MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z.c)
 *     ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x18015C7C4 (-PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AtmosCheck::RefreshLicenseStatus(AtmosCheck *this, const unsigned __int16 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v10; // eax
  int CurrentEndpointsUnderLock; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // r14
  _QWORD *i; // rbx
  const unsigned __int16 *v17; // rax
  int v18; // eax
  unsigned int v19; // r12d
  char v20; // r12
  __int128 v21; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  const WCHAR *v24; // [rsp+90h] [rbp+40h] BYREF
  const WCHAR *v25; // [rsp+98h] [rbp+48h] BYREF

  if ( CompareStringOrdinal(a2, -1, L"{00000000-0000-0000-0000-000000000000}", -1, 1) != 2 )
  {
    if ( *((_BYTE *)this + 96) )
    {
      if ( *((_BYTE *)this + 217) )
      {
        v10 = AtmosCheck::MapSubtypeToCommonTechIndex(this, a2);
        if ( v10 == -1 )
        {
          v7 = -2147024809;
          v8 = 2221LL;
        }
        else
        {
          if ( *((_BYTE *)this + 48 * v10 + 272) )
          {
            v21 = 0LL;
            v22 = 0LL;
            CurrentEndpointsUnderLock = AtmosCheck::GetCurrentEndpointsUnderLock((__int64)this, (__int64 *)&v21);
            v7 = CurrentEndpointsUnderLock;
            if ( CurrentEndpointsUnderLock >= 0 )
            {
              v15 = 0;
              for ( i = (_QWORD *)v21; i != *((_QWORD **)&v21 + 1); i += 4 )
              {
                LOBYTE(v24) = 0;
                v17 = (const unsigned __int16 *)std::wstring::c_str(i);
                v18 = AtmosCheck::PerformLicenseCheckForSpatialAudioSubtype(this, v17, a2, (bool *)&v24);
                v19 = v18;
                if ( v18 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x8B8,
                    (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
                    (const char *)(unsigned int)v18);
                  v7 = v19;
                  goto LABEL_25;
                }
                v20 = (char)v24;
                if ( (unsigned int)dword_1801CD2B8 > 5 )
                {
                  v25 = a2;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>>(
                    v12,
                    byte_180199285,
                    v13,
                    v14,
                    &v25,
                    (__int64)&v24);
                }
                if ( v15 || v20 )
                  v15 = 1;
              }
              if ( v15 && *((_QWORD *)this + 5) )
              {
                if ( (unsigned int)dword_1801CD2B8 > 5 )
                {
                  v24 = a2;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
                    v12,
                    byte_180198F28,
                    v13,
                    v14,
                    &v24);
                }
                (***((void (__fastcall ****)(_QWORD))this + 5))(*((_QWORD *)this + 5));
              }
              if ( (_QWORD)v21 )
              {
                std::_Destroy_range<std::allocator<std::wstring>>(v21, *((__int64 *)&v21 + 1));
                std::_Deallocate<16,0>((void *)v21, (v22 - v21) & 0xFFFFFFFFFFFFFFE0uLL);
              }
              return 0LL;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x8B2,
              (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
              (const char *)(unsigned int)CurrentEndpointsUnderLock);
LABEL_25:
            std::vector<std::wstring>::~vector<std::wstring>((__int64)&v21);
            return v7;
          }
          v7 = -2147024809;
          v8 = 2222LL;
        }
      }
      else
      {
        v7 = -2147467259;
        v8 = 2216LL;
      }
    }
    else
    {
      v7 = -2147418113;
      v8 = 2215LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)v7);
    return v7;
  }
  AtmosCheck::RefreshPlatformLicenses(this, v4, v5, v6);
  return 0LL;
}
