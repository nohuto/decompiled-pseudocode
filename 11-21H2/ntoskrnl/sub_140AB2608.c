/*
 * XREFs of sub_140AB2608 @ 0x140AB2608
 * Callers:
 *     sub_140AB28B8 @ 0x140AB28B8 (sub_140AB28B8.c)
 * Callees:
 *     sub_140AB2008 @ 0x140AB2008 (sub_140AB2008.c)
 *     sub_140AB2168 @ 0x140AB2168 (sub_140AB2168.c)
 *     sub_140AB2254 @ 0x140AB2254 (sub_140AB2254.c)
 *     sub_140AB3214 @ 0x140AB3214 (sub_140AB3214.c)
 */

__int64 __fastcall sub_140AB2608(__int64 a1, __int64 a2, int *a3)
{
  __int64 result; // rax
  char v7[8]; // [rsp+40h] [rbp-28h] BYREF
  volatile void *v8; // [rsp+48h] [rbp-20h] BYREF
  _QWORD v9[3]; // [rsp+50h] [rbp-18h] BYREF
  char v10; // [rsp+88h] [rbp+20h] BYREF

  v8 = 0LL;
  v7[0] = 0;
  v10 = 0;
  result = sub_140AB2168(a1, a2, a3);
  if ( (int)result >= 0 )
  {
    result = sub_140AB3214(a1, a2, a3);
    if ( (int)result >= 0 )
    {
      if ( a2 )
      {
        sub_140AB2254(a1, a2, (__int64 *)&v8, v7, &v10);
        v9[0] = *(_QWORD *)(a1 + 32);
        return sub_140AB2008(a2, v9, v8, v7[0], v10, *(_BYTE *)(a1 + 1) >> 3, 1);
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}
