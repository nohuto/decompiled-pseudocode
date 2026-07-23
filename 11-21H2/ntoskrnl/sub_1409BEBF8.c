/*
 * XREFs of sub_1409BEBF8 @ 0x1409BEBF8
 * Callers:
 *     RtlRunOnceBeginInitialize @ 0x14075BE60 (RtlRunOnceBeginInitialize.c)
 * Callees:
 *     sub_140217B04 @ 0x140217B04 (sub_140217B04.c)
 */

signed __int64 __fastcall sub_1409BEBF8(signed __int64 a1, volatile signed __int64 *a2)
{
  signed __int64 v3; // rax
  _QWORD v5[4]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+40h] [rbp-18h]

  v5[1] = 0LL;
  v5[2] = 0LL;
  v6 = 0LL;
  v5[3] = KeGetCurrentThread();
  do
  {
    v5[0] = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v3 = _InterlockedCompareExchange64(a2, (signed __int64)v5 + 1, a1);
    if ( a1 == v3 )
      break;
    a1 = v3;
  }
  while ( (v3 & 3) == 1 );
  if ( (a1 & 3) == 1 )
  {
    do
    {
      sub_140217B04(0, 0LL, (__int64)a2);
      a1 = *a2;
    }
    while ( (BYTE4(v6) & 4) == 0 );
  }
  return a1;
}
