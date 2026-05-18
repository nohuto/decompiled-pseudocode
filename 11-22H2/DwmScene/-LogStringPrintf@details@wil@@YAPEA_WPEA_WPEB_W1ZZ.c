/*
 * XREFs of ?LogStringPrintf@details@wil@@YAPEA_WPEA_WPEB_W1ZZ @ 0x18000EAD0
 * Callers:
 *     ?GetFailureLogString@wil@@YAJPEA_W_KAEBUFailureInfo@1@@Z @ 0x18000DD04 (-GetFailureLogString@wil@@YAJPEA_W_KAEBUFailureInfo@1@@Z.c)
 * Callees:
 *     StringVPrintfWorkerW @ 0x18000F770 (StringVPrintfWorkerW.c)
 */

wchar_t *wil::details::LogStringPrintf(wil::details *this, wchar_t *a2, wchar_t *a3, const wchar_t *a4, ...)
{
  size_t v5; // rdx
  wchar_t *v6; // rbx
  __int64 v7; // rax
  const wchar_t *v9; // [rsp+68h] [rbp+20h] BYREF

  v9 = a4;
  v5 = ((char *)a2 - (char *)this) >> 1;
  v6 = (wchar_t *)this;
  if ( v5 )
  {
    if ( v5 > 0x7FFFFFFF )
      *(_WORD *)this = 0;
    else
      StringVPrintfWorkerW((STRSAFE_LPWSTR)this, v5, (size_t *)a3, a3, (va_list)&v9);
  }
  if ( a2 != v6 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( v6[v7] );
    v6 += v7;
  }
  return v6;
}
