/*
 * XREFs of ?GetFailureLogString@wil@@YGJPA_WIABUFailureInfo@1@@Z @ 0x1000238B
 * Callers:
 *     ?what@ResultException@wil@@UBEPBDXZ @ 0x10002E40 (-what@ResultException@wil@@UBEPBDXZ.c)
 *     ?LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@ABUResultStatus@12@PB_W_NPA_WIPADIPAUFailureInfo@2@@Z @ 0x10003017 (-LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@ABUResultStatus@12@PB_W_NPA_WIPADIPAUFailu.c)
 *     ??$ReportFailure_NoReturn@$02@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOptions@01@@Z @ 0x10004671 (--$ReportFailure_NoReturn@$02@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOp.c)
 *     ??$ReportFailure_Return@$00@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOptions@01@@Z @ 0x10004A27 (--$ReportFailure_Return@$00@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOpti.c)
 * Callees:
 *     ?LogStringPrintf@details@wil@@YAPA_WPA_WPB_W1ZZ @ 0x1000232F (-LogStringPrintf@details@wil@@YAPA_WPA_WPB_W1ZZ.c)
 *     @__security_check_cookie@4 @ 0x10006D50 (@__security_check_cookie@4.c)
 *     @_guard_check_icall_nop@4 @ 0x100072B0 (@_guard_check_icall_nop@4.c)
 */

int __userpurge wil::GetFailureLogString@<eax>(
        int a1@<edx>,
        wil::details *a2@<ecx>,
        wil *this,
        wchar_t *a4,
        unsigned int a5,
        const struct wil::FailureInfo *a6)
{
  void (__thiscall *v7)(_DWORD, wil *, wil::details *, int); // ebx
  const char *v8; // ebx
  bool v9; // zf
  wchar_t *v10; // edi
  wchar_t *v11; // eax
  DWORD CurrentThreadId; // eax
  wil::details *v13; // eax
  wchar_t *v14; // eax
  const wchar_t *v16; // [esp-8h] [ebp-238h]
  int v17; // [esp-4h] [ebp-234h]
  const wchar_t *v18; // [esp+0h] [ebp-230h]
  const wchar_t *v19; // [esp+0h] [ebp-230h]
  DWORD v21; // [esp+18h] [ebp-218h]
  wil::details *v23; // [esp+1Ch] [ebp-214h]
  WCHAR Buffer[256]; // [esp+20h] [ebp-210h] BYREF

  if ( a1 )
  {
    if ( a2 )
    {
      v7 = (void (__thiscall *)(_DWORD, wil *, wil::details *, int))g_pfnResultLoggingCallback;
      *(_WORD *)a2 = 0;
      if ( !v7 || !wil::details::g_resultMessageCallbackSet || (v7(v7, this, a2, a1), !*(_WORD *)a2) )
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
          v21 = *((_DWORD *)this + 2);
          FormatMessageW(0x1200u, 0, v21, 0x400u, Buffer, 0x100u, 0);
        }
        else
        {
          v21 = *((_DWORD *)this + 3);
          if ( wil::details::g_pfnFormatNtStatusMsg )
            wil::details::g_pfnFormatNtStatusMsg(*((_DWORD *)this + 3), Buffer, 256u);
        }
        v17 = *((_DWORD *)this + 20);
        v16 = (const wchar_t *)*((_DWORD *)this + 19);
        v10 = (wchar_t *)((char *)a2 + 2 * a1);
        if ( *((_DWORD *)this + 9) )
          v11 = wil::details::LogStringPrintf(
                  a2,
                  v10,
                  L"%hs(%u)\\%hs!%p: ",
                  *((const wchar_t **)this + 9),
                  *((_DWORD *)this + 10),
                  v16,
                  v17);
        else
          v11 = wil::details::LogStringPrintf(a2, v10, L"%hs!%p: ", v16, v17);
        v23 = (wil::details *)v11;
        if ( *((_DWORD *)this + 21) )
          v23 = (wil::details *)wil::details::LogStringPrintf(
                                  (wil::details *)v11,
                                  v10,
                                  L"(caller: %p) ",
                                  *((const wchar_t **)this + 21));
        CurrentThreadId = GetCurrentThreadId();
        v13 = (wil::details *)wil::details::LogStringPrintf(
                                v23,
                                v10,
                                L"%hs(%d) tid(%x) %08X %ws",
                                (const wchar_t *)v8,
                                *((_DWORD *)this + 11),
                                CurrentThreadId,
                                v21,
                                Buffer);
        if ( *((_DWORD *)this + 5) || *((_DWORD *)this + 12) || *((_DWORD *)this + 8) )
        {
          v14 = wil::details::LogStringPrintf(v13, v10, L"    ", v18);
          if ( *((_DWORD *)this + 5) )
            v14 = wil::details::LogStringPrintf((wil::details *)v14, v10, L"Msg:[%ws] ", *((const wchar_t **)this + 5));
          if ( *((_DWORD *)this + 12) )
            v14 = wil::details::LogStringPrintf(
                    (wil::details *)v14,
                    v10,
                    L"CallContext:[%hs] ",
                    *((const wchar_t **)this + 12));
          if ( *((_DWORD *)this + 7) )
          {
            wil::details::LogStringPrintf(
              (wil::details *)v14,
              v10,
              L"[%hs(%hs)]\n",
              *((const wchar_t **)this + 8),
              *((_DWORD *)this + 7));
          }
          else if ( *((_DWORD *)this + 8) )
          {
            wil::details::LogStringPrintf((wil::details *)v14, v10, L"[%hs]\n", *((const wchar_t **)this + 8));
          }
          else
          {
            wil::details::LogStringPrintf((wil::details *)v14, v10, L"\n", v19);
          }
        }
      }
    }
  }
  return 0;
}
