/*
 * XREFs of ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00D5758
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00880D0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00D77D0 (-InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00A0B78 (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00AA07C (-UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z.c)
 */

char __fastcall VIDMM_GLOBAL::CleanupPrimaryAllocation(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  char *v2; // r15
  char *v4; // rdi
  char v5; // r12
  char *v6; // rbp
  char *v7; // rbp
  char *v8; // r14
  char *v9; // rbx
  int v10; // ecx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  int v18; // [rsp+20h] [rbp-38h]

  v2 = (char *)a2 + 272;
  v4 = (char *)*((_QWORD *)a2 + 34);
  v5 = 0;
  while ( v4 != v2 )
  {
    v6 = v4;
    v4 = *(char **)v4;
    v7 = v6 - 16;
    v8 = *(char **)v7;
    while ( v8 != v7 )
    {
      v9 = v8 - 40;
      v8 = *(char **)v8;
      v10 = *((_DWORD *)v9 + 7);
      if ( (v10 & 3) == 1 )
      {
        v11 = v9 + 56;
        v12 = *((_QWORD *)v9 + 7);
        if ( *(char **)(v12 + 8) != v9 + 56 || (v13 = (_QWORD *)*((_QWORD *)v9 + 8), (_QWORD *)*v13 != v11) )
          __fastfail(3u);
        *v13 = v12;
        *(_QWORD *)(v12 + 8) = v13;
        *((_DWORD *)v9 + 7) &= 0xFFFFFFFC;
        *((_QWORD *)v9 + 8) = 0LL;
        *v11 = 0LL;
        v10 = *((_DWORD *)v9 + 7);
      }
      if ( (v10 & 3) != 0 )
      {
        VIDMM_DEVICE::UnreferencePinnedAllocation(*((VIDMM_DEVICE **)v9 + 1), (struct VIDMM_ALLOC *)v9, 1);
        if ( !(v9[25] & 1 | *((_DWORD *)v9 + 38)) )
        {
          LOBYTE(v14) = 1;
          VIDMM_DEVICE::RemoveCommitment(*((VIDMM_DEVICE **)v9 + 1), (__int64 ***)v9, v14, v15);
          v5 = 1;
        }
        _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)a2 + 66) + 12LL));
      }
    }
    v16 = *((_QWORD *)a2 + 15);
    if ( v16 && !*((_DWORD *)a2 + 36) )
    {
      LOBYTE(v18) = 0;
      (*(void (__fastcall **)(__int64, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, int, _QWORD))(*(_QWORD *)v16 + 48LL))(
        v16,
        a2,
        0LL,
        0LL,
        v18,
        0LL);
    }
  }
  return v5;
}
