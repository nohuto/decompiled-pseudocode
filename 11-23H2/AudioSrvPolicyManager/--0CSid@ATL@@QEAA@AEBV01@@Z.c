/*
 * XREFs of ??0CSid@ATL@@QEAA@AEBV01@@Z @ 0x180042E6C
 * Callers:
 *     ??0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z @ 0x180042CE8 (--0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z.c)
 * Callees:
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x180012934 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180012AF4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x180015E20 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z @ 0x180040F10 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ?IsValid@CSid@ATL@@QEBA_NXZ @ 0x1800447BC (-IsValid@CSid@ATL@@QEBA_NXZ.c)
 */

// Hidden C++ exception states: #wind=4
ATL::CSid *__fastcall ATL::CSid::CSid(ATL::CSid *this, const struct ATL::CSid *a2)
{
  DWORD LengthSid; // eax
  signed int Error; // eax

  *(_QWORD *)this = &ATL::CSid::`vftable';
  *((_BYTE *)this + 76) = *((_BYTE *)a2 + 76);
  *((_DWORD *)this + 20) = *((_DWORD *)a2 + 20);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    (_QWORD *)this + 11,
    (_QWORD *)a2 + 11);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    (_QWORD *)this + 12,
    (_QWORD *)a2 + 12);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    (_QWORD *)this + 13,
    (_QWORD *)a2 + 13);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>((_QWORD *)this + 14);
  if ( *((_BYTE *)a2 + 76) )
  {
    if ( !ATL::CSid::IsValid(a2) )
      ATL::AtlThrowImpl(-2147024809);
    LengthSid = GetLengthSid((char *)a2 + 8);
    if ( !CopySid(LengthSid, (char *)this + 8, (char *)a2 + 8) )
    {
      Error = ATL::AtlHresultFromLastError();
      ATL::AtlThrowImpl(Error);
    }
  }
  return this;
}
