/*
 * XREFs of sub_18000DF94 @ 0x18000DF94
 * Callers:
 *     sub_18000C370 @ 0x18000C370 (sub_18000C370.c)
 *     sub_18000C640 @ 0x18000C640 (sub_18000C640.c)
 *     sub_18000EC08 @ 0x18000EC08 (sub_18000EC08.c)
 * Callees:
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 *     sub_18000EF74 @ 0x18000EF74 (sub_18000EF74.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000DF94(_WORD *a1, __int64 a2, __int64 a3)
{
  void (__fastcall *v6)(__int64, _WORD *, __int64); // rax
  const char *v7; // rsi
  const char *v8; // rax
  DWORD v9; // ebp
  _WORD *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r9
  LPWSTR lpBuffer; // [rsp+20h] [rbp-258h]
  DWORD nSize[2]; // [rsp+28h] [rbp-250h]
  va_list *Arguments; // [rsp+30h] [rbp-248h]
  WCHAR Buffer[256]; // [rsp+40h] [rbp-238h] BYREF

  if ( !a2 )
    return 0LL;
  if ( !a1 )
    return 0LL;
  v6 = (void (__fastcall *)(__int64, _WORD *, __int64))qword_180032D48;
  *a1 = 0;
  if ( v6 )
  {
    if ( byte_180032D51 )
    {
      v6(a3, a1, a2);
      if ( *a1 )
        return 0LL;
    }
  }
  v7 = (const char *)&unk_1800266D0;
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
        goto LABEL_17;
      }
      v8 = "LogHr";
      v7 = "LogNt";
    }
    if ( (*(_BYTE *)(a3 + 4) & 8) == 0 )
      v7 = v8;
    goto LABEL_17;
  }
  v7 = "Exception";
LABEL_17:
  Buffer[0] = 0;
  if ( (*(_BYTE *)(a3 + 4) & 8) != 0 )
  {
    v9 = *(_DWORD *)(a3 + 12);
    if ( qword_180032920 )
      qword_180032920(v9, Buffer, 256LL);
  }
  else
  {
    v9 = *(_DWORD *)(a3 + 8);
    FormatMessageW(0x1200u, 0LL, v9, 0x400u, Buffer, 0x100u, 0LL);
  }
  v10 = &a1[a2];
  if ( *(_QWORD *)(a3 + 56) )
  {
    HIDWORD(Arguments) = HIDWORD(*(_QWORD *)(a3 + 136));
    nSize[1] = HIDWORD(*(_QWORD *)(a3 + 128));
    v11 = sub_18000EF74(a1, v10, L"%hs(%u)\\%hs!%p: ");
  }
  else
  {
    v11 = sub_18000EF74(a1, v10, L"%hs!%p: ", *(_QWORD *)(a3 + 128), *(_QWORD *)(a3 + 136));
  }
  v12 = v11;
  if ( *(_QWORD *)(a3 + 144) )
    v12 = sub_18000EF74(v11, v10, L"(caller: %p) ");
  LODWORD(Arguments) = v9;
  nSize[0] = GetCurrentThreadId();
  LODWORD(lpBuffer) = *(_DWORD *)(a3 + 68);
  v13 = sub_18000EF74(v12, v10, L"%hs(%d) tid(%x) %08X %ws", v7, lpBuffer, *(_QWORD *)nSize, Arguments, Buffer);
  if ( *(_QWORD *)(a3 + 24) || *(_QWORD *)(a3 + 72) || *(_QWORD *)(a3 + 48) )
  {
    v14 = sub_18000EF74(v13, v10, L"    ");
    if ( *(_QWORD *)(a3 + 24) )
      v14 = sub_18000EF74(v14, v10, L"Msg:[%ws] ");
    if ( *(_QWORD *)(a3 + 72) )
      v14 = sub_18000EF74(v14, v10, L"CallContext:[%hs] ");
    v15 = *(_QWORD *)(a3 + 48);
    if ( *(_QWORD *)(a3 + 40) )
    {
      sub_18000EF74(v14, v10, L"[%hs(%hs)]\n", v15, *(_QWORD *)(a3 + 40));
    }
    else if ( v15 )
    {
      sub_18000EF74(v14, v10, L"[%hs]\n");
    }
    else
    {
      sub_18000EF74(v14, v10, L"\n");
    }
  }
  return 0LL;
}
