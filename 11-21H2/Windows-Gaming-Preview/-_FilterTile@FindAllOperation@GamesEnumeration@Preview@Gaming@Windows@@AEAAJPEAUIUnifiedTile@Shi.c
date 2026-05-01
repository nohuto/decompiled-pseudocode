/*
 * XREFs of ?_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18000AE10
 * Callers:
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18000A7E0 (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@AEAPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTileManager@789WindowsInternal@@PEAUIGameListChangedEventHandler@2345@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@012@AEAPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@$$QEAPEAUIUnifiedTileManager@5678@$$QEAPEAUIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x18000D780 (--$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@AEAPEA.c)
 *     ??$emplace@VHString@Wrappers@WRL@Microsoft@@AEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@UstringLessIgnoreCase@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@@std@@@std@@_N@1@$$QEAVHString@Wrappers@WRL@Microsoft@@AEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@56@@Z @ 0x18000D890 (--$emplace@VHString@Wrappers@WRL@Microsoft@@AEAV-$ComPtr@VGameListEntryServer@GamesEnumeration@P.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18000DB58 (--$_Emplace_reallocate@AEBV-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180013750 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_180013750.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180013ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get_TitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180030610 (-get_TitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17 #try_helpers=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterTile(
        Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *this,
        struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *a2)
{
  _WORD *v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, HSTRING *); // rdi
  int v10; // eax
  __int64 v11; // rcx
  const WCHAR *StringRawBuffer; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  _WORD *v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, HSTRING *); // rdi
  int v20; // eax
  __int64 v21; // rcx
  PCWSTR v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  const WCHAR *v25; // r8
  const WCHAR *v26; // rcx
  __int64 v27; // rcx
  int v28; // eax
  _QWORD *v29; // rax
  __int64 v30; // rdx
  signed __int64 v31; // rcx
  bool v32; // zf
  __int64 v33; // rax
  signed __int32 v34; // eax
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *v35; // r15
  int v36; // eax
  unsigned int v37; // ebx
  __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 (__fastcall *v40)(__int64, HSTRING *); // rdi
  int v41; // eax
  unsigned int v42; // ebx
  __int64 v43; // rcx
  __int64 v44; // rbx
  __int64 v45; // rbx
  __int64 (__fastcall *v46)(__int64, HSTRING *); // rdi
  int v47; // eax
  unsigned int v48; // ebx
  __int64 v49; // rcx
  __int64 v50; // rcx
  int v51; // eax
  __int64 v52; // rdi
  __int64 (__fastcall *v53)(__int64, HSTRING *); // rbx
  int v54; // eax
  unsigned int v55; // ebx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rcx
  BOOL bIgnoreCase; // [rsp+20h] [rbp-98h]
  HSTRING v62; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v63[2]; // [rsp+38h] [rbp-80h] BYREF
  HSTRING v64; // [rsp+48h] [rbp-70h] BYREF
  HSTRING string[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v66; // [rsp+60h] [rbp-58h] BYREF
  __int64 v67; // [rsp+68h] [rbp-50h] BYREF
  _QWORD v68[2]; // [rsp+70h] [rbp-48h] BYREF
  _QWORD v69[7]; // [rsp+80h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  HSTRING length; // [rsp+C0h] [rbp+8h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *v72; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v73; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v74; // [rsp+D8h] [rbp+20h] BYREF

  v72 = a2;
  v3 = (_WORD *)*((_QWORD *)this + 11);
  if ( v3 && *v3 )
  {
    v63[0] = 0LL;
    v4 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *, _QWORD *))(*(_QWORD *)a2 + 56LL))(
           a2,
           v63);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB1,
        (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
        (const char *)(unsigned int)v4);
      v6 = v63[0];
      if ( v63[0] )
      {
        v63[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      return v5;
    }
    v8 = v63[0];
    if ( !v63[0] )
      return 0LL;
    string[0] = 0LL;
    v9 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v63[0] + 48LL);
    WindowsDeleteString(0LL);
    string[0] = 0LL;
    v10 = v9(v8, string);
    v5 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB5,
        (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
        (const char *)(unsigned int)v10);
      WindowsDeleteString(string[0]);
      string[0] = 0LL;
      v11 = v63[0];
      if ( v63[0] )
      {
        v63[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      return v5;
    }
    StringRawBuffer = WindowsGetStringRawBuffer(string[0], (UINT32 *)&length);
    if ( !StrStrNW(StringRawBuffer, *((PCWSTR *)this + 11), (UINT)length) )
    {
      WindowsDeleteString(string[0]);
      string[0] = 0LL;
      v13 = v63[0];
      if ( v63[0] )
      {
        v63[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      return 0LL;
    }
    WindowsDeleteString(string[0]);
    string[0] = 0LL;
    v14 = v63[0];
    if ( v63[0] )
      goto LABEL_43;
  }
  else
  {
    v15 = (_WORD *)*((_QWORD *)this + 8);
    if ( v15 && *v15 )
    {
      v63[0] = 0LL;
      v16 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *, _QWORD *))(*(_QWORD *)a2 + 64LL))(
              a2,
              v63);
      v5 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xBE,
          (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
          (const char *)(unsigned int)v16);
        v17 = v63[0];
        if ( v63[0] )
        {
          v63[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        }
        return v5;
      }
      v18 = v63[0];
      if ( !v63[0] )
        return 0LL;
      string[0] = 0LL;
      v19 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v63[0] + 48LL);
      WindowsDeleteString(0LL);
      string[0] = 0LL;
      v20 = v19(v18, string);
      v5 = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC2,
          (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
          (const char *)(unsigned int)v20);
        WindowsDeleteString(string[0]);
        string[0] = 0LL;
        v21 = v63[0];
        if ( v63[0] )
        {
          v63[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        }
        return v5;
      }
      v22 = WindowsGetStringRawBuffer(string[0], (UINT32 *)&length);
      v23 = *((_QWORD *)this + 9);
      if ( v23 == -1 )
      {
        v24 = *((_QWORD *)this + 8);
        if ( v24 )
        {
          do
            ++v23;
          while ( *(_WORD *)(v24 + 2 * v23) );
        }
        else
        {
          LODWORD(v23) = 0;
        }
      }
      v25 = &word_180057440;
      v26 = &word_180057440;
      if ( *((_QWORD *)this + 8) )
        v26 = (const WCHAR *)*((_QWORD *)this + 8);
      if ( v22 )
        v25 = v22;
      if ( CompareStringOrdinal(v26, v23, v25, v22 != 0LL ? (unsigned int)length : 0, 1) != 2 )
      {
        WindowsDeleteString(string[0]);
        string[0] = 0LL;
        v27 = v63[0];
        if ( v63[0] )
        {
          v63[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
        }
        return 0LL;
      }
      WindowsDeleteString(string[0]);
      string[0] = 0LL;
      v14 = v63[0];
      if ( v63[0] )
      {
LABEL_43:
        v63[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
  }
  v73 = 0LL;
  v68[0] = *((_QWORD *)this + 26);
  v69[0] = *((_QWORD *)this + 14);
  v28 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer,Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer,WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile * &,WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileManager *,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *>(
          &v73,
          &v72,
          v69,
          v68);
  if ( v28 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD4,
      (unsigned int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v28,
      bIgnoreCase);
LABEL_102:
    if ( v73 )
    {
      v73 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release();
    }
    return 0LL;
  }
  v29 = (_QWORD *)*((_QWORD *)this + 16);
  if ( v29 == *((_QWORD **)this + 17) )
  {
    std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> const &>(
      (char *)this + 120,
      *((_QWORD *)this + 16),
      &v73);
  }
  else
  {
    v30 = v73;
    *v29 = v73;
    if ( v30 )
    {
      v31 = *(_QWORD *)(v30 + 136);
      if ( v31 < 0 )
      {
        do
LABEL_54:
          v34 = *(_DWORD *)(2 * v31 + 0x10);
        while ( v34 != 0x7FFFFFFF
             && v34 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v31 + 16), v34 + 1, v34) );
      }
      else
      {
        while ( (_DWORD)v31 != 0x7FFFFFFF )
        {
          v33 = _InterlockedCompareExchange64((volatile signed __int64 *)(v30 + 136), v31 + 1, v31);
          v32 = v31 == v33;
          v31 = v33;
          if ( v32 )
            break;
          if ( v33 < 0 )
            goto LABEL_54;
        }
      }
    }
    *((_QWORD *)this + 16) += 8LL;
  }
  v74 = 0LL;
  v35 = v72;
  v36 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *, __int64 *))(*(_QWORD *)v72 + 48LL))(
          v72,
          &v74);
  v37 = v36;
  if ( v36 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDD,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v36);
    v38 = v74;
    if ( v74 )
    {
      v74 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
    }
    if ( v73 )
    {
      v73 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release();
    }
    return v37;
  }
  v62 = 0LL;
  v39 = v74;
  v40 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v74 + 56LL);
  WindowsDeleteString(0LL);
  v62 = 0LL;
  v41 = v40(v39, &v62);
  v42 = v41;
  if ( v41 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDF,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v41);
    WindowsDeleteString(v62);
    v62 = 0LL;
    v43 = v74;
    if ( v74 )
    {
      v74 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
    }
    if ( v73 )
    {
      v73 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release();
    }
    return v42;
  }
  std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::emplace<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> &>(
    (char *)this + 144,
    v69,
    &v62,
    &v73);
  v64 = 0LL;
  v44 = v73;
  WindowsDeleteString(0LL);
  v64 = 0LL;
  if ( Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::get_TitleId(
         (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(v44 + 16),
         &v64) >= 0
    && v64 )
  {
    std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::emplace<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> &>(
      (char *)this + 160,
      v68,
      &v64,
      &v73);
  }
  v66 = 0LL;
  if ( (*(int (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *, __int64 *))(*(_QWORD *)v35 + 64LL))(
         v35,
         &v66) >= 0 )
  {
    v45 = v66;
    if ( v66 )
    {
      length = 0LL;
      v46 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v66 + 48LL);
      WindowsDeleteString(0LL);
      length = 0LL;
      v47 = v46(v45, &length);
      v48 = v47;
      if ( v47 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xEF,
          (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
          (const char *)(unsigned int)v47);
        WindowsDeleteString(length);
        length = 0LL;
        v49 = v66;
        if ( v66 )
        {
          v66 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
        }
        WindowsDeleteString(v64);
        v64 = 0LL;
        WindowsDeleteString(v62);
        v62 = 0LL;
        v50 = v74;
        if ( v74 )
        {
          v74 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
        }
        if ( v73 )
        {
          v73 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release();
        }
        return v48;
      }
      std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::emplace<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> &>(
        (char *)this + 176,
        string,
        &length,
        &v73);
      WindowsDeleteString(length);
    }
  }
  v67 = 0LL;
  v51 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *, __int64 *))(*(_QWORD *)v35 + 56LL))(
          v35,
          &v67);
  v52 = v67;
  if ( v51 < 0 || !v67 )
  {
LABEL_96:
    if ( v52 )
    {
      v67 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
    }
    v59 = v66;
    if ( v66 )
    {
      v66 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
    }
    WindowsDeleteString(v64);
    v64 = 0LL;
    WindowsDeleteString(v62);
    v62 = 0LL;
    v60 = v74;
    if ( v74 )
    {
      v74 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
    }
    goto LABEL_102;
  }
  length = 0LL;
  v53 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v67 + 48LL);
  WindowsDeleteString(0LL);
  length = 0LL;
  v54 = v53(v52, &length);
  v55 = v54;
  if ( v54 >= 0 )
  {
    std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::emplace<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> &>(
      (char *)this + 192,
      v63,
      &length,
      &v73);
    WindowsDeleteString(length);
    v52 = v67;
    goto LABEL_96;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF8,
    (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
    (const char *)(unsigned int)v54);
  WindowsDeleteString(length);
  length = 0LL;
  v56 = v67;
  if ( v67 )
  {
    v67 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
  }
  v57 = v66;
  if ( v66 )
  {
    v66 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
  }
  WindowsDeleteString(v64);
  v64 = 0LL;
  WindowsDeleteString(v62);
  v62 = 0LL;
  v58 = v74;
  if ( v74 )
  {
    v74 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
  }
  if ( v73 )
  {
    v73 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release();
  }
  return v55;
}
