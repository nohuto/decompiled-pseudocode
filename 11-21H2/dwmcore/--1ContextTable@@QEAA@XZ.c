/*
 * XREFs of ??1ContextTable@@QEAA@XZ @ 0x1801001D0
 * Callers:
 *     _dynamic_atexit_destructor_for__Contexts__ @ 0x18010DAB0 (_dynamic_atexit_destructor_for__Contexts__.c)
 * Callees:
 *     ?RemoveAll@?$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV?$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_DATA@@PEAX@ATL@@@ATL@@QEAAXXZ @ 0x18026C230 (-RemoveAll@-$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV-$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUB.c)
 */

void __fastcall ContextTable::~ContextTable(ContextTable *this)
{
  ((void (*)(void))ATL::CSimpleMap<_SEB_RPC_PUBLISH_DATA *,void *,ATL::CSimpleMapEqualHelper<_SEB_RPC_PUBLISH_DATA *,void *>>::RemoveAll)();
  ATL::CSimpleMap<_SEB_RPC_PUBLISH_DATA *,void *,ATL::CSimpleMapEqualHelper<_SEB_RPC_PUBLISH_DATA *,void *>>::RemoveAll(this);
}
