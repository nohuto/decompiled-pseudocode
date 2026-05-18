/*
 * XREFs of sub_1800DAC1C @ 0x1800DAC1C
 * Callers:
 *     sub_1800DD668 @ 0x1800DD668 (sub_1800DD668.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_1800DAC1C(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rdi
  int v3; // eax
  __int64 *v4; // rbx
  __int64 **v5; // rax
  __int64 *i; // rax
  __int64 *j; // rcx

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 4168);
  v3 = Mtx_lock((_Mtx_t)(a1 + 4168));
  if ( v3 )
    std::_Throw_C_error(v3);
  v4 = **(__int64 ***)(a1 + 4152);
  while ( !*((_BYTE *)v4 + 25) )
  {
    (**(void (__fastcall ***)(__int64, _QWORD))v4[4])(v4[4], *(unsigned int *)(a1 + 4248));
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
  return Mtx_unlock(v2);
}
