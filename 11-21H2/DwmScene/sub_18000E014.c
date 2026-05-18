/*
 * XREFs of sub_18000E014 @ 0x18000E014
 * Callers:
 *     sub_18000CDC0 @ 0x18000CDC0 (sub_18000CDC0.c)
 *     sub_18000D060 @ 0x18000D060 (sub_18000D060.c)
 *     sub_18000E9F8 @ 0x18000E9F8 (sub_18000E9F8.c)
 *     sub_180010510 @ 0x180010510 (sub_180010510.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000ED38 @ 0x18000ED38 (sub_18000ED38.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000E014(_WORD *a1, __int64 a2, __int64 a3)
{
  const char *v6; // rsi
  const char *v7; // rax
  DWORD v8; // ebp
  _WORD *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r9
  LPWSTR lpBuffer; // [rsp+20h] [rbp-258h]
  DWORD nSize[2]; // [rsp+28h] [rbp-250h]
  va_list *Arguments; // [rsp+30h] [rbp-248h]
  WCHAR Buffer[256]; // [rsp+40h] [rbp-238h] BYREF

  if ( !a2 )
    return 0LL;
  if ( !a1 )
    return 0LL;
  *a1 = 0;
  if ( qword_1801F7370 )
  {
    if ( byte_1801F7388 )
    {
      qword_1801F7370(a3, a1, a2);
      if ( *a1 )
        return 0LL;
    }
  }
  v6 = (const char *)&unk_180128042;
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
        goto LABEL_17;
      }
      v7 = "LogHr";
      v6 = "LogNt";
    }
    if ( (*(_BYTE *)(a3 + 4) & 8) == 0 )
      v6 = v7;
    goto LABEL_17;
  }
  v6 = "Exception";
LABEL_17:
  Buffer[0] = 0;
  if ( (*(_BYTE *)(a3 + 4) & 8) != 0 )
  {
    v8 = *(_DWORD *)(a3 + 12);
    if ( qword_1801F7398 )
      qword_1801F7398(v8, Buffer, 256LL);
  }
  else
  {
    v8 = *(_DWORD *)(a3 + 8);
    FormatMessageW(0x1200u, 0LL, v8, 0x400u, Buffer, 0x100u, 0LL);
  }
  v9 = &a1[a2];
  if ( *(_QWORD *)(a3 + 56) )
  {
    HIDWORD(Arguments) = HIDWORD(*(_QWORD *)(a3 + 136));
    nSize[1] = HIDWORD(*(_QWORD *)(a3 + 128));
    v10 = sub_18000ED38(a1, v9, L"%hs(%u)\\%hs!%p: ");
  }
  else
  {
    v10 = sub_18000ED38(a1, v9, L"%hs!%p: ", *(_QWORD *)(a3 + 128), *(_QWORD *)(a3 + 136));
  }
  v11 = v10;
  if ( *(_QWORD *)(a3 + 144) )
    v11 = sub_18000ED38(v10, v9, L"(caller: %p) ");
  LODWORD(Arguments) = v8;
  nSize[0] = GetCurrentThreadId();
  LODWORD(lpBuffer) = *(_DWORD *)(a3 + 68);
  v12 = sub_18000ED38(v11, v9, L"%hs(%d) tid(%x) %08X %ws", v6, lpBuffer, *(_QWORD *)nSize, Arguments, Buffer);
  if ( *(_QWORD *)(a3 + 24) || *(_QWORD *)(a3 + 72) || *(_QWORD *)(a3 + 48) )
  {
    v13 = sub_18000ED38(v12, v9, L"    ");
    if ( *(_QWORD *)(a3 + 24) )
      v13 = sub_18000ED38(v13, v9, L"Msg:[%ws] ");
    if ( *(_QWORD *)(a3 + 72) )
      v13 = sub_18000ED38(v13, v9, L"CallContext:[%hs] ");
    v14 = *(_QWORD *)(a3 + 48);
    if ( *(_QWORD *)(a3 + 40) )
    {
      sub_18000ED38(v13, v9, L"[%hs(%hs)]\n", v14, *(_QWORD *)(a3 + 40));
    }
    else if ( v14 )
    {
      sub_18000ED38(v13, v9, L"[%hs]\n");
    }
    else
    {
      sub_18000ED38(v13, v9, L"\n");
    }
  }
  return 0LL;
}
