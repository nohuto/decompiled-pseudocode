/*
 * XREFs of ??1ScopedRead@ReaderWriterLock@@QEAA@XZ @ 0x180043150
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::KglDefaults::LoadKgl_::_1_::dtor$3 @ 0x18004D12C (_Windows--Gaming--Preview--GamesEnumeration--KglDefaults--LoadKgl_--_1_--dtor$3.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::KglDefaults::CheckKGLForGameFromGameConfig_::_1_::dtor$0 @ 0x18004D13E (_Windows--Gaming--Preview--GamesEnumeration--KglDefaults--CheckKGLForGameFromGameCo_ea_18004D13E.c)
 * Callees:
 *     <none>
 */

void __fastcall ReaderWriterLock::ScopedRead::~ScopedRead(PSRWLOCK *this)
{
  ReleaseSRWLockShared(*this);
}
