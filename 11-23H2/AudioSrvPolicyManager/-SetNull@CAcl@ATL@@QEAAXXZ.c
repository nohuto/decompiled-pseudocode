/*
 * XREFs of ?SetNull@CAcl@ATL@@QEAAXXZ @ 0x1800450D8
 * Callers:
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x180043890 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ?GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z @ 0x18004450C (-GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ATL::CAcl::SetNull(ATL::CAcl *this)
{
  (*(void (__fastcall **)(ATL::CAcl *))(*(_QWORD *)this + 16LL))(this);
  *((_BYTE *)this + 16) = 1;
}
