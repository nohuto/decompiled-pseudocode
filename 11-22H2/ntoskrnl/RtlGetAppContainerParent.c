/*
 * XREFs of RtlGetAppContainerParent @ 0x1409BC120
 * Callers:
 *     SepValidateReferencedCachedHandles @ 0x1407F51D0 (SepValidateReferencedCachedHandles.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409BCC7C (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x1402979B0 (RtlSubAuthoritySid.c)
 *     RtlInitializeSid @ 0x140782560 (RtlInitializeSid.c)
 *     RtlGetAppContainerSidType @ 0x1407F4A10 (RtlGetAppContainerSidType.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl RtlGetAppContainerParent(PSID AppContainerSid, PSID *AppContainerSidParent)
{
  ULONG *Pool2; // rax
  ULONG *v5; // rbx
  int v7; // edi
  unsigned __int8 v8; // di
  ULONG *v9; // r14
  PULONG v10; // rax
  int v11; // [rsp+48h] [rbp+10h] BYREF

  *AppContainerSidParent = 0LL;
  v11 = 0;
  if ( RtlGetAppContainerSidType(AppContainerSid, (PAPPCONTAINER_SID_TYPE)&v11) < 0 || v11 != 1 )
    return -1073741811;
  Pool2 = (ULONG *)ExAllocatePool2(65LL, 40LL, 1649439826LL);
  v5 = Pool2;
  if ( !Pool2 )
    return -1073741670;
  v7 = RtlInitializeSid(Pool2, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 8u);
  if ( v7 < 0 )
  {
    ExFreePoolWithTag(v5, 0);
  }
  else
  {
    v8 = 0;
    v9 = v5 + 2;
    do
    {
      v10 = RtlSubAuthoritySid(AppContainerSid, v8++);
      *v9++ = *v10;
    }
    while ( v8 < 8u );
    *AppContainerSidParent = v5;
    return 0;
  }
  return v7;
}
