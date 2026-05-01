/*
 * XREFs of ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x18012FA34
 * Callers:
 *     ??$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180131AC4 (--$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEAUFailureInfo@2@@Z @ 0x180131D34 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEA.c)
 *     ??$ReportFailure_NoReturn@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1801325B8 (--$ReportFailure_NoReturn@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailu.c)
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVResultException@2@PEAG_K@Z @ 0x1802CE840 (-MaybeGetExceptionString@details@wil@@YAXAEBVResultException@2@PEAG_K@Z.c)
 *     ??$ReportFailure_NoReturn@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x18038BFE8 (--$ReportFailure_NoReturn@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?what@ResultException@wil@@UEBAPEBDXZ @ 0x1803907C0 (-what@ResultException@wil@@UEBAPEBDXZ.c)
 * Callees:
 *     ?LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ @ 0x18012FBD8 (-LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::GetFailureLogString(
        wil *this,
        unsigned __int16 *a2,
        __int64 a3,
        const struct wil::FailureInfo *a4)
{
  const unsigned __int16 *v7; // rsi
  DWORD v8; // ebp
  unsigned __int16 *v9; // rdi
  const unsigned __int16 *v10; // r9
  __int64 v11; // rax
  const unsigned __int16 *v12; // rcx
  unsigned __int16 *v13; // rax
  wil::details *v14; // r14
  const unsigned __int16 *v15; // r9
  wil::details *v16; // rax
  const unsigned __int16 *v17; // r9
  const char *v19; // rax
  unsigned __int16 *v20; // rax
  const unsigned __int16 *v21; // r9
  const unsigned __int16 *v22; // r9
  const unsigned __int16 *v23; // r9
  LPWSTR lpBuffer; // [rsp+20h] [rbp-258h]
  LPWSTR lpBuffera; // [rsp+20h] [rbp-258h]
  DWORD nSize[2]; // [rsp+28h] [rbp-250h]
  va_list *Arguments; // [rsp+30h] [rbp-248h]
  WCHAR Buffer[256]; // [rsp+40h] [rbp-238h] BYREF

  if ( !a2 )
    return 0LL;
  if ( !this )
    return 0LL;
  *(_WORD *)this = 0;
  if ( g_pfnResultLoggingCallback )
  {
    if ( wil::details::g_resultMessageCallbackSet )
    {
      g_pfnResultLoggingCallback(a3, this, a2, a4);
      if ( *(_WORD *)this )
        return 0LL;
    }
  }
  v7 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
  if ( *(_DWORD *)a3 )
  {
    if ( *(_DWORD *)a3 == 1 )
    {
      v19 = "ReturnHr";
      v7 = (const unsigned __int16 *)"ReturnNt";
    }
    else
    {
      if ( *(_DWORD *)a3 != 2 )
      {
        if ( *(_DWORD *)a3 == 3 )
          v7 = (const unsigned __int16 *)"FailFast";
        goto LABEL_6;
      }
      v19 = "LogHr";
      v7 = (const unsigned __int16 *)"LogNt";
    }
    if ( (*(_BYTE *)(a3 + 4) & 8) == 0 )
      v7 = (const unsigned __int16 *)v19;
    goto LABEL_6;
  }
  v7 = "Exception";
LABEL_6:
  Buffer[0] = 0;
  if ( (*(_BYTE *)(a3 + 4) & 8) != 0 )
  {
    v8 = *(_DWORD *)(a3 + 12);
    if ( wil::details::g_pfnFormatNtStatusMsg )
      wil::details::g_pfnFormatNtStatusMsg(v8, Buffer, 0x100u);
  }
  else
  {
    v8 = *(_DWORD *)(a3 + 8);
    FormatMessageW(0x1200u, 0LL, v8, 0x400u, Buffer, 0x100u, 0LL);
  }
  v9 = (unsigned __int16 *)((char *)this + 2 * (_QWORD)a2);
  v10 = *(const unsigned __int16 **)(a3 + 56);
  v11 = *(_QWORD *)(a3 + 136);
  v12 = *(const unsigned __int16 **)(a3 + 128);
  if ( v10 )
  {
    LODWORD(lpBuffer) = *(_DWORD *)(a3 + 64);
    v13 = wil::details::LogStringPrintf(this, v9, L"%hs(%u)\\%hs!%p: ", v10, lpBuffer, v12, v11);
  }
  else
  {
    v13 = wil::details::LogStringPrintf(this, v9, L"%hs!%p: ", v12, v11);
  }
  v14 = (wil::details *)v13;
  v15 = *(const unsigned __int16 **)(a3 + 144);
  if ( v15 )
    v14 = (wil::details *)wil::details::LogStringPrintf((wil::details *)v13, v9, L"(caller: %p) ", v15);
  LODWORD(Arguments) = v8;
  nSize[0] = GetCurrentThreadId();
  LODWORD(lpBuffera) = *(_DWORD *)(a3 + 68);
  v16 = (wil::details *)wil::details::LogStringPrintf(
                          v14,
                          v9,
                          L"%hs(%d) tid(%x) %08X %ws",
                          v7,
                          lpBuffera,
                          *(_QWORD *)nSize,
                          Arguments,
                          Buffer);
  if ( *(_QWORD *)(a3 + 24) || *(_QWORD *)(a3 + 72) || *(_QWORD *)(a3 + 48) )
  {
    v20 = wil::details::LogStringPrintf(v16, v9, L"    ", v17);
    v21 = *(const unsigned __int16 **)(a3 + 24);
    if ( v21 )
      v20 = wil::details::LogStringPrintf((wil::details *)v20, v9, L"Msg:[%ws] ", v21);
    v22 = *(const unsigned __int16 **)(a3 + 72);
    if ( v22 )
      v20 = wil::details::LogStringPrintf((wil::details *)v20, v9, L"CallContext:[%hs] ", v22);
    v23 = *(const unsigned __int16 **)(a3 + 48);
    if ( *(_QWORD *)(a3 + 40) )
    {
      wil::details::LogStringPrintf((wil::details *)v20, v9, L"[%hs(%hs)]\n", v23, *(_QWORD *)(a3 + 40));
    }
    else if ( v23 )
    {
      wil::details::LogStringPrintf((wil::details *)v20, v9, L"[%hs]\n", v23);
    }
    else
    {
      wil::details::LogStringPrintf((wil::details *)v20, v9, L"\n", 0LL);
    }
  }
  return 0LL;
}
