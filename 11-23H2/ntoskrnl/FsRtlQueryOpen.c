/*
 * XREFs of FsRtlQueryOpen @ 0x1407ABD34
 * Callers:
 *     IopQueryInformation @ 0x1407ABAF0 (IopQueryInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     FsFilterCtrlInit @ 0x1402A2120 (FsFilterCtrlInit.c)
 *     FsFilterPerformCompletionCallbacks @ 0x1402A21B0 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x1402A2240 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlFree @ 0x1402A2558 (FsFilterCtrlFree.c)
 *     IoGetAttachedDevice @ 0x1402AF6A0 (IoGetAttachedDevice.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall FsRtlQueryOpen(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  PDEVICE_OBJECT AttachedDevice; // rax
  __int64 v10; // r9
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v13; // eax
  int v14; // ebx
  _DWORD v15[4]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v16[72]; // [rsp+40h] [rbp-C0h] BYREF

  v15[0] = 0;
  memset(v16, 0, 0x238uLL);
  AttachedDevice = IoGetAttachedDevice(DeviceObject);
  result = FsFilterCtrlInit(
             (__int64)v16,
             249,
             (__int64)AttachedDevice,
             v10,
             *(_QWORD *)(*(_QWORD *)(a2 + 184) + 48LL),
             1u);
  if ( (int)result >= 0 )
  {
    LODWORD(v16[6]) = a5;
    v16[3] = a2;
    v16[4] = a3;
    v16[5] = a4;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v13 = FsFilterPerformCallbacks((__int64)v16, 1, 1, v15);
    v14 = v13;
    if ( WORD1(v16[9]) )
      v14 = FsFilterPerformCompletionCallbacks((__int64)v16, v13);
    KeLeaveCriticalRegion();
    FsFilterCtrlFree((__int64)v16);
    if ( v14 >= 0 && (v15[0] & 2) == 0 )
      return (unsigned int)-1073741822;
    return (unsigned int)v14;
  }
  return result;
}
