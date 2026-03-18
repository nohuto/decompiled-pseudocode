/*
 * XREFs of ?GetInstanceReferencedLocked@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z @ 0x1C00284F8
 * Callers:
 *     ?GetInstanceReferenced@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z @ 0x1C0028490 (-GetInstanceReferenced@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z.c)
 *     ?Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z @ 0x1C002A310 (-Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0006470 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 */

_LIST_ENTRY **__fastcall FxWmiProvider::GetInstanceReferencedLocked(FxWmiProvider *this, unsigned int Index, void *Tag)
{
  unsigned int m_NumInstances; // r10d
  _LIST_ENTRY **p_Blink; // rbx
  _LIST_ENTRY *Flink; // r9
  int v6; // eax

  m_NumInstances = this->m_NumInstances;
  p_Blink = 0LL;
  Flink = this->m_InstanceListHead.Flink;
  v6 = 0;
  if ( m_NumInstances )
  {
    while ( v6 != Index )
    {
      Flink = Flink->Flink;
      if ( ++v6 >= m_NumInstances )
        return p_Blink;
    }
    p_Blink = &Flink[-8].Blink;
    FxObject::AddRef(
      (FxObject *)&Flink[-8].Blink,
      Tag,
      498,
      "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiprovider.cpp");
  }
  return p_Blink;
}
