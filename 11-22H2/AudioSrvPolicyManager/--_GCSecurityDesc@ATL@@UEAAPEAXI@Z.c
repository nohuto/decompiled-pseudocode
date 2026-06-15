/*
 * XREFs of ??_GCSecurityDesc@ATL@@UEAAPEAXI@Z @ 0x180044730
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016E18 (--3@YAXPEAX_K@Z.c)
 *     ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x180044C10 (-Clear@CSecurityDesc@ATL@@MEAAXXZ.c)
 */

ATL::CSecurityDesc *__fastcall ATL::CSecurityDesc::`scalar deleting destructor'(ATL::CSecurityDesc *this, char a2)
{
  *(_QWORD *)this = &ATL::CSecurityDesc::`vftable';
  ATL::CSecurityDesc::Clear(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
