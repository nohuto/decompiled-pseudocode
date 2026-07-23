/*
 * XREFs of sub_140929C60 @ 0x140929C60
 * Callers:
 *     <none>
 * Callees:
 *     PsGetThreadProcess @ 0x1402321F0 (PsGetThreadProcess.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_1402EEA18 @ 0x1402EEA18 (sub_1402EEA18.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwSetInformationThread @ 0x14041B900 (ZwSetInformationThread.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwAllocateVirtualMemory @ 0x14041BA60 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x14041BB20 (ZwFreeVirtualMemory.c)
 *     sub_14041C1A0 @ 0x14041C1A0 (sub_14041C1A0.c)
 *     sub_14041D020 @ 0x14041D020 (sub_14041D020.c)
 *     ObOpenObjectByPointer @ 0x1407277A0 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

LONG_PTR __fastcall sub_140929C60(char *P)
{
  __int64 v2; // rdi
  PEPROCESS ThreadProcess; // rax
  __int64 v4; // r9
  int v5; // edx
  char *v6; // rcx
  PVOID BaseAddress; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE ThreadHandle; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-98h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v12; // [rsp+90h] [rbp-78h]
  __int128 v13; // [rsp+A0h] [rbp-68h]
  __int128 v14; // [rsp+B0h] [rbp-58h]
  _BYTE v15[48]; // [rsp+C0h] [rbp-48h] BYREF

  RegionSize[2] = (ULONG_PTR)P;
  Handle = 0LL;
  ThreadHandle = 0LL;
  BaseAddress = 0LL;
  RegionSize[0] = 168LL;
  memset(v15, 0, sizeof(v15));
  v12 = 0LL;
  v13 = 0LL;
  *(_QWORD *)&v14 = 0LL;
  DWORD2(v14) = 0;
  v2 = *(_QWORD *)P;
  RegionSize[1] = v2;
  ThreadProcess = PsGetThreadProcess((PETHREAD)v2);
  sub_14030D5C0((ULONG_PTR)ThreadProcess, 0LL, (__int64)v15, v4);
  v5 = ObOpenObjectByPointer((PVOID)v2, 0, 0LL, 0x72u, (POBJECT_TYPE)PsThreadType, 1, &Handle);
  if ( v5 >= 0 )
  {
    v5 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, RegionSize, 0x3000u, 4u);
    if ( v5 >= 0 )
    {
      *((_QWORD *)BaseAddress + 1) = *((_QWORD *)P + 1);
      *(_QWORD *)BaseAddress = Handle;
      if ( P[16] )
      {
        v6 = (char *)BaseAddress + 16;
        *((_OWORD *)BaseAddress + 1) = *(_OWORD *)(P + 24);
        *((_OWORD *)v6 + 1) = *(_OWORD *)(P + 40);
        *((_OWORD *)v6 + 2) = *(_OWORD *)(P + 56);
        *((_OWORD *)v6 + 3) = *(_OWORD *)(P + 72);
        *((_OWORD *)v6 + 4) = *(_OWORD *)(P + 88);
        *((_OWORD *)v6 + 5) = *(_OWORD *)(P + 104);
        *((_OWORD *)v6 + 6) = *(_OWORD *)(P + 120);
        *((_OWORD *)v6 + 7) = *(_OWORD *)(P + 136);
        *((_OWORD *)v6 + 8) = *(_OWORD *)(P + 152);
        *((_QWORD *)v6 + 18) = *((_QWORD *)P + 21);
      }
      LODWORD(v12) = 48;
      *((_QWORD *)&v12 + 1) = 0LL;
      DWORD2(v13) = 512;
      *(_QWORD *)&v13 = 0LL;
      v14 = 0LL;
      v5 = sub_14041D020((__int64)&ThreadHandle, 0x1FFFFFLL);
    }
    else
    {
      BaseAddress = 0LL;
    }
  }
  if ( v5 < 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v2 + 1376), 0xFFDFFFFF);
    if ( Handle )
      ObCloseHandle(Handle, 1);
    sub_1402EEA18(v2, 0LL, 1u);
    if ( BaseAddress )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, 0x8000u);
  }
  else
  {
    ZwSetInformationThread(ThreadHandle, ThreadDbgkWerReportActive, &dword_14003AC4C, 4u);
    sub_14041C1A0((__int64)ThreadHandle, 0LL);
    ZwClose(ThreadHandle);
    ThreadHandle = 0LL;
  }
  sub_1402D0930((__int64)v15, 0LL);
  ExFreePoolWithTag(P, 0x4B474244u);
  return ObfDereferenceObject((PVOID)v2);
}
