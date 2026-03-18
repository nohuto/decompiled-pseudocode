/*
 * XREFs of ?GetInstanceIndex@FxWmiProvider@@QEAAKPEAVFxWmiInstance@@@Z @ 0x1C0028414
 * Callers:
 *     ?FireEvent@FxWmiInstance@@QEAAJPEAXK@Z @ 0x1C0028CB8 (-FireEvent@FxWmiInstance@@QEAAJPEAXK@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 */

__int64 __fastcall FxWmiProvider::GetInstanceIndex(FxWmiProvider *this, _LIST_ENTRY **Instance, unsigned __int8 a3)
{
  FxWmiIrpHandler *m_Parent; // rcx
  unsigned int v6; // ebx
  unsigned int m_NumInstances; // r8d
  _LIST_ENTRY *Flink; // rax
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  m_Parent = this->m_Parent;
  v6 = 0;
  irql = 0;
  FxNonPagedObject::Lock(m_Parent, &irql, a3);
  m_NumInstances = this->m_NumInstances;
  Flink = this->m_InstanceListHead.Flink;
  if ( m_NumInstances )
  {
    do
    {
      if ( &Flink[-8].Blink == Instance )
        break;
      Flink = Flink->Flink;
      ++v6;
    }
    while ( v6 < m_NumInstances );
  }
  FxNonPagedObject::Unlock(this->m_Parent, irql, m_NumInstances);
  return v6;
}
