/*
 * XREFs of ?CleanResourceExclusiveEndpoint@CConstraintModel@@AEAAXPEAV?$CAtlArray@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@@2@@ATL@@@Z @ 0x18015F9C8
 * Callers:
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x18005C0C4 (-Initialize@CConstraintModel@@QEAAJXZ.c)
 *     ??1CConstraintModel@@UEAA@XZ @ 0x18015F5D0 (--1CConstraintModel@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE814 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??1?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@QEAA@XZ @ 0x1800FE958 (--1-$CAtlArray@PEAVExclusiveEndpointInfo@@V-$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@AT.c)
 *     ?SetCount@?$CAtlArray@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@@2@@ATL@@QEAA_N_KH@Z @ 0x180160C18 (-SetCount@-$CAtlArray@PEAV-$CAtlArray@PEAVExclusiveEndpointInfo@@V-$CElementTraits@PEAVExclusive.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CConstraintModel::CleanResourceExclusiveEndpoint(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // esi
  __int64 v4; // rcx
  __int64 v5; // rdi
  unsigned int v6; // ebp
  __int64 v7; // rcx

  v3 = 0;
  if ( a2[1] )
  {
    v4 = 0LL;
    do
    {
      v5 = *(_QWORD *)(*a2 + 8 * v4);
      v6 = 0;
      if ( *(_QWORD *)(v5 + 8) )
      {
        v7 = 0LL;
        do
        {
          operator delete(*(void **)(*(_QWORD *)v5 + 8 * v7));
          v7 = ++v6;
        }
        while ( (unsigned __int64)v6 < *(_QWORD *)(v5 + 8) );
      }
      ATL::CAtlArray<ExclusiveEndpointInfo *,ATL::CElementTraits<ExclusiveEndpointInfo *>>::~CAtlArray<ExclusiveEndpointInfo *,ATL::CElementTraits<ExclusiveEndpointInfo *>>((void **)v5);
      operator delete((void *)v5);
      v4 = ++v3;
    }
    while ( (unsigned __int64)v3 < a2[1] );
  }
  return ATL::CAtlArray<ATL::CAtlArray<ExclusiveEndpointInfo *,ATL::CElementTraits<ExclusiveEndpointInfo *>> *,ATL::CElementTraits<ATL::CAtlArray<ExclusiveEndpointInfo *,ATL::CElementTraits<ExclusiveEndpointInfo *>> *>>::SetCount(
           a2,
           0LL);
}
