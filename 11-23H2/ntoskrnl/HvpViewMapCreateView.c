/*
 * XREFs of HvpViewMapCreateView @ 0x140689F1C
 * Callers:
 *     HvpViewMapCreateViewsForRegion @ 0x140689C78 (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x14074FC60 (HvpViewMapPromoteRangeToMapping.c)
 * Callees:
 *     CmSiMapViewOfSection @ 0x140207E98 (CmSiMapViewOfSection.c)
 *     CmSiAllocateMemory @ 0x1402089E0 (CmSiAllocateMemory.c)
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     CmSiUnmapViewOfSection @ 0x140208C80 (CmSiUnmapViewOfSection.c)
 *     CmSiProtectViewOfSection @ 0x140296F38 (CmSiProtectViewOfSection.c)
 *     CmSiReleaseProcessLockedPagesCharge @ 0x1402E9E4C (CmSiReleaseProcessLockedPagesCharge.c)
 *     HvcallpNoHypervisorPresent @ 0x14036E7F0 (HvcallpNoHypervisorPresent.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall HvpViewMapCreateView(__int64 a1, LARGE_INTEGER a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 v6; // rdi
  void *Memory; // rax
  void *v10; // rbx
  ULONG_PTR v11; // rbp
  ULONG_PTR v12; // rcx
  NTSTATUS v13; // edi
  void *v15; // r8
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // [rsp+28h] [rbp-40h]
  __int64 v19; // [rsp+78h] [rbp+10h] BYREF

  LODWORD(v19) = 0;
  v6 = (unsigned __int64)(unsigned int)(a3 - a2.LowPart) >> 12;
  Memory = (void *)CmSiAllocateMemory(v6 + 72, 0x35384D43u);
  v10 = Memory;
  if ( Memory )
  {
    memset(Memory, 0, v6 + 72);
    *((_QWORD *)v10 + 4) = a3;
    *((LARGE_INTEGER *)v10 + 3) = a2;
    v11 = a3 - a2.QuadPart;
    v13 = CmSiMapViewOfSection(
            *(void **)a1,
            *(HANDLE **)(a1 + 24),
            a2,
            v11,
            ((*(_DWORD *)(a1 + 32) & 1) == 0) << 13,
            v18,
            (PVOID *)v10 + 7);
    if ( v13 < 0
      || (v13 = CmSiProtectViewOfSection(v12, *(void ***)(a1 + 24), *((void **)v10 + 7), v11, 1u, (ULONG *)&v19), v13 < 0) )
    {
      v15 = (void *)*((_QWORD *)v10 + 7);
      if ( v15 )
      {
        CmSiUnmapViewOfSection(v12, *(HANDLE **)(a1 + 24), v15);
        if ( *((_QWORD *)v10 + 8) )
        {
          v16 = HvcallpNoHypervisorPresent();
          CmSiReleaseProcessLockedPagesCharge(*(_QWORD **)(a1 + 24), v17 * v16);
        }
      }
      CmSiFreeMemory((PPRIVILEGE_SET)v10);
    }
    else
    {
      *a4 = v10;
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v13;
}
