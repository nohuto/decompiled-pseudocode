/*
 * XREFs of sub_180056888 @ 0x180056888
 * Callers:
 *     sub_180035810 @ 0x180035810 (sub_180035810.c)
 * Callees:
 *     sub_180068BC0 @ 0x180068BC0 (sub_180068BC0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall sub_180056888(__int64 a1, unsigned int a2)
{
  __int64 *j; // rbx
  __int64 **v5; // rax
  __int64 *i; // rax
  __int64 *v7; // rcx
  __int64 *m; // rbx
  __int64 v9; // rcx
  __int64 **v10; // rax
  __int64 *k; // rax
  __int64 *v12; // rcx

  j = **(__int64 ***)(a1 + 18560);
  while ( !*((_BYTE *)j + 25) )
  {
    sub_180068BC0(j[8], a2);
    v5 = (__int64 **)j[2];
    if ( *((_BYTE *)v5 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v7 = *v5;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v7 + 25); v7 = (__int64 *)*v7 )
        j = v7;
    }
  }
  m = **(__int64 ***)(a1 + 18576);
  while ( !*((_BYTE *)m + 25) )
  {
    v9 = m[11];
    if ( v9 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 24LL))(v9, a2);
    v10 = (__int64 **)m[2];
    if ( *((_BYTE *)v10 + 25) )
    {
      for ( k = (__int64 *)m[1]; !*((_BYTE *)k + 25) && m == (__int64 *)k[2]; k = (__int64 *)k[1] )
        m = k;
      m = k;
    }
    else
    {
      v12 = *v10;
      for ( m = (__int64 *)m[2]; !*((_BYTE *)v12 + 25); v12 = (__int64 *)*v12 )
        m = v12;
    }
  }
}
