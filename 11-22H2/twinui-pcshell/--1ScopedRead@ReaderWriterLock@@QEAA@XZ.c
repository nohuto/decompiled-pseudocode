/*
 * XREFs of ??1ScopedRead@ReaderWriterLock@@QEAA@XZ @ 0x1803DDAE8
 * Callers:
 *     _IsGameManager::LoadKGLFromGameDVRFolder_::_1_::dtor$4 @ 0x1802B89EE (_IsGameManager--LoadKGLFromGameDVRFolder_--_1_--dtor$4.c)
 *     _IsGameManager::CheckKGLForIsGameFromProcessId_::_1_::dtor$0 @ 0x1802BEC16 (_IsGameManager--CheckKGLForIsGameFromProcessId_--_1_--dtor$0.c)
 *     _IsGameManager::CheckKGLForIsGameFromAppId_::_1_::dtor$0 @ 0x1802BEC28 (_IsGameManager--CheckKGLForIsGameFromAppId_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall ReaderWriterLock::ScopedRead::~ScopedRead(PSRWLOCK *this)
{
  ReleaseSRWLockShared(*this);
}
