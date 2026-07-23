/*
 * XREFs of sub_140A1AE24 @ 0x140A1AE24
 * Callers:
 *     sub_140A1B468 @ 0x140A1B468 (sub_140A1B468.c)
 * Callees:
 *     sub_1402511F0 @ 0x1402511F0 (sub_1402511F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A1AE24(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5, _BYTE *a6)
{
  wchar_t *Pool2; // rax
  wchar_t *v9; // rbx
  __int64 result; // rax
  __int64 v11; // rax

  Pool2 = (wchar_t *)ExAllocatePool2(256LL, 38LL, 1799447891LL);
  v9 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  *a6 = 1;
  if ( (int)sub_1402511F0(Pool2, 19LL, L"0x%I64X", *a1) >= 0 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( v9[v11] );
    *(_WORD *)(a2 + 2) = 38;
    *(_WORD *)a2 = 2 * v11;
    result = 0LL;
    *(_QWORD *)(a2 + 8) = v9;
  }
  else
  {
    if ( *a6 == 1 )
    {
      ExFreePoolWithTag(v9, 0);
      *a6 = 0;
    }
    return 3221225485LL;
  }
  return result;
}
