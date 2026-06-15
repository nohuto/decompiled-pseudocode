/*
 * XREFs of ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x180015E20
 * Callers:
 *     ?MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ @ 0x18000B6D0 (-MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x18000DD70 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 *     ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x1800127A0 (--0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ.c)
 *     ?Copy@CSid@ATL@@AEAAXAEBU_SID@@@Z @ 0x180012980 (-Copy@CSid@ATL@@AEAAXAEBU_SID@@@Z.c)
 *     ??0CSid@ATL@@QEAA@AEBV01@@Z @ 0x180042E6C (--0CSid@ATL@@QEAA@AEBV01@@Z.c)
 *     ?Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z @ 0x180044698 (-Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z.c)
 *     ?MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ @ 0x1800447EC (-MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x180044EB4 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
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
