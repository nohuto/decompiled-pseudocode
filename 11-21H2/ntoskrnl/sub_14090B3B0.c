/*
 * XREFs of sub_14090B3B0 @ 0x14090B3B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     RtlFreeRangeList @ 0x1408397E0 (RtlFreeRangeList.c)
 *     RtlInvertRangeListEx @ 0x140839EF0 (RtlInvertRangeListEx.c)
 *     RtlAddRange @ 0x14083A010 (RtlAddRange.c)
 */

__int64 __fastcall sub_14090B3B0(__int64 a1, int a2, unsigned __int8 *a3, int a4)
{
  unsigned __int8 *v6; // rdi
  unsigned __int64 v7; // rsi
  int v8; // eax
  int v9; // ecx
  int v10; // ebx
  __int64 v12; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v13[5]; // [rsp+48h] [rbp-28h] BYREF

  v13[1] = v13;
  v13[3] = 0LL;
  v13[0] = v13;
  v6 = a3;
  v12 = 0LL;
  v13[2] = 0LL;
  v7 = (unsigned __int64)&a3[20 * a2];
  if ( (unsigned __int64)a3 >= v7 )
  {
LABEL_7:
    v10 = RtlInvertRangeListEx(a4, (__int64)v13, 0, 0LL, 0LL);
    if ( v10 >= 0 )
      v10 = 0;
  }
  else
  {
    while ( 1 )
    {
      v8 = *v6;
      v9 = *(_DWORD *)(a1 + 32);
      if ( v8 == v9 || (_BYTE)v8 == 7 && v9 == 3 )
      {
        v10 = sub_14042A5E0(v6, &v12);
        if ( v10 < 0 )
          break;
      }
      v6 += 20;
      if ( (unsigned __int64)v6 >= v7 )
        goto LABEL_7;
    }
  }
  RtlFreeRangeList((__int64)v13);
  return (unsigned int)v10;
}
