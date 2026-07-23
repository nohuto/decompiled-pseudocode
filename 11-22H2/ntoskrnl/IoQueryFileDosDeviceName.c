/*
 * XREFs of IoQueryFileDosDeviceName @ 0x14075ADD0
 * Callers:
 *     EtwpGetDriverDataDosPath @ 0x1403D71EC (EtwpGetDriverDataDosPath.c)
 *     CcMmLogLostDelayedWriteError @ 0x140537924 (CcMmLogLostDelayedWriteError.c)
 *     NtQueryInformationProcess @ 0x1406FCB40 (NtQueryInformationProcess.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1408156A0 (PiDrvDbQuerySystemPathWin32.c)
 * Callees:
 *     IopQueryNameInternal @ 0x14075AE74 (IopQueryNameInternal.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoQueryFileDosDeviceName(PFILE_OBJECT FileObject, POBJECT_NAME_INFORMATION *ObjectNameInformation)
{
  __int64 v2; // rdi
  __int64 v5; // rdx
  _OBJECT_NAME_INFORMATION *Pool2; // rbx
  __int64 v7; // r8
  NTSTATUS v8; // edi
  int v10; // [rsp+30h] [rbp-18h]
  unsigned int i; // [rsp+60h] [rbp+18h] BYREF

  v2 = 208LL;
  for ( i = 208; ; v2 = i )
  {
    Pool2 = (_OBJECT_NAME_INFORMATION *)ExAllocatePool2(256LL, v2, 1849978697LL);
    if ( !Pool2 )
      break;
    LOBYTE(v10) = 0;
    LOBYTE(v7) = 1;
    v8 = IopQueryNameInternal(FileObject, v5, v7, Pool2, v2, &i, v10);
    if ( !v8 )
    {
      *ObjectNameInformation = Pool2;
      return v8;
    }
    ExFreePoolWithTag(Pool2, 0);
    if ( v8 != -2147483643 )
      return v8;
  }
  return -1073741670;
}
