/*
 * XREFs of sub_1800B0EA8 @ 0x1800B0EA8
 * Callers:
 *     sub_1800B0CB8 @ 0x1800B0CB8 (sub_1800B0CB8.c)
 *     sub_1800B1040 @ 0x1800B1040 (sub_1800B1040.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_1800B0EA8(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  __int64 v5; // rbp
  __int64 v6; // r8
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (_QWORD *)(a1 + 8);
  v3 = a2 - a1;
  v5 = 8LL;
  do
  {
    v6 = *(_QWORD *)((char *)v2 + v3);
    if ( v6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
      v6 = *(_QWORD *)((char *)v2 + v3);
    }
    v8[0] = *(v2 - 1);
    *(v2 - 1) = *(_QWORD *)((char *)v2 + v3 - 8);
    v8[1] = *v2;
    *v2 = v6;
    sub_180010910((__int64)v8);
    v2 += 2;
    --v5;
  }
  while ( v5 );
  return a1;
}
