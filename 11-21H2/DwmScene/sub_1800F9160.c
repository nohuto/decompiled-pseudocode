/*
 * XREFs of sub_1800F9160 @ 0x1800F9160
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18001FF34 @ 0x18001FF34 (sub_18001FF34.c)
 *     sub_1800F7DC4 @ 0x1800F7DC4 (sub_1800F7DC4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800F9160(_QWORD **a1, __int64 a2)
{
  __int64 *v4; // rbx
  __int64 **v5; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  char *v9; // [rsp+38h] [rbp-20h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]
  __int64 v11; // [rsp+48h] [rbp-10h]

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v4 = (__int64 *)*a1[18];
  while ( !*((_BYTE *)v4 + 25) )
  {
    ((void (__fastcall *)(_QWORD **, char **, __int64 *))(*a1)[25])(a1, &v9, v4 + 4);
    sub_1800F7DC4((__int64 *)a2, *(char **)(a2 + 8), (__int64)v9, v10);
    if ( v9 )
    {
      sub_18001FF34((__int64)v9, v10);
      sub_180010884(v9, (v11 - (_QWORD)v9) & 0xFFFFFFFFFFFFFFE0uLL);
    }
    v5 = (__int64 **)v4[2];
    if ( *((_BYTE *)v5 + 25) )
    {
      for ( i = (__int64 *)v4[1]; !*((_BYTE *)i + 25) && v4 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v4 = i;
      v4 = i;
    }
    else
    {
      v4 = (__int64 *)v4[2];
      for ( j = *v5; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v4 = j;
    }
  }
  return a2;
}
