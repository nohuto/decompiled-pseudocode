/*
 * XREFs of sub_1800DACF8 @ 0x1800DACF8
 * Callers:
 *     sub_1800DD668 @ 0x1800DD668 (sub_1800DD668.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1800DACF8(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rdi
  int v3; // eax
  char v4; // si
  __int64 *v5; // rbx
  __int64 **v6; // rax
  __int64 *i; // rax
  __int64 *j; // rcx

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 4168);
  v3 = Mtx_lock((_Mtx_t)(a1 + 4168));
  if ( v3 )
    std::_Throw_C_error(v3);
  v4 = 0;
  v5 = **(__int64 ***)(a1 + 4136);
  while ( !*((_BYTE *)v5 + 25) )
  {
    if ( v4 || (**(unsigned __int8 (__fastcall ***)(__int64))v5[4])(v5[4]) )
      v4 = 1;
    v6 = (__int64 **)v5[2];
    if ( *((_BYTE *)v6 + 25) )
    {
      for ( i = (__int64 *)v5[1]; !*((_BYTE *)i + 25) && v5 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v5 = i;
      v5 = i;
    }
    else
    {
      v5 = (__int64 *)v5[2];
      for ( j = *v6; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v5 = j;
    }
  }
  Mtx_unlock(v2);
  return v4;
}
