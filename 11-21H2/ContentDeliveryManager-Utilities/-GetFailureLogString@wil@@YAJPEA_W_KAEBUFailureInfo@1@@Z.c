/*
 * XREFs of ?GetFailureLogString@wil@@YAJPEA_W_KAEBUFailureInfo@1@@Z @ 0x1800911E8
 * Callers:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEB_W_NPEA_W_KPEAD7PEAUFailureInfo@2@@Z @ 0x1800914B0 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEB_W_NPEA_W_KPEAD7P.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ @ 0x18003B2A8 (-LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::GetFailureLogString(wil *this, wchar_t *a2, __int64 a3, const struct wil::FailureInfo *a4)
{
  const char *v6; // rdi
  const char *v7; // rax
  DWORD v8; // ebp
  char *v9; // rsi
  const unsigned __int16 *v10; // r9
  __int64 v11; // rax
  const unsigned __int16 *v12; // rcx
  char *v13; // rdx
  unsigned __int16 *v14; // rax
  unsigned __int16 *v15; // r14
  const unsigned __int16 *v16; // r9
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
  *(_WORD *)this = 0;
  if ( g_pfnResultLoggingCallback )
  {
    if ( wil::details::g_resultMessageCallbackSet )
    {
      g_pfnResultLoggingCallback(a3, this, 2048LL);
      if ( *(_WORD *)this )
        return 0LL;
    }
  }
  v6 = (const char *)&word_180121FC0;
  if ( *(_DWORD *)a3 )
  {
    if ( *(_DWORD *)a3 == 1 )
    {
      v7 = "ReturnHr";
      v6 = "ReturnNt";
    }
    else
    {
      if ( *(_DWORD *)a3 != 2 )
      {
        if ( *(_DWORD *)a3 == 3 )
          v6 = "FailFast";
        goto LABEL_16;
      }
      v7 = "LogHr";
      v6 = "LogNt";
    }
    if ( (*(_BYTE *)(a3 + 4) & 8) == 0 )
      v6 = v7;
    goto LABEL_16;
  }
  v6 = "Exception";
LABEL_16:
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
  v9 = (char *)this + 4096;
  v10 = *(const unsigned __int16 **)(a3 + 56);
  v11 = *(_QWORD *)(a3 + 136);
  v12 = *(const unsigned __int16 **)(a3 + 128);
  v13 = (char *)this + 4096;
  if ( v10 )
  {
    LODWORD(lpBuffer) = *(_DWORD *)(a3 + 64);
    v14 = wil::details::LogStringPrintf(this, v13, L"%hs(%u)\\%hs!%p: ", v10, lpBuffer, v12, v11);
  }
  else
  {
    v14 = wil::details::LogStringPrintf(this, v13, L"%hs!%p: ", v12, v11);
  }
  v15 = v14;
  v16 = *(const unsigned __int16 **)(a3 + 144);
  if ( v16 )
    v15 = wil::details::LogStringPrintf((wil::details *)v14, v9, L"(caller: %p) ", v16);
  LODWORD(Arguments) = v8;
  nSize[0] = GetCurrentThreadId();
  LODWORD(lpBuffera) = *(_DWORD *)(a3 + 68);
  v17 = wil::details::LogStringPrintf(
          (wil::details *)v15,
          v9,
          L"%hs(%d) tid(%x) %08X %ws",
          (const unsigned __int16 *)v6,
          lpBuffera,
          *(_QWORD *)nSize,
          Arguments,
          Buffer);
  if ( *(_QWORD *)(a3 + 24) || *(_QWORD *)(a3 + 72) || *(_QWORD *)(a3 + 48) )
  {
    v19 = wil::details::LogStringPrintf((wil::details *)v17, v9, L"    ", v18);
    v20 = *(const unsigned __int16 **)(a3 + 24);
    if ( v20 )
      v19 = wil::details::LogStringPrintf((wil::details *)v19, v9, L"Msg:[%ws] ", v20);
    v21 = *(const unsigned __int16 **)(a3 + 72);
    if ( v21 )
      v19 = wil::details::LogStringPrintf((wil::details *)v19, v9, L"CallContext:[%hs] ", v21);
    v22 = *(const unsigned __int16 **)(a3 + 48);
    if ( *(_QWORD *)(a3 + 40) )
    {
      wil::details::LogStringPrintf((wil::details *)v19, v9, L"[%hs(%hs)]\n", v22, *(_QWORD *)(a3 + 40));
    }
    else if ( v22 )
    {
      wil::details::LogStringPrintf((wil::details *)v19, v9, L"[%hs]\n", v22);
    }
    else
    {
      wil::details::LogStringPrintf((wil::details *)v19, v9, L"\n", 0LL);
    }
  }
  return 0LL;
}
