/*
 * XREFs of sub_140A1D308 @ 0x140A1D308
 * Callers:
 *     sub_140A1CF34 @ 0x140A1CF34 (sub_140A1CF34.c)
 * Callees:
 *     sub_1408036C8 @ 0x1408036C8 (sub_1408036C8.c)
 *     sub_1408123B4 @ 0x1408123B4 (sub_1408123B4.c)
 *     sub_1408132F0 @ 0x1408132F0 (sub_1408132F0.c)
 */

__int64 __fastcall sub_140A1D308(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  bool v5; // [rsp+50h] [rbp+18h] BYREF
  void *v6; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0LL;
  result = sub_1408036C8(a1, L"Description", 0x20019u, 1u, &v6, &v5);
  if ( (int)result >= 0 )
  {
    sub_1408132F0(v6);
    return sub_1408123B4(a1, L"Type", (__int64)L"Description", 4u, (PVOID)(a2 + 4), 4u);
  }
  return result;
}
