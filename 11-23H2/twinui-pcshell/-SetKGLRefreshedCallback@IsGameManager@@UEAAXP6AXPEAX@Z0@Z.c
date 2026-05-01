/*
 * XREFs of ?SetKGLRefreshedCallback@IsGameManager@@UEAAXP6AXPEAX@Z0@Z @ 0x1801C04A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall IsGameManager::SetKGLRefreshedCallback(IsGameManager *this, void (*a2)(void *), void *a3)
{
  *((_QWORD *)this + 7) = a2;
  *((_QWORD *)this + 8) = a3;
}
