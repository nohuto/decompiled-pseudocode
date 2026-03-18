/*
 * XREFs of PiControlGetDeviceInterfaceEnabled @ 0x14077BB00
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x1402DF554 (PiControlFreeUserModeCallersBuffer.c)
 *     PnpUnicodeStringToWstr @ 0x140779CA0 (PnpUnicodeStringToWstr.c)
 *     PiDmGetObject @ 0x14077B0A4 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x14077B394 (PiDmObjectRelease.c)
 *     PnpUnicodeStringToWstrFree @ 0x14077BAB8 (PnpUnicodeStringToWstrFree.c)
 *     PiControlMakeUserModeCallersCopy @ 0x14077C610 (PiControlMakeUserModeCallersCopy.c)
 */

__int64 __fastcall PiControlGetDeviceInterfaceEnabled(__int64 a1, unsigned __int16 *a2, __int64 a3, char a4)
{
  unsigned int v4; // ecx
  __int64 result; // rax
  int Object; // edi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v10; // rbx
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-20h] BYREF
  __int128 v13; // [rsp+38h] [rbp-18h] BYREF
  __int16 *v14; // [rsp+78h] [rbp+28h] BYREF

  v4 = *a2;
  BugCheckParameter2 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  WORD1(v13) = v4;
  LOWORD(v13) = v4;
  if ( (unsigned __int16)(v4 - 1) > 0x3EFu || (v4 & 1) != 0 || *((_DWORD *)a2 + 4) )
    return 3221225485LL;
  result = PiControlMakeUserModeCallersCopy((char *)&v13 + 8, *((_QWORD *)a2 + 1), v4, 2LL, a4, 1);
  if ( (int)result >= 0 )
  {
    Object = PnpUnicodeStringToWstr(&v14, 0LL, (unsigned __int16 *)&v13);
    if ( Object >= 0 )
    {
      Object = PiDmGetObject(3LL, (__int64)v14, (__int64 *)&BugCheckParameter2);
      if ( Object >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v10 = BugCheckParameter2;
        ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
        *((_BYTE *)a2 + 20) = *(_QWORD *)(v10 + 40) != 0LL;
        ExReleasePushLockEx(v10, 0LL);
        KeLeaveCriticalRegion();
        PiDmObjectRelease((unsigned int *)v10);
      }
    }
    PnpUnicodeStringToWstrFree(v14, (__int64)&v13);
    PiControlFreeUserModeCallersBuffer(a4, *((void **)&v13 + 1));
    return (unsigned int)Object;
  }
  return result;
}
