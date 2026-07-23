/*
 * XREFs of sub_14054F578 @ 0x14054F578
 * Callers:
 *     ExAllocatePool3 @ 0x140A6E1B0 (ExAllocatePool3.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     sub_1403A0EB4 @ 0x1403A0EB4 (sub_1403A0EB4.c)
 *     sub_1403A0F08 @ 0x1403A0F08 (sub_1403A0F08.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14054F578(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        struct _MDL *a4,
        __int64 a5,
        unsigned int a6,
        _QWORD *a7)
{
  int v11; // ebx
  __int64 *v13[10]; // [rsp+30h] [rbp-B1h] BYREF
  _QWORD v14[14]; // [rsp+80h] [rbp-61h] BYREF

  memset(v14, 0, 0x68uLL);
  memset(v13, 0, 0x48uLL);
  v14[5] = a5;
  v14[1] = a1;
  v14[2] = a3;
  v14[6] = __PAIR64__(a6, a2);
  v11 = sub_1403A0F08((__int64)v13, a4, a3, 0, 0);
  if ( v11 >= 0 )
  {
    v14[3] = v13[0];
    v14[4] = v13[7];
    v11 = sub_140358A20(2u, 81, 0, (__int64)v14);
    if ( v11 >= 0 )
      *a7 = v14[2];
  }
  if ( v13[0] )
    sub_1403A0EB4(v13);
  return (unsigned int)v11;
}
