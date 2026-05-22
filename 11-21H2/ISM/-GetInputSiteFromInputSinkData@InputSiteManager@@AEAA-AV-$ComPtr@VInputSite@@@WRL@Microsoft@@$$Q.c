/*
 * XREFs of ?GetInputSiteFromInputSinkData@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAVLegacyInputSinkData@@_N@Z @ 0x180013370
 * Callers:
 *     ?GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAX@Z @ 0x18004DE80 (-GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@P.c)
 *     ?GetOrCreateInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@Z @ 0x18004DFE8 (-GetOrCreateInputSiteFromInputSinkHandle@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Micr.c)
 * Callees:
 *     ?GetInputSiteFromIds@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$span@UInputSiteId@@$0?0@gsl@@@Z @ 0x1800018D0 (-GetInputSiteFromIds@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$span@UInpu.c)
 *     ??$_Emplace_reallocate@UInputSiteId@@@?$vector@UInputSiteId@@V?$allocator@UInputSiteId@@@std@@@std@@QEAAPEAUInputSiteId@@QEAU2@$$QEAU2@@Z @ 0x180002204 (--$_Emplace_reallocate@UInputSiteId@@@-$vector@UInputSiteId@@V-$allocator@UInputSiteId@@@std@@@s.c)
 *     ??$_Emplace_reallocate@PEAVInputSite@@@?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@QEAAPEAPEAVInputSite@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x180013004 (--$_Emplace_reallocate@PEAVInputSite@@@-$vector@PEAVInputSite@@V-$allocator@PEAVInputSite@@@std@.c)
 *     ??$Make@VInputSite@@AEAV?$span@UInputSiteId@@$0?0@gsl@@AEAKPEAVInputSiteManager@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VInputSite@@@12@AEAV?$span@UInputSiteId@@$0?0@gsl@@AEAK$$QEAPEAVInputSiteManager@@@Z @ 0x180013150 (--$Make@VInputSite@@AEAV-$span@UInputSiteId@@$0-0@gsl@@AEAKPEAVInputSiteManager@@@Details@WRL@Mi.c)
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x180013850 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     ??0LegacyInputSinkData@@QEAA@$$QEAV0@@Z @ 0x180013930 (--0LegacyInputSinkData@@QEAA@$$QEAV0@@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180013EC0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositionInputSink@@YAJ.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x180086B08 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?_Throw_bad_variant_access@std@@YAXXZ @ 0x180097384 (-_Throw_bad_variant_access@std@@YAXXZ.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x1800E3980 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 *     ?SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z @ 0x180124160 (-SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z.c)
 *     ?GetDuplicatedInputSinkHandle@LegacyInputSinkData@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@XZ @ 0x180124C78 (-GetDuplicatedInputSinkHandle@LegacyInputSinkData@@QEBA-AV-$unique_any_t@V-$unique_storage@U-$ha.c)
 */

