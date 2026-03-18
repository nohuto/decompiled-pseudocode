/*
 * XREFs of ??1CBackchannelManager@@UEAA@XZ @ 0x1C0080E20
 * Callers:
 *     ??_GCBackchannelManager@@UEAAPEAXI@Z @ 0x1C0080C30 (--_GCBackchannelManager@@UEAAPEAXI@Z.c)
 *     ??_GCDWMBackchannelManager@@UEAAPEAXI@Z @ 0x1C0080C80 (--_GCDWMBackchannelManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Clear@CBackchannelManager@@QEAAXXZ @ 0x1C0080E58 (-Clear@CBackchannelManager@@QEAAXXZ.c)
 */

void __fastcall CBackchannelManager::~CBackchannelManager(PVOID *this)
{
  *this = &CBackchannelManager::`vftable';
  CBackchannelManager::Clear((CBackchannelManager *)this);
  ObfDereferenceObject(this[4]);
}
