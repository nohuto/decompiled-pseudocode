/*
 * XREFs of ?GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z @ 0x180002974
 * Callers:
 *     RmAccessCheck @ 0x180006F70 (RmAccessCheck.c)
 *     RmAccessCheckOnSelf @ 0x18001C0C0 (RmAccessCheckOnSelf.c)
 *     RmAcquireResources @ 0x18001C100 (RmAcquireResources.c)
 *     RmAvailabilityCheck @ 0x18001C1C0 (RmAvailabilityCheck.c)
 *     RmGetNotification @ 0x18001C240 (RmGetNotification.c)
 *     RmRegisterResource @ 0x18001C290 (RmRegisterResource.c)
 *     RmReleaseResources @ 0x18001C2F0 (RmReleaseResources.c)
 * Callees:
 *     CreateResourceManagerProxy @ 0x1800029E0 (CreateResourceManagerProxy.c)
 */

__int64 __fastcall GetResourceManagerProxy(struct ResourceManagerProxy **a1)
{
  struct ResourceManagerProxy *v2; // rax
  int ResourceManagerProxy; // ebx

  RtlEnterCriticalSection(&s_csProxy);
  v2 = (struct ResourceManagerProxy *)qword_180032AE8;
  if ( qword_180032AE8 )
    goto LABEL_4;
  ResourceManagerProxy = CreateResourceManagerProxy();
  if ( ResourceManagerProxy >= 0 )
  {
    v2 = (struct ResourceManagerProxy *)qword_180032AE8;
LABEL_4:
    *a1 = v2;
    ResourceManagerProxy = 0;
  }
  RtlLeaveCriticalSection(&s_csProxy);
  return (unsigned int)ResourceManagerProxy;
}
