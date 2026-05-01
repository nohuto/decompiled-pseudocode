/*
 * XREFs of ?what@ResultException@wil@@UBEPBDXZ @ 0x10002E40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFailureLogString@wil@@YGJPA_WIABUFailureInfo@1@@Z @ 0x1000238B (-GetFailureLogString@wil@@YGJPA_WIABUFailureInfo@1@@Z.c)
 *     ?create@shared_buffer@details@wil@@QAE_NPBXI@Z @ 0x100026F1 (-create@shared_buffer@details@wil@@QAE_NPBXI@Z.c)
 *     ?StringCchPrintfA@details@wil@@YAJPADIPBDZZ @ 0x10002B93 (-StringCchPrintfA@details@wil@@YAJPADIPBDZZ.c)
 *     @__security_check_cookie@4 @ 0x10006D50 (@__security_check_cookie@4.c)
 *     __chkstk @ 0x10007440 (__chkstk.c)
 */

const char *__thiscall wil::ResultException::what(wil::ResultException *this)
{
  volatile signed __int32 **v1; // esi
  volatile signed __int32 *v2; // eax
  wchar_t *v4; // [esp+0h] [ebp-1408h]
  unsigned int ArgList[1024]; // [esp+4h] [ebp-1404h] BYREF
  char Source[1024]; // [esp+1004h] [ebp-404h] BYREF

  v1 = (volatile signed __int32 **)((char *)this + 108);
  v2 = (volatile signed __int32 *)*((_DWORD *)this + 27);
  if ( !v2 )
  {
    wil::GetFailureLogString(
      2048,
      (wil::details *)ArgList,
      (wil::ResultException *)((char *)this + 12),
      v4,
      ArgList[0],
      (const struct wil::FailureInfo *)ArgList[1]);
    wil::details::StringCchPrintfA((wil::details *)Source, 1024, "%ws", (const char *)ArgList);
    wil::details::shared_buffer::create(v1, Source, (volatile signed __int32 *)(strlen(Source) + 1));
    v2 = *v1;
  }
  return v2 != 0 ? (const char *)(v2 + 1) : 0;
}
