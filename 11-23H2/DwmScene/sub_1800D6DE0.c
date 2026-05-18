/*
 * XREFs of sub_1800D6DE0 @ 0x1800D6DE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_1800566F0 @ 0x1800566F0 (sub_1800566F0.c)
 */

_QWORD *__fastcall sub_1800D6DE0(__int64 a1, _QWORD *a2, int a3)
{
  int v4; // r8d
  int v5; // r8d
  __int64 *v6; // rcx
  char v7; // di
  __int64 v8; // rax
  bool v9; // zf
  __int64 *v10; // rcx
  char v11; // di
  __int64 v12; // rax
  __int64 *v13; // rcx
  char v14; // di
  __int64 v15; // rax
  char v17; // [rsp+20h] [rbp-20h] BYREF
  __int64 v18; // [rsp+28h] [rbp-18h]
  __int64 v19; // [rsp+30h] [rbp-10h] BYREF
  __int64 v20; // [rsp+38h] [rbp-8h]

  v4 = a3 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
      {
        *a2 = 0LL;
        a2[1] = 0LL;
        return a2;
      }
      if ( *(_QWORD *)(a1 + 192) )
      {
        v6 = sub_1800566F0(*(_QWORD *)(a1 + 192), &v19, *(_DWORD *)(a1 + 88));
        v7 = 4;
        v8 = *v6;
      }
      else
      {
        v18 = 0LL;
        v6 = (__int64 *)&v17;
        v8 = 0LL;
        v7 = 8;
      }
      *a2 = v8;
      a2[1] = v6[1];
      *v6 = 0LL;
      v6[1] = 0LL;
      if ( (v7 & 8) != 0 )
      {
        v7 &= ~8u;
        if ( v18 )
          sub_180010530(v18);
      }
      v9 = (v7 & 4) == 0;
    }
    else
    {
      if ( *(_QWORD *)(a1 + 176) )
      {
        v10 = sub_1800566F0(*(_QWORD *)(a1 + 176), &v19, *(_DWORD *)(a1 + 88));
        v11 = 16;
        v12 = *v10;
      }
      else
      {
        v18 = 0LL;
        v10 = (__int64 *)&v17;
        v12 = 0LL;
        v11 = 32;
      }
      *a2 = v12;
      a2[1] = v10[1];
      *v10 = 0LL;
      v10[1] = 0LL;
      if ( (v11 & 0x20) != 0 )
      {
        v11 &= ~0x20u;
        if ( v18 )
          sub_180010530(v18);
      }
      v9 = (v11 & 0x10) == 0;
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 144) )
    {
      v13 = sub_1800566F0(*(_QWORD *)(a1 + 144), &v19, *(_DWORD *)(a1 + 88));
      v14 = 1;
      v15 = *v13;
    }
    else
    {
      v18 = 0LL;
      v13 = (__int64 *)&v17;
      v15 = 0LL;
      v14 = 2;
    }
    *a2 = v15;
    a2[1] = v13[1];
    *v13 = 0LL;
    v13[1] = 0LL;
    if ( (v14 & 2) != 0 )
    {
      v14 &= ~2u;
      if ( v18 )
        sub_180010530(v18);
    }
    v9 = (v14 & 1) == 0;
  }
  if ( !v9 && v20 )
    sub_180010530(v20);
  return a2;
}
