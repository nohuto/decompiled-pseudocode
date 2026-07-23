/*
 * XREFs of sub_14054F814 @ 0x14054F814
 * Callers:
 *     sub_14054AC34 @ 0x14054AC34 (sub_14054AC34.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14054FC7C @ 0x14054FC7C (sub_14054FC7C.c)
 *     sub_14054FDF0 @ 0x14054FDF0 (sub_14054FDF0.c)
 *     sub_14054FE7C @ 0x14054FE7C (sub_14054FE7C.c)
 */

__int64 __fastcall sub_14054F814(
        PVOID *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  int v12; // ebx
  unsigned int v13; // edi
  _BYTE v15[112]; // [rsp+40h] [rbp-C8h] BYREF

  v12 = sub_14054FDF0(a2, a3, a4);
  if ( v12 >= 0 )
  {
    v13 = a3 + a2;
    if ( v13 )
    {
      do
      {
        v12 = sub_14054FC7C(*a1);
        if ( v12 < 0 )
          goto LABEL_6;
        ++a1;
      }
      while ( --v13 );
    }
    v12 = sub_14054FE7C(a5, a6, a7, a8, a9);
    if ( v12 < 0 )
    {
LABEL_6:
      memset(v15, 0, 0x68uLL);
      sub_140358A20(2u, 60, 0, (__int64)v15);
    }
  }
  return (unsigned int)v12;
}
