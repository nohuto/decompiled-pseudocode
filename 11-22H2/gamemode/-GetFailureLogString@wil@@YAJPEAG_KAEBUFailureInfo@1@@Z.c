/*
 * XREFs of ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x1800060B4
 * Callers:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEAUFailureInfo@2@@Z @ 0x1800063E8 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEA.c)
 * Callees:
 *     ?LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ @ 0x1800013D8 (-LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ.c)
 *     __security_check_cookie @ 0x180007300 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180007C20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::GetFailureLogString(
        wil *this,
        unsigned __int16 *a2,
        __int64 a3,
        const struct wil::FailureInfo *a4)
{
  void (__fastcall *v6)(__int64, wil *, __int64, const struct wil::FailureInfo *); // rax
  const char *v7; // rdi
  const char *v8; // rax
  DWORD v9; // ebp
  const unsigned __int16 *v10; // r9
  char *v11; // rsi
  __int64 v12; // rax
  char *v13; // rdx
  unsigned __int16 *v14; // rax
  const unsigned __int16 *v15; // r9
  unsigned __int16 *v16; // r14
  unsigned __int16 *v17; // rax
  const unsigned __int16 *v18; // r9
  unsigned __int16 *v19; // rax
  const unsigned __int16 *v20; // r9
  const unsigned __int16 *v21; // r9
  const unsigned __int16 *v22; // r9
  LPWSTR lpBuffer; // [rsp+20h] [rbp-258h]
  LPWSTR lpBuffera; // [rsp+20h] [rbp-258h]
  DWORD nSize[2]; // [rsp+28h] [rbp-250h]
  va_list *Arguments; // [rsp+30h] [rbp-248h]
  WCHAR Buffer[256]; // [rsp+40h] [rbp-238h] BYREF

  if ( !this )
    return 0LL;
  v6 = (void (__fastcall *)(__int64, wil *, __int64, const struct wil::FailureInfo *))g_pfnResultLoggingCallback;
  *(_WORD *)this = 0;
  if ( v6 )
  {
    if ( wil::details::g_resultMessageCallbackSet )
    {
      v6(a3, this, 2048LL, a4);
      if ( *(_WORD *)this )
        return 0LL;
    }
  }
  v7 = (const char *)&word_1800096EA;
  if ( *(_DWORD *)a3 )
  {
    if ( *(_DWORD *)a3 == 1 )
    {
      v8 = "ReturnHr";
      v7 = "ReturnNt";
    }
    else
    {
      if ( *(_DWORD *)a3 != 2 )
      {
        if ( *(_DWORD *)a3 == 3 )
          v7 = "FailFast";
        goto LABEL_16;
      }
      v8 = "LogHr";
      v7 = "LogNt";
    }
    if ( (*(_BYTE *)(a3 + 4) & 8) == 0 )
      v7 = v8;
    goto LABEL_16;
  }
  v7 = "Exception";
LABEL_16:
  Buffer[0] = 0;
  if ( (*(_BYTE *)(a3 + 4) & 8) != 0 )
  {
    v9 = *(_DWORD *)(a3 + 12);
    if ( wil::details::g_pfnFormatNtStatusMsg )
      wil::details::g_pfnFormatNtStatusMsg(v9, Buffer, 0x100u);
  }
  else
  {
    v9 = *(_DWORD *)(a3 + 8);
    FormatMessageW(0x1200u, 0LL, v9, 0x400u, Buffer, 0x100u, 0LL);
  }
  v10 = *(const unsigned __int16 **)(a3 + 56);
  v11 = (char *)this + 4096;
  v12 = *(_QWORD *)(a3 + 136);
  v13 = (char *)this + 4096;
  if ( v10 )
  {
    LODWORD(lpBuffer) = *(_DWORD *)(a3 + 64);
    v14 = wil::details::LogStringPrintf(this, v13, L"%hs(%u)\\%hs!%p: ", v10, lpBuffer, *(_QWORD *)(a3 + 128), v12);
  }
  else
  {
    v14 = wil::details::LogStringPrintf(this, v13, L"%hs!%p: ", *(const unsigned __int16 **)(a3 + 128), v12);
  }
  v15 = *(const unsigned __int16 **)(a3 + 144);
  v16 = v14;
  if ( v15 )
    v16 = wil::details::LogStringPrintf((wil::details *)v14, v11, L"(caller: %p) ", v15);
  LODWORD(Arguments) = v9;
  nSize[0] = GetCurrentThreadId();
  LODWORD(lpBuffera) = *(_DWORD *)(a3 + 68);
  v17 = wil::details::LogStringPrintf(
          (wil::details *)v16,
          v11,
          L"%hs(%d) tid(%x) %08X %ws",
          (const unsigned __int16 *)v7,
          lpBuffera,
          *(_QWORD *)nSize,
          Arguments,
          Buffer);
  if ( *(_QWORD *)(a3 + 24) || *(_QWORD *)(a3 + 72) || *(_QWORD *)(a3 + 48) )
  {
    v19 = wil::details::LogStringPrintf((wil::details *)v17, v11, L"    ", v18);
    v20 = *(const unsigned __int16 **)(a3 + 24);
    if ( v20 )
      v19 = wil::details::LogStringPrintf((wil::details *)v19, v11, L"Msg:[%ws] ", v20);
    v21 = *(const unsigned __int16 **)(a3 + 72);
    if ( v21 )
      v19 = wil::details::LogStringPrintf((wil::details *)v19, v11, L"CallContext:[%hs] ", v21);
    v22 = *(const unsigned __int16 **)(a3 + 48);
    if ( *(_QWORD *)(a3 + 40) )
    {
      wil::details::LogStringPrintf((wil::details *)v19, v11, L"[%hs(%hs)]\n", v22, *(_QWORD *)(a3 + 40));
    }
    else if ( v22 )
    {
      wil::details::LogStringPrintf((wil::details *)v19, v11, L"[%hs]\n", v22);
    }
    else
    {
      wil::details::LogStringPrintf((wil::details *)v19, v11, L"\n", 0LL);
    }
  }
  return 0LL;
}
