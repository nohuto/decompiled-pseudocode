/*
 * XREFs of sub_1402944A4 @ 0x1402944A4
 * Callers:
 *     sub_140293320 @ 0x140293320 (sub_140293320.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402944A4(__int64 a1)
{
  _QWORD *v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 16);
  if ( v1 )
  {
    v1[1] = v1[4];
    result = v1[5];
    *v1 = result;
  }
  return result;
}
