/*
 * XREFs of BiUnloadHiveByName @ 0x140A5D60C
 * Callers:
 *     BiAddStoreFromFile @ 0x140804BEC (BiAddStoreFromFile.c)
 *     BiUnloadHiveByHandle @ 0x140A5D574 (BiUnloadHiveByHandle.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     swprintf_s @ 0x1403DDD60 (swprintf_s.c)
 *     ZwUnloadKey @ 0x14041E180 (ZwUnloadKey.c)
 *     ZwUnloadKey2 @ 0x14041E1A0 (ZwUnloadKey2.c)
 *     BiAcquirePrivilege @ 0x140808628 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x1408086B4 (BiReleasePrivilege.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall BiUnloadHiveByName(__int64 a1, int a2, char a3)
{
  unsigned __int64 v5; // rbx
  wchar_t *Pool2; // rax
  WCHAR *v7; // rdi
  NTSTATUS v8; // ebx
  NTSTATUS v9; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES TargetKey; // [rsp+40h] [rbp-30h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+38h] BYREF

  *(&TargetKey.Attributes + 1) = 0;
  v13 = 0LL;
  *(&TargetKey.Length + 1) = 0;
  DestinationString = 0LL;
  v5 = (unsigned int)(a2 + 38);
  Pool2 = (wchar_t *)ExAllocatePool2(258LL, v5, 1262764866LL);
  v7 = Pool2;
  if ( Pool2 )
  {
    swprintf_s(Pool2, v5 >> 1, L"%s\\%s", L"\\Registry\\Machine", a1);
    RtlInitUnicodeString(&DestinationString, v7);
    TargetKey.RootDirectory = 0LL;
    TargetKey.ObjectName = &DestinationString;
    TargetKey.Length = 48;
    TargetKey.Attributes = 576;
    *(_OWORD *)&TargetKey.SecurityDescriptor = 0LL;
    v8 = BiAcquirePrivilege(0x12u, (__int64)&v13);
    if ( v8 >= 0 )
    {
      if ( a3 )
        v9 = ZwUnloadKey2(&TargetKey, 1u);
      else
        v9 = ZwUnloadKey(&TargetKey);
      v8 = v9;
      BiReleasePrivilege((unsigned int *)&v13);
    }
    ExFreePoolWithTag(v7, 0x4B444342u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v8;
}
