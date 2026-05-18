/*
 * XREFs of sub_1800CC518 @ 0x1800CC518
 * Callers:
 *     sub_1800CE190 @ 0x1800CE190 (sub_1800CE190.c)
 * Callees:
 *     sub_180055714 @ 0x180055714 (sub_180055714.c)
 *     sub_180056AE8 @ 0x180056AE8 (sub_180056AE8.c)
 */

void __fastcall sub_1800CC518(__int64 *a1, unsigned __int64 a2, _OWORD **a3, _QWORD *a4)
{
  _OWORD *v7; // rcx
  _OWORD *v8; // rax
  _OWORD *i; // rdx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    sub_180056AE8(a1, a2);
    v7 = (_OWORD *)*a4;
    v8 = (_OWORD *)*a1;
    for ( i = *a3; i != v7; i += 2 )
    {
      *v8 = *i;
      v8[1] = i[1];
      v8 += 2;
    }
    v10 = 0LL;
    a1[1] = (__int64)v8;
    sub_180055714(&v10);
  }
}
