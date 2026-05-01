/*
 * XREFs of ?what@ResultException@wil@@UEBAPEBDXZ @ 0x1802DA550
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x180150C28 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1801EAC80 (_alloca_probe.c)
 *     ?StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ @ 0x1802D95CC (-StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ.c)
 *     ?create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z @ 0x1802D9E7C (-create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z.c)
 */

const char *__fastcall wil::ResultException::what(
        wil::ResultException *this,
        __int64 a2,
        __int64 a3,
        const struct wil::FailureInfo *a4)
{
  volatile signed __int32 **v4; // rbx
  volatile signed __int32 *v5; // rax
  __int64 v6; // r8
  _BYTE Source[1024]; // [rsp+20h] [rbp-1418h] BYREF
  wchar_t pszDest[2048]; // [rsp+420h] [rbp-1018h] BYREF

  v4 = (volatile signed __int32 **)((char *)this + 192);
  v5 = (volatile signed __int32 *)*((_QWORD *)this + 24);
  if ( !v5 )
  {
    wil::GetFailureLogString(pszDest, (unsigned __int16 *)0x800, (__int64)this + 24, a4);
    wil::details::StringCchPrintfA((wil::details *)Source, (char *)0x400, "%ws", (const char *)pszDest);
    v6 = -1LL;
    do
      ++v6;
    while ( Source[v6] );
    wil::details::shared_buffer::create(v4, Source, (volatile signed __int32 *)(v6 + 1));
    v5 = *v4;
  }
  return (const char *)((unsigned __int64)(v5 + 1) & -(__int64)(v5 != 0LL));
}
