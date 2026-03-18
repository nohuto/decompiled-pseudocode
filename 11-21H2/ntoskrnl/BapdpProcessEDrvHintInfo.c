/*
 * XREFs of BapdpProcessEDrvHintInfo @ 0x140B1BD88
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140B1C0FC (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     BapdpQueryData @ 0x140B1C6B0 (BapdpQueryData.c)
 *     BapdpRegisterEDrvHintInfo @ 0x140B53EA4 (BapdpRegisterEDrvHintInfo.c)
 */

void __fastcall BapdpProcessEDrvHintInfo(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rcx
  PVOID PoolWithTag; // rbx
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v5[4]; // [rsp+38h] [rbp-18h] BYREF

  LODWORD(NumberOfBytes) = 0;
  v5[0] = -434226978;
  v5[1] = 1092265705;
  v5[2] = 176510397;
  v5[3] = 1684214913;
  v1 = BapdpQueryData(a1, v5, 0LL, 0LL, &NumberOfBytes);
  if ( v1 == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x64506142u);
    if ( !PoolWithTag )
      return;
  }
  else
  {
    PoolWithTag = 0LL;
    if ( v1 < 0 )
      return;
  }
  if ( (int)BapdpQueryData(v2, v5, 0LL, PoolWithTag, &NumberOfBytes) >= 0 && (unsigned int)NumberOfBytes >= 8 )
    BapdpRegisterEDrvHintInfo(PoolWithTag);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
}
