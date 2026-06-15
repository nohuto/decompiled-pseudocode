/*
 * XREFs of ?CheckInstalledAppServicesAvailable@AtmosCheck@@AEAA_NXZ @ 0x18015AAD0
 * Callers:
 *     _lambda_25a52f7b70a5b2ddb41b08d731639da5_::operator() @ 0x180039494 (_lambda_25a52f7b70a5b2ddb41b08d731639da5_--operator().c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180027F80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@Ucase_insensitive_hash@@Ucase_insensitive_equality@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@std@@@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180084B3E (--$find@X@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D2CB0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x18015999C (--$_Destroy_range@V-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@st.c)
 *     ?GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x18015B088 (-GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV-$vector@V-$basic_string@GU-$char_traits@G@st.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall AtmosCheck::CheckInstalledAppServicesAvailable(AtmosCheck *this)
{
  char v2; // si
  __int64 i; // rbx
  _WORD *v4; // rdx
  void *v5; // rcx
  __int64 v6; // rdx
  _BYTE *v7; // r8
  __int128 v9; // [rsp+20h] [rbp-60h] BYREF
  __int64 v10; // [rsp+30h] [rbp-50h]
  unsigned __int64 v11; // [rsp+38h] [rbp-48h] BYREF
  void *v12; // [rsp+40h] [rbp-40h] BYREF
  __int64 v13; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v14[3]; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v15; // [rsp+68h] [rbp-18h]

  v2 = 1;
  v9 = 0LL;
  v10 = 0LL;
  if ( (int)AtmosCheck::GetCurrentEndpointsUnderLock(this, &v9) >= 0 )
  {
    for ( i = v9; i != *((_QWORD *)&v9 + 1); i += 32LL )
    {
      v4 = (_WORD *)i;
      if ( *(_QWORD *)(i + 24) >= 8uLL )
        v4 = *(_WORD **)i;
      std::wstring::wstring(v14, v4);
      std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,case_insensitive_hash,case_insensitive_equality>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::find<void>(
        (_QWORD *)this + 76,
        &v13,
        v14);
      if ( v15 >= 8 )
      {
        v11 = 2 * v15 + 2;
        v5 = (void *)v14[0];
        v12 = (void *)v14[0];
        if ( v11 >= 0x1000 )
        {
          std::_Adjust_manually_vector_aligned(&v12, &v11);
          v5 = v12;
        }
        operator delete(v5);
      }
      if ( v2 && v13 != *((_QWORD *)this + 77) )
      {
        v6 = 0LL;
        v7 = (char *)this + 272;
        while ( !*v7 || *(int *)(v6 + *(_QWORD *)(v13 + 48) + 8) >= 0 )
        {
          v7 += 48;
          v6 += 24LL;
          if ( v6 >= 168 )
            goto LABEL_18;
        }
        v2 = 0;
      }
LABEL_18:
      ;
    }
  }
  if ( (_QWORD)v9 )
  {
    std::_Destroy_range<std::allocator<std::wstring>>(v9, *((__int64 *)&v9 + 1));
    std::_Deallocate<16,0>((void *)v9, (v10 - v9) & 0xFFFFFFFFFFFFFFE0uLL);
  }
  return v2;
}
