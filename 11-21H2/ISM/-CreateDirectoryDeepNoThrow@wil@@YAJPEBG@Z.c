/*
 * XREFs of ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x1800BF434
 * Callers:
 *     ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x1800BF434 (-CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z.c)
 *     ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x1800C2C94 (-StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B774 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007DEDC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x1800BF434 (-CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800C1ED4 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1800C36D8 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?try_get_parent_path_range@wil@@YA_NPEBGPEA_K@Z @ 0x1800C3C78 (-try_get_parent_path_range@wil@@YA_NPEBGPEA_K@Z.c)
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
  int v11; // eax
  const unsigned __int16 *v12; // rdx
  int v13; // esi
  const char *v14; // r9
  unsigned int v15; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v17; // [rsp+38h] [rbp+10h] BYREF

  if ( !CreateDirectoryW((LPCWSTR)this, 0LL) )
  {
    LastError = GetLastError();
    if ( LastError == 3 )
    {
      if ( wil::try_get_parent_path_range((LPCWSTR)this, (const unsigned __int16 *)&v17, v4) )
      {
        v5 = v17;
        v6 = v17 + 1;
        v7 = 2 * (v17 + 1);
        if ( !is_mul_ok(v17 + 1, 2uLL) )
          v7 = -1LL;
        v8 = (unsigned __int16 *)operator new[](v7, (const struct std::nothrow_t *)&std::nothrow);
        v9 = v8;
        if ( !v8 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x7B,
            (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\filesystem.h",
            (const char *)0x8007000ELL);
          return -2147024882;
        }
        v11 = StringCchCopyNW(v8, v6, (const unsigned __int16 *)this, v5);
        v13 = v11;
        if ( v11 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x7C,
            (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\filesystem.h",
            (const char *)(unsigned int)v11);
          operator delete[](v9);
          return v13;
        }
        wil::CreateDirectoryDeepNoThrow((wil *)v9, v12);
        operator delete[](v9);
      }
      if ( !CreateDirectoryW((LPCWSTR)this, 0LL) )
        return wil::details::in1diag3::Return_GetLastError(
                 retaddr,
                 (void *)0x7F,
                 (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\filesystem.h",
                 v14);
    }
    else if ( LastError != 183 && LastError )
    {
      return wil::details::in1diag3::Return_Win32(
               retaddr,
               (void *)0x83,
               (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\filesystem.h",
               (const char *)LastError,
               v15);
    }
  }
  return 0;
}
