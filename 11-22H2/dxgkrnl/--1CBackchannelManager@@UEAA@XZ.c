/*
 * XREFs of ??1CBackchannelManager@@UEAA@XZ @ 0x1C00880B0
 * Callers:
 *     ??_GCBackchannelManager@@UEAAPEAXI@Z @ 0x1C0087EC0 (--_GCBackchannelManager@@UEAAPEAXI@Z.c)
 *     ??_GCDWMBackchannelManager@@UEAAPEAXI@Z @ 0x1C0087F10 (--_GCDWMBackchannelManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Clear@CBackchannelManager@@QEAAXXZ @ 0x1C00880E8 (-Clear@CBackchannelManager@@QEAAXXZ.c)
 */

void __fastcall CBackchannelManager::~CBackchannelManager(PVOID *this)
{
  *this = &CBackchannelManager::`vftable';
  CBackchannelManager::Clear((CBackchannelManager *)this);
  ObfDereferenceObject(this[4]);
}
