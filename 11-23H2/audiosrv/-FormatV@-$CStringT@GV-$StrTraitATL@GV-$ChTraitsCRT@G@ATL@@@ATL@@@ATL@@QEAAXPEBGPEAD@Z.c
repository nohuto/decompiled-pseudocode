/*
 * XREFs of ?FormatV@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGPEAD@Z @ 0x18001C9FC
 * Callers:
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x18001C9D4 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 * Callees:
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x18001CB14 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001CD18 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180036700 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18004237C (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     vswprintf_s @ 0x180067AD8 (vswprintf_s.c)
 *     _vscwprintf @ 0x180067B3C (_vscwprintf.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE7C4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x1800DF24C (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x1800E1328 (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::FormatV(
        wchar_t *const *a1,
        const wchar_t *a2,
        va_list a3)
{
  unsigned int v6; // ebp
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int16 v10; // dx
  wchar_t *v11; // rbx
  HINSTANCE StringResourceInstance; // rax
  wchar_t *Format; // [rsp+48h] [rbp+10h] BYREF

  if ( !a2 )
    ATL::AtlThrowImpl(-2147024809);
  v6 = vscwprintf(a2, a3);
  v7 = -1LL;
  if ( v6 == -1 )
    ATL::AtlThrowImpl(-2147024882);
  v8 = *((_QWORD *)*a1 - 3);
  if ( !v8 || (v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8)) == 0 )
    v9 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 32))(&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&Format, v9);
  if ( (unsigned __int64)a2 < 0x10000 )
  {
    StringResourceInstance = ATL::AtlFindStringResourceInstance((unsigned __int16)a2, v10);
    if ( StringResourceInstance )
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
        &Format,
        StringResourceInstance,
        (unsigned __int16)a2);
  }
  else
  {
    do
      ++v7;
    while ( a2[v7] );
    ATL::CSimpleStringT<unsigned short,0>::SetString(&Format, a2, (unsigned int)v7);
  }
  if ( (((*((_DWORD *)*a1 - 3) - v6) | (1 - *((_DWORD *)*a1 - 2))) & 0x80000000) != 0 )
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, v6);
  v11 = Format;
  vswprintf_s(*a1, (int)(v6 + 1), Format, a3);
  ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, v6);
  ATL::CStringData::Release((ATL::CStringData *)(v11 - 12));
}
