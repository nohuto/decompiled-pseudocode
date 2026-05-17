/*
 * XREFs of AVrfpSnapAlreadyLoadedDlls @ 0x1800E690C
 * Callers:
 *     AVrfInitializeVerifier @ 0x1800E4F54 (AVrfInitializeVerifier.c)
 * Callees:
 *     DbgPrint @ 0x1800069C0 (DbgPrint.c)
 *     AVrfpDllLoadNotificationInternal @ 0x1800E5DC4 (AVrfpDllLoadNotificationInternal.c)
 *     AVrfpIsVerifierProviderDll @ 0x1800E62D4 (AVrfpIsVerifierProviderDll.c)
 */

void AVrfpSnapAlreadyLoadedDlls()
{
  __int64 *v0; // rbx
  __int64 v1; // rdi

  v0 = (__int64 *)qword_18017A150;
  while ( v0 != &qword_18017A150 )
  {
    v1 = (__int64)v0;
    v0 = (__int64 *)*v0;
    if ( AVrfpIsVerifierProviderDll(*(_QWORD *)(v1 + 48)) )
    {
      if ( (AVrfpDebug & 1) != 0 )
        DbgPrint("AVRF: skipped resnapping provider %ws ... \n", *(_QWORD *)(v1 + 96));
    }
    else
    {
      if ( (AVrfpDebug & 1) != 0 )
        DbgPrint("AVRF: resnapping %ws ... \n", *(_QWORD *)(v1 + 96));
      AVrfpDllLoadNotificationInternal(v1);
    }
  }
}
