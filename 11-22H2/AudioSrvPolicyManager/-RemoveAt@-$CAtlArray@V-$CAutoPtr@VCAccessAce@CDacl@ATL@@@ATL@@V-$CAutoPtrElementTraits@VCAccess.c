/*
 * XREFs of ?RemoveAt@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAAX_K0@Z @ 0x180045FD8
 * Callers:
 *     ?RemoveAce@CDacl@ATL@@UEAAXI@Z @ 0x180045F50 (-RemoveAce@CDacl@ATL@@UEAAXI@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180012B04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?memmove_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x18002BA5C (-memmove_s@Checked@ATL@@YAXPEAX_KPEBX1@Z.c)
 *     ?CallDestructors@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@CAXPEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@_K@Z @ 0x180044BCC (-CallDestructors@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@V.c)
 */

void __fastcall ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::RemoveAt(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rbp

  v2 = a2 + 1;
  if ( a2 + 1 < a2 || a2 == -1LL || (v5 = a1[1], v2 > v5) )
    ATL::AtlThrowImpl(-2147024809);
  ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::CallDestructors(
    (__int64 (__fastcall ****)(_QWORD, __int64))(*a1 + 8 * a2),
    1LL);
  v6 = v5 - v2;
  if ( v6 )
    ATL::Checked::memmove_s(
      (ATL::Checked *)(*a1 + 8 * a2),
      (void *)(8 * v6),
      (const void *)(*a1 + 8 * v2),
      (void *)(8 * v6));
  --a1[1];
}
