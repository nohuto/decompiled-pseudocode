/*
 * XREFs of ?Delete@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHHH@Z @ 0x18004FFC8
 * Callers:
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18004FEBC (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 * Callees:
 *     ?GetBuffer@?$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ @ 0x1800137DC (-GetBuffer@-$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18004237C (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _invalid_parameter_noinfo @ 0x1800679A2 (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x1800759B8 (memmove_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE7C4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Delete(
        __int64 *a1,
        int a2)
{
  int v2; // edi
  int v4; // esi
  int v5; // ebx
  unsigned int v6; // ebp
  int v7; // esi
  __int64 Buffer; // rax
  void *v9; // rcx
  size_t v10; // r8

  v2 = 0;
  if ( a2 >= 0 )
    v2 = a2;
  v4 = *(_DWORD *)(*a1 - 16);
  if ( v2 == 0x7FFFFFFF )
    goto LABEL_15;
  v5 = v4 - v2;
  if ( v2 + 1 > v4 )
  {
    v6 = v4 - v2;
    if ( v5 <= 0 )
      return *(unsigned int *)(*a1 - 16);
  }
  else
  {
    v6 = 1;
  }
  v7 = v4 - v6;
  Buffer = ATL::CSimpleStringT<unsigned short,0>::GetBuffer((__int64)a1);
  v9 = (void *)(Buffer + 2LL * v2);
  v10 = 2LL * (int)(v5 - v6 + 1);
  if ( v10 )
  {
    if ( v9 && Buffer + 2 * (v2 + (unsigned __int64)v6) )
    {
      memmove_0(v9, (const void *)(Buffer + 2 * (v2 + (unsigned __int64)v6)), v10);
      goto LABEL_10;
    }
    *(_DWORD *)_o__errno(v9) = 22;
    invalid_parameter_noinfo();
LABEL_15:
    ATL::AtlThrowImpl(-2147024809);
  }
LABEL_10:
  ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, v7);
  return *(unsigned int *)(*a1 - 16);
}
