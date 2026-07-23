/*
 * XREFs of SepCanTokenMatchAllPackageSid @ 0x14022C8AC
 * Callers:
 *     SepMatchPackage @ 0x14022C820 (SepMatchPackage.c)
 *     SeQueryInformationToken @ 0x1407198A0 (SeQueryInformationToken.c)
 * Callees:
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x14022C994 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D750 (ExAcquireResourceSharedLite.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

bool __fastcall SepCanTokenMatchAllPackageSid(__int64 a1)
{
  char v2; // si
  bool v3; // di
  struct _KTHREAD *CurrentThread; // rax
  __int128 v6; // [rsp+20h] [rbp-78h]
  _OWORD v7[5]; // [rsp+30h] [rbp-68h] BYREF

  memset(v7, 0, 0x48uLL);
  *(_QWORD *)&v6 = 2359330LL;
  *((_QWORD *)&v6 + 1) = L"WIN://NOALLAPPPKG";
  v2 = 0;
  v3 = 1;
  *((_QWORD *)&v7[0] + 1) = *(_QWORD *)(a1 + 776);
  v7[1] = v6;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
    v2 = 1;
  }
  if ( (int)AuthzBasepQuerySecurityAttributeAndValues(v7) >= 0 )
    v3 = **(_QWORD **)&v7[3] == 0LL;
  if ( v2 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
    KeLeaveCriticalRegion();
  }
  return v3;
}
