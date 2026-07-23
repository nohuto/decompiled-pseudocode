/*
 * XREFs of sub_1406F0F04 @ 0x1406F0F04
 * Callers:
 *     sub_1406F0C9C @ 0x1406F0C9C (sub_1406F0C9C.c)
 * Callees:
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406F0F04(_WORD *a1, wchar_t **a2, _BYTE *a3)
{
  __int64 v4; // rax
  _WORD *v5; // rbx
  int v6; // eax
  unsigned int v7; // eax
  const wchar_t *v8; // rsi
  int v9; // ecx
  __int64 v10; // rbp
  wchar_t *Pool2; // rax
  wchar_t *v12; // rdi
  __int64 result; // rax

  *a3 = 0;
  v4 = -1LL;
  v5 = a1;
  do
    ++v4;
  while ( a1[v4] );
  v6 = 2 * v4;
  if ( !v6 )
    return 3221225523LL;
  v7 = v6 + 2;
  if ( v7 > 0xA )
  {
    if ( *a1 != 92 )
      goto LABEL_6;
    if ( a1[1] == 92 && a1[2] == 63 && a1[3] == 92 )
    {
      v7 -= 8;
      v5 = a1 + 4;
    }
  }
  if ( *v5 == 92 && v5[1] == 92 )
  {
    v8 = L"\\??\\UNC\\";
    *a3 = 1;
    v5 += 2;
    v9 = 12;
    goto LABEL_7;
  }
LABEL_6:
  v8 = L"\\DosDevices\\";
  v9 = 24;
LABEL_7:
  v10 = v9 + v7;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, v10, 1350005829LL);
  v12 = Pool2;
  if ( Pool2 )
  {
    result = sub_1402E1280(Pool2, (unsigned int)v10, L"%ws%ws", v8, v5);
    if ( !(_DWORD)result )
    {
      *a2 = v12;
      return result;
    }
    ExFreePoolWithTag(v12, 0);
    result = 3221225485LL;
  }
  else
  {
    result = 3221225495LL;
  }
  *a2 = 0LL;
  return result;
}
