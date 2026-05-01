/*
 * XREFs of ?v_ShutdownServices@LockScreenDirectorServiceProviderImpl@@MEAAJPEAUIProfferService@@@Z @ 0x180169E90
 * Callers:
 *     <none>
 * Callees:
 *     ?StopDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAXXZ @ 0x18016A09C (-StopDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAXXZ.c)
 */

__int64 __fastcall LockScreenDirectorServiceProviderImpl::v_ShutdownServices(
        LockScreenDirectorServiceProviderImpl *this,
        struct IProfferService *a2)
{
  LockScreenDirectorServiceProviderImpl::StopDirectorThread((LockScreenDirectorServiceProviderImpl *)((char *)this - 48));
  return 0LL;
}
