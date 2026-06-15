/*
 * XREFs of ?RemoveAtPos@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1400244EC
 * Callers:
 *     ?RegisterThread@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z @ 0x140020320 (-RegisterThread@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z.c)
 *     ?RegisterProcess@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z @ 0x140020450 (-RegisterProcess@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z.c)
 *     ?UnregisterProcess@GraphStreamingResourceManager@@UEAAXPEAUProcessRegistrationToken__@@@Z @ 0x140024460 (-UnregisterProcess@GraphStreamingResourceManager@@UEAAXPEAUProcessRegistrationToken__@@@Z.c)
 *     _ATL::CAtlMap_unsigned_long_GraphStreamingResourceManager::HandleRegistrations::ListValue_ATL::CElementTraits_unsigned_long__ATL::CElementTraits_GraphStreamingResourceManager::HandleRegistrations::ListValue___::SetAt_::_1_::catch$0 @ 0x140036540 (_ATL--CAtlMap_unsigned_long_GraphStreamingResourceManager--HandleRegistrations--ListValue_ATL--C.c)
 *     ?UnregisterThread@GraphStreamingResourceManager@@UEAAXPEAUThreadRegistrationToken__@@@Z @ 0x1400556D0 (-UnregisterThread@GraphStreamingResourceManager@@UEAAXPEAUThreadRegistrationToken__@@@Z.c)
 * Callees:
 *     ?FreeNode@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x140024550 (-FreeNode@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElementTr.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B99C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::RemoveAtPos(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // r10
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 i; // rcx

  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  v4 = (unsigned int)(*(_DWORD *)(a2 + 40) % *((_DWORD *)a1 + 4));
  v5 = *a1;
  v6 = *(_QWORD *)(*a1 + 8 * v4);
  if ( a2 == v6 )
  {
    v6 = 0LL;
  }
  else
  {
    for ( i = *(_QWORD *)(v6 + 32); i != a2; i = *(_QWORD *)(i + 32) )
      v6 = i;
  }
  v7 = *(_QWORD *)(a2 + 32);
  if ( v6 )
    *(_QWORD *)(v6 + 32) = v7;
  else
    *(_QWORD *)(v5 + 8 * v4) = v7;
  return ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::FreeNode(
           a1,
           a2);
}
