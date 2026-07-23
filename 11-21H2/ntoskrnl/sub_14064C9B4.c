/*
 * XREFs of sub_14064C9B4 @ 0x14064C9B4
 * Callers:
 *     sub_14064B9D8 @ 0x14064B9D8 (sub_14064B9D8.c)
 *     sub_14064C4AC @ 0x14064C4AC (sub_14064C4AC.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14055F3E4 @ 0x14055F3E4 (sub_14055F3E4.c)
 *     StringVPrintfWorkerW @ 0x14064CB7C (StringVPrintfWorkerW.c)
 */

__int64 sub_14064C9B4(
        STRSAFE_LPWSTR pszDest,
        size_t cchDest,
        wchar_t **a3,
        size_t *a4,
        int a5,
        STRSAFE_LPCWSTR pszFormat,
        ...)
{
  int v9; // ebx
  wchar_t *v10; // r13
  size_t v11; // r14
  const wchar_t *v12; // r9
  HRESULT v13; // eax
  size_t v14; // rcx
  STRSAFE_LPWSTR v16; // [rsp+30h] [rbp-18h] BYREF
  size_t pcchNewDestLength[2]; // [rsp+38h] [rbp-10h] BYREF
  va_list va; // [rsp+C0h] [rbp+78h] BYREF

  va_start(va, pszFormat);
  v9 = 0;
  if ( (a5 & 0x100) != 0 )
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
    v16 = pszDest;
    v10 = pszDest;
    pcchNewDestLength[0] = cchDest;
    v11 = cchDest;
    if ( (a5 & 0x100) != 0 )
    {
      v12 = &word_140011C40;
      if ( pszFormat )
        v12 = pszFormat;
    }
    else
    {
      v12 = pszFormat;
    }
    v9 = 0;
    if ( (a5 & 0xFFFFE000) != 0 )
    {
      v9 = -2147024809;
      if ( cchDest )
        *pszDest = 0;
    }
    else if ( cchDest )
    {
      pcchNewDestLength[0] = 0LL;
      v13 = StringVPrintfWorkerW(pszDest, cchDest, pcchNewDestLength, v12, va);
      v14 = pcchNewDestLength[0];
      v9 = v13;
      v11 = cchDest - pcchNewDestLength[0];
      pcchNewDestLength[0] = cchDest - pcchNewDestLength[0];
      v10 = &pszDest[v14];
      v16 = v10;
      if ( v13 >= 0 )
      {
        if ( (a5 & 0x200) != 0 && v11 > 1 && 2 * v11 > 2 )
          memset(v10 + 1, (unsigned __int8)a5, 2 * v11 - 2);
        goto LABEL_22;
      }
    }
    else
    {
      if ( !*v12 )
      {
LABEL_22:
        if ( a3 )
          *a3 = v10;
        if ( a4 )
          *a4 = v11;
        return (unsigned int)v9;
      }
      v9 = pszDest != 0LL ? -2147024774 : -2147024809;
    }
    if ( (a5 & 0x1C00) != 0 && cchDest )
    {
      sub_14055F3E4(pszDest, 2 * cchDest, (__int64)a3, &v16, pcchNewDestLength, a5);
      v10 = v16;
      v11 = pcchNewDestLength[0];
    }
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147024774 )
      goto LABEL_22;
  }
  return (unsigned int)v9;
}
