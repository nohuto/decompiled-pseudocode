/*
 * XREFs of ?CheckLostEvent@CPresentationManager@@AEAAJXZ @ 0x1801AD368
 * Callers:
 *     ?Present@CPresentationManager@@UEAAJXZ @ 0x1801ADEE0 (-Present@CPresentationManager@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPresentationManager::CheckLostEvent(HANDLE *this)
{
  DWORD v1; // eax

  v1 = WaitForSingleObject(this[14], 0);
  if ( v1 )
    return v1 != 258 ? 0x80004005 : 0;
  else
    return 2290155521LL;
}
