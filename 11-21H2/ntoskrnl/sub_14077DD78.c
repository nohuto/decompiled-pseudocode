/*
 * XREFs of sub_14077DD78 @ 0x14077DD78
 * Callers:
 *     sub_14077DBE8 @ 0x14077DBE8 (sub_14077DBE8.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14077DE44 @ 0x14077DE44 (sub_14077DE44.c)
 */

__int64 __fastcall sub_14077DD78(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        __int64 a10,
        int a11)
{
  __int64 result; // rax
  _QWORD v15[7]; // [rsp+30h] [rbp-50h] BYREF
  int v16; // [rsp+68h] [rbp-18h]
  int v17; // [rsp+6Ch] [rbp-14h]
  __int64 v18; // [rsp+70h] [rbp-10h]
  int v19; // [rsp+78h] [rbp-8h]
  int v20; // [rsp+7Ch] [rbp-4h]

  v15[0] = 0LL;
  v17 = 0;
  v20 = 0;
  result = sub_14077DE44(a1, a3, v15);
  if ( (int)result >= 0 )
  {
    if ( v15[0] )
    {
      v15[3] = a5;
      v15[4] = a6;
      v15[5] = a7;
      v16 = a9;
      v15[6] = a8;
      v18 = a10;
      v19 = a11;
      v15[2] = a4;
      return sub_14042A5E0(a1, a2);
    }
    else
    {
      return 3221225474LL;
    }
  }
  return result;
}
