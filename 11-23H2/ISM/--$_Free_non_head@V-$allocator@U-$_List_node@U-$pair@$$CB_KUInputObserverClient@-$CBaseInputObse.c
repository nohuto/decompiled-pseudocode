/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180148524
 * Callers:
 *     ??1?$list@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@V?$allocator@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@@2@@std@@QEAA@XZ @ 0x1801487F4 (--1-$list@U-$pair@$$CB_KUInputObserverClient@-$CBaseInputObserverServer@$0L@@@@std@@V-$allocator.c)
 *     ??1?$unordered_map@_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@@4@@std@@QEAA@XZ @ 0x180148844 (--1-$unordered_map@_KUInputObserverClient@-$CBaseInputObserverServer@$0L@@@U-$hash@_K@std@@U-$eq.c)
 *     ??_E?$CBaseInputObserverServer@$0L@@@MEAAPEAXI@Z @ 0x1801488A0 (--_E-$CBaseInputObserverServer@$0L@@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_List_node<std::pair<unsigned __int64 const,CBaseInputObserverServer<11>::InputObserverClient>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,CBaseInputObserverServer<11>::InputObserverClient>,void *>>>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rdi
  __int64 v4; // rcx

  *a2[1] = 0LL;
  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      v4 = v2[3];
      if ( v4 )
      {
        v2[3] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      }
      std::_Deallocate<16,0>(v2, 0x28uLL);
      v2 = v3;
    }
    while ( v3 );
  }
}
