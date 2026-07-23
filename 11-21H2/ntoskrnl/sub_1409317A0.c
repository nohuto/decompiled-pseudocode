/*
 * XREFs of sub_1409317A0 @ 0x1409317A0
 * Callers:
 *     sub_1409B3D44 @ 0x1409B3D44 (sub_1409B3D44.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     sub_1403A0EB4 @ 0x1403A0EB4 (sub_1403A0EB4.c)
 *     sub_1403A0F08 @ 0x1403A0F08 (sub_1403A0F08.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14054FF30 @ 0x14054FF30 (sub_14054FF30.c)
 *     sub_140931900 @ 0x140931900 (sub_140931900.c)
 */

__int64 __fastcall sub_1409317A0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        struct _MDL *a6,
        ULONG a7,
        unsigned __int8 a8,
        _QWORD *a9)
{
  __int64 result; // rax
  int v14; // ebx
  __int64 v15; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v16[10]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v17[14]; // [rsp+90h] [rbp-70h] BYREF

  v15 = 0LL;
  memset(v17, 0, 0x68uLL);
  memset(v16, 0, 0x48uLL);
  if ( !*(_QWORD *)(a2 + 992) )
  {
    result = sub_140931900(a2, a3, &v15);
    if ( (int)result < 0 )
      return result;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 992), v15, 0LL) )
      sub_14054FF30(v15);
  }
  if ( !a7 || (result = sub_1403A0F08((__int64)v16, a6, a7, 0, 0), (int)result >= 0) )
  {
    v17[1] = *(_QWORD *)(a2 + 992);
    v17[3] = a5;
    v17[5] = v16[0];
    v17[6] = v16[7];
    v17[7] = a8;
    v17[2] = a4;
    v17[4] = a1;
    v14 = sub_140358A20(2u, 46, 0, (__int64)v17);
    if ( v16[0] )
      sub_1403A0EB4(v16);
    if ( v14 >= 0 )
      *a9 = v17[2];
    return (unsigned int)v14;
  }
  return result;
}
