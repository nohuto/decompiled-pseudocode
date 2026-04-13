/*
 * XREFs of ?GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA?AU_FILETIME@@PEB_W_N@Z @ 0x1800D0400
 * Callers:
 *     ?RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800987B0 (-RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerI.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??_D?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x180053DF4 (--_D-$basic_istringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x1800627B4 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18006B878 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@PEB_W@Z @ 0x18008F79C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@PEB_W@Z.c)
 *     ?str@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@XZ @ 0x1800A0AF0 (-str@-$basic_stringbuf@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA-AV-$basic_string@_W.c)
 *     ?find@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z @ 0x1800B049C (-find@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z.c)
 *     ??0?$basic_istringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@H@Z @ 0x1800B6BFC (--0-$basic_istringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV-$basic_strin.c)
 *     ??$?5_WU?$char_traits@_W@std@@_W@std@@YAAEAV?$basic_istream@_WU?$char_traits@_W@std@@@0@AEAV10@AEBU?$_Timeobj@_W@0@@Z @ 0x1800CFE74 (--$-5_WU-$char_traits@_W@std@@_W@std@@YAAEAV-$basic_istream@_WU-$char_traits@_W@std@@@0@AEAV10@A.c)
 */

// Hidden C++ exception states: #wind=3
struct _FILETIME __fastcall CreativeFramework::CommonHelper::StringUtils::GetFileTimeFromString(
        CreativeFramework::CommonHelper::StringUtils *this,
        const wchar_t *a2)
{
  __int64 v2; // rax
  const wchar_t *v3; // rax
  const char *v4; // r9
  unsigned __int64 v5; // rbx
  const char *v6; // r9
  struct _FILETIME v7; // rbx
  FILETIME LocalFileTime; // [rsp+28h] [rbp-E0h] BYREF
  struct _FILETIME FileTime; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v11[2]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v12[224]; // [rsp+48h] [rbp-C0h] BYREF
  SYSTEMTIME SystemTime; // [rsp+128h] [rbp+20h] BYREF
  __int64 v14[4]; // [rsp+138h] [rbp+30h] BYREF
  _WORD v15[20]; // [rsp+158h] [rbp+50h] BYREF
  _QWORD v16[4]; // [rsp+180h] [rbp+78h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B0h] [rbp+A8h]

  v2 = -1LL;
  do
    ++v2;
  while ( *((_WORD *)this + v2) );
  if ( !v2 )
    return 0LL;
  std::wstring::wstring((__int64)v16);
  std::wistringstream::wistringstream(v11, v16);
  std::wstring::_Tidy(v16, 1, 0LL);
  v14[0] = (__int64)v15;
  v3 = L"%Y-%m-%dT%H:%M:%S";
  v14[1] = (__int64)L"%Y-%m-%dT%H:%M:%S";
  do
    ++v3;
  while ( *v3 );
  v14[2] = (__int64)v3;
  std::operator>><wchar_t,std::char_traits<wchar_t>,wchar_t>((__int64)v11, v14);
  SystemTime = 0LL;
  SystemTime.wYear = v15[10] + 1900;
  SystemTime.wMonth = v15[8] + 1;
  SystemTime.wDay = v15[6];
  SystemTime.wHour = v15[4];
  SystemTime.wMinute = v15[2];
  SystemTime.wSecond = v15[0];
  if ( !SystemTimeToFileTime(&SystemTime, &FileTime) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x8C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\stringhelper.cpp",
      v4);
  std::wstringbuf::str((__int64)v12, (__int64)v14);
  LOWORD(LocalFileTime.dwLowDateTime) = 90;
  v5 = std::wstring::find(v14, (wchar_t *)&LocalFileTime, 0LL, 1uLL);
  std::wstring::_Tidy(v14, 1, 0LL);
  if ( v5 == -1LL )
  {
    LocalFileTime = FileTime;
    if ( !LocalFileTimeToFileTime(&LocalFileTime, &FileTime) )
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0x93,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\stringhelper.cpp",
        v6);
  }
  v7 = FileTime;
  std::basic_istringstream<unsigned short>::`vbase destructor'((__int64)v11);
  return v7;
}
