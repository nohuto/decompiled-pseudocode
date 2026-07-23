/*
 * XREFs of RtlpWow64CreateUserStack @ 0x1407DEA00
 * Callers:
 *     PspWow64SetupUserStack @ 0x1407DE950 (PspWow64SetupUserStack.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140214B50 (RtlImageNtHeader.c)
 *     ZwAllocateVirtualMemory @ 0x14041A9A0 (ZwAllocateVirtualMemory.c)
 *     ZwSetInformationProcess @ 0x14041AA20 (ZwSetInformationProcess.c)
 *     ZwFreeVirtualMemory @ 0x14041AA60 (ZwFreeVirtualMemory.c)
 */

NTSTATUS __fastcall RtlpWow64CreateUserStack(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5)
{
  _QWORD *v6; // r15
  unsigned __int64 v7; // rax
  ULONG_PTR v8; // rsi
  unsigned __int64 v9; // rdi
  NTSTATUS result; // eax
  __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  NTSTATUS v13; // r15d
  _QWORD *v14; // rsi
  char *v15; // rax
  int v16; // edi
  PIMAGE_NT_HEADERS v17; // rax
  PIMAGE_NT_HEADERS v18; // rcx
  unsigned __int64 SizeOfStackReserve_high; // rax
  unsigned int SizeOfStackReserve; // edx
  PVOID BaseAddress; // [rsp+30h] [rbp-98h] BYREF
  int v22; // [rsp+38h] [rbp-90h]
  PVOID v23; // [rsp+40h] [rbp-88h] BYREF
  ULONG_PTR v24; // [rsp+48h] [rbp-80h] BYREF
  ULONG_PTR v25; // [rsp+50h] [rbp-78h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-70h] BYREF
  _DWORD ProcessInformation[4]; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v28; // [rsp+70h] [rbp-58h]
  __int64 v29; // [rsp+78h] [rbp-50h]
  __int64 v30; // [rsp+80h] [rbp-48h]
  ULONG_PTR v31; // [rsp+88h] [rbp-40h]
  unsigned __int64 v32; // [rsp+D0h] [rbp+8h]
  __int64 v34; // [rsp+E0h] [rbp+18h]

  v34 = a3;
  v32 = a1;
  v25 = 0LL;
  v30 = 0LL;
  v6 = (_QWORD *)KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[24];
  v23 = v6;
  if ( !a1 || (v7 = a2) == 0 )
  {
    v16 = 0;
    v17 = RtlImageNtHeader((PVOID)KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[18]);
    v18 = v17;
    if ( v17 )
    {
      SizeOfStackReserve_high = HIDWORD(v17->OptionalHeader.SizeOfStackReserve);
      SizeOfStackReserve = v18->OptionalHeader.SizeOfStackReserve;
      a1 = v32;
      if ( !v32 )
        a1 = SizeOfStackReserve_high;
      v7 = a2;
      if ( !a2 )
        v7 = SizeOfStackReserve;
    }
    else
    {
      v16 = -1073741701;
      v22 = -1073741701;
      v7 = a2;
      a1 = v32;
    }
    if ( v16 < 0 )
      return v16;
    a3 = v34;
  }
  if ( !a1 )
    a1 = 0x4000LL;
  if ( a1 >= v7 )
    v7 = (a1 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
  v8 = (a1 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v9 = (v7 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  v31 = v6[99];
  if ( v31 && v8 < v31 )
  {
    v8 = (v31 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v9 = (v8 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
  }
  ProcessInformation[0] = a4;
  ProcessInformation[1] = 0;
  ProcessInformation[3] = 0;
  ProcessInformation[2] = 0;
  v28 = v9;
  v29 = a3;
  result = ZwSetInformationProcess(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             ProcessThreadStackAllocation,
             ProcessInformation,
             0x28u);
  if ( result >= 0 )
  {
    v11 = v30;
    *(_QWORD *)(a5 + 56) = v30;
    *(_QWORD *)(a5 + 40) = v11 + v9;
    BaseAddress = (PVOID)(v9 + v11 - v8);
    v12 = v9 - v8;
    RegionSize = v8;
    v13 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
    if ( v13 < 0 )
    {
      v14 = (_QWORD *)(a5 + 48);
    }
    else
    {
      v14 = (_QWORD *)(a5 + 48);
      v15 = (char *)BaseAddress;
      *(_QWORD *)(a5 + 48) = BaseAddress;
      if ( v12 < 0x2000 )
        return 0;
      BaseAddress = v15 - 0x2000;
      v25 = 0x2000LL;
      v13 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &v25, 0x1000u, 0x104u);
      if ( v13 >= 0 )
        return 0;
    }
    v23 = *(PVOID *)(a5 + 56);
    v24 = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v23, &v24, 0x8000u);
    *(_QWORD *)(a5 + 56) = 0LL;
    *(_QWORD *)(a5 + 40) = 0LL;
    *v14 = 0LL;
    return v13;
  }
  return result;
}
