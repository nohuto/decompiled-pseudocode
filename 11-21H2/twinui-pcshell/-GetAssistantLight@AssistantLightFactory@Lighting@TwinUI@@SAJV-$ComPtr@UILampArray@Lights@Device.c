/*
 * XREFs of ?GetAssistantLight@AssistantLightFactory@Lighting@TwinUI@@SAJV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@Z @ 0x180560224
 * Callers:
 *     ?AddDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z @ 0x18055E718 (-AddDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x180187B70 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBH@?$vector@HV?$allocator@H@std@@@std@@QEAAPEAHQEAHAEBH@Z @ 0x180327C00 (--$_Emplace_reallocate@AEBH@-$vector@HV-$allocator@H@std@@@std@@QEAAPEAHQEAHAEBH@Z.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18034D32C (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$_Emplace_reallocate@H@?$vector@HV?$allocator@H@std@@@std@@QEAAPEAHQEAH$$QEAH@Z @ 0x18055F680 (--$_Emplace_reallocate@H@-$vector@HV-$allocator@H@std@@@std@@QEAAPEAHQEAH$$QEAH@Z.c)
 *     ??$_Emplace_reallocate@U?$pair@MH@std@@@?$vector@U?$pair@MH@std@@V?$allocator@U?$pair@MH@std@@@2@@std@@QEAAPEAU?$pair@MH@1@QEAU21@$$QEAU21@@Z @ 0x18055F794 (--$_Emplace_reallocate@U-$pair@MH@std@@@-$vector@U-$pair@MH@std@@V-$allocator@U-$pair@MH@std@@@2.c)
 *     ??$_Sort_unchecked@PEAU?$pair@MH@std@@U?$less@X@2@@std@@YAXPEAU?$pair@MH@0@0_JU?$less@X@0@@Z @ 0x18055FE5C (--$_Sort_unchecked@PEAU-$pair@MH@std@@U-$less@X@2@@std@@YAXPEAU-$pair@MH@0@0_JU-$less@X@0@@Z.c)
 *     ??$make_shared@VAssistantLightBlock@Lighting@TwinUI@@AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@@std@@YA?AV?$shared_ptr@VAssistantLightBlock@Lighting@TwinUI@@@0@AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@@Z @ 0x18055FFC4 (--$make_shared@VAssistantLightBlock@Lighting@TwinUI@@AEAV-$ComPtr@UILampArray@Lights@Devices@Win.c)
 *     ??$make_shared@VAssistantLightStrip@Lighting@TwinUI@@AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$vector@HV?$allocator@H@std@@@std@@AEAV78@@std@@YA?AV?$shared_ptr@VAssistantLightStrip@Lighting@TwinUI@@@0@AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$vector@HV?$allocator@H@std@@@0@1@Z @ 0x180560044 (--$make_shared@VAssistantLightStrip@Lighting@TwinUI@@AEAV-$ComPtr@UILampArray@Lights@Devices@Win.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall TwinUI::Lighting::AssistantLightFactory::GetAssistantLight(__int64 *a1, _QWORD *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  int v8; // eax
  __int64 *v9; // rax
  __int64 v10; // rcx
  char *v11; // r14
  unsigned int v12; // r13d
  int v13; // ecx
  char *v14; // r12
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, _QWORD, __int64 *); // rbx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rcx
  _DWORD *v30; // rdi
  __int64 v31; // rcx
  _BYTE *v32; // rbx
  _DWORD *v33; // r8
  _BYTE *v34; // r12
  int v35; // r13d
  __int64 *v36; // rax
  __int64 *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  _QWORD *v40; // rax
  std::_Ref_count_base *v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // [rsp+20h] [rbp-C8h] BYREF
  int v44; // [rsp+28h] [rbp-C0h] BYREF
  int v45; // [rsp+2Ch] [rbp-BCh] BYREF
  int v46; // [rsp+30h] [rbp-B8h] BYREF
  unsigned __int64 v47; // [rsp+38h] [rbp-B0h] BYREF
  __int128 v48; // [rsp+40h] [rbp-A8h] BYREF
  char *v49; // [rsp+50h] [rbp-98h]
  __int128 v50; // [rsp+58h] [rbp-90h] BYREF
  _BYTE *v51; // [rsp+68h] [rbp-80h]
  int v52; // [rsp+70h] [rbp-78h] BYREF
  int v53; // [rsp+74h] [rbp-74h] BYREF
  __int64 *v54; // [rsp+78h] [rbp-70h]
  __int128 v55; // [rsp+80h] [rbp-68h] BYREF
  _BYTE *v56; // [rsp+90h] [rbp-58h]
  _QWORD *v57; // [rsp+98h] [rbp-50h]
  __int64 v58; // [rsp+A8h] [rbp-40h] BYREF
  std::_Ref_count_base *v59; // [rsp+B0h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v57 = a2;
  v54 = a1;
  v46 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)*a1 + 88LL))(*a1, &v46);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v8 = v46;
    if ( v46 >= 7 )
    {
      v48 = 0LL;
      v11 = 0LL;
      v49 = 0LL;
      v12 = 0;
      v13 = 0;
      v14 = 0LL;
      while ( v13 < v8 )
      {
        v43 = 0LL;
        v15 = *a1;
        v16 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)*a1 + 160LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v43);
        v17 = v16(v15, v12, &v43);
        v5 = v17;
        if ( v17 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2C,
            (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightfactory.cpp",
            (const char *)(unsigned int)v17);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v43);
          if ( (_QWORD)v48 )
            std::_Deallocate<16,0>((void *)v48, 8 * ((__int64)&v11[-v48] >> 3));
          v18 = *a1;
          if ( *a1 )
          {
            *a1 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
          }
          return v5;
        }
        v19 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v43 + 56LL))(v43, &v44);
        v5 = v19;
        if ( v19 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2F,
            (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightfactory.cpp",
            (const char *)(unsigned int)v19);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v43);
          if ( (_QWORD)v48 )
            std::_Deallocate<16,0>((void *)v48, 8 * ((__int64)&v11[-v48] >> 3));
          v20 = *a1;
          if ( *a1 )
          {
            *a1 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
          }
          return v5;
        }
        if ( (v44 & 8) != 0 )
        {
          v21 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v43 + 72LL))(v43, &v52);
          v5 = v21;
          if ( v21 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x38,
              (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightfactory.cpp",
              (const char *)(unsigned int)v21);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v43);
            if ( (_QWORD)v48 )
              std::_Deallocate<16,0>((void *)v48, 8 * ((__int64)&v11[-v48] >> 3));
            v22 = *a1;
            if ( *a1 )
            {
              *a1 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
            }
            return v5;
          }
          v23 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v43 + 88LL))(v43, &v53);
          v5 = v23;
          if ( v23 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x39,
              (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightfactory.cpp",
              (const char *)(unsigned int)v23);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v43);
            if ( (_QWORD)v48 )
              std::_Deallocate<16,0>((void *)v48, 8 * ((__int64)&v11[-v48] >> 3));
            v24 = *a1;
            if ( *a1 )
            {
              *a1 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
            }
            return v5;
          }
          v25 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v43 + 80LL))(v43, &v45);
          v5 = v25;
          if ( v25 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x3A,
              (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightfactory.cpp",
              (const char *)(unsigned int)v25);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v43);
            if ( (_QWORD)v48 )
              std::_Deallocate<16,0>((void *)v48, 8 * ((__int64)&v11[-v48] >> 3));
            v26 = *a1;
            if ( *a1 )
            {
              *a1 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
            }
            return v5;
          }
          if ( v52 >= 48 && v53 >= 48 && v45 >= 48 )
          {
            v27 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v43 + 64LL))(v43, &v58);
            v5 = v27;
            if ( v27 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x41,
                (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightfactory.cpp",
                (const char *)(unsigned int)v27);
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v43);
              if ( (_QWORD)v48 )
                std::_Deallocate<16,0>((void *)v48, 8 * ((__int64)&v11[-v48] >> 3));
              v28 = *a1;
              if ( *a1 )
              {
                *a1 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
              }
              return v5;
            }
            v47 = __PAIR64__(v12, v58);
            if ( v14 == v11 )
            {
              try
              {
                std::vector<std::pair<float,int>>::_Emplace_reallocate<std::pair<float,int>>((char **)&v48, v14, &v47);
                v11 = v49;
                v14 = (char *)*((_QWORD *)&v48 + 1);
              }
              catch ( std::exception )
              {
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v43);
                if ( (_QWORD)v48 )
                  std::_Deallocate<16,0>((void *)v48, (unsigned __int64)&v49[-v48] & 0xFFFFFFFFFFFFFFF8uLL);
LABEL_59:
                v29 = *v54;
                if ( *v54 )
                  goto LABEL_88;
                return 2147942414LL;
              }
            }
            else
            {
              *(_QWORD *)v14 = v47;
              v14 += 8;
              *((_QWORD *)&v48 + 1) = v14;
            }
          }
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v43);
        v13 = ++v12;
        v8 = v46;
      }
      v30 = (_DWORD *)v48;
      v47 = (__int64)&v14[-v48] >> 3;
      std::_Sort_unchecked<std::pair<float,int> *,std::less<void>>((char *)v48, v14, v47, 0);
      try
      {
        v50 = 0LL;
        v51 = 0LL;
        v55 = 0LL;
        v56 = 0LL;
        v44 = 1;
        std::vector<int>::_Emplace_reallocate<int const &>((const void **)&v55, 0LL, v30 + 1);
        v35 = 1;
        v32 = (_BYTE *)*((_QWORD *)&v50 + 1);
        v34 = (_BYTE *)*((_QWORD *)&v55 + 1);
        while ( v35 < (int)v47 )
        {
          v31 = v35;
          if ( *(float *)&v30[2 * v35 - 2] != *(float *)&v30[2 * v35] )
          {
            ++v44;
            v45 = v35 - 1;
            if ( v32 == v51 )
            {
              std::vector<int>::_Emplace_reallocate<int>((const void **)&v50, v32, &v45);
              v32 = (_BYTE *)*((_QWORD *)&v50 + 1);
              v31 = v35;
            }
            else
            {
              *(_DWORD *)v32 = v35 - 1;
              v32 += 4;
              *((_QWORD *)&v50 + 1) = v32;
            }
          }
          v33 = &v30[2 * v31 + 1];
          if ( v34 == v56 )
          {
            std::vector<int>::_Emplace_reallocate<int const &>((const void **)&v55, v34, v33);
            v34 = (_BYTE *)*((_QWORD *)&v55 + 1);
          }
          else
          {
            *(_DWORD *)v34 = *v33;
            v34 += 4;
            *((_QWORD *)&v55 + 1) = v34;
          }
          ++v35;
        }
        v45 = v47;
        if ( v32 == v51 )
        {
          std::vector<int>::_Emplace_reallocate<int>((const void **)&v50, v32, &v45);
        }
        else
        {
          *(_DWORD *)v32 = v47;
          *((_QWORD *)&v50 + 1) = v32 + 4;
        }
        if ( v44 >= 7 )
        {
          v37 = std::make_shared<TwinUI::Lighting::AssistantLightStrip,Microsoft::WRL::ComPtr<Windows::Devices::Lights::ILampArray> &,std::vector<int> &,std::vector<int> &>(
                  &v58,
                  a1,
                  (__int64)&v55,
                  (__int64)&v50);
          v38 = *v37;
          v39 = v37[1];
          *v37 = 0LL;
          v37[1] = 0LL;
          v40 = v57;
          *v57 = v38;
          v41 = (std::_Ref_count_base *)v40[1];
          v40[1] = v39;
          if ( v41 )
            std::_Ref_count_base::_Decref(v41);
        }
        else
        {
          v36 = std::make_shared<TwinUI::Lighting::AssistantLightBlock,Microsoft::WRL::ComPtr<Windows::Devices::Lights::ILampArray> &>(
                  &v58,
                  a1);
          std::shared_ptr<KBViewInfo>::operator=(v57, v36);
        }
        if ( v59 )
          std::_Ref_count_base::_Decref(v59);
      }
      catch ( std::exception )
      {
        std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)&v55);
        std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)&v50);
        if ( (_QWORD)v48 )
          std::_Deallocate<16,0>((void *)v48, (unsigned __int64)&v49[-v48] & 0xFFFFFFFFFFFFFFF8uLL);
        v29 = *v54;
        if ( *v54 )
        {
LABEL_88:
          *v54 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
        }
        return 2147942414LL;
      }
      std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)&v55);
      std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)&v50);
      if ( v30 )
        std::_Deallocate<16,0>(v30, 8 * ((v11 - (char *)v30) >> 3));
      v42 = *a1;
      if ( *a1 )
      {
        *a1 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
      }
    }
    else
    {
      try
      {
        v9 = std::make_shared<TwinUI::Lighting::AssistantLightBlock,Microsoft::WRL::ComPtr<Windows::Devices::Lights::ILampArray> &>(
               &v58,
               a1);
        std::shared_ptr<KBViewInfo>::operator=(a2, v9);
        if ( v59 )
          std::_Ref_count_base::_Decref(v59);
      }
      catch ( std::exception )
      {
        goto LABEL_59;
      }
      v10 = *a1;
      if ( *a1 )
      {
        *a1 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightfactory.cpp",
      (const char *)(unsigned int)v4);
    v6 = *a1;
    if ( *a1 )
    {
      *a1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    return v5;
  }
}
