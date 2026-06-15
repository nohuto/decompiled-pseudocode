/*
 * XREFs of ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x1400256A8
 * Callers:
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x140021774 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 * Callees:
 *     memmove_s @ 0x140021438 (memmove_s.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x14002147C (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x140026068 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _invalid_parameter_noinfo @ 0x14002913E (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x14002A5CF (memcpy_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B9DC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x14005636C (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::SetString(__int64 *a1, const void *a2, int a3)
{
  __int64 v3; // rdi
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r14
  char *v8; // rcx
  rsize_t v9; // rdx

  v3 = a3;
  if ( !a3 )
    return ATL::CSimpleStringT<unsigned short,0>::Empty();
  if ( !a2 )
    ATL::AtlThrowImpl(-2147024809);
  v6 = ((__int64)a2 - *a1) >> 1;
  v7 = *(unsigned int *)(*a1 - 16);
  if ( ((*(_DWORD *)(*a1 - 12) - a3) | (1 - *(_DWORD *)(*a1 - 8))) < 0 )
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, a3);
  v8 = (char *)*a1;
  v9 = 2 * v3;
  if ( v6 <= v7 )
  {
    memmove_s(v8, v9, &v8[2 * v6], 2 * v3);
  }
  else if ( v9 )
  {
    if ( v8 )
    {
      memcpy_0(v8, a2, 2 * v3);
    }
    else
    {
      *(_DWORD *)_o__errno(0LL, v9) = 22;
      invalid_parameter_noinfo();
    }
  }
  return ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, (unsigned int)v3);
}
