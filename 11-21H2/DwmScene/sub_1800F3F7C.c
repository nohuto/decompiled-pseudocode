/*
 * XREFs of sub_1800F3F7C @ 0x1800F3F7C
 * Callers:
 *     sub_1800F4184 @ 0x1800F4184 (sub_1800F4184.c)
 *     sub_1800F424C @ 0x1800F424C (sub_1800F424C.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800F4018 @ 0x1800F4018 (sub_1800F4018.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800F3F7C(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  char *v5; // rbx
  char *v6; // rsi
  __int64 v7; // rcx

  v4 = *a1;
  v5 = *(char **)(v4 + 8);
  if ( !v5[25] )
  {
    do
    {
      sub_1800F4018(a1, a2, *((_QWORD *)v5 + 2));
      v6 = v5;
      v5 = *(char **)v5;
      v7 = *((_QWORD *)v6 + 5);
      if ( v7 )
      {
        *((_QWORD *)v6 + 5) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      sub_180010884(v6, 0x30uLL);
    }
    while ( !v5[25] );
    v4 = *a1;
  }
  return sub_180010884((char *)v4, 0x30uLL);
}
