/*
 * XREFs of ?Destroy@SwitchItemCollection@@UEAAXXZ @ 0x180564980
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall SwitchItemCollection::Destroy(SwitchItemCollection *this)
{
  if ( *((_DWORD *)this + 52) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 32LL))(*((_QWORD *)this + 24));
    *((_DWORD *)this + 52) = 0;
  }
}
