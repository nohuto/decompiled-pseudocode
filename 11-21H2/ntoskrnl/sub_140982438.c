/*
 * XREFs of sub_140982438 @ 0x140982438
 * Callers:
 *     sub_1407DE5F0 @ 0x1407DE5F0 (sub_1407DE5F0.c)
 * Callees:
 *     sub_1407F8CF0 @ 0x1407F8CF0 (sub_1407F8CF0.c)
 */

__int64 __fastcall sub_140982438(ULONG_PTR **a1, __int64 a2, __int64 a3, KPROCESSOR_MODE a4)
{
  ULONG_PTR *v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  v5 = *a1;
  if ( (*(_DWORD *)(a2 + 8) & 1) != 0 && v5 != &StartContext )
    return 3221225711LL;
  result = sub_1407F8CF0((__int64)v5, *(void **)a3, *(_DWORD *)(a3 + 8), 0LL, a4, &v7);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(a2 + 16) = v7;
    return 0LL;
  }
  return result;
}
