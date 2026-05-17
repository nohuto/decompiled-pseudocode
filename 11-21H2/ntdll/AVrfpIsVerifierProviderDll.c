/*
 * XREFs of AVrfpIsVerifierProviderDll @ 0x1800E62D4
 * Callers:
 *     AVrfDllLoadNotification @ 0x18008B59C (AVrfDllLoadNotification.c)
 *     AVrfDllUnloadNotification @ 0x1800E4E80 (AVrfDllUnloadNotification.c)
 *     AVrfpSnapAlreadyLoadedDlls @ 0x1800E690C (AVrfpSnapAlreadyLoadedDlls.c)
 * Callees:
 *     <none>
 */

char __fastcall AVrfpIsVerifierProviderDll(__int64 a1)
{
  __int64 *v1; // rdx
  __int64 v2; // r8

  v1 = (__int64 *)AVrfpVerifierProvidersList;
  do
  {
    if ( v1 == &AVrfpVerifierProvidersList )
      return 0;
    v2 = v1[4];
    v1 = (__int64 *)*v1;
  }
  while ( !v2 || *(_QWORD *)(v2 + 48) != a1 );
  return 1;
}
