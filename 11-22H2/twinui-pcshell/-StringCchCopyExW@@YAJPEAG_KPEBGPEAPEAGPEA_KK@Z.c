/*
 * XREFs of ?StringCchCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x1802D56E8
 * Callers:
 *     ??$str_build_nothrow@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAPEBG_K@Z @ 0x180489868 (--$str_build_nothrow@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wil@.c)
 *     ?GetVirtualDesktopRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEAY0DB@G@Z @ 0x180617AA4 (-GetVirtualDesktopRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEAY0DB@G@Z.c)
 * Callees:
 *     StringCopyWorkerW_0 @ 0x1802D58B0 (StringCopyWorkerW_0.c)
 *     StringExHandleOtherFlagsW @ 0x1803DD51C (StringExHandleOtherFlagsW.c)
 *     StringExHandleFillBehindNullW @ 0x18048AD38 (StringExHandleFillBehindNullW.c)
 */

__int64 __fastcall StringCchCopyExW(
        STRSAFE_LPWSTR pszDest,
        size_t cchDest,
        STRSAFE_PCNZWCH pszSrc,
        unsigned __int16 **a4,
        unsigned __int64 *a5,
        DWORD dwFlags)
{
  int v9; // ebx
  wchar_t *v10; // rbp
  size_t v11; // rsi
  const wchar_t *v12; // rax
  HRESULT v13; // eax
  size_t v14; // rcx
  size_t *pcchRemaining; // [rsp+20h] [rbp-48h]
  STRSAFE_LPWSTR ppszDestEnd; // [rsp+30h] [rbp-38h] BYREF
  size_t pcchNewDestLength; // [rsp+38h] [rbp-30h] BYREF

  v9 = 0;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && cchDest || cchDest > 0x7FFFFFFF )
      v9 = -2147024809;
  }
  else if ( cchDest - 1 > 0x7FFFFFFE )
  {
    v9 = -2147024809;
  }
  if ( v9 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    ppszDestEnd = pszDest;
    v10 = pszDest;
    pcchNewDestLength = cchDest;
    v11 = cchDest;
    if ( (dwFlags & 0x100) != 0 )
    {
      v12 = &LocaleName;
      if ( pszSrc )
        v12 = pszSrc;
      pszSrc = v12;
    }
    v9 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v9 = -2147024809;
      if ( cchDest )
        *pszDest = 0;
    }
    else if ( cchDest )
    {
      pcchNewDestLength = 0LL;
      v13 = StringCopyWorkerW_0(pszDest, cchDest, &pcchNewDestLength, pszSrc, (size_t)pcchRemaining);
      v14 = pcchNewDestLength;
      v9 = v13;
      v11 = cchDest - pcchNewDestLength;
      pcchNewDestLength = cchDest - pcchNewDestLength;
      v10 = &pszDest[v14];
      ppszDestEnd = v10;
      if ( v13 >= 0 )
      {
        if ( (dwFlags & 0x200) != 0 && v11 > 1 )
          StringExHandleFillBehindNullW(&pszDest[v14], 2 * v11, dwFlags);
        goto LABEL_21;
      }
    }
    else
    {
      if ( !*pszSrc )
      {
LABEL_21:
        if ( a4 )
          *a4 = v10;
        if ( a5 )
          *a5 = v11;
        return (unsigned int)v9;
      }
      v9 = pszDest != 0LL ? -2147024774 : -2147024809;
    }
    if ( (dwFlags & 0x1C00) != 0 && cchDest )
    {
      StringExHandleOtherFlagsW(pszDest, 2 * cchDest, (size_t)pszSrc, &ppszDestEnd, &pcchNewDestLength, dwFlags);
      v10 = ppszDestEnd;
      v11 = pcchNewDestLength;
    }
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147024774 )
      goto LABEL_21;
  }
  return (unsigned int)v9;
}
