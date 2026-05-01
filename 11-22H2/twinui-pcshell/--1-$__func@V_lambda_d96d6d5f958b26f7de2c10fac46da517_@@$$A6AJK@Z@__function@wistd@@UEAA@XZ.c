/*
 * XREFs of ??1?$__func@V_lambda_d96d6d5f958b26f7de2c10fac46da517_@@$$A6AJK@Z@__function@wistd@@UEAA@XZ @ 0x18021E99C
 * Callers:
 *     ??_G?$__func@V_lambda_d96d6d5f958b26f7de2c10fac46da517_@@$$A6AJK@Z@__function@wistd@@UEAAPEAXI@Z @ 0x18021E9F0 (--_G-$__func@V_lambda_d96d6d5f958b26f7de2c10fac46da517_@@$$A6AJK@Z@__function@wistd@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall wistd::__function::__func<_lambda_d96d6d5f958b26f7de2c10fac46da517_,long (unsigned long)>::~__func<_lambda_d96d6d5f958b26f7de2c10fac46da517_,long (unsigned long)>(
        _QWORD *a1)
{
  __int64 v2; // rcx
  void **result; // rax

  v2 = a1[1];
  if ( v2 )
  {
    a1[1] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  result = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  *a1 = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  return result;
}
