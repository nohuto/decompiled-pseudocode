/*
 * XREFs of ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x180016010
 * Callers:
 *     ?MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ @ 0x18000B720 (-MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x18000DDC0 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 *     ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x1800127B0 (--0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ.c)
 *     ?Copy@CSid@ATL@@AEAAXAEBU_SID@@@Z @ 0x180012990 (-Copy@CSid@ATL@@AEAAXAEBU_SID@@@Z.c)
 *     ??0CSid@ATL@@QEAA@AEBV01@@Z @ 0x1800442FC (--0CSid@ATL@@QEAA@AEBV01@@Z.c)
 *     ?Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z @ 0x180045B28 (-Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z.c)
 *     ?MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ @ 0x180045C7C (-MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x180046344 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 * Callees:
 *     <none>
 */

signed int ATL::AtlHresultFromLastError(void)
{
  signed int result; // eax

  result = GetLastError();
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
