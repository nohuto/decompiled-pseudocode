/*
 * XREFs of ??1CStreamConnectionManagerImpl@@QEAA@XZ @ 0x18012BD4C
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VCStreamConnectionManagerImpl@@@std@@EEAAXXZ @ 0x18012F8F0 (-_Destroy@-$_Ref_count_obj2@VCStreamConnectionManagerImpl@@@std@@EEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CStreamConnectionManagerImpl::~CStreamConnectionManagerImpl(CStreamConnectionManagerImpl *this)
{
  __int64 v1; // rcx

  *(_QWORD *)this = &CStreamConnectionManagerImpl::`vftable';
  v1 = *((_QWORD *)this + 1);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
