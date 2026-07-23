/*
 * XREFs of PiControlGetDeviceInterfaceEnabled @ 0x1406D3FB0
 * Callers:
 *     <none>
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14022BD7C (PiControlFreeUserModeCallersBuffer.c)
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140231280 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     PnpUnicodeStringToWstrFree @ 0x1406D3F74 (PnpUnicodeStringToWstrFree.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1406D4220 (PiControlMakeUserModeCallersCopy.c)
 *     PnpUnicodeStringToWstr @ 0x1406D42E4 (PnpUnicodeStringToWstr.c)
 *     PiDmObjectRelease @ 0x1406D6B98 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x1406D8150 (PiDmGetObject.c)
 */

__int64 __fastcall PiControlGetDeviceInterfaceEnabled(__int64 a1, unsigned __int16 *a2, __int64 a3, char a4)
{
  unsigned int v4; // ecx
  __int64 result; // rax
  int Object; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v10; // rbx
  ULONG_PTR v11; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-20h] BYREF
  __int128 v14; // [rsp+38h] [rbp-18h] BYREF
  void *v15; // [rsp+78h] [rbp+28h] BYREF

  v4 = *a2;
  BugCheckParameter2 = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  WORD1(v14) = v4;
  LOWORD(v14) = v4;
  if ( (unsigned __int16)(v4 - 1) > 0x3EFu || (v4 & 1) != 0 || *((_DWORD *)a2 + 4) )
    return 3221225485LL;
  result = PiControlMakeUserModeCallersCopy((char *)&v14 + 8, *((_QWORD *)a2 + 1), v4, 2LL, a4, 1);
  if ( (int)result >= 0 )
  {
    Object = PnpUnicodeStringToWstr(&v15, 0LL, &v14);
    if ( Object >= 0 )
    {
      Object = PiDmGetObject(3LL, v15, &BugCheckParameter2);
      if ( Object >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        v10 = (__int64 *)BugCheckParameter2;
        v11 = BugCheckParameter2;
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockSharedEx(v11, 0LL);
        *((_BYTE *)a2 + 20) = v10[5] != 0;
        ExReleasePushLockEx(v10, 0LL);
        KeLeaveCriticalRegion();
        PiDmObjectRelease(v10);
      }
    }
    PnpUnicodeStringToWstrFree(v15, (__int64)&v14);
    PiControlFreeUserModeCallersBuffer(a4, *((void **)&v14 + 1));
    return (unsigned int)Object;
  }
  return result;
}
