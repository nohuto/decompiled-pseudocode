/*
 * XREFs of ?SecurityShim_SharedMessagePortSecurity@SharedMessagePortRefPtr@@SAHPEAPEAX@Z @ 0x1800AC5AC
 * Callers:
 *     ?Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z @ 0x1800AC3F4 (-Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z.c)
 * Callees:
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x180738234 (-FailFastWithHR@@YAXJ_K0@Z.c)
 */

__int64 __fastcall SharedMessagePortRefPtr::SecurityShim_SharedMessagePortSecurity(void **a1)
{
  int v2; // ecx
  unsigned __int64 v3; // r8
  unsigned __int64 retaddr; // [rsp+28h] [rbp+0h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+30h] [rbp+8h] BYREF

  SecurityDescriptor = 0LL;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;0x01;;;WD)(A;;0x01;;;AC)(A;;0x01;;;S-1-15-3-1024-1502825166-1963708345-2616377461-2562897074-4192028372-"
           "3968301570-1997628692-1435953622)",
          1u,
          &SecurityDescriptor,
          0LL) )
    FailFastWithHR(v2, retaddr, v3);
  *a1 = SecurityDescriptor;
  return 0LL;
}
