/*
 * XREFs of sub_14093212C @ 0x14093212C
 * Callers:
 *     sub_1409B314C @ 0x1409B314C (sub_1409B314C.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     sub_1403A0EB4 @ 0x1403A0EB4 (sub_1403A0EB4.c)
 *     sub_1403A0F08 @ 0x1403A0F08 (sub_1403A0F08.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14093212C(__int64 a1, void *a2, unsigned int a3, _DWORD *a4)
{
  __int64 result; // rax
  int v9; // ebx
  unsigned int v10; // eax
  __int64 *v11[10]; // [rsp+40h] [rbp-10E8h] BYREF
  _QWORD v12[14]; // [rsp+90h] [rbp-1098h] BYREF
  struct _MDL Src[85]; // [rsp+100h] [rbp-1028h] BYREF

  memset(v12, 0, 0x68uLL);
  memset(v11, 0, 0x48uLL);
  result = sub_1403A0F08((__int64)v11, Src, 0x1000u, 1, 0);
  if ( (int)result >= 0 )
  {
    v12[1] = *(_QWORD *)(a1 + 992);
    v12[2] = v11[0];
    v12[3] = v11[7];
    v9 = sub_140358A20(2u, 18, 0, (__int64)v12);
    sub_1403A0EB4(v11);
    if ( v9 >= 0 )
    {
      v10 = v12[2];
      *a4 = v12[2];
      if ( v10 <= a3 )
      {
        if ( a2 )
          memmove(a2, Src, v10);
      }
      else
      {
        return (unsigned int)-1073741789;
      }
    }
    return (unsigned int)v9;
  }
  return result;
}
