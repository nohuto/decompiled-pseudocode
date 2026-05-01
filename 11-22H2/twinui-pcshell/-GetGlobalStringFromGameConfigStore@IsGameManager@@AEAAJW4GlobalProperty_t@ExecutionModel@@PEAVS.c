/*
 * XREFs of ?GetGlobalStringFromGameConfigStore@IsGameManager@@AEAAJW4GlobalProperty_t@ExecutionModel@@PEAVString@Internal@Windows@@@Z @ 0x1803DE8A4
 * Callers:
 *     ?GetGameRelated@IsGameManager@@UEAAJKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@Z @ 0x1803DE4B0 (-GetGameRelated@IsGameManager@@UEAAJKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@Z.c)
 * Callees:
 *     ?Initialize@String@Internal@Windows@@QEAAJPEBGI@Z @ 0x18003F2AC (-Initialize@String@Internal@Windows@@QEAAJPEBGI@Z.c)
 *     ?Release@String@Internal@Windows@@QEAAXXZ @ 0x18009F070 (-Release@String@Internal@Windows@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??_V@YAXPEAX@Z @ 0x1801C8FB0 (--_V@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$make_unique_nothrow@$$BY0A@G@wil@@YA?AV?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@wistd@@@wistd@@_K@Z @ 0x1803DD930 (--$make_unique_nothrow@$$BY0A@G@wil@@YA-AV-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@wistd@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IsGameManager::GetGlobalStringFromGameConfigStore(__int64 a1, __int64 a2, HSTRING *a3)
{
  unsigned __int16 *v5; // rbx
  int v6; // eax
  unsigned __int16 **unique; // rax
  void *v8; // rcx
  unsigned int v9; // edi
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // rdx
  unsigned int v14; // [rsp+30h] [rbp-D0h] BYREF
  void *Block; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 *v16; // [rsp+40h] [rbp-C0h]
  unsigned __int16 v17[128]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  memset_0(v17, 0, sizeof(v17));
  v14 = 256;
  v5 = 0LL;
  v16 = 0LL;
  Windows::Internal::String::Release(a3);
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int16 *, unsigned int *))(**(_QWORD **)(a1 + 16) + 80LL))(
         *(_QWORD *)(a1 + 16),
         5LL,
         v17,
         &v14);
  if ( v6 != -2147024774 )
  {
    if ( v6 < 0 )
      goto LABEL_13;
    v10 = Windows::Internal::String::Initialize(a3, v17, v14);
    v11 = retaddr;
    if ( v10 >= 0 )
      goto LABEL_13;
    v12 = 1446LL;
    goto LABEL_12;
  }
  unique = (unsigned __int16 **)wil::make_unique_nothrow<unsigned short [0]>(&Block, (unsigned __int64)v14 >> 1);
  v5 = *unique;
  *unique = 0LL;
  v16 = v5;
  v8 = Block;
  Block = 0LL;
  if ( v8 )
    operator delete[](v8);
  if ( !v5 )
  {
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59D,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_14;
  }
  if ( (*(int (__fastcall **)(_QWORD, __int64, unsigned __int16 *, unsigned int *))(**(_QWORD **)(a1 + 16) + 80LL))(
         *(_QWORD *)(a1 + 16),
         5LL,
         v5,
         &v14) >= 0 )
  {
    v10 = Windows::Internal::String::Initialize(a3, v5, v14);
    v11 = retaddr;
    if ( v10 < 0 )
    {
      v12 = 1441LL;
LABEL_12:
      wil::details::in1diag3::_Log_Hr(
        v11,
        (void *)v12,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)v10);
    }
  }
LABEL_13:
  v9 = 0;
LABEL_14:
  if ( v5 )
    operator delete[](v5);
  return v9;
}
