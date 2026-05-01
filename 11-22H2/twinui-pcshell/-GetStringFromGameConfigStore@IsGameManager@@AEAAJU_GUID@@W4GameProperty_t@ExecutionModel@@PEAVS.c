/*
 * XREFs of ?GetStringFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@W4GameProperty_t@ExecutionModel@@PEAVString@Internal@Windows@@@Z @ 0x1803DECB8
 * Callers:
 *     ?CheckGameConfigStoreForIsGameFromProcessId@IsGameManager@@AEAAJKPEA_N0PEAKPEAU_GUID@@PEAVString@Internal@Windows@@@Z @ 0x180039818 (-CheckGameConfigStoreForIsGameFromProcessId@IsGameManager@@AEAAJKPEA_N0PEAKPEAU_GUID@@PEAVString.c)
 *     ?GetGameRelated@IsGameManager@@UEAAJKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@Z @ 0x1803DE4B0 (-GetGameRelated@IsGameManager@@UEAAJKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@Z.c)
 *     ?GetTitleIdFromProcessId@IsGameManager@@UEAAJKPEAVString@Internal@Windows@@@Z @ 0x1803DEF80 (-GetTitleIdFromProcessId@IsGameManager@@UEAAJKPEAVString@Internal@Windows@@@Z.c)
 * Callees:
 *     ?Initialize@String@Internal@Windows@@QEAAJPEBGI@Z @ 0x18003F2AC (-Initialize@String@Internal@Windows@@QEAAJPEBGI@Z.c)
 *     ?Release@String@Internal@Windows@@QEAAXXZ @ 0x18009F070 (-Release@String@Internal@Windows@@QEAAXXZ.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x1800EBDE4 (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??_V@YAXPEAX@Z @ 0x1801C8FB0 (--_V@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$make_unique_nothrow@$$BY0A@G@wil@@YA?AV?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@wistd@@@wistd@@_K@Z @ 0x1803DD930 (--$make_unique_nothrow@$$BY0A@G@wil@@YA-AV-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@wistd@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IsGameManager::GetStringFromGameConfigStore(__int64 a1, __int128 *a2, unsigned int a3, HSTRING *a4)
{
  unsigned __int16 *v8; // rbx
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  UINT32 v12; // r8d
  unsigned __int16 **unique; // rax
  void *v14; // rcx
  unsigned int v15; // r14d
  __int64 *v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  __int64 v20; // rdx
  HSTRING v21; // rdi
  int v22; // eax
  HSTRING v23; // rsi
  HSTRING v24; // r12
  int v25; // eax
  int v27; // [rsp+30h] [rbp-D0h] BYREF
  void *Block; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING newString; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v30; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v31[128]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  memset_0(v31, 0, sizeof(v31));
  v27 = 256;
  v8 = 0LL;
  newString = 0LL;
  Windows::Internal::String::Release(a4);
  v9 = *(__int64 **)(a1 + 16);
  v10 = *v9;
  v30 = *a2;
  v11 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, unsigned __int16 *, int *))(v10 + 64))(
          v9,
          &v30,
          a3,
          v31,
          &v27);
  v12 = (unsigned int)v27 >> 1;
  v27 = 2 * ((unsigned int)v27 >> 1);
  if ( v11 == -2147024774 )
  {
    unique = (unsigned __int16 **)wil::make_unique_nothrow<unsigned short [0]>(&Block, v12);
    v8 = *unique;
    *unique = 0LL;
    newString = (HSTRING)v8;
    v14 = Block;
    Block = 0LL;
    if ( v14 )
      operator delete[](v14);
    if ( !v8 )
    {
      v15 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x573,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_24;
    }
    v16 = *(__int64 **)(a1 + 16);
    v17 = *v16;
    v30 = *a2;
    if ( (*(int (__fastcall **)(__int64 *, __int128 *, _QWORD, unsigned __int16 *, int *))(v17 + 64))(
           v16,
           &v30,
           a3,
           v8,
           &v27) >= 0 )
    {
      v18 = Windows::Internal::String::Initialize(a4, v8, (unsigned int)v27 >> 1);
      v19 = retaddr;
      if ( v18 < 0 )
      {
        v20 = 1400LL;
LABEL_12:
        wil::details::in1diag3::_Log_Hr(
          v19,
          (void *)v20,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)v18);
      }
    }
  }
  else if ( v11 >= 0 )
  {
    v18 = Windows::Internal::String::Initialize(a4, v31, v12);
    v19 = retaddr;
    if ( v18 < 0 )
    {
      v20 = 1405LL;
      goto LABEL_12;
    }
  }
  Block = 0LL;
  v21 = 0LL;
  v22 = Windows::Internal::String::Initialize((HSTRING *)&Block, &word_1808203A4, 1u);
  v15 = v22;
  v23 = (HSTRING)Block;
  if ( v22 >= 0 )
  {
    v24 = 0LL;
    if ( WindowsTrimStringEnd(*a4, (HSTRING)Block, &newString) >= 0 )
    {
      v21 = newString;
      Block = newString;
      v24 = newString;
      WindowsDeleteString(0LL);
      v25 = Windows::Internal::String::Initialize(a4, (HSTRING *)&Block);
      v15 = v25;
      if ( v25 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x58A,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)v25);
        goto LABEL_20;
      }
      v24 = v21;
    }
    v15 = 0;
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x586,
    (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
    (const char *)(unsigned int)v22);
  v24 = 0LL;
LABEL_20:
  if ( v24 )
    WindowsDeleteString(v21);
  if ( v23 )
    WindowsDeleteString(v23);
LABEL_24:
  if ( v8 )
    operator delete[](v8);
  return v15;
}
