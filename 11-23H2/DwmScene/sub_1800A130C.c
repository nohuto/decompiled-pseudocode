/*
 * XREFs of sub_1800A130C @ 0x1800A130C
 * Callers:
 *     sub_1800A1424 @ 0x1800A1424 (sub_1800A1424.c)
 * Callees:
 *     sub_18002A570 @ 0x18002A570 (sub_18002A570.c)
 *     sub_18002A62C @ 0x18002A62C (sub_18002A62C.c)
 *     sub_1800A1464 @ 0x1800A1464 (sub_1800A1464.c)
 *     sub_1800A305C @ 0x1800A305C (sub_1800A305C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800A130C(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  int v6; // eax
  int v7; // eax
  int v8; // eax
  unsigned __int64 *v10; // rdx
  unsigned __int64 *v11; // r8
  unsigned __int64 *v12; // rcx
  _BYTE v13[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+28h] [rbp-10h]

  sub_18002A570(a1);
  sub_1800A1464(a1, v13, a2);
  if ( !v13[0] )
  {
    v10 = (unsigned __int64 *)(a1 + 144);
    v11 = (unsigned __int64 *)(a1 + 144);
    if ( a1 + 144 != a1 + 184 )
    {
      while ( ++v10 != (unsigned __int64 *)(a1 + 184) )
      {
        v12 = v10;
        if ( *v10 >= *v11 )
          v12 = v11;
        v11 = v12;
      }
    }
    if ( a2 < *v11 )
    {
      sub_18002A62C(a1);
      return 2LL;
    }
    goto LABEL_18;
  }
  v6 = sub_1800A305C(*(_QWORD *)(a1 + 16 * v14 + 64), a3, 0LL);
  if ( !v6 )
  {
LABEL_18:
    sub_18002A62C(a1);
    return 3LL;
  }
  v7 = v6 - 1;
  if ( v7 && (v8 = v7 - 1) != 0 )
  {
    if ( v8 == 1 )
    {
      sub_18002A62C(a1);
      return 0LL;
    }
    else
    {
      sub_18002A62C(a1);
      return 4LL;
    }
  }
  else
  {
    sub_18002A62C(a1);
    return 1LL;
  }
}
