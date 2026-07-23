/*
 * XREFs of PipGenerateContainerID @ 0x1406850A8
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140795C58 (PiProcessNewDeviceNode.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D660 (ExAcquireResourceSharedLite.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140429160 (RtlCompareMemory.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     RtlStringFromGUIDEx @ 0x1406852B0 (RtlStringFromGUIDEx.c)
 *     ExUuidCreate @ 0x140688920 (ExUuidCreate.c)
 *     _CmGetDeviceRegProp @ 0x1406CD50C (_CmGetDeviceRegProp.c)
 *     RtlGUIDFromString @ 0x1406CF770 (RtlGUIDFromString.c)
 *     RtlFreeUnicodeString @ 0x14076F8E0 (RtlFreeUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x1407FB710 (RtlCreateUnicodeString.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PipGenerateContainerID(__int64 a1, __int64 a2, char a3, const WCHAR *a4, _QWORD *a5)
{
  int v5; // esi
  __int64 v6; // rdi
  NTSTATUS v7; // ebx
  GUID *p_Guid; // rcx
  wchar_t *Buffer; // rdi
  unsigned int MaximumLength; // esi
  void *Pool2; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rdx
  int DeviceRegProp; // ebx
  UNICODE_STRING GuidString; // [rsp+40h] [rbp-61h] BYREF
  int v17; // [rsp+50h] [rbp-51h] BYREF
  int v18; // [rsp+54h] [rbp-4Dh] BYREF
  GUID Guid; // [rsp+58h] [rbp-49h] BYREF
  WCHAR SourceString[40]; // [rsp+70h] [rbp-31h] BYREF

  v17 = 0;
  v18 = 0;
  v5 = a2;
  *(_QWORD *)&GuidString.Length = 0LL;
  v6 = a1;
  *a5 = 0LL;
  v7 = 0;
  GuidString.Buffer = 0LL;
  Guid = 0LL;
  if ( !a3 )
  {
    p_Guid = (GUID *)(*(_QWORD *)(a1 + 16) + 664LL);
    goto LABEL_3;
  }
  if ( a4 )
  {
    if ( !RtlCreateUnicodeString(&GuidString, a4) )
      return (unsigned int)-1073741670;
    goto LABEL_5;
  }
  if ( !a2 )
    goto LABEL_22;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  v14 = *(_QWORD *)(v6 + 48);
  v17 = 78;
  DeviceRegProp = CmGetDeviceRegProp(PiPnpRtlCtx, v14, v5, 37, (__int64)&v18, (__int64)SourceString, (__int64)&v17, 0);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( DeviceRegProp < 0 || v18 != 1 || !RtlCreateUnicodeString(&GuidString, SourceString) )
  {
LABEL_22:
    v7 = ExUuidCreate(&Guid);
    if ( v7 < 0 )
    {
LABEL_4:
      if ( v7 < 0 )
        return (unsigned int)v7;
      goto LABEL_5;
    }
    p_Guid = &Guid;
LABEL_3:
    v7 = RtlStringFromGUIDEx(p_Guid, &GuidString, 1u);
    goto LABEL_4;
  }
  v7 = RtlGUIDFromString(&GuidString, &Guid);
  if ( v7 < 0 )
  {
LABEL_19:
    RtlFreeUnicodeString(&GuidString);
    goto LABEL_22;
  }
  while ( 1 )
  {
    v6 = *(_QWORD *)(v6 + 16);
    if ( !v6 )
      break;
    if ( (GUID *)(v6 + 664) == &Guid || RtlCompareMemory((const void *)(v6 + 664), &Guid, 0x10uLL) == 16 )
      goto LABEL_19;
  }
LABEL_5:
  Buffer = GuidString.Buffer;
  if ( GuidString.Buffer )
  {
    MaximumLength = GuidString.MaximumLength;
    Pool2 = (void *)ExAllocatePool2(256LL, GuidString.MaximumLength, 1852141648LL);
    *a5 = Pool2;
    if ( Pool2 )
      memmove(Pool2, Buffer, MaximumLength);
    else
      v7 = -1073741670;
    RtlFreeUnicodeString(&GuidString);
  }
  return (unsigned int)v7;
}
