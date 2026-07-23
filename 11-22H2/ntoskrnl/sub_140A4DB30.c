/*
 * XREFs of sub_140A4DB30 @ 0x140A4DB30
 * Callers:
 *     sub_140764E70 @ 0x140764E70 (sub_140764E70.c)
 * Callees:
 *     IoAllocateMdl @ 0x14022E2C0 (IoAllocateMdl.c)
 *     MmProbeAndLockPages @ 0x140238770 (MmProbeAndLockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14027CE40 (MmMapLockedPagesSpecifyCache.c)
 *     IoFreeMdl @ 0x1402ACFB0 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x1402CAB10 (MmUnlockPages.c)
 *     ZwProtectVirtualMemory @ 0x14041B0A0 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall sub_140A4DB30(PVOID VirtualAddress, ULONG Length, struct _MDL **a3, _QWORD *a4)
{
  struct _MDL *v8; // rbx
  int v9; // esi
  NTSTATUS v10; // edi
  struct _MDL *Mdl; // rax
  PVOID MappedSystemVa; // rax
  PVOID v14[3]; // [rsp+48h] [rbp-40h] BYREF
  ULONG_PTR v15; // [rsp+90h] [rbp+8h] BYREF
  ULONG v16; // [rsp+98h] [rbp+10h] BYREF

  v8 = 0LL;
  v9 = 0;
  v16 = 0;
  v14[0] = VirtualAddress;
  v15 = Length;
  v10 = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v14, &v15, 4u, &v16);
  if ( v10 >= 0 )
  {
    Mdl = IoAllocateMdl(VirtualAddress, Length, 0, 0, 0LL);
    v8 = Mdl;
    if ( Mdl )
    {
      v9 = 1;
      MmProbeAndLockPages(Mdl, 1, IoModifyAccess);
      if ( (v8->MdlFlags & 5) != 0 )
        MappedSystemVa = v8->MappedSystemVa;
      else
        MappedSystemVa = MmMapLockedPagesSpecifyCache(v8, 0, MmCached, 0LL, 0, 0x40000020u);
      v14[1] = MappedSystemVa;
      if ( MappedSystemVa )
      {
        if ( a4 )
          *a4 = MappedSystemVa;
        if ( a3 )
        {
          *a3 = v8;
          v8 = 0LL;
        }
      }
      else
      {
        v10 = -1073741801;
      }
    }
    else
    {
      v10 = -1073741801;
    }
  }
  if ( v8 )
  {
    if ( v9 )
      MmUnlockPages(v8);
    IoFreeMdl(v8);
  }
  return (unsigned int)v10;
}
