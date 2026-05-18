/*
 * XREFs of sub_18008C3B4 @ 0x18008C3B4
 * Callers:
 *     sub_1800D3410 @ 0x1800D3410 (sub_1800D3410.c)
 * Callees:
 *     sub_180085F38 @ 0x180085F38 (sub_180085F38.c)
 */

_QWORD *__fastcall sub_18008C3B4(__int64 a1, _QWORD *a2, unsigned int a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  _QWORD *result; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+40h] [rbp+18h] BYREF

  v3 = (_QWORD *)(a1 + 144);
  v11 = a3;
  sub_180085F38((__int64 *)(a1 + 144), (__int64)&v10, &v11);
  v5 = v10;
  v6 = 0LL;
  a2[1] = 0LL;
  if ( v5 == *v3 )
  {
    v8 = 0LL;
  }
  else
  {
    v7 = *(_QWORD *)(v5 + 48);
    *a2 = 0LL;
    if ( v7 )
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v6 = *(_QWORD *)(v5 + 48);
    v8 = *(_QWORD *)(v5 + 40);
  }
  *a2 = v8;
  result = a2;
  a2[1] = v6;
  return result;
}
