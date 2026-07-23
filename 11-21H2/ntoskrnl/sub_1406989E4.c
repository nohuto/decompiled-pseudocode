/*
 * XREFs of sub_1406989E4 @ 0x1406989E4
 * Callers:
 *     sub_1406988E0 @ 0x1406988E0 (sub_1406988E0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14077DE44 @ 0x14077DE44 (sub_14077DE44.c)
 */

__int64 __fastcall sub_1406989E4(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        int a9)
{
  __int64 result; // rax
  _QWORD v13[5]; // [rsp+30h] [rbp-50h] BYREF
  int v14; // [rsp+58h] [rbp-28h]
  int v15; // [rsp+5Ch] [rbp-24h]
  __int64 v16; // [rsp+60h] [rbp-20h]
  int v17; // [rsp+68h] [rbp-18h]
  __int64 v18; // [rsp+6Ch] [rbp-14h]
  __int64 v19; // [rsp+74h] [rbp-Ch]
  int v20; // [rsp+7Ch] [rbp-4h]

  v13[0] = 0LL;
  v15 = 0;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0;
  result = sub_14077DE44(a1, a3, v13);
  if ( (int)result >= 0 )
  {
    if ( v13[0] )
    {
      v13[3] = a5;
      v14 = a7;
      v13[4] = a6;
      v16 = a8;
      v17 = a9;
      v13[2] = a4;
      return sub_14042A5E0(a1, a2);
    }
    else
    {
      return 3221225474LL;
    }
  }
  return result;
}
