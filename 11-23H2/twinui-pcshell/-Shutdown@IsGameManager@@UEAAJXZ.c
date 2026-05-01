/*
 * XREFs of ?Shutdown@IsGameManager@@UEAAJXZ @ 0x1801BDD10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IsGameManager::Shutdown(IsGameManager *this)
{
  int v2; // ebx
  void *v3; // rcx

  v2 = 1000;
  v3 = (void *)*((_QWORD *)this + 12);
  if ( v3 )
    SetEvent(v3);
  while ( *((_DWORD *)this + 10) )
  {
    if ( !v2-- )
      break;
    Sleep(0xAu);
  }
  return 0LL;
}
