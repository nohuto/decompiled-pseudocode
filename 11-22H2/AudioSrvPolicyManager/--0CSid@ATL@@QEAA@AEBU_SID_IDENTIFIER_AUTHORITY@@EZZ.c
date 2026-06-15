/*
 * XREFs of ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x1800127B0
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180045290 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x180012944 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180012B04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x180016010 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     __security_check_cookie @ 0x180016790 (__security_check_cookie.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x180044BA0 (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
ATL::CSid *ATL::CSid::CSid(ATL::CSid *this, struct _SID_IDENTIFIER_AUTHORITY *a2, UCHAR a3, ...)
{
  DWORD v5; // esi
  DWORD *v6; // r14
  DWORD v7; // ebx
  DWORD LengthSid; // eax
  int Error; // eax
  _BYTE Sid[80]; // [rsp+30h] [rbp-88h] BYREF
  UCHAR v12; // [rsp+D0h] [rbp+18h] BYREF

  v12 = a3;
  *(_QWORD *)this = &ATL::CSid::`vftable';
  *((_BYTE *)this + 76) = 0;
  *((_DWORD *)this + 20) = 7;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>((char *)this + 88);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>((char *)this + 96);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>((char *)this + 104);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>((char *)this + 112);
  if ( !v12 || GetSidLengthRequired(v12) > 0x44 )
    goto LABEL_13;
  if ( !InitializeSid(Sid, a2, v12) )
    ATL::AtlThrowLastWin32();
  v5 = 0;
  if ( v12 )
  {
    v6 = (DWORD *)&v12;
    do
    {
      v6 += 2;
      v7 = *v6;
      *GetSidSubAuthority(Sid, v5++) = v7;
    }
    while ( v5 < v12 );
  }
  if ( !IsValidSid(Sid) || (LengthSid = GetLengthSid(Sid), LengthSid > 0x44) )
LABEL_13:
    ATL::AtlThrowImpl(-2147024809);
  *((_BYTE *)this + 76) = 1;
  if ( !CopySid(LengthSid, (char *)this + 8, Sid) )
  {
    Error = ATL::AtlHresultFromLastError();
    *((_BYTE *)this + 76) = 0;
    ATL::AtlThrowImpl(Error);
  }
  *((_DWORD *)this + 20) = 8;
  return this;
}
