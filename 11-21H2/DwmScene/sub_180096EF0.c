/*
 * XREFs of sub_180096EF0 @ 0x180096EF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_180029948 @ 0x180029948 (sub_180029948.c)
 *     sub_18002BA14 @ 0x18002BA14 (sub_18002BA14.c)
 *     sub_18002BAD0 @ 0x18002BAD0 (sub_18002BAD0.c)
 *     sub_180039EBC @ 0x180039EBC (sub_180039EBC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int8 __fastcall sub_180096EF0(_QWORD *a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rdi
  char *v4; // r14
  char *v5; // rbx
  unsigned __int8 result; // al
  __int64 v7; // rax
  __int64 v8; // rdi
  char *v9; // rbx
  char *v10; // [rsp+20h] [rbp-28h] BYREF
  char *v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]

  sub_18002BAD0((__int64)a1);
  v2 = a1[14];
  if ( !v2 || *(_DWORD *)(v2 + 24) != 2 )
  {
    v3 = (_QWORD *)a1[15];
    v4 = (char *)v3[1];
    while ( !v4[25] )
    {
      sub_180029948((__int64)(a1 + 15), (__int64)(a1 + 15), *((char **)v4 + 2));
      v5 = v4;
      v4 = *(char **)v4;
      sub_180010910((__int64)(v5 + 40));
      sub_180010884(v5, 0x38uLL);
    }
    v3[1] = v3;
    *v3 = v3;
    v3[2] = v3;
    a1[16] = 0LL;
  }
  result = sub_18002BA14((__int64)a1, 1);
  if ( result )
  {
    v7 = (*(__int64 (**)(void))(*a1 + 32LL))();
    result = (unsigned __int8)sub_180039EBC(v7, &v10);
    v8 = (__int64)v11;
    v9 = v10;
    if ( v10 != v11 )
    {
      do
      {
        result = (*(__int64 (__fastcall **)(_QWORD *, char *))(*a1 + 16LL))(a1, v9);
        v9 += 16;
      }
      while ( v9 != (char *)v8 );
      v8 = (__int64)v11;
      v9 = v10;
    }
    if ( v9 )
    {
      sub_1800126E8((__int64)v9, v8);
      return sub_180010884(v10, (v12 - (_QWORD)v10) & 0xFFFFFFFFFFFFFFF0uLL);
    }
  }
  return result;
}
