/*
 * XREFs of ?RemoveAt@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAAX_K0@Z @ 0x1800CEEA4
 * Callers:
 *     ?RemoveAce@CDacl@ATL@@UEAAXI@Z @ 0x1800CEE90 (-RemoveAce@CDacl@ATL@@UEAAXI@Z.c)
 * Callees:
 *     ?CallDestructors@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@CAXPEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@_K@Z @ 0x18006504C (-CallDestructors@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@V.c)
 *     _invalid_parameter_noinfo @ 0x180067992 (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x1800759E8 (memmove_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE814 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::RemoveAt(
        __int64 *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v5; // rbp
  __int64 result; // rax
  unsigned __int64 v7; // rbp
  const void *v8; // rdx
  void *v9; // rcx

  v2 = a2 + 1;
  if ( a2 + 1 < a2 )
    goto LABEL_8;
  if ( a2 == -1LL )
    goto LABEL_8;
  v5 = a1[1];
  if ( v2 > v5 )
    goto LABEL_8;
  result = ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::CallDestructors(
             (__int64 (__fastcall ****)(_QWORD, __int64))(*a1 + 8 * a2),
             1LL);
  v7 = v5 - v2;
  if ( v7 )
  {
    result = *a1;
    v8 = (const void *)(*a1 + 8 * v2);
    v9 = (void *)(*a1 + 8 * a2);
    if ( 8 * v7 )
    {
      if ( v9 && v8 )
      {
        result = (__int64)memmove_0(v9, v8, 8 * v7);
        goto LABEL_11;
      }
      *(_DWORD *)_o__errno(v9) = 22;
      invalid_parameter_noinfo();
LABEL_8:
      ATL::AtlThrowImpl(-2147024809);
    }
  }
LABEL_11:
  --a1[1];
  return result;
}
