/*
 * XREFs of ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18003E898
 * Callers:
 *     ?FormatV@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGPEAD@Z @ 0x18003C824 (-FormatV@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGPEAD@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x180040F3C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180012AF4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x180017592 (_invalid_parameter_noinfo.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x18003C69C (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18003E4C4 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18003E860 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     memcpy_0 @ 0x18004768C (memcpy_0.c)
 *     memmove_0 @ 0x180047698 (memmove_0.c)
 */

void __fastcall ATL::CSimpleStringT<unsigned short,0>::SetString(const void **a1, _BYTE *a2, signed int a3)
{
  __int64 v3; // rdi
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r14
  char *v8; // rcx
  size_t v9; // r8
  char *v10; // rdx

  v3 = a3;
  if ( !a3 )
  {
    ATL::CSimpleStringT<unsigned short,0>::Empty(a1);
    return;
  }
  if ( !a2 )
    ATL::AtlThrowImpl(-2147024809);
  v6 = (a2 - (_BYTE *)*a1) >> 1;
  v7 = *((unsigned int *)*a1 - 4);
  if ( ((*((_DWORD *)*a1 - 3) - a3) | (1 - *((_DWORD *)*a1 - 2))) < 0 )
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, a3);
  v8 = (char *)*a1;
  v9 = 2 * v3;
  if ( v6 > v7 )
  {
    if ( !v9 )
      goto LABEL_16;
    if ( v8 )
    {
      memcpy_0(v8, a2, v9);
      goto LABEL_16;
    }
    goto LABEL_14;
  }
  v10 = &v8[2 * v6];
  if ( v9 )
  {
    if ( v8 && v10 )
    {
      memmove_0(v8, v10, v9);
      goto LABEL_16;
    }
LABEL_14:
    *(_DWORD *)_o__errno(v8) = 22;
    invalid_parameter_noinfo();
  }
LABEL_16:
  ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)a1, v3);
}
