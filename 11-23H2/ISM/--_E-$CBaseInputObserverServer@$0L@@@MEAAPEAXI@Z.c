/*
 * XREFs of ??_E?$CBaseInputObserverServer@$0L@@@MEAAPEAXI@Z @ 0x1801488A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1?$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@QEAA@XZ @ 0x1800A0EC8 (--1-$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@QEAA@XZ.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180148524 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KUInputObserverClient@-$CBaseInputObse.c)
 */

void **__fastcall CBaseInputObserverServer<11>::`vector deleting destructor'(void **a1, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx

  std::_Deallocate<16,0>(a1[23], ((_BYTE *)a1[24] - (_BYTE *)a1[23]) & 0xFFFFFFFFFFFFFFF8uLL);
  a1[23] = 0LL;
  a1[24] = 0LL;
  a1[25] = 0LL;
  std::_List_node<std::pair<unsigned __int64 const,CBaseInputObserverServer<11>::InputObserverClient>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,CBaseInputObserverServer<11>::InputObserverClient>,void *>>>(
    v4,
    (_QWORD **)a1[21]);
  std::_Deallocate<16,0>(a1[21], 0x28uLL);
  KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>::~KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>(
    (__int64)(a1 + 2),
    v5);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
