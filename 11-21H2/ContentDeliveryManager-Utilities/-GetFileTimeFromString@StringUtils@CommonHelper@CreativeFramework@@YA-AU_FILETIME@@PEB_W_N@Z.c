/*
 * XREFs of ?GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA?AU_FILETIME@@PEB_W_N@Z @ 0x1800E860C
 * Callers:
 *     ?RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800A5F50 (-RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerI.c)
 * Callees:
 *     ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x18000524C (-_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??1?$basic_istringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAA@XZ @ 0x180057C3C (--1-$basic_istringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UEAA@XZ.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180073AD4 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800A42B8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?str@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@XZ @ 0x1800AF9FC (-str@-$basic_stringbuf@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA-AV-$basic_string@_W.c)
 *     ?find@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z @ 0x1800C28DC (-find@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z.c)
 *     ??0?$basic_istringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@H@Z @ 0x1800C9B34 (--0-$basic_istringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV-$basic_strin.c)
 *     ??$?5_WU?$char_traits@_W@std@@_W@std@@YAAEAV?$basic_istream@_WU?$char_traits@_W@std@@@0@AEAV10@AEBU?$_Timeobj@_W@0@@Z @ 0x1800E7DE0 (--$-5_WU-$char_traits@_W@std@@_W@std@@YAAEAV-$basic_istream@_WU-$char_traits@_W@std@@@0@AEAV10@A.c)
 */

// Hidden C++ exception states: #wind=4
struct _FILETIME __fastcall CreativeFramework::CommonHelper::StringUtils::GetFileTimeFromString(
        CreativeFramework::CommonHelper::StringUtils *this,
        const wchar_t *a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // r8
  const wchar_t *v4; // rax
  const char *v5; // r9
  __int64 v6; // rbx
  const char *v7; // r9
  struct _FILETIME v8; // rbx
  __int16 v10; // [rsp+20h] [rbp-E0h] BYREF
  struct _FILETIME FileTime; // [rsp+28h] [rbp-D8h] BYREF
  FILETIME LocalFileTime; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v13[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v14[128]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v15[12]; // [rsp+D0h] [rbp-30h] BYREF
  SYSTEMTIME SystemTime; // [rsp+130h] [rbp+30h] BYREF
  void *v17[2]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v18; // [rsp+150h] [rbp+50h]
  unsigned __int64 v19; // [rsp+158h] [rbp+58h]
  void *v20[4]; // [rsp+160h] [rbp+60h] BYREF
  _WORD v21[20]; // [rsp+180h] [rbp+80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v2 = -1LL;
  do
    ++v2;
  while ( *((_WORD *)this + v2) );
  if ( !v2 )
    return 0LL;
  v19 = 7LL;
  v18 = 0LL;
  LOWORD(v17[0]) = 0;
  if ( *(_WORD *)this )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( *((_WORD *)this + v3) );
  }
  else
  {
    v3 = 0LL;
  }
  std::wstring::assign((unsigned __int64 *)v17, (char *)this, v3);
  std::wistringstream::wistringstream(v13, v17);
  if ( v19 >= 8 )
    operator delete(v17[0]);
  v19 = 7LL;
  v18 = 0LL;
  LOWORD(v17[0]) = 0;
  v20[0] = v21;
  v4 = L"%Y-%m-%dT%H:%M:%S";
  v20[1] = L"%Y-%m-%dT%H:%M:%S";
  do
    ++v4;
  while ( *v4 );
  v20[2] = (void *)v4;
  std::operator>><wchar_t,std::char_traits<wchar_t>,wchar_t>(v13, (__int64 *)v20);
  SystemTime = 0LL;
  SystemTime.wYear = v21[10] + 1900;
  SystemTime.wMonth = v21[8] + 1;
  SystemTime.wDay = v21[6];
  SystemTime.wHour = v21[4];
  SystemTime.wMinute = v21[2];
  SystemTime.wSecond = v21[0];
  if ( !SystemTimeToFileTime(&SystemTime, &FileTime) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x8C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\stringhelper.cpp",
      v5);
  std::wstringbuf::str((__int64)v14, v20);
  v10 = 90;
  v6 = std::wstring::find((char *)v20, &v10, 0LL, 1uLL);
  if ( v20[3] >= (void *)8 )
    operator delete(v20[0]);
  if ( v6 == -1 )
  {
    LocalFileTime = FileTime;
    if ( !LocalFileTimeToFileTime(&LocalFileTime, &FileTime) )
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0x93,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\stringhelper.cpp",
        v7);
  }
  v8 = FileTime;
  std::wistringstream::~wistringstream((__int64)v15);
  v15[0] = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor((struct std::ios_base *)v15);
  return v8;
}
