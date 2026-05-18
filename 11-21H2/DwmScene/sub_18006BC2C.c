/*
 * XREFs of sub_18006BC2C @ 0x18006BC2C
 * Callers:
 *     sub_1800716B0 @ 0x1800716B0 (sub_1800716B0.c)
 *     sub_1800A77CC @ 0x1800A77CC (sub_1800A77CC.c)
 *     sub_1800B6DE4 @ 0x1800B6DE4 (sub_1800B6DE4.c)
 * Callees:
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 */

_QWORD *__fastcall sub_18006BC2C(char *a1, char *a2, _QWORD *a3)
{
  _QWORD *v3; // rbx
  signed __int64 v4; // rax
  __int64 v5; // rcx

  v3 = a3;
  if ( a1 != a2 )
  {
    v4 = a1 - (char *)a3;
    do
    {
      *v3 = 0LL;
      v3[1] = 0LL;
      v5 = *(_QWORD *)((char *)v3 + v4 + 8);
      if ( v5 )
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      *v3 = *(_QWORD *)((char *)v3 + v4);
      v3[1] = *(_QWORD *)((char *)v3 + v4 + 8);
      v3 += 2;
    }
    while ( (char *)v3 + v4 != a2 );
  }
  sub_1800126E8((__int64)v3, (__int64)v3);
  return v3;
}
