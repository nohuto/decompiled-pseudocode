/*
 * XREFs of ?UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGAEAV?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@Z @ 0x1800414A0
 * Callers:
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x180040EF8 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x18015563C (-PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180008710 (--2@YAPEAX_K@Z.c)
 *     ??$_Find_last@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@Ucase_insensitive_hash@@Ucase_insensitive_equality@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@_K@Z @ 0x180041704 (--$_Find_last@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Hash@V-$_Umap_tr.c)
 *     ??Rcase_insensitive_hash@@QEBA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800417A0 (--Rcase_insensitive_hash@@QEBA_KAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     memmove_0 @ 0x18006A67B (memmove_0.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800C5EEC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800C7D70 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180125CD8 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AtmosCheck::UpdateEndpointUnderLock(__int64 a1, _WORD *a2, __int64 *a3)
{
  __int64 *v3; // rax
  __int64 v5; // rsi
  struct _RTL_CRITICAL_SECTION *v6; // r12
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r13
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  SIZE_T v12; // r14
  HANDLE ProcessHeap; // rax
  char *v14; // rax
  char *v15; // r14
  size_t v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rbx
  unsigned __int64 v20; // rdx
  void *v21; // rcx
  size_t v23; // rbx
  LPVOID v24; // rax
  unsigned __int64 v25; // [rsp+20h] [rbp-49h] BYREF
  void *v26; // [rsp+28h] [rbp-41h] BYREF
  __int64 v27; // [rsp+30h] [rbp-39h]
  __int64 v28; // [rsp+38h] [rbp-31h]
  struct _RTL_CRITICAL_SECTION *v29; // [rsp+40h] [rbp-29h] BYREF
  __int64 *v30; // [rsp+48h] [rbp-21h]
  char v31[16]; // [rsp+50h] [rbp-19h] BYREF
  void *v32[2]; // [rsp+60h] [rbp-9h] BYREF
  unsigned __int64 v33; // [rsp+70h] [rbp+7h]
  unsigned __int64 v34; // [rsp+78h] [rbp+Fh]

  v3 = a3;
  v30 = a3;
  v5 = a1;
  v27 = a1;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
  v7 = a1 + 608;
  v28 = a1 + 608;
  v8 = 0LL;
  while ( 1 )
  {
    v9 = *v3;
    EnterCriticalSection(v6);
    v29 = v6;
    v33 = 0LL;
    v34 = 7LL;
    LOWORD(v32[0]) = 0;
    v10 = -1LL;
    do
      ++v10;
    while ( a2[v10] );
    if ( v10 > 7 )
    {
      if ( v10 > 0x7FFFFFFFFFFFFFFELL )
        goto LABEL_36;
      v11 = v10 | 7;
      if ( (v10 | 7) > 0x7FFFFFFFFFFFFFFELL )
      {
        v11 = 0x7FFFFFFFFFFFFFFELL;
        v12 = -2LL;
      }
      else
      {
        if ( v11 < 0xA )
          v11 = 10LL;
        if ( v11 + 1 > 0x7FFFFFFFFFFFFFFFLL )
LABEL_27:
          std::_Throw_bad_array_new_length();
        v12 = 2 * (v11 + 1);
        if ( v12 < 0x1000 )
        {
          if ( v12 )
          {
            ProcessHeap = GetProcessHeap();
            v14 = (char *)HeapAlloc(ProcessHeap, 0, v12);
          }
          else
          {
            v14 = 0LL;
          }
          v15 = v14;
LABEL_14:
          v33 = v10;
          v34 = v11;
          v16 = 2 * v10;
          memcpy_0(v15, a2, v16);
          *(_WORD *)&v15[v16] = 0;
          v32[0] = v15;
          v5 = v27;
          v7 = v28;
          goto LABEL_15;
        }
      }
      if ( v12 + 39 < v12 )
        goto LABEL_27;
      v24 = operator new(v12 + 39);
      if ( !v24 )
      {
        _o__invalid_parameter_noinfo_noreturn();
        __debugbreak();
LABEL_36:
        std::_Xlength_error("string too long");
      }
      v15 = (char *)(((unsigned __int64)v24 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v15 - 1) = v24;
      goto LABEL_14;
    }
    v33 = v10;
    v23 = 2 * v10;
    memmove_0(v32, a2, v23);
    *(_WORD *)((char *)v32 + v23) = 0;
LABEL_15:
    v18 = case_insensitive_hash::operator()(v17, v32);
    v19 = *(_QWORD *)(std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,case_insensitive_hash,case_insensitive_equality>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::_Find_last<std::wstring>(
                        v7,
                        v31,
                        v32,
                        v18)
                    + 8);
    if ( !v19 )
      v19 = *(_QWORD *)(v7 + 8);
    if ( v34 >= 8 )
    {
      v20 = 2 * v34 + 2;
      v25 = v20;
      v21 = v32[0];
      v26 = v32[0];
      if ( v20 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&v26, &v25);
        v20 = v25;
        v21 = v26;
      }
      operator delete(v21, v20);
    }
    v33 = 0LL;
    v34 = 7LL;
    LOWORD(v32[0]) = 0;
    if ( v19 == *(_QWORD *)(v5 + 616) )
    {
      Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v29);
    }
    else
    {
      *(_BYTE *)(v8 + *(_QWORD *)(v19 + 48)) = *(_BYTE *)(v8 + v9);
      *(_BYTE *)(v8 + *(_QWORD *)(v19 + 48) + 1) = *(_BYTE *)(v8 + v9 + 1);
      *(_DWORD *)(v8 + *(_QWORD *)(v19 + 48) + 4) = *(_DWORD *)(v8 + v9 + 4);
      *(_DWORD *)(v8 + *(_QWORD *)(v19 + 48) + 8) = *(_DWORD *)(v8 + v9 + 8);
      *(_QWORD *)(v8 + *(_QWORD *)(v19 + 48) + 16) = *(_QWORD *)(v8 + v9 + 16);
      if ( v6 )
        LeaveCriticalSection(v6);
    }
    v8 += 24LL;
    if ( v8 >= 168 )
      return 0LL;
    v3 = v30;
  }
}
