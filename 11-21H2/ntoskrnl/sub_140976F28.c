/*
 * XREFs of sub_140976F28 @ 0x140976F28
 * Callers:
 *     sub_140974020 @ 0x140974020 (sub_140974020.c)
 * Callees:
 *     sub_1406B79C8 @ 0x1406B79C8 (sub_1406B79C8.c)
 *     sub_14097F0F0 @ 0x14097F0F0 (sub_14097F0F0.c)
 */

__int64 __fastcall sub_140976F28(ULONG_PTR a1, ULONG_PTR a2, int a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx

  result = sub_1406B79C8(a2, a1, 0xFFFFFFFF, 0LL, a3 | 0x40000000u, 12, 1);
  if ( (int)result >= 0 )
  {
    v10 = *(_QWORD *)(a1 + 96);
    result = sub_14097F0F0(v10, v7, v8, v9);
    if ( (int)result >= 0 )
    {
      *a4 = *(_QWORD *)(v10 + 56);
      return 0LL;
    }
  }
  return result;
}
