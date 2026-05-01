/*
 * XREFs of ?RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z @ 0x1800BFEF0
 * Callers:
 *     ??$MakeAndInitialize@VCQueryKnownGameList@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCQueryKnownGameList@@AEAPEBG@Z @ 0x1800BFD78 (--$MakeAndInitialize@VCQueryKnownGameList@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCQueryKno.c)
 * Callees:
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800BD1C8 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?ValidateKGL@CQueryKnownGameList@@AEAAJK@Z @ 0x1801172B0 (-ValidateKGL@CQueryKnownGameList@@AEAAJK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?close_reset@?$close_invoke_helper@$00P6AHPEAX@Z$1?CloseHandle@@YAH0@ZPEAX@details@wil@@SAXPEAX@Z @ 0x180165FF8 (-close_reset@-$close_invoke_helper@$00P6AHPEAX@Z$1-CloseHandle@@YAH0@ZPEAX@details@wil@@SAXPEAX@.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C8FA4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1801C8FB0 (--_V@YAXPEAX@Z.c)
 */

signed int __fastcall CQueryKnownGameList::RuntimeClassInitialize(
        CQueryKnownGameList *this,
        const unsigned __int16 *a2)
{
  const unsigned __int16 *v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  void *v8; // rax
  void *v9; // rcx
  char *v10; // rax
  unsigned __int64 v11; // rdx
  int v12; // r14d
  char *v13; // rdi
  __int16 v14; // cx
  HANDLE FileW; // rbx
  wil::details *v16; // rcx
  const char *v17; // r9
  const char *v18; // r9
  int v19; // eax
  const char *v20; // r9
  const char *v21; // r9
  const char *v22; // r9
  const char *v23; // r9
  void *v24; // rax
  void *v25; // rcx
  void *v26; // rdx
  const char *v27; // r9
  unsigned int v28; // eax
  DWORD nFileSizeLow; // edx
  int v30; // eax
  int v31; // ebx
  __int64 v33; // rdx
  int dwCreationDisposition; // [rsp+20h] [rbp-88h]
  DWORD NumberOfBytesRead; // [rsp+40h] [rbp-68h] BYREF
  _BY_HANDLE_FILE_INFORMATION FileInformation; // [rsp+48h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  if ( !a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE1,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL,
      dwCreationDisposition);
    return -2147467261;
  }
  v4 = a2;
  v5 = 0x7FFFFFFFLL;
  while ( *v4 )
  {
    ++v4;
    if ( !--v5 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE3,
        (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x80070057LL,
        dwCreationDisposition);
      return -2147024809;
    }
  }
  v6 = 0x7FFFFFFF - v5 + 1;
  v7 = 2 * v6;
  if ( !is_mul_ok(v6, 2uLL) )
    v7 = -1LL;
  v8 = operator new[](v7, (const struct std::nothrow_t *)&std::nothrow);
  v9 = (void *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = v8;
  if ( v9 )
    operator delete[](v9);
  v10 = (char *)*((_QWORD *)this + 2);
  if ( !v10 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE6,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8007000ELL,
      dwCreationDisposition);
    return -2147024882;
  }
  if ( v6 - 1 > 0x7FFFFFFE )
  {
    v12 = -2147024809;
    if ( v6 )
      *(_WORD *)v10 = 0;
LABEL_79:
    v33 = 232LL;
    goto LABEL_80;
  }
  v11 = 2147483646 - v6;
  v12 = 0;
  v13 = (char *)((char *)a2 - v10);
  while ( v6 + v11 )
  {
    v14 = *(_WORD *)&v13[(_QWORD)v10];
    if ( !v14 )
    {
      if ( v6 )
        break;
LABEL_54:
      v10 -= 2;
      v12 = -2147024774;
      break;
    }
    *(_WORD *)v10 = v14;
    v10 += 2;
    if ( !--v6 )
      goto LABEL_54;
  }
  *(_WORD *)v10 = 0;
  if ( v12 < 0 )
    goto LABEL_79;
  FileW = CreateFileW(*((LPCWSTR *)this + 2), 0x80000000, 1u, 0LL, 3u, 0x80u, 0LL);
  v16 = (wil::details *)(*((_QWORD *)this + 3) - 1LL);
  if ( (unsigned __int64)v16 <= 0xFFFFFFFFFFFFFFFDuLL )
    wil::details::close_invoke_helper<1,int (*)(void *),&int CloseHandle(void *),void *>::close_reset(*((HANDLE *)this + 3));
  *((_QWORD *)this + 3) = FileW;
  if ( FileW == (HANDLE)-1LL )
    return wil::details::GetLastErrorFailHr(v16);
  if ( !GetFileInformationByHandle(FileW, &FileInformation) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0xEE,
             (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
             v17);
  if ( FileInformation.nFileSizeHigh )
  {
    v12 = -2147024809;
    v33 = 241LL;
    goto LABEL_80;
  }
  if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 32, 0x18u, &NumberOfBytesRead, 0LL) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0xF3,
             (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
             v18);
  if ( NumberOfBytesRead != 24 )
  {
    v12 = -2147024809;
    v33 = 244LL;
    goto LABEL_80;
  }
  v19 = *((_DWORD *)this + 9);
  if ( !v19 )
  {
    v12 = -2147024809;
    v33 = 248LL;
    goto LABEL_80;
  }
  if ( v19 == 1 )
  {
    if ( *((_DWORD *)this + 8) == 24 )
      goto LABEL_40;
    v12 = -2147024809;
    v33 = 251LL;
LABEL_80:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v33,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)v12,
      dwCreationDisposition);
    return v12;
  }
  if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 56, 8u, &NumberOfBytesRead, 0LL) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x101,
             (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
             v20);
  if ( NumberOfBytesRead != 8 )
  {
    v12 = -2147024809;
    v33 = 258LL;
    goto LABEL_80;
  }
  if ( *((_DWORD *)this + 9) < 3u )
    goto LABEL_40;
  if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 64, 0x298u, &NumberOfBytesRead, 0LL) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x106,
             (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
             v21);
  if ( NumberOfBytesRead != 664 )
  {
    v12 = -2147024809;
    v33 = 263LL;
    goto LABEL_80;
  }
  if ( *((_DWORD *)this + 9) < 4u )
    goto LABEL_40;
  if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 728, 8u, &NumberOfBytesRead, 0LL) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x10B,
             (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
             v22);
  if ( NumberOfBytesRead != 8 )
  {
    v12 = -2147024809;
    v33 = 268LL;
    goto LABEL_80;
  }
  if ( *((_DWORD *)this + 9) >= 5u )
  {
    if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 736, 4u, &NumberOfBytesRead, 0LL) )
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x110,
               (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
               v23);
    if ( NumberOfBytesRead != 4 )
    {
      v12 = -2147024809;
      v33 = 273LL;
      goto LABEL_80;
    }
  }
