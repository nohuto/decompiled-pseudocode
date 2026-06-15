/*
 * XREFs of ?FormatV@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGPEAD@Z @ 0x18003C824
 * Callers:
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x18003C7FC (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 * Callees:
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180012AA8 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180012AF4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     vswprintf_s @ 0x1800176BC (vswprintf_s.c)
 *     _vscwprintf @ 0x180017720 (_vscwprintf.c)
 *     ?CheckImplicitLoad@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@AEAA_NPEBX@Z @ 0x18003C0B0 (-CheckImplicitLoad@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@AEAA_NPEBX@Z.c)
 *     ?GetManager@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAPEAUIAtlStringMgr@2@XZ @ 0x18003CBA0 (-GetManager@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAPEAUIAtlStringMgr@.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18003E4C4 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18003E860 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18003E898 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::FormatV(
        wchar_t *const *a1,
        const wchar_t *a2,
        va_list a3)
{
  unsigned int v6; // esi
  __int64 v7; // rbx
  __int64 Manager; // rax
  __int64 v9; // r8
  wchar_t *v10; // rbx
  wchar_t *Format; // [rsp+48h] [rbp+10h] BYREF

  if ( !a2 )
    ATL::AtlThrowImpl(-2147024809);
  v6 = vscwprintf(a2, a3);
  v7 = -1LL;
  if ( v6 == -1 )
    ATL::AtlThrowImpl(-2147024882);
  Manager = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::GetManager(a1);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&Format, Manager);
  if ( !ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CheckImplicitLoad(
          (__int64)&Format,
          (__int64)a2,
          v9) )
  {
    do
      ++v7;
    while ( a2[v7] );
    ATL::CSimpleStringT<unsigned short,0>::SetString(&Format, a2, (unsigned int)v7);
  }
  if ( (((1 - *((_DWORD *)*a1 - 2)) | (*((_DWORD *)*a1 - 3) - v6)) & 0x80000000) != 0 )
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, v6);
  v10 = Format;
  vswprintf_s(*a1, (int)(v6 + 1), Format, a3);
  ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, v6);
  ATL::CStringData::Release((ATL::CStringData *)(v10 - 12));
}
