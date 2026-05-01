/*
 * XREFs of ?KGLIsLoaded@IsGameManager@@UEAA_NXZ @ 0x1801BBFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall IsGameManager::KGLIsLoaded(IsGameManager *this)
{
  return *((_QWORD *)this + 3) != 0LL;
}
