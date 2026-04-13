/*
 * XREFs of ?TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@PEAPEAG@Z @ 0x1800DA6E4
 * Callers:
 *     ?Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z @ 0x1800DA118 (-Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800842F0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800DA824 (-_Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z.c)
 */

__int64 __fastcall ShellMRTHelper::Common::TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri(
        ShellMRTHelper::Common *this,
        _QWORD *a2,
        unsigned __int16 **a3)
{
  PCWSTR StringRawBuffer; // rsi
  int v5; // ebx
  __int64 v6; // rdx
  unsigned int i; // ebx
  int v9; // eax
  unsigned int v10; // edi
  LPVOID pv[4]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  int v13; // [rsp+78h] [rbp+38h] BYREF
  UINT32 length; // [rsp+80h] [rbp+40h] BYREF

  *a2 = 0LL;
  StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)this, &length);
  if ( length <= 0xC || StringRawBuffer[12] == 47 )
    return 0LL;
  memset(pv, 0, 24);
  v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         pv,
         (__int64)L"ms-resource:",
         length + 3);
  if ( v5 >= 0 )
  {
    for ( i = 0; i < 3; ++i )
    {
      v13 = 47;
      v9 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(pv, &v13, 1LL);
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC7,
          (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.Common.h",
          (const char *)(unsigned int)v9);
        if ( pv[0] )
          CoTaskMemFree(pv[0]);
        return v10;
      }
    }
    v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
           pv,
           StringRawBuffer + 12,
           length - 12);
    if ( v5 < 0 )
    {
      v6 = 202LL;
      goto LABEL_5;
    }
    *a2 = pv[0];
    return 0LL;
  }
  v6 = 195LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.Common.h",
    (const char *)(unsigned int)v5);
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return (unsigned int)v5;
}
