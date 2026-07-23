/*
 * XREFs of sub_14078A0E8 @ 0x14078A0E8
 * Callers:
 *     sub_140789FA0 @ 0x140789FA0 (sub_140789FA0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14077DE44 @ 0x14077DE44 (sub_14077DE44.c)
 */

__int64 __fastcall sub_14078A0E8(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int16 a8)
{
  __int64 result; // rax
  __int64 v11; // r10
  int v12; // r11d
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
  if ( a8 )
    return 3221225485LL;
  result = sub_14077DE44(a1, a2, v13);
  if ( (int)result >= 0 )
  {
    if ( v13[0] )
    {
      v13[4] = a5;
      v14 = a6;
      v16 = a7;
      v13[2] = a3;
      v13[3] = a4;
      v17 = v12;
      return sub_14042A5E0(v11, 0LL);
    }
    else
    {
      return 3221225474LL;
    }
  }
  return result;
}
