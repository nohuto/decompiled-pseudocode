/*
 * XREFs of SeQuerySecurityAttributesToken @ 0x1406B7A00
 * Callers:
 *     RtlpQueryPackageIdentityAttributes @ 0x1402261C8 (RtlpQueryPackageIdentityAttributes.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1405B8144 (SepVerifyDesktopAppxPackageName.c)
 * Callees:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14022C928 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D680 (ExAcquireResourceSharedLite.c)
 */

__int64 __fastcall SeQuerySecurityAttributesToken(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rdx
  unsigned int SecurityAttributesToken; // ebx

  if ( a5 )
  {
    if ( a4 )
    {
LABEL_3:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
      SecurityAttributesToken = SepInternalQuerySecurityAttributesTokenEx(a1, v11, a2, a3, 0, a4, a5, a6);
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
      KeLeaveCriticalRegion();
      return SecurityAttributesToken;
    }
  }
  else if ( !a4 )
  {
    goto LABEL_3;
  }
  return 3221225485LL;
}
