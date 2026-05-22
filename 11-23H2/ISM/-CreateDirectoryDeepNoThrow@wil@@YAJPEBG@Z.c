/*
 * XREFs of ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x1800D8364
 * Callers:
 *     ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x1800D8364 (-CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z.c)
 *     ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x1800DBC78 (-StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x180056D48 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180057640 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x1800D8364 (-CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800DAE94 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1800DC6F8 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?try_get_parent_path_range@wil@@YA_NPEBGPEA_K@Z @ 0x1800DCC98 (-try_get_parent_path_range@wil@@YA_NPEBGPEA_K@Z.c)
 */

int __fastcall wil::CreateDirectoryDeepNoThrow(wil *this, const unsigned __int16 *a2)
{
  DWORD LastError; // eax
  unsigned __int64 *v4; // r8
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbp
  size_t v7; // rax
  unsigned __int16 *v8; // rax
  unsigned __int16 *v9; // rbx
  int DirectoryDeepNoThrow; // eax
  const unsigned __int16 *v12; // rdx
  int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned int v16; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v18; // [rsp+38h] [rbp+10h] BYREF

  if ( !CreateDirectoryW((LPCWSTR)this, 0LL) )
  {
    LastError = GetLastError();
    if ( LastError == 3 )
    {
      if ( wil::try_get_parent_path_range((LPCWSTR)this, (const unsigned __int16 *)&v18, v4) )
      {
        v5 = v18;
        v6 = v18 + 1;
        v7 = 2 * (v18 + 1);
        if ( !is_mul_ok(v18 + 1, 2uLL) )
          v7 = -1LL;
        v8 = (unsigned __int16 *)operator new[](v7, (const struct std::nothrow_t *)&std::nothrow);
        v9 = v8;
        if ( !v8 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x7B,
            (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\filesystem.h",
            (const char *)0x8007000ELL);
          return -2147024882;
        }
        DirectoryDeepNoThrow = StringCchCopyNW(v8, v6, (const unsigned __int16 *)this, v5);
        v13 = DirectoryDeepNoThrow;
        if ( DirectoryDeepNoThrow < 0 )
        {
          v14 = 124LL;
LABEL_12:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v14,
            (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\filesystem.h",
            (const char *)(unsigned int)DirectoryDeepNoThrow);
          operator delete[](v9);
          return v13;
        }
        DirectoryDeepNoThrow = wil::CreateDirectoryDeepNoThrow((wil *)v9, v12);
        v13 = DirectoryDeepNoThrow;
        if ( DirectoryDeepNoThrow < 0 )
        {
          v14 = 125LL;
          goto LABEL_12;
        }
        operator delete[](v9);
      }
      if ( !CreateDirectoryW((LPCWSTR)this, 0LL) )
      {
        LastError = GetLastError();
        if ( LastError != 183 )
        {
          if ( LastError )
          {
            v15 = 132LL;
            return wil::details::in1diag3::Return_Win32(
                     retaddr,
                     (void *)v15,
                     (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\filesystem.h",
                     (const char *)LastError,
                     v16);
          }
        }
      }
    }
    else if ( LastError != 183 && LastError )
    {
      v15 = 138LL;
      return wil::details::in1diag3::Return_Win32(
               retaddr,
               (void *)v15,
               (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\filesystem.h",
               (const char *)LastError,
               v16);
    }
  }
  return 0;
}
