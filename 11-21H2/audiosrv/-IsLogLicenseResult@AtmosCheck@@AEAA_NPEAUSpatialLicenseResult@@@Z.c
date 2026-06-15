/*
 * XREFs of ?IsLogLicenseResult@AtmosCheck@@AEAA_NPEAUSpatialLicenseResult@@@Z @ 0x180154FDC
 * Callers:
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180040D48 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@Ucase_insensitive_hash@@Ucase_insensitive_equality@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@std@@@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800412FC (--$find@X@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18004135C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall AtmosCheck::IsLogLicenseResult(AtmosCheck *this, struct SpatialLicenseResult *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  _DWORD *v5; // rcx
  char v6; // bl
  _QWORD v8[2]; // [rsp+20h] [rbp-48h] BYREF
  void *v9[3]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v10; // [rsp+48h] [rbp-20h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v8[1] = v4;
  if ( *((_BYTE *)this + 217) )
    goto LABEL_13;
  std::wstring::wstring(v9, L"LegacyDefaultEndpointKey");
  std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,case_insensitive_hash,case_insensitive_equality>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::find<void>(
    (__int64)this + 608,
    v8,
    (__int64)v9);
  if ( v10 >= 8 )
    std::_Deallocate<16,0>(v9[0], 2 * v10 + 2);
  if ( v8[0] == *((_QWORD *)this + 77)
    || (v5 = *(_DWORD **)(v8[0] + 48LL), *(_DWORD *)a2 == v5[1])
    && *((_DWORD *)a2 + 1) == v5[7]
    && *((_DWORD *)a2 + 2) == v5[13]
    && *((_DWORD *)a2 + 3) == v5[19]
    && *((_DWORD *)a2 + 4) == v5[25]
    && *((_DWORD *)a2 + 5) == v5[31]
    && *((_DWORD *)a2 + 6) == v5[37] )
  {
LABEL_13:
    v6 = 0;
  }
  else
  {
    v6 = 1;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return v6;
}
