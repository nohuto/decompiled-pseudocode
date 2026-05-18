/*
 * XREFs of sub_180035B90 @ 0x180035B90
 * Callers:
 *     sub_180032AE4 @ 0x180032AE4 (sub_180032AE4.c)
 * Callees:
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     sub_18002B418 @ 0x18002B418 (sub_18002B418.c)
 *     sub_18002E6B4 @ 0x18002E6B4 (sub_18002E6B4.c)
 *     sub_180038610 @ 0x180038610 (sub_180038610.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180035B90(__int64 a1)
{
  char *v2; // r8
  __int64 v3; // rbx
  _QWORD *v4; // rsi
  _QWORD *v5; // rdi
  char *v6; // r9
  __int64 v7; // rax
  __int64 v8; // r9
  _QWORD *v9; // rcx
  __int64 v10; // rax
  char *v11; // rax
  _BYTE v13[16]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v14; // [rsp+30h] [rbp-20h] BYREF
  char *v15; // [rsp+40h] [rbp-10h]

  sub_18002A0C4(a1 + 312, (__int64)v13);
  v14 = 0LL;
  v2 = 0LL;
  v15 = 0LL;
  v3 = a1 + 288;
  v4 = *(_QWORD **)(v3 + 8);
  v5 = *(_QWORD **)v3;
  v6 = 0LL;
  while ( v5 != v4 )
  {
    v7 = v5[1];
    if ( v7 && *(_DWORD *)(v7 + 8) )
    {
      if ( v6 == v2 )
      {
        sub_18002E6B4((char **)&v14, v6, v5);
        v2 = v15;
        v6 = (char *)*((_QWORD *)&v14 + 1);
      }
      else
      {
        sub_18002B418(v6, v5);
        v6 = (char *)(v8 + 16);
        *((_QWORD *)&v14 + 1) = v6;
      }
    }
    v5 += 2;
  }
  if ( (__int128 *)v3 != &v14 )
  {
    v9 = *(_QWORD **)v3;
    *(_QWORD *)v3 = v14;
    *(_QWORD *)&v14 = v9;
    v10 = *(_QWORD *)(v3 + 8);
    *(_QWORD *)(v3 + 8) = v6;
    *((_QWORD *)&v14 + 1) = v10;
    v11 = *(char **)(v3 + 16);
    *(_QWORD *)(v3 + 16) = v2;
    v15 = v11;
  }
  sub_180038610(&v14);
  return sub_180010F54((__int64)v13);
}
