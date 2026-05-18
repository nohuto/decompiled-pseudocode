/*
 * XREFs of sub_1800A1940 @ 0x1800A1940
 * Callers:
 *     sub_1800A07A8 @ 0x1800A07A8 (sub_1800A07A8.c)
 *     sub_1800A085C @ 0x1800A085C (sub_1800A085C.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180017058 @ 0x180017058 (sub_180017058.c)
 *     sub_1800A0984 @ 0x1800A0984 (sub_1800A0984.c)
 *     sub_1800A09F0 @ 0x1800A09F0 (sub_1800A09F0.c)
 */

__int64 __fastcall sub_1800A1940(_QWORD *a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rax
  char *v7; // r14
  void *v8; // rax
  void *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 result; // rax
  void *v13; // rcx

  v1 = a1[2];
  v3 = 1LL;
  if ( v1 )
    v3 = v1;
  while ( 1 )
  {
    v4 = v3 - v1;
    if ( v3 != v1 && v3 >= 8 )
      break;
    if ( 0xFFFFFFFFFFFFFFFLL - v3 < v3 )
      std::_Xlength_error("deque<T> too long");
    v3 *= 2LL;
  }
  v5 = a1[3] >> 1;
  v6 = sub_180017058(v3);
  v7 = (char *)sub_18001090C(v6);
  v8 = (void *)sub_1800A09F0((void *)(a1[1] + 8 * v5), a1[1] + 8LL * a1[2], &v7[8 * v5]);
  v9 = (void *)a1[1];
  if ( v5 > v4 )
  {
    sub_1800A09F0(v9, (__int64)v9 + 8 * v4, v8);
    v11 = sub_1800A09F0((void *)(a1[1] + 8 * v4), a1[1] + 8 * v5, v7);
    v5 = v4;
  }
  else
  {
    v10 = sub_1800A09F0(v9, (__int64)v9 + 8 * v5, v8);
    sub_1800A0984(v10, v4 - v5);
    v11 = (__int64)v7;
  }
  result = sub_1800A0984(v11, v5);
  v13 = (void *)a1[1];
  if ( v13 )
    result = sub_1800100E8(v13, 8LL * a1[2]);
  a1[1] = v7;
  a1[2] += v4;
  return result;
}
