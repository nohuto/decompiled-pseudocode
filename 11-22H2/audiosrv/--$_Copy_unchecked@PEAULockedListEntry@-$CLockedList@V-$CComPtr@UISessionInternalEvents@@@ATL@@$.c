/*
 * XREFs of ??$_Copy_unchecked@PEAULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@PEAU12@@std@@YAPEAULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@PEAU12@00@Z @ 0x180003FA8
 * Callers:
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180003CC8 (-ForEachEntry@-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJ$$QEAV.c)
 *     ??$_Assign_range@PEAULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@?$vector@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@0Uforward_iterator_tag@1@@Z @ 0x18002639C (--$_Assign_range@PEAULockedListEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180028BA8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

__int64 __fastcall std::_Copy_unchecked<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry *,CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 i; // rdi
  int v7; // eax

  for ( i = a1; i != a2; a3 += 16LL )
  {
    if ( *(_QWORD *)a3 != *(_QWORD *)i )
      ATL::AtlComPtrAssign((struct IUnknown **)a3, *(struct IUnknown **)i);
    v7 = *(_DWORD *)(i + 8);
    i += 16LL;
    *(_DWORD *)(a3 + 8) = v7;
  }
  return a3;
}
