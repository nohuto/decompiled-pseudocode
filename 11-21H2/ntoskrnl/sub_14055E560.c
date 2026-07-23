/*
 * XREFs of sub_14055E560 @ 0x14055E560
 * Callers:
 *     sub_14093D4CC @ 0x14093D4CC (sub_14093D4CC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405F3D28 @ 0x1405F3D28 (sub_1405F3D28.c)
 */

__int64 __fastcall sub_14055E560(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 *a5)
{
  unsigned __int64 v5; // rbx
  int v8; // r14d
  int v9; // r10d
  int v10; // ecx
  unsigned int v12; // [rsp+50h] [rbp-38h] BYREF
  __int64 v13; // [rsp+58h] [rbp-30h] BYREF

  v5 = 0LL;
  v8 = a1;
  v9 = -1073741823;
  if ( byte_140C4EFD4 )
  {
    if ( !a1
      || !a3 && a4
      || (v10 = dword_140C4F004, a2 % (unsigned int)dword_140C4F004)
      || a2 < (unsigned int)dword_140C4F004 )
    {
      v9 = -1073741811;
    }
    else if ( a4 >= a2 )
    {
      v12 = 0;
      v13 = 0LL;
      if ( a2 )
      {
        do
        {
          v9 = sub_1405F3D28((_DWORD)hKey, v8 + (int)v5, v10, 0, (__int64)&v13, 8, a3 + v5, v10, (__int64)&v12, 0);
          if ( v9 < 0 )
            break;
          v5 += v12;
          v10 = dword_140C4F004;
          if ( v12 != dword_140C4F004 )
          {
            v9 = -1073741823;
            break;
          }
        }
        while ( v5 < a2 );
      }
    }
    else
    {
      v5 = a2;
      v9 = -2147483643;
    }
  }
  else
  {
    v9 = -1073741808;
  }
  if ( a5 )
    *a5 = v5;
  return (unsigned int)v9;
}
