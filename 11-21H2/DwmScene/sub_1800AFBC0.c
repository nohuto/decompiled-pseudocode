/*
 * XREFs of sub_1800AFBC0 @ 0x1800AFBC0
 * Callers:
 *     sub_1800B1AC0 @ 0x1800B1AC0 (sub_1800B1AC0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_1800AFBC0(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v3; // rsi
  __int64 v4; // r15
  __int64 result; // rax
  __int64 *v6; // r14
  __int64 v7; // r13
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD v11[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = 0;
  *(_BYTE *)(a1 + 4620) = 1;
  v3 = a1 + 8;
  v4 = -8 - a1;
  do
  {
    result = *(unsigned int *)(a1 + 4616);
    if ( _bittest((const int *)&result, v1) )
    {
      v6 = (__int64 *)(v3 + 8);
      v7 = 16LL;
      v8 = -v4 - a1;
      do
      {
        v9 = v6[384];
        if ( v9 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
          v9 = v6[384];
        }
        v11[0] = *(__int64 *)((char *)v6 + v8 - 16);
        *(__int64 *)((char *)v6 + v8 - 16) = *(__int64 *)((char *)v6 + -a1 - v4 + 3056);
        v10 = *v6;
        *v6 = v9;
        v11[1] = v10;
        result = sub_180010910((__int64)v11);
        v6 += 2;
        --v7;
      }
      while ( v7 );
    }
    ++v1;
    v3 += 256LL;
  }
  while ( v1 < 6 );
  return result;
}
