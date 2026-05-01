/*
 * XREFs of ?GetGameRelatedFromGcsData@AutoGameProfile@@YAJPEBGKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@Z @ 0x18073EBEC
 * Callers:
 *     ?GetGameRelated@IsGameManager@@UEAAJKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@Z @ 0x1803DE4B0 (-GetGameRelated@IsGameManager@@UEAAJKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@Z.c)
 * Callees:
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800C2AB0 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800ECFC4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??$make_unique_cotaskmem_nothrow@$$BY0A@UGMRelatedProcess@KnownGameList@@@wil@@YA?AV?$unique_ptr@$$BY0A@UGMRelatedProcess@KnownGameList@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@_K@Z @ 0x1803DD8A0 (--$make_unique_cotaskmem_nothrow@$$BY0A@UGMRelatedProcess@KnownGameList@@@wil@@YA-AV-$unique_ptr.c)
 *     ??$?0AEBUGMRelatedProcess@KnownGameList@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@UGMRelatedProcess@KnownGameList@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@UGMRelatedProcess@KnownGameList@@PEAX@std@@@1@AEBUGMRelatedProcess@KnownGameList@@@Z @ 0x18073E628 (--$-0AEBUGMRelatedProcess@KnownGameList@@@-$_List_node_emplace_op2@V-$allocator@U-$_List_node@UG.c)
 *     ?_Tokenize@AutoGameProfile@@YAJPEBG0V?$function@$$A6AJPEAGH@Z@std@@@Z @ 0x18073F1F0 (-_Tokenize@AutoGameProfile@@YAJPEBG0V-$function@$$A6AJPEAGH@Z@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AutoGameProfile::GetGameRelatedFromGcsData(
        AutoGameProfile *this,
        const unsigned __int16 *a2,
        _DWORD *a3,
        unsigned int *a4)
{
  unsigned int v5; // esi
  __int64 v7; // rdx
  _QWORD **v9; // rdx
  __int64 v10; // r8
  const char *v11; // r9
  char *v12; // r15
  __int128 v13; // xmm6
  void *v14; // rbx
  unsigned int v15; // esi
  _QWORD **v16; // rcx
  _QWORD *v17; // rcx
  _QWORD *v18; // rbx
  __int64 v19; // rax
  int v20; // eax
  _QWORD **v21; // rcx
  _QWORD *v22; // rcx
  _QWORD *v23; // rbx
  _QWORD **v24; // rsi
  _QWORD *v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rax
  _QWORD **v28; // rcx
  _QWORD *v29; // rcx
  _QWORD *v30; // rbx
  LPVOID v31; // rcx
  _OWORD *v32; // r8
  _QWORD *v33; // rax
  _QWORD **v34; // rcx
  _QWORD *v35; // rcx
  _QWORD *v36; // rbx
  _QWORD *v37; // rcx
  _QWORD *v38; // rbx
  int v39; // [rsp+20h] [rbp-E8h] BYREF
  _QWORD **v40; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int64 v41; // [rsp+30h] [rbp-D8h]
  LPVOID pv; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v43; // [rsp+40h] [rbp-C8h] BYREF
  int v44; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v45; // [rsp+54h] [rbp-B4h]
  wchar_t *v46; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int *v47; // [rsp+60h] [rbp-A8h]
  wchar_t v48[4]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v49; // [rsp+78h] [rbp-90h]
  wchar_t *v50; // [rsp+A8h] [rbp-60h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]

  v47 = a4;
  v5 = (unsigned int)a2;
  v45 = (unsigned int)a2;
  if ( !this )
  {
    v7 = 388LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\autogameprofile.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( !*(_WORD *)this )
    return 2147942487LL;
  if ( !a3 )
  {
    v7 = 390LL;
    goto LABEL_3;
  }
  if ( !a4 )
  {
    v7 = 391LL;
    goto LABEL_3;
  }
  v44 = 124;
  v46 = 0LL;
  LOWORD(v39) = 0;
  v41 = 0LL;
  v9 = (_QWORD **)operator new(0x50uLL);
  *v9 = v9;
  v9[1] = v9;
  v40 = v9;
  *(_QWORD *)&v43 = &v46;
  *((_QWORD *)&v43 + 1) = &v39;
  v12 = (char *)this;
  v13 = v43;
  while ( v12 && v12 < (char *)this + 2 * v5 && *(_WORD *)v12 )
  {
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      &pv,
      v12,
      0xFFFFFFFFFFFFFFFFuLL,
      v11);
    v14 = pv;
    if ( !pv )
    {
      v15 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1AA,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\autogameprofile.cpp",
        (const char *)0x8007000ELL);
      v16 = v40;
      *v40[1] = 0LL;
      v17 = *v16;
      if ( v17 )
      {
        do
        {
          v18 = (_QWORD *)*v17;
          std::_Deallocate<16,0>(v17, 0x50uLL);
          v17 = v18;
        }
        while ( v18 );
      }
LABEL_46:
      std::_Deallocate<16,0>(v40, 0x50uLL);
      return v15;
    }
    *(_QWORD *)v48 = off_1807F38D8;
    v49 = v13;
    v50 = v48;
    if ( (int)AutoGameProfile::_Tokenize(pv, &v44, v48) >= 0 )
    {
      if ( v46 )
      {
        v19 = -1LL;
        do
          ++v19;
        while ( v46[v19] );
        if ( v19 )
        {
          v20 = StringCchCopyW(&v48[1], 30LL, v46);
          v15 = v20;
          if ( v20 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1B5,
              (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\autogameprofile.cpp",
              (const char *)(unsigned int)v20);
            CoTaskMemFree(v14);
            v21 = v40;
            *v40[1] = 0LL;
            v22 = *v21;
            if ( v22 )
            {
              do
              {
                v23 = (_QWORD *)*v22;
                std::_Deallocate<16,0>(v22, 0x50uLL);
                v22 = v23;
              }
              while ( v23 );
            }
            goto LABEL_46;
          }
          try
          {
            v48[0] = v39;
            LOWORD(v39) = 0;
            v24 = v40;
            if ( v41 == 0x333333333333333LL )
              std::_Xlength_error("list too long");
            std::_List_node_emplace_op2<std::allocator<std::_List_node<KnownGameList::GMRelatedProcess,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<KnownGameList::GMRelatedProcess,void *>>>(
              &v43,
              (__int64)&v40,
              (__int64)v48);
            ++v41;
            v25 = v24[1];
            **((_QWORD **)&v43 + 1) = v24;
            *(_QWORD *)(*((_QWORD *)&v43 + 1) + 8LL) = v25;
            v26 = (_QWORD *)*((_QWORD *)&v43 + 1);
            *((_QWORD *)&v43 + 1) = 0LL;
            v24[1] = v26;
            *v25 = v26;
            if ( *((_QWORD *)&v43 + 1) )
              std::_Deallocate<16,0>(*((void **)&v43 + 1), 0x50uLL);
          }
          catch ( std::bad_alloc )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1C0,
              (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\autogameprofile.cpp",
              (const char *)0x8007000ELL);
            CoTaskMemFree(pv);
            v28 = v40;
            *v40[1] = 0LL;
            v29 = *v28;
            if ( v29 )
            {
              do
              {
                v30 = (_QWORD *)*v29;
                std::_Deallocate<16,0>(v29, 0x50uLL);
                v29 = v30;
              }
              while ( v30 );
            }
            v15 = -2147024882;
            goto LABEL_46;
          }
          v5 = v45;
        }
      }
    }
    v46 = 0LL;
    v27 = -1LL;
    do
      ++v27;
    while ( *(_WORD *)&v12[2 * v27] );
    v12 += 2 * v27 + 2;
    CoTaskMemFree(v14);
    v9 = v40;
  }
  if ( v41 )
  {
    wil::make_unique_cotaskmem_nothrow<KnownGameList::GMRelatedProcess [0]>((char **)&pv, v41, v10, v11);
    v31 = pv;
    if ( !pv )
    {
      v15 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1CE,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\autogameprofile.cpp",
        (const char *)0x8007000ELL);
      v34 = v40;
      *v40[1] = 0LL;
      v35 = *v34;
      if ( v35 )
      {
        do
        {
          v36 = (_QWORD *)*v35;
          std::_Deallocate<16,0>(v35, 0x50uLL);
          v35 = v36;
        }
        while ( v36 );
      }
      goto LABEL_46;
    }
    v32 = pv;
    v9 = v40;
    v33 = *v40;
    while ( v33 != v9 )
    {
      *v32 = *((_OWORD *)v33 + 1);
      v32[1] = *((_OWORD *)v33 + 2);
      v32[2] = *((_OWORD *)v33 + 3);
      *((_QWORD *)v32 + 6) = v33[8];
      *((_DWORD *)v32 + 14) = *((_DWORD *)v33 + 18);
      *((_WORD *)v32 + 30) = *((_WORD *)v33 + 38);
      v32 = (_OWORD *)((char *)v32 + 62);
      v33 = (_QWORD *)*v33;
      v9 = v40;
    }
    *(_QWORD *)v47 = v31;
    *a3 = v41;
  }
  else
  {
    *(_QWORD *)v47 = 0LL;
    *a3 = 0;
  }
  *v9[1] = 0LL;
  v37 = *v9;
  if ( *v9 )
  {
    do
    {
      v38 = (_QWORD *)*v37;
      std::_Deallocate<16,0>(v37, 0x50uLL);
      v37 = v38;
    }
    while ( v38 );
  }
  std::_Deallocate<16,0>(v40, 0x50uLL);
  return 0LL;
}
