/*
 * XREFs of MmPrefetchVirtualMemory @ 0x140681A70
 * Callers:
 *     MiProcessWsInSwapRanges @ 0x140200438 (MiProcessWsInSwapRanges.c)
 *     MmPrefetchVirtualAddresses @ 0x1406819E0 (MmPrefetchVirtualAddresses.c)
 *     PfpPrefetchPrivatePages @ 0x14097E468 (PfpPrefetchPrivatePages.c)
 *     ExpDebuggerWorker @ 0x140AB1D30 (ExpDebuggerWorker.c)
 * Callees:
 *     MiGetSessionVm @ 0x14020B11C (MiGetSessionVm.c)
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     MiPrefetchVirtualMemory @ 0x1402EE458 (MiPrefetchVirtualMemory.c)
 *     MmDetachSession @ 0x140356450 (MmDetachSession.c)
 *     MmAttachSession @ 0x1403564F0 (MmAttachSession.c)
 *     ObIsKernelHandle @ 0x14036F220 (ObIsKernelHandle.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     MiLockAndSelectSessionAttachProcess @ 0x140632034 (MiLockAndSelectSessionAttachProcess.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6330 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __fastcall MmPrefetchVirtualMemory(char *Handle, unsigned __int64 a2, __int64 a3, int a4)
{
  int v6; // ebx
  PVOID v7; // r15
  _KPROCESS *v8; // r14
  struct _KTHREAD *CurrentThread; // r12
  _DWORD *p_LockNV; // rsi
  unsigned __int64 SessionVm; // rax
  int v12; // edi
  NTSTATUS result; // eax
  _KPROCESS *v14; // rax
  ULONG_PTR BugCheckParameter1; // [rsp+40h] [rbp-49h] BYREF
  PVOID Object; // [rsp+48h] [rbp-41h] BYREF
  __int64 v17; // [rsp+50h] [rbp-39h]
  unsigned __int64 v18; // [rsp+58h] [rbp-31h]
  $115DCDF994C6370D29323EAB0E0C9502 v19; // [rsp+60h] [rbp-29h] BYREF

  v17 = a3;
  v18 = a2;
  BugCheckParameter1 = 0LL;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  memset(&v19, 0, sizeof(v19));
  CurrentThread = KeGetCurrentThread();
  if ( !Handle )
  {
    SessionVm = 1LL;
    goto LABEL_29;
  }
  if ( Handle != (char *)-1LL )
  {
    if ( Handle == (char *)-3LL )
    {
      p_LockNV = &CurrentThread->ApcState.Process->Header.LockNV;
      if ( (p_LockNV[281] & 0x10000) == 0 )
        return -1073741799;
      SessionVm = MiGetSessionVm();
      goto LABEL_6;
    }
    if ( !ObIsKernelHandle(Handle) )
      return -1073741585;
    if ( (int)ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x66506D4Du, (__int64)&BugCheckParameter1, 0LL, 0LL) >= 0 )
    {
      p_LockNV = (_DWORD *)BugCheckParameter1;
      if ( CurrentThread->ApcState.Process != (_KPROCESS *)BugCheckParameter1 )
      {
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v19);
        v6 = 1;
      }
      goto LABEL_15;
    }
    Object = 0LL;
    result = ObReferenceObjectByHandle(Handle, 1u, MmSessionObjectType, 0, &Object, 0LL);
    v7 = Object;
    if ( result < 0 )
      return result;
    v14 = (_KPROCESS *)MiLockAndSelectSessionAttachProcess(*((_QWORD *)Object + 3));
    v8 = v14;
    if ( !v14 )
    {
LABEL_27:
      ObfDereferenceObject(v7);
      return 0;
    }
    if ( (int)MmAttachSession(v14, (__int64)&v19) < 0 )
    {
      ObfDereferenceObject(v8);
      goto LABEL_27;
    }
    SessionVm = MiGetSessionVm();
LABEL_29:
    p_LockNV = (_DWORD *)BugCheckParameter1;
    goto LABEL_6;
  }
  p_LockNV = &CurrentThread->ApcState.Process->Header.LockNV;
LABEL_15:
  SessionVm = (unsigned __int64)(p_LockNV + 416);
LABEL_6:
  v12 = MiPrefetchVirtualMemory(v18, v17, SessionVm, a4);
  if ( v6 )
    KiUnstackDetachProcess(&v19);
  if ( v8 )
  {
    MmDetachSession((__int64)v8, &v19);
    ObfDereferenceObject(v8);
  }
  if ( (unsigned __int64)(Handle - 1) <= 0xFFFFFFFFFFFFFFFBuLL || Handle == (char *)-2LL )
  {
    if ( p_LockNV )
    {
      ObfDereferenceObjectWithTag(p_LockNV, 0x66506D4Du);
    }
    else if ( v7 )
    {
      ObfDereferenceObject(v7);
    }
  }
  return v12;
}