LABEL_40:
  if ( *((_DWORD *)this + 12) >= FileInformation.nFileSizeLow )
  {
    v12 = -2147024809;
    v33 = 279LL;
    goto LABEL_80;
  }
  if ( !*((_DWORD *)this + 13) )
  {
    v12 = -2147024809;
    v33 = 280LL;
    goto LABEL_80;
  }
  if ( SetFilePointer(*((HANDLE *)this + 3), *((_DWORD *)this + 11), 0LL, 0) == -1 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11B,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000FFFFLL,
      dwCreationDisposition);
    return -2147418113;
  }
  v24 = operator new[](*((unsigned int *)this + 12), (const struct std::nothrow_t *)&std::nothrow);
  v25 = (void *)*((_QWORD *)this + 93);
  *((_QWORD *)this + 93) = v24;
  if ( v25 )
    operator delete[](v25);
  v26 = (void *)*((_QWORD *)this + 93);
  if ( !v26 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11E,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8007000ELL,
      dwCreationDisposition);
    return -2147024882;
  }
  if ( !ReadFile(*((HANDLE *)this + 3), v26, *((_DWORD *)this + 12), &NumberOfBytesRead, 0LL) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x121,
             (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
             v27);
  v28 = *((_DWORD *)this + 12);
  if ( NumberOfBytesRead != v28 )
  {
    v12 = -2147024809;
    v33 = 290LL;
    goto LABEL_80;
  }
  nFileSizeLow = FileInformation.nFileSizeLow;
  *((_DWORD *)this + 200) = v28 / *((_DWORD *)this + 13);
  v30 = CQueryKnownGameList::ValidateKGL(this, nFileSizeLow);
  v12 = -2147024809;
  v31 = v30;
  if ( v30 == -2147024809 )
    return v12;
  if ( v30 >= 0 )
    return 0;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x128,
    (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    (const char *)(unsigned int)v30,
    dwCreationDisposition);
  return v31;
}
