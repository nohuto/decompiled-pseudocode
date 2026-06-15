/*
 * XREFs of ?SetEmpty@CAcl@ATL@@QEAAXXZ @ 0x180046534
 * Callers:
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x180044838 (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 *     ?GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z @ 0x18004599C (-GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ATL::CAcl::SetEmpty(ATL::CAcl *this)
{
  (*(void (__fastcall **)(ATL::CAcl *))(*(_QWORD *)this + 16LL))(this);
  *((_BYTE *)this + 16) = 0;
}
