/*
 * XREFs of ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18003E4C4
 * Callers:
 *     ?FormatV@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGPEAD@Z @ 0x18003C824 (-FormatV@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGPEAD@Z.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x18003DB90 (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18003E898 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 * Callees:
 *     ?Reallocate@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18003E600 (-Reallocate@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 */

void __fastcall ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(const void **a1, signed int a2)
{
  _DWORD *v2; // rax
  signed int v3; // r8d
  int v5; // ecx
  int v6; // eax
  int v7; // eax

  v2 = *a1;
  v3 = a2;
  if ( *((_DWORD *)*a1 - 4) > a2 )
    v3 = *(v2 - 4);
  if ( (int)*(v2 - 2) <= 1 )
  {
    v5 = *(v2 - 3);
    if ( v5 < v3 )
    {
      if ( v5 <= 0x40000000 )
        v6 = v5 / 2;
      else
        v6 = 0x100000;
      v7 = v5 + v6;
      if ( v7 >= v3 )
        v3 = v7;
      ATL::CSimpleStringT<unsigned short,0>::Reallocate(a1, (unsigned int)v3);
    }
  }
  else
  {
    ATL::CSimpleStringT<unsigned short,0>::Fork(a1, v3);
  }
}
