/*
 * XREFs of ?Free@?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ @ 0x180015418
 * Callers:
 *     ?PrepareAcesForACL@CDacl@ATL@@EEBAXXZ @ 0x18000E3E0 (-PrepareAcesForACL@CDacl@ATL@@EEBAXXZ.c)
 *     ??1?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAA@XZ @ 0x18001631C (--1-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x180044838 (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 *     ?CallDestructors@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@CAXPEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@_K@Z @ 0x180044BCC (-CallDestructors@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@V.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x180044D20 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CAutoPtr<ATL::CDacl::CAccessAce>::Free(__int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v2)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    result = (**v2)(v2, 1LL);
  *a1 = 0LL;
  return result;
}
