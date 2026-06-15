/*
 * XREFs of ?RemoveAllAces@CDacl@ATL@@UEAAXXZ @ 0x180044AE0
 * Callers:
 *     ??1CDacl@ATL@@UEAA@XZ @ 0x180043070 (--1CDacl@ATL@@UEAA@XZ.c)
 * Callees:
 *     ?CallDestructors@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@CAXPEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@_K@Z @ 0x18004373C (-CallDestructors@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@V.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CDacl::RemoveAllAces(ATL::CDacl *this)
{
  __int64 (__fastcall ****v2)(_QWORD, __int64); // rcx

  v2 = (__int64 (__fastcall ****)(_QWORD, __int64))*((_QWORD *)this + 3);
  if ( v2 )
  {
    ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::CallDestructors(
      v2,
      *((_QWORD *)this + 4));
    free(*((void **)this + 3));
    *((_QWORD *)this + 3) = 0LL;
  }
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  free(*((void **)this + 1));
  *((_QWORD *)this + 1) = 0LL;
}
