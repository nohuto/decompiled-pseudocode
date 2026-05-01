/*
 * XREFs of ?v_ShutdownServices@LockScreenDirectorServiceProviderImpl@@MEAAJPEAUIProfferService@@@Z @ 0x180181B60
 * Callers:
 *     <none>
 * Callees:
 *     ?StopDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAXXZ @ 0x1800C83CC (-StopDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAXXZ.c)
 */

__int64 __fastcall LockScreenDirectorServiceProviderImpl::v_ShutdownServices(
        LockScreenDirectorServiceProviderImpl *this,
        struct IProfferService *a2)
{
  LockScreenDirectorServiceProviderImpl::StopDirectorThread((LockScreenDirectorServiceProviderImpl *)((char *)this - 48));
  return 0LL;
}
