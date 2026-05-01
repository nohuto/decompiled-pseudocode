/*
 * XREFs of ?GetGameRelated@IsGameManager@@UEAAJKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@Z @ 0x1803DE4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     memcpy_s_1 @ 0x1802D139C (memcpy_s_1.c)
 *     ??$make_unique_cotaskmem_nothrow@$$BY0A@UGMRelatedProcess@KnownGameList@@@wil@@YA?AV?$unique_ptr@$$BY0A@UGMRelatedProcess@KnownGameList@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@_K@Z @ 0x1803DD8A0 (--$make_unique_cotaskmem_nothrow@$$BY0A@UGMRelatedProcess@KnownGameList@@@wil@@YA-AV-$unique_ptr.c)
 *     ?GetGlobalStringFromGameConfigStore@IsGameManager@@AEAAJW4GlobalProperty_t@ExecutionModel@@PEAVString@Internal@Windows@@@Z @ 0x1803DE8A4 (-GetGlobalStringFromGameConfigStore@IsGameManager@@AEAAJW4GlobalProperty_t@ExecutionModel@@PEAVS.c)
 *     ?GetStringFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@W4GameProperty_t@ExecutionModel@@PEAVString@Internal@Windows@@@Z @ 0x1803DECB8 (-GetStringFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@W4GameProperty_t@ExecutionModel@@PEAVS.c)
 *     ?GetGameRelatedFromGcsData@AutoGameProfile@@YAJPEBGKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@Z @ 0x18073EBEC (-GetGameRelatedFromGcsData@AutoGameProfile@@YAJPEBGKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@.c)
 */

__int64 __fastcall IsGameManager::GetGameRelated(
        IsGameManager *this,
        unsigned int a2,
        unsigned int *a3,
        struct KnownGameList::GMRelatedProcess **a4)
{
  __int64 v5; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 *v10; // rcx
  unsigned int v11; // r12d
  unsigned int v12; // r15d
  __int64 v13; // rax
  __int64 v14; // r8
  const char *v15; // r9
  int StringFromGameConfigStore; // eax
  void *v17; // rdx
  HSTRING v18; // rdi
  UINT32 StringLen; // ebx
  AutoGameProfile *StringRawBuffer; // rax
  int GameRelatedFromGcsData; // eax
  int GlobalStringFromGameConfigStore; // eax
  HSTRING v23; // rbx
  UINT32 v24; // esi
  AutoGameProfile *v25; // rax
  int v26; // eax
  void *v27; // rcx
  unsigned int v28; // esi
  HSTRING v29; // rbx
  char *v30; // r14
  _QWORD *v31; // rax
  void *v32; // rcx
  void *v33; // rcx
  struct KnownGameList::GMRelatedProcess **v35; // [rsp+20h] [rbp-E0h]
  unsigned int v36; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v37; // [rsp+34h] [rbp-CCh] BYREF
  HSTRING string; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v39[4]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v40[4]; // [rsp+50h] [rbp-B0h] BYREF
  char v41; // [rsp+60h] [rbp-A0h]
  void *pv; // [rsp+70h] [rbp-90h] BYREF
  void *v43; // [rsp+78h] [rbp-88h] BYREF
  struct KnownGameList::GMRelatedProcess **v44; // [rsp+80h] [rbp-80h]
  _BYTE v45[2]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int16 v46; // [rsp+92h] [rbp-6Eh]
  _BYTE Source[620]; // [rsp+94h] [rbp-6Ch] BYREF
  __int128 v48; // [rsp+300h] [rbp+200h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+368h] [rbp+268h]

