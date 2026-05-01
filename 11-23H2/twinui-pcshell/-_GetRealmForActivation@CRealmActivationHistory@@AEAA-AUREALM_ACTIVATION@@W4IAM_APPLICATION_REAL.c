/*
 * XREFs of ?_GetRealmForActivation@CRealmActivationHistory@@AEAA?AUREALM_ACTIVATION@@W4IAM_APPLICATION_REALM@@@Z @ 0x180051C28
 * Callers:
 *     ?SetActiveApp@CRealmActivationHistory@@UEAAJW4IAM_APPLICATION_REALM@@@Z @ 0x180051AA0 (-SetActiveApp@CRealmActivationHistory@@UEAAJW4IAM_APPLICATION_REALM@@@Z.c)
 *     ?GetLastActiveTimestamp@CRealmActivationHistory@@UEAAJW4IAM_APPLICATION_REALM@@PEAU_FILETIME@@@Z @ 0x1803BAB20 (-GetLastActiveTimestamp@CRealmActivationHistory@@UEAAJW4IAM_APPLICATION_REALM@@PEAU_FILETIME@@@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CRealmActivationHistory::_GetRealmForActivation(__int64 a1, _DWORD *a2, int a3)
{
  FILETIME *v3; // rsi
  __int64 v4; // rbx
  __int64 v7; // rbp

  *a2 = 0;
  v3 = (FILETIME *)(a2 + 1);
  a2[1] = 0;
  v4 = a1 + 160;
  a2[2] = 0;
  v7 = 20LL;
  do
  {
    if ( (a3 & *(_DWORD *)v4) != 0 && CompareFileTime((const FILETIME *)(v4 + 4), v3) > 0 )
    {
      *v3 = *(FILETIME *)(v4 + 4);
      *a2 = *(_DWORD *)v4;
    }
    v4 += 12LL;
    --v7;
  }
  while ( v7 );
  return a2;
}
