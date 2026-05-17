/*
 * XREFs of AVrfpSnapAlreadyLoadedDlls @ 0x1800E5774
 * Callers:
 *     AVrfInitializeVerifier @ 0x1800E3DE4 (AVrfInitializeVerifier.c)
 * Callees:
 *     DbgPrint @ 0x180053A70 (DbgPrint.c)
 *     AVrfpDllLoadNotificationInternal @ 0x1800E4C54 (AVrfpDllLoadNotificationInternal.c)
 *     AVrfpIsVerifierProviderDll @ 0x1800E5148 (AVrfpIsVerifierProviderDll.c)
 */

void AVrfpSnapAlreadyLoadedDlls()
{
  __int64 *v0; // rbx
  __int64 v1; // rdi

  v0 = (__int64 *)qword_180184390;
  while ( v0 != &qword_180184390 )
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
