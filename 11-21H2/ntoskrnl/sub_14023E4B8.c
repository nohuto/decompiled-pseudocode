/*
 * XREFs of sub_14023E4B8 @ 0x14023E4B8
 * Callers:
 *     sub_1402A8980 @ 0x1402A8980 (sub_1402A8980.c)
 * Callees:
 *     sub_14029F5C0 @ 0x14029F5C0 (sub_14029F5C0.c)
 */

signed __int16 __fastcall sub_14023E4B8(__int16 *a1, __int16 a2, __int64 a3)
{
  __int64 v3; // r11
  signed __int16 result; // ax
  __int16 v6; // tt
  __int16 *v7; // r10
  __int16 v8; // tt
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0;
  v3 = a3;
  _m_prefetchw(a1);
  v6 = *a1;
  result = _InterlockedCompareExchange16(a1, (a2 | *a1) & 0xFFFE, *a1);
  if ( v6 != result )
  {
    do
    {
      sub_14029F5C0(&v9);
      _m_prefetchw(v7);
      v8 = *v7;
      result = _InterlockedCompareExchange16(v7, (a2 | *v7) & 0xFFFE, *v7);
    }
    while ( v8 != result );
  }
  *(_QWORD *)(v3 + 32) = 0LL;
  return result;
}
