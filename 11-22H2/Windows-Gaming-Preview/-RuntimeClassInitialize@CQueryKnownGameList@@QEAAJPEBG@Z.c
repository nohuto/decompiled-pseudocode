/*
 * XREFs of ?RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z @ 0x180046204
 * Callers:
 *     ??$MakeAndInitialize@VCQueryKnownGameList@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCQueryKnownGameList@@AEAPEBG@Z @ 0x180049E6C (--$MakeAndInitialize@VCQueryKnownGameList@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCQueryKno.c)
 * Callees:
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180002640 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180003700 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ValidateKGL@CQueryKnownGameList@@AEAAJK@Z @ 0x180047B2C (-ValidateKGL@CQueryKnownGameList@@AEAAJK@Z.c)
 *     __security_check_cookie @ 0x18004B4D0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004BBAC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x18004BBC4 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall CQueryKnownGameList::RuntimeClassInitialize(CQueryKnownGameList *this, const unsigned __int16 *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  const unsigned __int16 *v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rax
  _WORD *v10; // rax
  void *v11; // rcx
  _WORD *v12; // rbx
  unsigned __int64 v13; // rdx
  char *v14; // r14
  __int16 v15; // ax
  _WORD *v16; // rax
  HANDLE FileW; // rax
  char *v18; // r14
  void *v19; // rsi
  wil::details *v20; // rcx
  DWORD LastError; // ebx
  const char *v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rdx
  int v26; // eax
  void *v27; // rax
  void *v28; // rdx
  void *v29; // rbx
  unsigned int v30; // eax
  DWORD nFileSizeLow; // edx
  int v32; // eax
  DWORD NumberOfBytesRead; // [rsp+40h] [rbp-19h] BYREF
  _BY_HANDLE_FILE_INFORMATION FileInformation; // [rsp+48h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  if ( !a2 )
  {
    v4 = -2147467261;
    v5 = 225LL;
    goto LABEL_82;
  }
  v6 = a2;
  v7 = 0x7FFFFFFFLL;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v7;
  }
  while ( v7 );
  v4 = v7 == 0 ? 0x80070057 : 0;
  if ( !v7 )
  {
    v5 = 227LL;
    goto LABEL_82;
  }
  v8 = ((0x7FFFFFFF - v7) & -(__int64)(v7 != 0)) + 1;
  v9 = 2 * v8;
  if ( !is_mul_ok(v8, 2uLL) )
    v9 = -1LL;
  v10 = operator new[](v9, (const struct std::nothrow_t *)&std::nothrow);
  v11 = (void *)*((_QWORD *)this + 2);
  v12 = v10;
  if ( v10 != v11 )
  {
    operator delete[](v11);
    v11 = v12;
    *((_QWORD *)this + 2) = v12;
  }
  if ( !v11 )
  {
    v4 = -2147024882;
    v5 = 230LL;
    goto LABEL_82;
  }
  if ( v8 - 1 > 0x7FFFFFFE )
  {
    v4 = -2147024809;
    if ( v8 )
      *(_WORD *)v11 = 0;
    goto LABEL_81;
  }
  v13 = 2147483646 - v8;
  v14 = (char *)((char *)a2 - (_BYTE *)v11);
  do
  {
    if ( !(v8 + v13) )
      break;
    v15 = *(_WORD *)&v14[(_QWORD)v11];
    if ( !v15 )
      break;
    *(_WORD *)v11 = v15;
    v11 = (char *)v11 + 2;
    --v8;
  }
  while ( v8 );
  v16 = (char *)v11 - 2;
  if ( v8 )
    v16 = v11;
  *v16 = 0;
  v4 = v8 == 0 ? 0x8007007A : 0;
  if ( !v8 )
  {
LABEL_81:
    v5 = 232LL;
    goto LABEL_82;
  }
  FileW = CreateFileW(*((LPCWSTR *)this + 2), 0x80000000, 1u, 0LL, 3u, 0x80u, 0LL);
  v18 = (char *)*((_QWORD *)this + 3);
  v19 = FileW;
  v20 = (wil::details *)(v18 - 1);
  if ( (unsigned __int64)(v18 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    CloseHandle(v18);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 3) = v19;
  if ( v19 == (void *)-1LL )
    return wil::details::GetLastErrorFailHr(v20);
  if ( !GetFileInformationByHandle(v19, &FileInformation) )
  {
    v24 = 238LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v24,
             (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
             v23);
  }
  if ( FileInformation.nFileSizeHigh )
  {
    v25 = 241LL;
LABEL_31:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 32, 0x18u, &NumberOfBytesRead, 0LL) )
  {
    v24 = 243LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v24,
             (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
             v23);
  }
  if ( NumberOfBytesRead != 24 )
  {
    v25 = 244LL;
    goto LABEL_31;
  }
  v26 = *((_DWORD *)this + 9);
  if ( !v26 )
  {
    v25 = 248LL;
    goto LABEL_31;
  }
  if ( v26 == 1 )
  {
    if ( *((_DWORD *)this + 8) != 24 )
    {
      v25 = 251LL;
      goto LABEL_31;
    }
  }
  else
  {
    if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 56, 8u, &NumberOfBytesRead, 0LL) )
    {
      v24 = 257LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v24,
               (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
               v23);
    }
    if ( NumberOfBytesRead != 8 )
    {
      v25 = 258LL;
      goto LABEL_31;
    }
    if ( *((_DWORD *)this + 9) >= 3u )
    {
      if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 64, 0x298u, &NumberOfBytesRead, 0LL) )
      {
        v24 = 262LL;
        return wil::details::in1diag3::Return_GetLastError(
                 retaddr,
                 (void *)v24,
                 (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                 v23);
      }
      if ( NumberOfBytesRead != 664 )
      {
        v25 = 263LL;
        goto LABEL_31;
      }
      if ( *((_DWORD *)this + 9) >= 4u )
      {
        if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 728, 8u, &NumberOfBytesRead, 0LL) )
        {
          v24 = 267LL;
          return wil::details::in1diag3::Return_GetLastError(
                   retaddr,
                   (void *)v24,
                   (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                   v23);
        }
        if ( NumberOfBytesRead != 8 )
        {
          v25 = 268LL;
          goto LABEL_31;
        }
        if ( *((_DWORD *)this + 9) >= 5u )
        {
          if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 736, 4u, &NumberOfBytesRead, 0LL) )
          {
            v24 = 272LL;
            return wil::details::in1diag3::Return_GetLastError(
                     retaddr,
                     (void *)v24,
                     (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                     v23);
          }
          if ( NumberOfBytesRead != 4 )
          {
            v25 = 273LL;
            goto LABEL_31;
          }
        }
      }
    }
  }
  if ( *((_DWORD *)this + 12) >= FileInformation.nFileSizeLow )
  {
    v25 = 279LL;
    goto LABEL_31;
  }
  if ( !*((_DWORD *)this + 13) )
  {
    v25 = 280LL;
    goto LABEL_31;
  }
  if ( SetFilePointer(*((HANDLE *)this + 3), *((_DWORD *)this + 11), 0LL, 0) == -1 )
  {
    v4 = -2147418113;
    v5 = 283LL;
    goto LABEL_82;
  }
  v27 = operator new[](*((unsigned int *)this + 12), (const struct std::nothrow_t *)&std::nothrow);
  v28 = (void *)*((_QWORD *)this + 93);
  v29 = v27;
  if ( v27 != v28 )
  {
    operator delete[](*((void **)this + 93));
    v28 = v29;
    *((_QWORD *)this + 93) = v29;
  }
  if ( !v28 )
  {
    v4 = -2147024882;
    v5 = 286LL;
    goto LABEL_82;
  }
  if ( !ReadFile(*((HANDLE *)this + 3), v28, *((_DWORD *)this + 12), &NumberOfBytesRead, 0LL) )
  {
    v24 = 289LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v24,
             (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
             v23);
  }
  v30 = *((_DWORD *)this + 12);
  if ( NumberOfBytesRead != v30 )
  {
    v25 = 290LL;
    goto LABEL_31;
  }
  nFileSizeLow = FileInformation.nFileSizeLow;
  *((_DWORD *)this + 200) = v30 / *((_DWORD *)this + 13);
  v32 = CQueryKnownGameList::ValidateKGL(this, nFileSizeLow);
  v4 = v32;
  if ( v32 == -2147024809 )
    return 2147942487LL;
  if ( v32 >= 0 )
    return 0LL;
  v5 = 296LL;
LABEL_82:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    (const char *)v4);
  return v4;
}
