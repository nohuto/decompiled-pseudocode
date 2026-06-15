/*
 * XREFs of ?Copy@CSid@ATL@@AEAAXAEBU_SID@@@Z @ 0x180012990
 * Callers:
 *     ??4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z @ 0x18000E690 (--4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180012B04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x180016010 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 */

void __fastcall ATL::CSid::Copy(ATL::CSid *this, struct _SID *a2)
{
  DWORD LengthSid; // eax
  int Error; // eax

  if ( !IsValidSid(a2) || (LengthSid = GetLengthSid(a2), LengthSid > 0x44) )
    ATL::AtlThrowImpl(-2147024809);
  *((_BYTE *)this + 76) = 1;
  if ( !CopySid(LengthSid, (char *)this + 8, a2) )
  {
    Error = ATL::AtlHresultFromLastError();
    *((_BYTE *)this + 76) = 0;
    ATL::AtlThrowImpl(Error);
  }
}
