/*
 * XREFs of ?UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00A89E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1C001D980 (memmove.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C007C090 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C007C1D4 (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C0085F74 (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 */

void __fastcall VIDMM_SYSMEM_SEGMENT::UnlockAllocationRange(
        VIDMM_SYSMEM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // r12
  int v7; // r14d
  PRKPROCESS **v8; // rsi
  char *v9; // rax
  void *v10[4]; // [rsp+58h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-50h] BYREF

  v4 = a3;
  v10[2] = this;
  v10[1] = a2;
  memset(&ApcState, 0, sizeof(ApcState));
  v7 = 0;
  v8 = (PRKPROCESS **)*((_QWORD *)a2 + 11);
  v10[3] = v8;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
  if ( (*((_DWORD *)a2 + 18) & 0x2000) == 0 )
  {
    if ( *((_BYTE *)a2 + 264) )
    {
      if ( (**((_DWORD **)a2 + 66) & 8) == 0 && v8 )
      {
        KeStackAttachProcess(*v8[1], &ApcState);
        v7 = 1;
      }
      v10[0] = 0LL;
      v9 = VidMmMapViewOfAllocation(
             (struct _VIDMM_LOCAL_ALLOC *)v8,
             *((struct _VIDMM_LOCAL_ALLOC **)a2 + 31),
             *((_QWORD *)a2 + 32),
             v10,
             0);
      if ( v9 )
      {
        memmove(v9, *((const void **)this + 32), *((_QWORD *)a2 + 32));
        VidMmUnmapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v8, v10[0]);
      }
      else
      {
        memset(*((void **)this + 32), 0, *((_QWORD *)a2 + 32));
        *((_DWORD *)a2 + 17) |= 0x200000u;
      }
      if ( v7 )
        KeUnstackDetachProcess(&ApcState);
    }
    else
    {
      VIDMM_GLOBAL::UnlockAllocation(
        *((VIDMM_GLOBAL **)this + 1),
        (struct _VIDMM_LOCAL_ALLOC *)v8,
        *((_QWORD *)a2 + 31),
        *((_QWORD *)a2 + 32),
        1,
        v4);
    }
  }
  *((_QWORD *)a2 + 32) = 0LL;
  *((_QWORD *)a2 + 31) = 0LL;
  *((_WORD *)a2 + 132) = 0;
}
