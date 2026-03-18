/*
 * XREFs of ?VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C00819F8
 * Callers:
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0081848 (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0086108 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?Reset@VIDMM_PROCESS_HEAP@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z @ 0x1C00F2240 (-Reset@VIDMM_PROCESS_HEAP@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VidMmiSetPriorityForMemoryPages(struct _VIDMM_GLOBAL_ALLOC *a1, void *a2, __int64 a3)
{
  int v6; // eax
  int v7; // ecx
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF
  int v9; // [rsp+50h] [rbp+8h] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v9 = 4;
  if ( a1 && *(_WORD *)(*((_QWORD *)a1 + 66) + 4LL) == 3 )
  {
    v7 = *((_DWORD *)a1 + 112) - 1;
    if ( v7 )
    {
      if ( v7 == 2 )
        v9 = 5;
    }
    else
    {
      v9 = 3;
    }
  }
  v6 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *, int *, int))ZwSetInformationVirtualMemory)(
         -1LL,
         1LL,
         1LL,
         v8,
         &v9,
         4);
  if ( v6 < 0 )
    WdLogSingleEntry4(3LL, a1, a2, a3, v6);
}
