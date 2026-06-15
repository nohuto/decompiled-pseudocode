/*
 * XREFs of ?CallDestructors@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@CAXPEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@_K@Z @ 0x18004373C
 * Callers:
 *     ??1?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAA@XZ @ 0x180042F40 (--1-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAccessAce@CDa.c)
 *     ?RemoveAllAces@CDacl@ATL@@UEAAXXZ @ 0x180044AE0 (-RemoveAllAces@CDacl@ATL@@UEAAXXZ.c)
 *     ?RemoveAt@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAAX_K0@Z @ 0x180044B48 (-RemoveAt@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAccess.c)
 * Callees:
 *     ?Free@?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ @ 0x180015228 (-Free@-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::CallDestructors(
        __int64 (__fastcall ****a1)(_QWORD, __int64),
        __int64 a2)
{
  __int64 v2; // rdi
  __int64 result; // rax

  if ( a2 )
  {
    v2 = a2;
    do
    {
      result = ATL::CAutoPtr<ATL::CDacl::CAccessAce>::Free(a1++);
      --v2;
    }
    while ( v2 );
  }
  return result;
}
