/*
 * XREFs of SeSecurityAttributePresent @ 0x140297E70
 * Callers:
 *     SepVerifyDesktopAppxPackageName @ 0x1405B86B4 (SepVerifyDesktopAppxPackageName.c)
 *     PsQueryProcessAttributesByToken @ 0x14071E080 (PsQueryProcessAttributesByToken.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x14022D1D0 (AuthzBasepFindSecurityAttribute.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D750 (ExAcquireResourceSharedLite.c)
 */

bool __fastcall SeSecurityAttributePresent(__int64 a1, const UNICODE_STRING *a2)
{
  char v4; // di
  PERESOURCE *v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  bool v7; // si

  v4 = 0;
  v5 = (PERESOURCE *)(a1 + 48);
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    v4 = 1;
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*v5, 1u);
  }
  v7 = AuthzBasepFindSecurityAttribute(*(_QWORD *)(a1 + 776), a2) != 0LL;
  if ( v4 )
  {
    ExReleaseResourceLite(*v5);
    KeLeaveCriticalRegion();
  }
  return v7;
}