// Hidden C++ exception states: #wind=6
__int64 *__fastcall InputSiteManager::GetInputSiteFromInputSinkData(__int64 a1, __int64 *a2, _QWORD *a3, char a4)
{
  bool v8; // zf
  unsigned int v9; // esi
  HANDLE *v10; // rdi
  __int64 CompositionInputQueue; // rcx
  __int64 v12; // rax
  __int128 v13; // xmm6
  __int64 v14; // r15
  int v15; // r12d
  HANDLE *v16; // rdi
  _BYTE *v17; // rdx
  HANDLE v18; // rax
  __int64 v19; // rcx
  char *v20; // rcx
  _BYTE *v21; // rdx
  __int64 v22; // rcx
  HANDLE *v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rax
  _BYTE *v26; // r9
  __int64 v27; // rcx
  HANDLE *i; // r14
  _QWORD *v29; // rdi
  char v30; // al
  bool v31; // cl
  __int128 v32; // xmm1
  __int64 *DuplicatedInputSinkHandle; // rax
  char *v35; // [rsp+28h] [rbp-E0h] BYREF
  void *v36; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v37; // [rsp+38h] [rbp-D0h]
  __int64 *v38; // [rsp+40h] [rbp-C8h]
  __int128 v39; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v40; // [rsp+58h] [rbp-B0h] BYREF
  char v41; // [rsp+60h] [rbp-A8h]
  char v42; // [rsp+6Ch] [rbp-9Ch]
  char v43; // [rsp+71h] [rbp-97h]
  char v44; // [rsp+7Ch] [rbp-8Ch]
  char v45; // [rsp+B8h] [rbp-50h]
  char v46; // [rsp+F8h] [rbp-10h]
  char v47; // [rsp+138h] [rbp+30h]
  char v48; // [rsp+178h] [rbp+70h]
  char v49; // [rsp+1B8h] [rbp+B0h]
  char v50; // [rsp+200h] [rbp+F8h]
  __int128 v51; // [rsp+208h] [rbp+100h] BYREF
  __int128 v52; // [rsp+218h] [rbp+110h]
  __int128 v53; // [rsp+228h] [rbp+120h]
  __int64 v54; // [rsp+238h] [rbp+130h]
  _BYTE v55[64]; // [rsp+248h] [rbp+140h] BYREF
  HANDLE TargetHandle[2]; // [rsp+288h] [rbp+180h] BYREF
  int v57; // [rsp+298h] [rbp+190h] BYREF
  char *v58; // [rsp+2A0h] [rbp+198h]
  int v59; // [rsp+2A8h] [rbp+1A0h]
  __int64 v60; // [rsp+2B0h] [rbp+1A8h]
  wil::details::in1diag3 *retaddr; // [rsp+310h] [rbp+208h]

  v38 = a2;
  LODWORD(v37) = 0;
  v57 = 0;
  if ( !*((_BYTE *)a3 + 36) )
  {
    v36 = 0LL;
    if ( *((_BYTE *)a3 + 8) >= 2u )
      std::_Throw_bad_variant_access();
    NtQueryCompositionInputSinkLuid(*a3, &v36);
    v8 = *((_BYTE *)a3 + 36) == 0;
    *(_QWORD *)((char *)a3 + 28) = v36;
    if ( !v8 )
      goto LABEL_6;
    *((_BYTE *)a3 + 36) = 1;
  }
  if ( !*((_BYTE *)a3 + 36) )
    std::_Throw_bad_optional_access();
LABEL_6:
  v35 = *(char **)((char *)a3 + 28);
  v58 = v35;
  v9 = 1;
  v59 = 1;
  *(__m128i *)TargetHandle = _mm_load_si128((const __m128i *)&_xmm);
  v10 = TargetHandle;
  do
  {
    CompositionInputQueue = LegacyInputSinkData::GetCompositionInputQueue(a3, *(unsigned int *)v10);
    if ( (unsigned int)(*(_DWORD *)CompositionInputQueue - 2) <= 1 )
    {
      v12 = *(_QWORD *)(CompositionInputQueue + 8);
      goto LABEL_9;
    }
    v10 = (HANDLE *)((char *)v10 + 4);
  }
  while ( v10 != (HANDLE *)&v57 );
  LODWORD(v12) = 0;
LABEL_9:
  v60 = (unsigned int)v12;
  TargetHandle[0] = HANDLE_FLAG_PROTECT_FROM_CLOSE;
  TargetHandle[1] = &v57;
  if ( !(_DWORD)v12 )
  {
    TargetHandle[0] = HANDLE_FLAG_INHERIT;
    TargetHandle[1] = &v57;
  }
  v13 = *(_OWORD *)TargetHandle;
  InputSiteManager::GetInputSiteFromIds(a1, a2, TargetHandle);
  LODWORD(v37) = 1;
  v14 = *a2;
  if ( *a2 )
  {
    v15 = 0;
  }
  else
  {
    if ( a4 )
    {
      v39 = v13;
      v15 = 0;
      LODWORD(v36) = 0;
      TargetHandle[0] = (HANDLE)a1;
      v16 = (HANDLE *)Microsoft::WRL::Details::Make<InputSite,gsl::span<InputSiteId,-1> &,unsigned long &,InputSiteManager *>(
                        &v35,
                        &v39,
                        (int *)&v36,
                        (__int64 *)TargetHandle);
      LODWORD(v37) = 5;
      TargetHandle[0] = v35;
      v17 = *(_BYTE **)(a1 + 64);
      if ( v17 == *(_BYTE **)(a1 + 72) )
      {
        std::vector<InputSite *>::_Emplace_reallocate<InputSite *>((const void **)(a1 + 56), v17, TargetHandle);
      }
      else
      {
        *(_QWORD *)v17 = v35;
        *(_QWORD *)(a1 + 64) += 8LL;
      }
      v18 = 0LL;
      if ( TargetHandle != v16 )
      {
        v18 = *v16;
        *v16 = 0LL;
      }
      v19 = *a2;
      *a2 = (__int64)v18;
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      LODWORD(v37) = 1;
      v20 = v35;
      if ( v35 )
      {
        v35 = 0LL;
        (*(void (__fastcall **)(char *))(*(_QWORD *)v20 + 16LL))(v20);
      }
    }
    else
    {
      v15 = 0;
    }
    v14 = *a2;
    if ( !*a2 )
      return a2;
  }
  if ( !*(_BYTE *)(v14 + 480) )
  {
    if ( *((_BYTE *)a3 + 8) == 1 )
    {
      if ( !*((_BYTE *)a3 + 36) )
      {
        v35 = 0LL;
        NtQueryCompositionInputSinkLuid(*a3, &v35);
        v8 = *((_BYTE *)a3 + 36) == 0;
        *(_QWORD *)((char *)a3 + 28) = v35;
        if ( v8 )
        {
          *((_BYTE *)a3 + 36) = 1;
          if ( !*((_BYTE *)a3 + 36) )
            std::_Throw_bad_optional_access();
        }
      }
      v36 = *(void **)((char *)a3 + 28);
      v21 = *(_BYTE **)(v14 + 24);
      v22 = *(_QWORD *)(v14 + 16);
      if ( (_BYTE *)v22 == v21 )
        goto LABEL_66;
      do
      {
        if ( !*(_DWORD *)v22 )
          break;
        v22 += 16LL;
      }
      while ( (_BYTE *)v22 != v21 );
      if ( (_BYTE *)v22 == v21 )
      {
LABEL_66:
        LODWORD(TargetHandle[0]) = 0;
        TargetHandle[1] = v36;
        if ( v21 == *(_BYTE **)(v14 + 32) )
        {
          std::vector<InputSiteId>::_Emplace_reallocate<InputSiteId>((const void **)(v14 + 16), v21, TargetHandle);
        }
        else
        {
          *(_OWORD *)v21 = *(_OWORD *)TargetHandle;
          *(_QWORD *)(v14 + 24) += 16LL;
        }
      }
      else
      {
        *(_QWORD *)(v22 + 8) = v36;
      }
      *(__m128i *)TargetHandle = _mm_load_si128((const __m128i *)&_xmm);
      v23 = TargetHandle;
      do
      {
        v24 = LegacyInputSinkData::GetCompositionInputQueue(a3, *(unsigned int *)v23);
        if ( (unsigned int)(*(_DWORD *)v24 - 2) <= 1 )
        {
          v25 = *(_QWORD *)(v24 + 8);
          goto LABEL_32;
        }
        v23 = (HANDLE *)((char *)v23 + 4);
      }
      while ( v23 != (HANDLE *)&v57 );
      LODWORD(v25) = 0;
LABEL_32:
      if ( (_DWORD)v25 )
      {
        v26 = *(_BYTE **)(v14 + 24);
        v27 = *(_QWORD *)(v14 + 16);
        if ( (_BYTE *)v27 == v26 )
          goto LABEL_82;
        do
        {
          if ( *(_DWORD *)v27 == 1 )
            break;
          v27 += 16LL;
        }
        while ( (_BYTE *)v27 != v26 );
        if ( (_BYTE *)v27 == v26 )
        {
LABEL_82:
          LODWORD(TargetHandle[0]) = 1;
          TargetHandle[1] = (HANDLE)(unsigned int)v25;
          if ( v26 == *(_BYTE **)(v14 + 32) )
          {
            std::vector<InputSiteId>::_Emplace_reallocate<InputSiteId>((const void **)(v14 + 16), v26, TargetHandle);
          }
          else
          {
            *(_OWORD *)v26 = *(_OWORD *)TargetHandle;
            *(_QWORD *)(v14 + 24) += 16LL;
          }
        }
        else
        {
          *(_QWORD *)(v27 + 8) = (unsigned int)v25;
        }
      }
      if ( !*(_DWORD *)(v14 + 40) )
      {
        *(__m128i *)TargetHandle = _mm_load_si128((const __m128i *)&_xmm);
        for ( i = TargetHandle; ; v9 = *(_DWORD *)i )
        {
          switch ( v9 )
          {
            case 1u:
              v29 = a3 + 5;
              break;
            case 2u:
              v29 = a3 + 13;
              break;
            case 3u:
              v29 = a3 + 21;
              break;
            case 4u:
              v29 = a3 + 29;
              break;
            case 5u:
              v29 = a3 + 37;
              break;
            default:
              wil::details::in1diag3::FailFast_UnexpectedMsg(
                retaddr,
                (void *)0xB7,
                (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\legacyinputsinkdata.cpp",
                "Invalid input type provided.",
                v35);
          }
          v30 = *((_BYTE *)v29 + 56);
          v31 = v30 == 0;
          if ( v9 == 5 )
            v31 = 1;
          if ( v31 )
          {
            v51 = 0LL;
            v52 = 0LL;
            v53 = 0LL;
            v54 = 0LL;
            memset_0(v55, 0, sizeof(v55));
            if ( *((_BYTE *)a3 + 8) > 1u )
              std::_Throw_bad_variant_access();
            NtQueryCompositionInputQueueAndTransform(*a3, v9, &v51, v55);
            v32 = v52;
            v8 = *((_BYTE *)v29 + 56) == 0;
            *(_OWORD *)v29 = v51;
            *((_OWORD *)v29 + 1) = v32;
            *(_QWORD *)&v32 = v54;
            *((_OWORD *)v29 + 2) = v53;
            v29[6] = v32;
            if ( v8 )
              *((_BYTE *)v29 + 56) = 1;
          }
          else if ( !v30 )
          {
            std::_Throw_bad_optional_access();
          }
          if ( *(_DWORD *)v29 == 3 )
            break;
          i = (HANDLE *)((char *)i + 4);
          if ( i == (HANDLE *)&v57 )
            goto LABEL_57;
        }
        v15 = *((_DWORD *)v29 + 4);
LABEL_57:
        *(_DWORD *)(v14 + 40) = v15;
      }
      if ( *(_BYTE *)(v14 + 480) )
      {
        if ( *(char *)(v14 + 56) != -1LL && *(_BYTE *)(v14 + 56) )
          wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>(v14 + 48);
        *(_BYTE *)(v14 + 480) = 0;
      }
      LegacyInputSinkData::LegacyInputSinkData(v14 + 48, a3);
      *(_BYTE *)(v14 + 480) = 1;
    }
    else
    {
      DuplicatedInputSinkHandle = (__int64 *)LegacyInputSinkData::GetDuplicatedInputSinkHandle(
                                               (LegacyInputSinkData *)a3,
                                               TargetHandle);
      v40 = *DuplicatedInputSinkHandle;
      *DuplicatedInputSinkHandle = 0LL;
      v41 = 1;
      v42 = 0;
      v43 = 0;
      v44 = 0;
      v45 = 0;
      v46 = 0;
      v47 = 0;
      v48 = 0;
      v49 = 0;
      v50 = 0;
      InputSite::SetLegacyInputSinkData(v14, &v40);
      if ( v41 != -1LL && v41 )
        wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>(&v40);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>(TargetHandle);
    }
  }
  return a2;
}
