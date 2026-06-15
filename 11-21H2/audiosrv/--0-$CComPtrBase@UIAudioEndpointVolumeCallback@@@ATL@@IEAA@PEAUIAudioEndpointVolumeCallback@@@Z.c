/*
 * XREFs of ??0?$CComPtrBase@UIAudioEndpointVolumeCallback@@@ATL@@IEAA@PEAUIAudioEndpointVolumeCallback@@@Z @ 0x1800CFAB4
 * Callers:
 *     ??$_Assign_range@PEAULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@@?$vector@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@0Uforward_iterator_tag@1@@Z @ 0x1800CF570 (--$_Assign_range@PEAULockedListEntry@-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallback@@@AT.c)
 *     ??$_Uninitialized_move@PEAULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAU12@0PEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@@0@@Z @ 0x1800CF8DC (--$_Uninitialized_move@PEAULockedListEntry@-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallbac.c)
 *     ??$construct@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@AEAV?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@H@?$_Default_allocator_traits@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@@std@@@std@@SAXAEAV?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@@1@QEAULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@AEAV?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$$QEAH@Z @ 0x1800CF964 (--$construct@ULockedListEntry@-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$.c)
 *     ?AddVolumeInternalNotification@CVolumeStrip@@UEAAJPEAUIAudioEndpointVolumeCallback@@@Z @ 0x1800CFEB0 (-AddVolumeInternalNotification@CVolumeStrip@@UEAAJPEAUIAudioEndpointVolumeCallback@@@Z.c)
 *     ?DeleteVolumeInternalNotification@CVolumeStrip@@UEAAJPEAUIAudioEndpointVolumeCallback@@@Z @ 0x1800CFEE0 (-DeleteVolumeInternalNotification@CVolumeStrip@@UEAAJPEAUIAudioEndpointVolumeCallback@@@Z.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x1800CFF70 (-ForEachEntry@-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJ$$QEAV.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ATL::CComPtrBase<IAudioEndpointVolumeCallback>::CComPtrBase<IAudioEndpointVolumeCallback>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
