/*
 * XREFs of sub_180087388 @ 0x180087388
 * Callers:
 *     sub_180060610 @ 0x180060610 (sub_180060610.c)
 * Callees:
 *     sub_180054CC0 @ 0x180054CC0 (sub_180054CC0.c)
 *     sub_180088600 @ 0x180088600 (sub_180088600.c)
 *     sub_18008C360 @ 0x18008C360 (sub_18008C360.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180087388(_QWORD *a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 result; // rax
  _QWORD *v9; // rsi
  _QWORD *v10; // rbx
  unsigned int v11; // [rsp+38h] [rbp+10h] BYREF

  if ( a1[6] )
    ((void (*)(void))sub_180088600)();
  v4 = a1[8];
  if ( v4 )
    sub_180088600(v4, a2);
  v5 = a1[10];
  if ( v5 )
    sub_180088600(v5, a2);
  v6 = a1[12];
  if ( v6 )
    sub_180088600(v6, a2);
  v7 = a1[22];
  if ( v7 )
    sub_18008C360(v7, a2);
  v11 = a2;
  result = sub_180054CC0(a1 + 60, &v11);
  v9 = a1 + 48;
  v10 = a1 + 60;
  while ( v9 != v10 )
  {
    if ( *v9 )
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v9 + 24LL))(*v9, a2);
    v9 += 2;
  }
  return result;
}
