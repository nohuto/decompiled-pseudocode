/*
 * XREFs of sub_1800DE890 @ 0x1800DE890
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001F750 @ 0x18001F750 (sub_18001F750.c)
 *     sub_1800DD780 @ 0x1800DD780 (sub_1800DD780.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800DE890(_QWORD **a1, __int64 a2)
{
  __int64 *v4; // rbx
  __int64 **v5; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 v9[4]; // [rsp+38h] [rbp-20h] BYREF

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v4 = (__int64 *)*a1[18];
  while ( !*((_BYTE *)v4 + 25) )
  {
    ((void (__fastcall *)(_QWORD **, __int64 *, __int64 *))(*a1)[25])(a1, v9, v4 + 4);
    sub_1800DD780((char **)a2, *(char **)(a2 + 8), v9[0], v9[1]);
    sub_18001F750((__int64)v9);
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
