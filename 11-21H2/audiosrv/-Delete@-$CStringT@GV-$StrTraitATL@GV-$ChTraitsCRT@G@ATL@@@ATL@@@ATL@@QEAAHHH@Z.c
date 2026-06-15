/*
 * XREFs of ?Delete@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHHH@Z @ 0x1800E6318
 * Callers:
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800E7998 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 * Callees:
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18000C0AC (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _invalid_parameter_noinfo @ 0x18005F922 (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x18006A67B (memmove_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800C3178 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??$AtlAddThrow@H@ATL@@YAHHH@Z @ 0x1800D4ECC (--$AtlAddThrow@H@ATL@@YAHHH@Z.c)
 *     ?GetBuffer@?$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ @ 0x1800E645C (-GetBuffer@-$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ.c)
 */

__int64 __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Delete(
        __int64 *a1,
        int a2)
{
  int v2; // r14d
  int v4; // ebp
  int v5; // ebx
  int v6; // esi
  int v7; // ebp
  __int64 Buffer; // rax
  void *v9; // rcx
  size_t v10; // r8

  v2 = 0;
  if ( a2 >= 0 )
    v2 = a2;
  v4 = *(_DWORD *)(*a1 - 16);
  v5 = v4 - v2;
  if ( (int)ATL::AtlAddThrow<int>(1, v2) <= v4 )
  {
    v6 = 1;
  }
  else
  {
    v6 = v4 - v2;
    if ( v5 <= 0 )
      return *(unsigned int *)(*a1 - 16);
  }
  v7 = v4 - v6;
  Buffer = ATL::CSimpleStringT<unsigned short,0>::GetBuffer(a1);
  v9 = (void *)(Buffer + 2LL * v2);
  v10 = 2LL * (v5 - v6 + 1);
  if ( v10 )
  {
    if ( !v9 || !(Buffer + 2 * (v2 + (__int64)v6)) )
    {
      *(_DWORD *)_o__errno(v9, v2) = 22;
      invalid_parameter_noinfo();
      ATL::AtlThrowImpl(-2147024809);
    }
    memmove_0(v9, (const void *)(Buffer + 2 * (v2 + (__int64)v6)), v10);
  }
  ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, v7);
  return *(unsigned int *)(*a1 - 16);
}
