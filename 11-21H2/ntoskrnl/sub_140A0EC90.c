/*
 * XREFs of sub_140A0EC90 @ 0x140A0EC90
 * Callers:
 *     sub_140A0EE10 @ 0x140A0EE10 (sub_140A0EE10.c)
 * Callees:
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     MmProbeAndLockPages @ 0x140319E90 (MmProbeAndLockPages.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     ZwProtectVirtualMemory @ 0x14041C160 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall sub_140A0EC90(PVOID VirtualAddress, ULONG Length, struct _MDL **a3, _QWORD *a4)
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
