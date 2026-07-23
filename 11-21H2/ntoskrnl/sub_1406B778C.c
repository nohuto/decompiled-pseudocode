/*
 * XREFs of sub_1406B778C @ 0x1406B778C
 * Callers:
 *     sub_1407AB790 @ 0x1407AB790 (sub_1407AB790.c)
 * Callees:
 *     sub_1407A817C @ 0x1407A817C (sub_1407A817C.c)
 */

__int64 __fastcall sub_1406B778C(void *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // [rsp+78h] [rbp+20h]

  v5 = *(_DWORD *)(a2 + 8);
  result = sub_1407A817C(a1, a3);
  if ( (int)result >= 0 )
    *(_DWORD *)(a2 + 8) = v5;
  return result;
}
