/*
 * XREFs of ?GetBuffer@?$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ @ 0x1800137DC
 * Callers:
 *     ?GetBuffer@CAudioEndpointId@@QEAAPEBGXZ @ 0x1800137C0 (-GetBuffer@CAudioEndpointId@@QEAAPEBGXZ.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18004FEBC (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 *     ?Delete@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHHH@Z @ 0x18004FFC8 (-Delete@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHHH@Z.c)
 * Callees:
 *     ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180036770 (-Fork@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::GetBuffer(__int64 a1)
{
  if ( *(int *)(*(_QWORD *)a1 - 8LL) > 1 )
    ATL::CSimpleStringT<unsigned short,0>::Fork(a1, *(unsigned int *)(*(_QWORD *)a1 - 16LL));
  return *(_QWORD *)a1;
}
