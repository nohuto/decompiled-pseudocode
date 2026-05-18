/*
 * XREFs of sub_1800F94D4 @ 0x1800F94D4
 * Callers:
 *     sub_1800F9280 @ 0x1800F9280 (sub_1800F9280.c)
 *     sub_1800F94D4 @ 0x1800F94D4 (sub_1800F94D4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_18001FB6C @ 0x18001FB6C (sub_18001FB6C.c)
 *     sub_1800F94D4 @ 0x1800F94D4 (sub_1800F94D4.c)
 *     sub_1800FA89C @ 0x1800FA89C (sub_1800FA89C.c)
 *     sub_1800FAB6C @ 0x1800FAB6C (sub_1800FAB6C.c)
 *     sub_1800FAB78 @ 0x1800FAB78 (sub_1800FAB78.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800F94D4(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // r8
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  char **v9; // rdx
  __int64 *v10; // rax
  __int64 v11; // rax
  unsigned int v12; // ebx
  __int64 v14[4]; // [rsp+28h] [rbp-48h] BYREF
  char *v15[3]; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v16; // [rsp+60h] [rbp-10h]

  v4 = sub_1800FAB6C(a2);
  sub_18001FB6C((__int64 *)v15, L"Value", v5);
  if ( v4 )
  {
    v6 = v4 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 2;
        if ( v8 )
        {
          if ( v8 != 1 )
            goto LABEL_12;
          v9 = v15;
          if ( v16 >= 8 )
            v9 = (char **)v15[0];
          if ( (unsigned __int8)sub_1800FAB78(a2, v9) )
          {
            v10 = sub_1800129F4(v14, (__int64)v15);
            v11 = sub_1800FA89C(a2, v10);
            v12 = sub_1800F94D4(a1, v11);
            if ( v16 >= 8 )
              sub_180010884(v15[0], 2 * v16 + 2);
            return v12;
          }
          else
          {
LABEL_12:
            if ( v16 >= 8 )
              sub_180010884(v15[0], 2 * v16 + 2);
            return 0LL;
          }
        }
        else
        {
          if ( v16 >= 8 )
            sub_180010884(v15[0], 2 * v16 + 2);
          return 3LL;
        }
      }
      else
      {
        if ( v16 >= 8 )
          sub_180010884(v15[0], 2 * v16 + 2);
        return 1LL;
      }
    }
    else
    {
      if ( v16 >= 8 )
        sub_180010884(v15[0], 2 * v16 + 2);
      return 2LL;
    }
  }
  else
  {
    if ( v16 >= 8 )
      sub_180010884(v15[0], 2 * v16 + 2);
    return 4LL;
  }
}
