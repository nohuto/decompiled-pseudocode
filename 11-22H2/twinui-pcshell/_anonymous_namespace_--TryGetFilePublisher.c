/*
 * XREFs of _anonymous_namespace_::TryGetFilePublisher @ 0x1806A740C
 * Callers:
 *     _anonymous_namespace_::DoRequestorAndForegroundPublisherMatch @ 0x1806A0DFC (_anonymous_namespace_--DoRequestorAndForegroundPublisherMatch.c)
 *     _anonymous_namespace_::TryGetProcessPublisher @ 0x1806A7E18 (_anonymous_namespace_--TryGetProcessPublisher.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$FilePublisherRetrieved@PEBGAEAPEAG@PinManagerTelemetry@@SAX$$QEAPEBGAEAPEAG@Z @ 0x18069A238 (--$FilePublisherRetrieved@PEBGAEAPEAG@PinManagerTelemetry@@SAX$$QEAPEBGAEAPEAG@Z.c)
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18069BC8C (--$_Resize@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall anonymous_namespace_::TryGetFilePublisher(_QWORD *a1, LPCWSTR *a2)
{
  const WCHAR *v3; // rsi
  DWORD FileVersionInfoSize; // eax
  const char *v5; // r9
  void *v6; // rdi
  _QWORD *result; // rax
  const WCHAR *v10; // [rsp+40h] [rbp-58h] BYREF
  LPVOID lpBuffer; // [rsp+48h] [rbp-50h] BYREF
  LPCVOID pBlock[2]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v13; // [rsp+60h] [rbp-38h]
  DWORD dwHandle; // [rsp+68h] [rbp-30h] BYREF
  unsigned int puLen; // [rsp+6Ch] [rbp-2Ch] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v3 = *a2;
  FileVersionInfoSize = GetFileVersionInfoSizeExW(2u, *a2, &dwHandle);
  try
  {
    if ( FileVersionInfoSize )
    {
      *(_OWORD *)pBlock = 0LL;
      v13 = 0LL;
      std::vector<unsigned char>::_Resize<std::_Value_init_tag>((__int64 *)pBlock, FileVersionInfoSize);
      v6 = (void *)pBlock[0];
      if ( GetFileVersionInfoExW(2u, v3, 0, LODWORD(pBlock[1]) - LODWORD(pBlock[0]), (LPVOID)pBlock[0])
        && VerQueryValueW(v6, L"\\StringFileInfo\\040904B0\\CompanyName", &lpBuffer, &puLen) )
      {
        v10 = v3;
        PinManagerTelemetry::FilePublisherRetrieved<unsigned short const *,unsigned short * &>(
          (__int64 *)&v10,
          (__int64 *)&lpBuffer);
        std::wstring::wstring(a1, lpBuffer);
        if ( v6 )
          std::_Deallocate<16,0>(v6, v13 - (_QWORD)v6);
        return a1;
      }
      if ( v6 )
        std::_Deallocate<16,0>(v6, v13 - (_QWORD)v6);
    }
    *a1 = 0LL;
    a1[2] = 0LL;
    a1[3] = 7LL;
    *(_WORD *)a1 = 0;
    result = a1;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x217,
      (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
      v5);
    *a1 = 0LL;
    a1[2] = 0LL;
    a1[2] = 0LL;
    a1[3] = 7LL;
    *(_WORD *)a1 = 0;
    return a1;
  }
  return result;
}
