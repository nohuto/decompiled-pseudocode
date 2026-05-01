/*
 * XREFs of ?RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z @ 0x1800453E4
 * Callers:
 *     ??$MakeAndInitialize@VCQueryKnownGameList@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCQueryKnownGameList@@AEAPEBG@Z @ 0x18004904C (--$MakeAndInitialize@VCQueryKnownGameList@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCQueryKno.c)
 * Callees:
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180002630 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800036C0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ValidateKGL@CQueryKnownGameList@@AEAAJK@Z @ 0x180046D1C (-ValidateKGL@CQueryKnownGameList@@AEAAJK@Z.c)
 *     __security_check_cookie @ 0x18004A5E0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004ACBC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x18004ACD4 (--_V@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CQueryKnownGameList::RuntimeClassInitialize(CQueryKnownGameList *this, const unsigned __int16 *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  const unsigned __int16 *v7; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rax
  _WORD *v10; // rbx
  void *v11; // rcx
  unsigned __int64 v12; // rdx
  char *v13; // r14
  __int16 v14; // ax
  _WORD *v15; // rax
  HANDLE FileW; // rsi
  char *v17; // r14
  wil::details *v18; // rcx
  DWORD LastError; // ebx
  const char *v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rdx
  int v24; // eax
  void *v25; // rbx
  void *v26; // rdx
  unsigned int v27; // eax
  int v28; // eax
  DWORD NumberOfBytesRead; // [rsp+40h] [rbp-19h] BYREF
  _BY_HANDLE_FILE_INFORMATION FileInformation; // [rsp+48h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  if ( !a2 )
  {
    v4 = -2147467261;
    v5 = 225LL;
    goto LABEL_82;
  }
  v6 = 0x7FFFFFFFLL;
  v7 = a2;
  do
  {
    if ( !*v7 )
      break;
    ++v7;
    --v6;
  }
  while ( v6 );
  v4 = v6 == 0 ? 0x80070057 : 0;
  if ( !v6 )
  {
    v5 = 227LL;
    goto LABEL_82;
  }
  v8 = ((0x7FFFFFFF - v6) & -(__int64)(v6 != 0)) + 1;
  v9 = 2 * v8;
  if ( !is_mul_ok(v8, 2uLL) )
    v9 = -1LL;
  v10 = operator new[](v9, (const struct std::nothrow_t *)&std::nothrow);
  v11 = (void *)*((_QWORD *)this + 2);
  if ( v10 != v11 )
  {
    operator delete[](v11);
    *((_QWORD *)this + 2) = v10;
    v11 = v10;
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
  v12 = 2147483646 - v8;
  v13 = (char *)((char *)a2 - (_BYTE *)v11);
  do
  {
    if ( !(v8 + v12) )
      break;
    v14 = *(_WORD *)&v13[(_QWORD)v11];
    if ( !v14 )
      break;
    *(_WORD *)v11 = v14;
    v11 = (char *)v11 + 2;
    --v8;
  }
  while ( v8 );
  v15 = (char *)v11 - 2;
  if ( v8 )
    v15 = v11;
  *v15 = 0;
  v4 = v8 == 0 ? 0x8007007A : 0;
  if ( !v8 )
  {
LABEL_81:
    v5 = 232LL;
    goto LABEL_82;
  }
  FileW = CreateFileW(*((LPCWSTR *)this + 2), 0x80000000, 1u, 0LL, 3u, 0x80u, 0LL);
  v17 = (char *)*((_QWORD *)this + 3);
  v18 = (wil::details *)(v17 - 1);
  if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    CloseHandle(v17);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 3) = FileW;
  if ( FileW == (HANDLE)-1LL )
    return wil::details::GetLastErrorFailHr(v18);
  if ( !GetFileInformationByHandle(FileW, &FileInformation) )
  {
    v22 = 238LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v22,
             (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
             v21);
  }
  if ( FileInformation.nFileSizeHigh )
  {
    v23 = 241LL;
LABEL_31:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 32, 0x18u, &NumberOfBytesRead, 0LL) )
  {
    v22 = 243LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v22,
             (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
             v21);
  }
  if ( NumberOfBytesRead != 24 )
  {
    v23 = 244LL;
    goto LABEL_31;
  }
  v24 = *((_DWORD *)this + 9);
  if ( !v24 )
  {
    v23 = 248LL;
    goto LABEL_31;
  }
  if ( v24 == 1 )
  {
    if ( *((_DWORD *)this + 8) != 24 )
    {
      v23 = 251LL;
      goto LABEL_31;
    }
  }
  else
  {
    if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 56, 8u, &NumberOfBytesRead, 0LL) )
    {
      v22 = 257LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v22,
               (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
               v21);
    }
    if ( NumberOfBytesRead != 8 )
    {
      v23 = 258LL;
      goto LABEL_31;
    }
    if ( *((_DWORD *)this + 9) >= 3u )
    {
      if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 64, 0x298u, &NumberOfBytesRead, 0LL) )
      {
        v22 = 262LL;
        return wil::details::in1diag3::Return_GetLastError(
                 retaddr,
                 (void *)v22,
                 (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                 v21);
      }
      if ( NumberOfBytesRead != 664 )
      {
        v23 = 263LL;
        goto LABEL_31;
      }
      if ( *((_DWORD *)this + 9) >= 4u )
      {
        if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 728, 8u, &NumberOfBytesRead, 0LL) )
        {
          v22 = 267LL;
          return wil::details::in1diag3::Return_GetLastError(
                   retaddr,
                   (void *)v22,
                   (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                   v21);
        }
        if ( NumberOfBytesRead != 8 )
        {
          v23 = 268LL;
          goto LABEL_31;
        }
        if ( *((_DWORD *)this + 9) >= 5u )
        {
          if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 736, 4u, &NumberOfBytesRead, 0LL) )
          {
            v22 = 272LL;
            return wil::details::in1diag3::Return_GetLastError(
                     retaddr,
                     (void *)v22,
                     (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                     v21);
          }
          if ( NumberOfBytesRead != 4 )
          {
            v23 = 273LL;
            goto LABEL_31;
          }
        }
      }
    }
  }
  if ( *((_DWORD *)this + 12) >= FileInformation.nFileSizeLow )
  {
    v23 = 279LL;
    goto LABEL_31;
  }
  if ( !*((_DWORD *)this + 13) )
  {
    v23 = 280LL;
    goto LABEL_31;
  }
  if ( SetFilePointer(*((HANDLE *)this + 3), *((_DWORD *)this + 11), 0LL, 0) == -1 )
  {
    v4 = -2147418113;
    v5 = 283LL;
    goto LABEL_82;
  }
  v25 = operator new[](*((unsigned int *)this + 12), (const struct std::nothrow_t *)&std::nothrow);
  v26 = (void *)*((_QWORD *)this + 93);
  if ( v25 != v26 )
  {
    operator delete[](*((void **)this + 93));
    *((_QWORD *)this + 93) = v25;
    v26 = v25;
  }
  if ( !v26 )
  {
    v4 = -2147024882;
    v5 = 286LL;
    goto LABEL_82;
  }
  if ( !ReadFile(*((HANDLE *)this + 3), v26, *((_DWORD *)this + 12), &NumberOfBytesRead, 0LL) )
  {
    v22 = 289LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v22,
             (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
             v21);
  }
  v27 = *((_DWORD *)this + 12);
  if ( NumberOfBytesRead != v27 )
  {
    v23 = 290LL;
    goto LABEL_31;
  }
  *((_DWORD *)this + 200) = v27 / *((_DWORD *)this + 13);
  v28 = CQueryKnownGameList::ValidateKGL(this, FileInformation.nFileSizeLow);
  v4 = v28;
  if ( v28 == -2147024809 )
    return 2147942487LL;
  if ( v28 >= 0 )
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
