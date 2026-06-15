/*
 * XREFs of ?UpdateLicenseMapForAllEndpoints@AtmosCheck@@AEAAJXZ @ 0x18015E204
 * Callers:
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x180036E40 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001C004 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180027F80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddArrayToLicenseMap@AtmosCheck@@AEAAJPEBG@Z @ 0x18005DC50 (-AddArrayToLicenseMap@AtmosCheck@@AEAAJPEBG@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@Ucase_insensitive_hash@@Ucase_insensitive_equality@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@std@@@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180084B3E (--$find@X@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D2CB0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=7 #try_helpers=1
__int64 __fastcall AtmosCheck::UpdateLicenseMapForAllEndpoints(AtmosCheck *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int i; // r15d
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, LPVOID *); // rsi
  int v14; // eax
  void *Ptr; // rcx
  __int64 *v16; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-90h] BYREF
  unsigned int v18; // [rsp+40h] [rbp-88h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-80h] BYREF
  __int64 v20; // [rsp+50h] [rbp-78h] BYREF
  void *v21; // [rsp+58h] [rbp-70h] BYREF
  _QWORD v22[2]; // [rsp+60h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v24; // [rsp+88h] [rbp-40h]
  unsigned __int64 *v25; // [rsp+90h] [rbp-38h]
  int v26; // [rsp+98h] [rbp-30h]
  int v27; // [rsp+9Ch] [rbp-2Ch]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v22[1] = v2;
  if ( *((_BYTE *)this + 217) )
  {
    v16 = 0LL;
    v4 = (__int64 *)*((_QWORD *)this + 28);
    v5 = *v4;
    v16 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, __int64 **))(v5 + 24))(v4, 0LL, 1LL, &v16);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v18 = 0;
      v8 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v16 + 24))(v16, &v18);
      v9 = v8;
      if ( v8 >= 0 )
      {
        for ( i = 0; i < v18; ++i )
        {
          v20 = 0LL;
          v11 = *v16;
          v20 = 0LL;
          if ( (*(int (__fastcall **)(__int64 *, _QWORD, __int64 *))(v11 + 32))(v16, i, &v20) >= 0 )
          {
            pv = 0LL;
            v12 = v20;
            v13 = *(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v20 + 40LL);
            wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
              &pv,
              0LL);
            v14 = v13(v12, &pv);
            if ( v14 < 0 )
            {
              if ( (unsigned int)dword_1801CD2B8 > 2 )
              {
                LODWORD(v17) = v14;
                v25 = &v17;
                v26 = 4;
                v27 = 0;
                tlgWriteTransfer_EventWriteTransfer(
                  (__int64)&dword_1801CD2B8,
                  (unsigned __int8 *)dword_180198EDE,
                  0LL,
                  0LL,
                  3u,
                  &v23);
              }
            }
            else
            {
              std::wstring::wstring(&v23, pv);
              std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,case_insensitive_hash,case_insensitive_equality>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::find<void>(
                (_QWORD *)this + 76,
                v22,
                &v23);
              if ( v24 >= 8 )
              {
                v17 = 2 * v24 + 2;
                Ptr = (void *)v23.Ptr;
                v21 = (void *)v23.Ptr;
                if ( v17 >= 0x1000 )
                {
                  std::_Adjust_manually_vector_aligned(&v21, &v17);
                  Ptr = v21;
                }
                operator delete(Ptr);
              }
              if ( v22[0] == *((_QWORD *)this + 77) )
                AtmosCheck::AddArrayToLicenseMap(this, (const unsigned __int16 *)pv);
            }
            if ( pv )
              CoTaskMemFree(pv);
          }
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v20);
        }
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v16);
        if ( v2 )
          LeaveCriticalSection(v2);
        return 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3C1,
          (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)v8);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v16);
        if ( v2 )
          LeaveCriticalSection(v2);
        return v9;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3BE,
        (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)(unsigned int)v6);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v16);
      if ( v2 )
        LeaveCriticalSection(v2);
      return v7;
    }
  }
  else
  {
    if ( v2 )
      LeaveCriticalSection(v2);
    return 0LL;
  }
}
