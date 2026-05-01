/*
 * XREFs of ?StringCchVPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGPEAD@Z @ 0x18048AB6C
 * Callers:
 *     ??$str_vprintf_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBGAEAPEAD@Z @ 0x1801FE1A4 (--$str_vprintf_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-.c)
 *     ??$str_vprintf_nothrow@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEAPEAD@Z @ 0x180489C68 (--$str_vprintf_nothrow@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wi.c)
 *     ??$str_vprintf_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBGAEAPEAD@Z @ 0x1804FFC64 (--$str_vprintf_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoT.c)
 * Callees:
 *     StringVPrintfWorkerW @ 0x1800368A4 (StringVPrintfWorkerW.c)
 *     StringExHandleOtherFlagsW @ 0x1803DD51C (StringExHandleOtherFlagsW.c)
 *     StringExHandleFillBehindNullW @ 0x18048AD38 (StringExHandleFillBehindNullW.c)
 */

__int64 __fastcall StringCchVPrintfExW(
        STRSAFE_LPWSTR pszDest,
        size_t cchDest,
        unsigned __int16 **a3,
        wchar_t *a4,
        DWORD a5,
        STRSAFE_LPCWSTR pszFormat,
        va_list argList)
{
  DWORD dwFlags; // r14d
  int v11; // ebx
  wchar_t *v12; // rbp
  const wchar_t *v13; // r9
  HRESULT v14; // eax
  unsigned __int64 v15; // rdx
  size_t pcchRemaining[7]; // [rsp+30h] [rbp-38h] BYREF
  STRSAFE_LPWSTR ppszDestEnd; // [rsp+88h] [rbp+20h] BYREF

  ppszDestEnd = a4;
  dwFlags = a5;
  v11 = 0;
  if ( (a5 & 0x100) != 0 )
  {
    if ( !pszDest && cchDest || cchDest > 0x7FFFFFFF )
      v11 = -2147024809;
  }
  else if ( cchDest - 1 > 0x7FFFFFFE )
  {
    v11 = -2147024809;
  }
  if ( v11 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    ppszDestEnd = pszDest;
    v12 = pszDest;
    if ( (a5 & 0x100) != 0 )
    {
      v13 = &LocaleName;
      if ( pszFormat )
        v13 = pszFormat;
    }
    else
    {
      v13 = pszFormat;
    }
    v11 = 0;
    if ( (a5 & 0xFFFFE000) != 0 )
    {
      v11 = -2147024809;
      if ( cchDest )
        *pszDest = 0;
    }
    else if ( cchDest )
    {
      ppszDestEnd = 0LL;
      v14 = StringVPrintfWorkerW(pszDest, cchDest, (size_t *)&ppszDestEnd, v13, argList);
      v15 = cchDest - (_QWORD)ppszDestEnd;
      v11 = v14;
      v12 = &pszDest[(_QWORD)ppszDestEnd];
      ppszDestEnd = v12;
      if ( v14 >= 0 )
      {
        if ( (dwFlags & 0x200) != 0 && v15 > 1 )
          StringExHandleFillBehindNullW(v12, 2 * v15, dwFlags);
        goto LABEL_22;
      }
    }
    else
    {
      if ( !*v13 )
      {
LABEL_22:
        if ( a3 )
          *a3 = v12;
        return (unsigned int)v11;
      }
      v11 = pszDest != 0LL ? -2147024774 : -2147024809;
    }
    if ( (dwFlags & 0x1C00) != 0 && cchDest )
    {
      StringExHandleOtherFlagsW(pszDest, 2 * cchDest, (size_t)a3, &ppszDestEnd, pcchRemaining, dwFlags);
      v12 = ppszDestEnd;
    }
    if ( (int)(v11 + 0x80000000) < 0 || v11 == -2147024774 )
      goto LABEL_22;
  }
  return (unsigned int)v11;
}
