/*
 * XREFs of ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x180043710
 * Callers:
 *     ?MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ @ 0x18000B6D0 (-MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x1800127A0 (--0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x180043890 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ?MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ @ 0x1800447EC (-MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x180044EB4 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180012AF4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __noreturn ATL::AtlThrowLastWin32(void)
{
  signed int LastError; // eax

  LastError = GetLastError();
  if ( LastError > 0 )
    LastError = (unsigned __int16)LastError | 0x80070000;
  ATL::AtlThrowImpl(LastError);
}
