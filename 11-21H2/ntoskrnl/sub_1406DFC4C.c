/*
 * XREFs of sub_1406DFC4C @ 0x1406DFC4C
 * Callers:
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 * Callees:
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     sub_1406DFD98 @ 0x1406DFD98 (sub_1406DFD98.c)
 *     sub_140768024 @ 0x140768024 (sub_140768024.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406DFC4C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // r15
  wchar_t *Pool2; // rax
  WCHAR *v14; // rsi
  int v15; // edi
  const wchar_t *v16; // rcx

  if ( a2 && a3 && a4 )
  {
    if ( *(_QWORD *)(a1 + 48) && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 42) )
      sub_140768024(a1 + 40);
    v8 = -1LL;
    v9 = -1LL;
    do
      ++v9;
    while ( *(_WORD *)(a2 + 2 * v9) );
    v10 = -1LL;
    do
      ++v10;
    while ( *(_WORD *)(a3 + 2 * v10) );
    v11 = v10 + v9;
    do
      ++v8;
    while ( *(_WORD *)(a4 + 2 * v8) );
    v12 = (unsigned int)(2 * (v8 + v11) + 6);
    Pool2 = (wchar_t *)ExAllocatePool2(64LL, v12, 1232105040LL);
    v14 = Pool2;
    if ( Pool2 )
    {
      v15 = sub_1402E1280(Pool2, (unsigned int)v12, L"%s\\%s\\%s", a2, a3, a4);
      if ( v15 >= 0 && ((v16 = *(const wchar_t **)(a1 + 48)) == 0LL || wcsicmp(v16, v14)) )
      {
        sub_1406DFD98(a1);
        RtlInitUnicodeString((PUNICODE_STRING)(a1 + 40), v14);
      }
      else
      {
        ExFreePoolWithTag(v14, 0x49706E50u);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v15;
}