  v44 = a4;
  *a3 = 0;
  *a4 = 0LL;
  v5 = *((_QWORD *)this + 2);
  v39[0] = 624;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, unsigned int *))(*(_QWORD *)v5 + 80LL))(v5, 4LL, v45, v39);
  if ( (v8 & 0x80000000) != 0 )
  {
    v9 = 542LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)v8);
    return v8;
  }
  if ( v39[0] > 0x270 )
  {
    v8 = -2147418113;
    v9 = 544LL;
    goto LABEL_3;
  }
  v10 = (__int64 *)*((_QWORD *)this + 2);
  v11 = 0;
  v43 = 0LL;
  v12 = 0;
  v48 = xmmword_180834B18;
  pv = 0LL;
  v13 = *v10;
  v36 = 0;
  v37 = 0;
  if ( (*(int (__fastcall **)(__int64 *, _QWORD, __int128 *))(v13 + 32))(v10, a2, &v48) >= 0 )
  {
    *(_OWORD *)v40 = v48;
    string = 0LL;
    StringFromGameConfigStore = IsGameManager::GetStringFromGameConfigStore(this, v40, 22LL, &string);
    v18 = string;
    if ( StringFromGameConfigStore >= 0 && WindowsGetStringLen(string) )
    {
      *(_QWORD *)&v40[2] = 0LL;
      *(_QWORD *)v40 = &v43;
      v41 = 1;
      StringLen = WindowsGetStringLen(v18);
      StringRawBuffer = (AutoGameProfile *)WindowsGetStringRawBuffer(v18, 0LL);
      GameRelatedFromGcsData = AutoGameProfile::GetGameRelatedFromGcsData(
                                 StringRawBuffer,
                                 (const unsigned __int16 *)StringLen,
                                 (unsigned int)&v36,
                                 &v40[2],
                                 v35);
      if ( GameRelatedFromGcsData < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x232,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)GameRelatedFromGcsData);
      if ( v41 )
      {
        v17 = **(void ***)v40;
        **(_QWORD **)v40 = *(_QWORD *)&v40[2];
        if ( v17 )
          CoTaskMemFree(v17);
      }
      v11 = v36;
    }
    string = 0LL;
    GlobalStringFromGameConfigStore = IsGameManager::GetGlobalStringFromGameConfigStore(this, v17, &string);
    v23 = string;
    if ( GlobalStringFromGameConfigStore >= 0 && WindowsGetStringLen(string) )
    {
      *(_QWORD *)&v40[2] = 0LL;
      *(_QWORD *)v40 = &pv;
      v41 = 1;
      v24 = WindowsGetStringLen(v23);
      v25 = (AutoGameProfile *)WindowsGetStringRawBuffer(v23, 0LL);
      v26 = AutoGameProfile::GetGameRelatedFromGcsData(
              v25,
              (const unsigned __int16 *)v24,
              (unsigned int)&v37,
              &v40[2],
              v35);
      if ( v26 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x23D,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)v26);
      if ( v41 )
      {
        v27 = **(void ***)v40;
        **(_QWORD **)v40 = *(_QWORD *)&v40[2];
        if ( v27 )
          CoTaskMemFree(v27);
      }
      v12 = v37;
    }
    if ( v23 )
      WindowsDeleteString(v23);
    if ( v18 )
      WindowsDeleteString(v18);
  }
  v28 = v11 + v12 + v46;
  wil::make_unique_cotaskmem_nothrow<KnownGameList::GMRelatedProcess [0]>((char **)&string, v28, v14, v15);
  v29 = string;
  if ( string )
  {
    memcpy_s_1(string, 62LL * v46, Source, 62LL * v46);
    v30 = (char *)v29 + 62 * v46;
    if ( v11 )
    {
      memcpy_s_1((char *)v29 + 62 * v46, 62LL * v11, v43, 62LL * v11);
      v30 += 62 * v11;
    }
    if ( v12 )
      memcpy_s_1(v30, 62LL * v12, pv, 62LL * v12);
    v31 = v44;
    *a3 = v28;
    *v31 = v29;
    v8 = 0;
  }
  else
  {
    v8 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x244,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)0x8007000ELL);
  }
  v32 = pv;
  pv = 0LL;
  if ( v32 )
    CoTaskMemFree(v32);
  v33 = v43;
  v43 = 0LL;
  if ( v33 )
    CoTaskMemFree(v33);
  return v8;
}
