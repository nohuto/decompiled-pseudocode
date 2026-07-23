/*
 * XREFs of sub_140A06B80 @ 0x140A06B80
 * Callers:
 *     <none>
 * Callees:
 *     MmSizeOfMdl @ 0x140231480 (MmSizeOfMdl.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     MmProbeAndLockPages @ 0x140319E90 (MmProbeAndLockPages.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     sub_14057158C @ 0x14057158C (sub_14057158C.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140962018 @ 0x140962018 (sub_140962018.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall sub_140A06B80(void *a1)
{
  KPROCESSOR_MODE v1; // r14
  NTSTATUS result; // eax
  _QWORD *v3; // rbx
  int v4; // edi
  SIZE_T v5; // rax
  char *PoolWithTag; // rax
  void *v7; // rdi
  struct _MDL *v8; // rsi
  __int64 v9; // r10
  __int64 v10; // r8
  PVOID v11; // r14
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF
  PVOID P; // [rsp+80h] [rbp+18h]

  v1 = *((_BYTE *)KeGetCurrentThread() + 562);
  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 1u, qword_140D05318, v1, &Object, 0LL);
  if ( result >= 0 )
  {
    KeWaitForSingleObject(&stru_140C10D60, Executive, 0, 0, 0LL);
    v3 = Object;
    if ( *((_QWORD *)Object + 6) )
    {
      v4 = -1073741640;
LABEL_8:
      KeReleaseMutex(&stru_140C10D60, 0);
      ObfDereferenceObject(v3);
      return v4;
    }
    if ( dword_140D04C60 == KeQueryActiveProcessorCountEx(0xFFFFu) << 13 )
    {
      v4 = -1073741613;
      goto LABEL_8;
    }
    v5 = MmSizeOfMdl((PVOID)v3[3], *((unsigned int *)v3 + 8));
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v5 + 352, 0x666F7250u);
    v7 = PoolWithTag;
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      v4 = -1073741670;
      goto LABEL_8;
    }
    v8 = (struct _MDL *)(PoolWithTag + 352);
    v3[7] = PoolWithTag + 352;
    v3[5] = PoolWithTag;
    v9 = *((unsigned int *)v3 + 8);
    v10 = v3[3];
    *((_QWORD *)PoolWithTag + 44) = 0LL;
    *((_WORD *)PoolWithTag + 180) = 8 * ((((unsigned __int64)(v10 & 0xFFF) + v9 + 4095) >> 12) + 6);
    *((_WORD *)PoolWithTag + 181) = 0;
    *((_QWORD *)PoolWithTag + 48) = v10 & 0xFFFFFFFFFFFFF000uLL;
    *((_DWORD *)PoolWithTag + 99) = v10 & 0xFFF;
    *((_DWORD *)PoolWithTag + 98) = v9;
    MmProbeAndLockPages((PMDL)(PoolWithTag + 352), v1, IoWriteAccess);
    v11 = MmMapLockedPagesSpecifyCache((PMDL)v3[7], 0, MmCached, 0LL, 0, 0x40000010u);
    if ( v11 )
    {
      sub_140962018(
        (__int64)v7,
        *v3,
        (__int64)v11,
        v3[1],
        v3[2],
        *((_DWORD *)v3 + 9),
        *((_DWORD *)v3 + 16),
        *((_DWORD *)v3 + 17),
        (unsigned __int16 *)v3 + 36);
      sub_14057158C((ULONG_PTR)v7);
      v3[6] = v11;
      ++dword_140D04C60;
      KeReleaseMutex(&stru_140C10D60, 0);
      ObfDereferenceObject(v3);
      return 0;
    }
    else
    {
      KeReleaseMutex(&stru_140C10D60, 0);
      MmUnlockPages(v8);
      ExFreePoolWithTag(v7, 0);
      ObfDereferenceObject(v3);
      return -1073741670;
    }
  }
  return result;
}
