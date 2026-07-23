/*
 * XREFs of sub_14032A750 @ 0x14032A750
 * Callers:
 *     sub_1407BE280 @ 0x1407BE280 (sub_1407BE280.c)
 *     sub_14097BD88 @ 0x14097BD88 (sub_14097BD88.c)
 * Callees:
 *     sub_1409AFD2C @ 0x1409AFD2C (sub_1409AFD2C.c)
 */

__int64 __fastcall sub_14032A750(_QWORD *a1, unsigned __int64 a2)
{
  signed __int64 v2; // r8
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rdx
  signed __int64 v7; // rax
  unsigned __int64 v8; // r8

  if ( a1[200] )
  {
    v2 = a1[201];
    while ( 1 )
    {
      v7 = v2;
      v8 = a2 + v2;
      if ( v8 > a1[200] )
        break;
      v2 = _InterlockedCompareExchange64(a1 + 201, v8, v7);
      if ( v7 == v2 )
        goto LABEL_3;
    }
    if ( a1[162] )
      sub_1409AFD2C();
    return 0LL;
  }
  else
  {
    v2 = _InterlockedExchangeAdd64(a1 + 201, a2);
LABEL_3:
    v3 = a1[202];
    v4 = a2 + v2;
    do
    {
      v5 = v3;
      if ( v4 <= v3 )
        break;
      v3 = _InterlockedCompareExchange64(a1 + 202, v4, v3);
    }
    while ( v3 != v5 );
    return 1LL;
  }
}
