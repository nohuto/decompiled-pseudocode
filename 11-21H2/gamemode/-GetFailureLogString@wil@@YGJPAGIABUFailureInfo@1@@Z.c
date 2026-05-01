/*
 * XREFs of ?GetFailureLogString@wil@@YGJPAGIABUFailureInfo@1@@Z @ 0x10005E30
 * Callers:
 *     ?LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@ABUResultStatus@12@PBG_NPAGIPADIPAUFailureInfo@2@@Z @ 0x100060EB (-LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@ABUResultStatus@12@PBG_NPAGIPADIPAUFailure.c)
 * Callees:
 *     ?LogStringPrintf@details@wil@@YAPAGPAGPBG1ZZ @ 0x10005DBE (-LogStringPrintf@details@wil@@YAPAGPAGPBG1ZZ.c)
 *     @__security_check_cookie@4 @ 0x10006D50 (@__security_check_cookie@4.c)
 *     @_guard_check_icall_nop@4 @ 0x100072B0 (@_guard_check_icall_nop@4.c)
 */

int __userpurge wil::GetFailureLogString@<eax>(
        wchar_t *a1@<ecx>,
        const unsigned __int16 *a2@<ebx>,
        wil *this,
        unsigned __int16 *a4,
        unsigned int a5,
        const struct wil::FailureInfo *a6)
{
  void (__thiscall *v7)(_DWORD, wil *, wchar_t *, int); // ebx
  const char *v8; // ebx
  bool v9; // zf
  unsigned __int16 *v10; // edi
  wchar_t *v11; // eax
  DWORD CurrentThreadId; // eax
  wchar_t *v13; // eax
  wchar_t *v14; // eax
  const unsigned __int16 *v16; // [esp-Ch] [ebp-224h]
  int v17; // [esp-8h] [ebp-220h]
  const unsigned __int16 *v19; // [esp-4h] [ebp-21Ch]
  DWORD v20; // [esp+Ch] [ebp-20Ch]
  unsigned __int16 *v22; // [esp+10h] [ebp-208h]
  WCHAR Buffer[256]; // [esp+14h] [ebp-204h] BYREF

  if ( a1 )
  {
    v7 = (void (__thiscall *)(_DWORD, wil *, wchar_t *, int))g_pfnResultLoggingCallback;
    *a1 = 0;
    if ( !v7 || !wil::details::g_resultMessageCallbackSet || (v7(v7, this, a1, 2048), !*a1) )
    {
      v8 = (const char *)&Args;
      if ( *(_DWORD *)this )
      {
        switch ( *(_DWORD *)this )
        {
          case 1:
            if ( (*((_BYTE *)this + 4) & 8) != 0 )
              v8 = "ReturnNt";
            else
              v8 = "ReturnHr";
            break;
          case 2:
            if ( (*((_BYTE *)this + 4) & 8) != 0 )
              v8 = "LogNt";
            else
              v8 = "LogHr";
            break;
          case 3:
            v8 = "FailFast";
            break;
        }
      }
      else
      {
        v8 = "Exception";
      }
      v9 = (*((_BYTE *)this + 4) & 8) == 0;
      Buffer[0] = 0;
      if ( v9 )
      {
        v20 = *((_DWORD *)this + 2);
        FormatMessageW(0x1200u, 0, v20, 0x400u, Buffer, 0x100u, 0);
      }
      else
      {
        v20 = *((_DWORD *)this + 3);
        if ( wil::details::g_pfnFormatNtStatusMsg )
          wil::details::g_pfnFormatNtStatusMsg(*((_DWORD *)this + 3), Buffer, 256u);
      }
      v17 = *((_DWORD *)this + 20);
      v10 = a1 + 2048;
      v16 = (const unsigned __int16 *)*((_DWORD *)this + 19);
      if ( *((_DWORD *)this + 9) )
        v11 = wil::details::LogStringPrintf(
                a1,
                v10,
                (wchar_t *)L"%hs(%u)\\%hs!%p: ",
                *((const unsigned __int16 **)this + 9),
                *((_DWORD *)this + 10),
                v16,
                v17);
      else
        v11 = wil::details::LogStringPrintf(a1, v10, (wchar_t *)L"%hs!%p: ", v16, v17);
      v22 = v11;
      if ( *((_DWORD *)this + 21) )
        v22 = wil::details::LogStringPrintf(
                v11,
                v10,
                (wchar_t *)L"(caller: %p) ",
                *((const unsigned __int16 **)this + 21));
      CurrentThreadId = GetCurrentThreadId();
      v13 = wil::details::LogStringPrintf(
              v22,
              v10,
              (wchar_t *)L"%hs(%d) tid(%x) %08X %ws",
              (const unsigned __int16 *)v8,
              *((_DWORD *)this + 11),
              CurrentThreadId,
              v20,
              Buffer);
      if ( *((_DWORD *)this + 5) || *((_DWORD *)this + 12) || *((_DWORD *)this + 8) )
      {
        v14 = wil::details::LogStringPrintf(v13, v10, (wchar_t *)L"    ", a2);
        if ( *((_DWORD *)this + 5) )
          v14 = wil::details::LogStringPrintf(
                  v14,
                  v10,
                  (wchar_t *)L"Msg:[%ws] ",
                  *((const unsigned __int16 **)this + 5));
        if ( *((_DWORD *)this + 12) )
          v14 = wil::details::LogStringPrintf(
                  v14,
                  v10,
                  (wchar_t *)L"CallContext:[%hs] ",
                  *((const unsigned __int16 **)this + 12));
        if ( *((_DWORD *)this + 7) )
        {
          wil::details::LogStringPrintf(
            v14,
            v10,
            (wchar_t *)L"[%hs(%hs)]\n",
            *((const unsigned __int16 **)this + 8),
            *((_DWORD *)this + 7));
        }
        else if ( *((_DWORD *)this + 8) )
        {
          wil::details::LogStringPrintf(v14, v10, (wchar_t *)L"[%hs]\n", *((const unsigned __int16 **)this + 8));
        }
        else
        {
          wil::details::LogStringPrintf(v14, v10, (wchar_t *)L"\n", v19);
        }
      }
    }
  }
  return 0;
}
