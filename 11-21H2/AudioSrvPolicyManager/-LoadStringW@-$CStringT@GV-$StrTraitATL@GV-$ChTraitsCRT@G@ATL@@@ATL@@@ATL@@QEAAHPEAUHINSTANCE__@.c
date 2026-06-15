/*
 * XREFs of ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x18003614C
 * Callers:
 *     ?CheckImplicitLoad@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@AEAA_NPEBX@Z @ 0x180033A60 (-CheckImplicitLoad@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@AEAA_NPEBX@Z.c)
 * Callees:
 *     _o_wmemcpy_s_0 @ 0x1800034AC (_o_wmemcpy_s_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000958C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180036FCC (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?_AtlGetStringResourceImage@ATL@@YAPEBUATLSTRINGRESOURCEIMAGE@1@PEAUHINSTANCE__@@PEAUHRSRC__@@I@Z @ 0x1800376FC (-_AtlGetStringResourceImage@ATL@@YAPEBUATLSTRINGRESOURCEIMAGE@1@PEAUHINSTANCE__@@PEAUHRSRC__@@I@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
        wchar_t **a1,
        HMODULE a2,
        unsigned int a3)
{
  HRSRC Resource; // rax
  const struct ATL::ATLSTRINGRESOURCEIMAGE *StringResourceImage; // rax
  const struct ATL::ATLSTRINGRESOURCEIMAGE *v8; // rsi
  __int64 v9; // rbx
  wchar_t *v10; // r10
  unsigned __int16 v11; // dx
  errno_t v12; // eax

  Resource = FindResourceExW(a2, (LPCWSTR)6, (LPCWSTR)(unsigned __int16)((a3 >> 4) + 1), 0);
  if ( !Resource )
    return 0LL;
  StringResourceImage = ATL::_AtlGetStringResourceImage(a2, Resource, a3);
  v8 = StringResourceImage;
  if ( !StringResourceImage )
    return 0LL;
  v9 = *(unsigned __int16 *)StringResourceImage;
  v10 = *a1;
  v11 = *(_WORD *)StringResourceImage;
  if ( ((1 - *((_DWORD *)*a1 - 2)) | (*((_DWORD *)*a1 - 3) - (int)v9)) < 0 )
  {
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, *(unsigned __int16 *)StringResourceImage);
    v10 = *a1;
    v11 = *(_WORD *)v8;
  }
  v12 = o_wmemcpy_s_0(v10, (int)v9, (const wchar_t *)v8 + 1, v11);
  if ( v12 )
  {
    if ( v12 == 12 )
      ATL::AtlThrowImpl(-2147024882);
    if ( v12 == 22 || v12 == 34 )
      ATL::AtlThrowImpl(-2147024809);
    if ( v12 != 80 )
      ATL::AtlThrowImpl(-2147467259);
  }
  if ( (int)v9 > *((_DWORD *)*a1 - 3) )
    ATL::AtlThrowImpl(-2147024809);
  *((_DWORD *)*a1 - 4) = v9;
  (*a1)[v9] = 0;
  return 1LL;
}
