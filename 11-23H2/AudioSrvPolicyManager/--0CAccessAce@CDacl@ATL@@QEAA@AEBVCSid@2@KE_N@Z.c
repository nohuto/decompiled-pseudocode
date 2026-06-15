/*
 * XREFs of ??0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z @ 0x180042CE8
 * Callers:
 *     ??0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z @ 0x180042D58 (--0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z.c)
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x1800433A8 (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x180043890 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 * Callees:
 *     ??0CSid@ATL@@QEAA@AEBV01@@Z @ 0x180042E6C (--0CSid@ATL@@QEAA@AEBV01@@Z.c)
 */

ATL::CDacl::CAccessAce *__fastcall ATL::CDacl::CAccessAce::CAccessAce(
        ATL::CDacl::CAccessAce *this,
        const struct ATL::CSid *a2,
        int a3,
        char a4,
        bool a5)
{
  ATL::CDacl::CAccessAce *result; // rax

  *(_QWORD *)this = &ATL::CAcl::CAce::`vftable';
  ATL::CSid::CSid((ATL::CDacl::CAccessAce *)((char *)this + 8), a2);
  *((_QWORD *)this + 17) = 0LL;
  *(_QWORD *)this = &ATL::CDacl::CAccessAce::`vftable';
  *((_BYTE *)this + 144) = a5;
  result = this;
  *((_DWORD *)this + 32) = a3;
  *((_BYTE *)this + 132) = a4;
  return result;
}
