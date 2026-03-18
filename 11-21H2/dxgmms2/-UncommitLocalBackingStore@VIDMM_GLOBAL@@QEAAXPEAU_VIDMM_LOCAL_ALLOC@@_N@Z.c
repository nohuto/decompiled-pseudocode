/*
 * XREFs of ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C008A158
 * Callers:
 *     ?CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z @ 0x1C008A00C (-CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C00927A8 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C00A49DC (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00D5C58 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C001CDD4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C00A3CDC (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C00A3CFC (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::UncommitLocalBackingStore(VIDMM_GLOBAL *this, struct _VIDMM_LOCAL_ALLOC *a2, char a3)
{
  __int64 v3; // rbp
  __int64 v5; // rsi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // r8
  VIDMM_PROCESS *v14; // rcx
  __int64 v15; // r14
  __int64 CurrentProcess; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // eax
  struct _KAPC_STATE v21; // [rsp+60h] [rbp-68h] BYREF
  __int64 v22; // [rsp+90h] [rbp-38h]

  v3 = *((_QWORD *)a2 + 1);
  v5 = *(_QWORD *)a2;
  v22 = v3;
  VIDMM_PROCESS::SafeAttach((VIDMM_PROCESS *)v3, &v21);
  v9 = *(unsigned int *)(v5 + 72);
  v10 = 0x40000LL;
  v11 = v9;
  if ( (v9 & 0x2000) == 0 )
  {
    v8 = 278528LL;
    if ( (v9 & 0x44000) != 0x44000 || (v19 = *(_QWORD *)(v3 + 32)) == 0 || (*(_DWORD *)(v19 + 424) & 0x100) == 0 )
    {
      v11 = (unsigned int)v9;
      if ( (v9 & 0x400) == 0 && ((v9 & 0x40000) != 0 || (**(_DWORD **)(v5 + 528) & 0x40000) != 0) )
      {
        v11 = (unsigned int)v9;
        if ( a3 )
        {
          v15 = *((_QWORD *)a2 + 2);
          if ( v15 )
          {
            CurrentProcess = PsGetCurrentProcess(278528LL, (unsigned int)v9, v9, 0x40000LL);
            VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
            (*((void (__fastcall **)(__int64, __int64))VirtualMemoryInterface + 4))(CurrentProcess, v15);
            v11 = *(unsigned int *)(v5 + 72);
            v10 = 0x40000LL;
          }
        }
      }
    }
  }
  v12 = **(_DWORD **)(v5 + 528);
  if ( (v11 & 0x40000) != 0 )
  {
    if ( (v12 & 0x400000) == 0 && *((_QWORD *)a2 + 12) )
    {
      v18 = PsGetCurrentProcess(v8, v11, v9, 0x40000LL);
      WdLogSingleEntry2(4LL, *((_QWORD *)a2 + 12), v18);
      ObCloseHandle(*((HANDLE *)a2 + 12), (*((_QWORD *)a2 + 12) & 0xFFFFFFFF80000000uLL) == 0);
      *((_QWORD *)a2 + 12) = 0LL;
    }
  }
  else if ( (v12 & 8) == 0 && (v12 & 0x20000) == 0 && (v12 & 0x10) == 0 && (v12 & 0x20) == 0 )
  {
    v13 = *((_QWORD *)a2 + 3);
    if ( v13 )
    {
      if ( a3 )
      {
        if ( (v11 & 0x100000) != 0 && (*((_BYTE *)a2 + 32) & 1) != 0 )
        {
          v20 = (*(__int64 (__fastcall **)(_QWORD, VIDMM_GLOBAL *, __int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, __int64))(**(_QWORD **)(v3 + 24) + 48LL))(
                  *(_QWORD *)(v3 + 24),
                  this,
                  v13,
                  3LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  0,
                  v5);
          if ( (int)(v20 + 0x80000000) >= 0 && v20 != -1073741558 )
            WdLogSingleEntry5(0LL, 270LL, 4LL, 3LL, v20, 0LL);
          *((_BYTE *)a2 + 32) &= ~1u;
        }
        (*(void (__fastcall **)(_QWORD, struct _VIDMM_LOCAL_ALLOC *, __int64, __int64))(**(_QWORD **)(v3 + 24) + 24LL))(
          *(_QWORD *)(v3 + 24),
          a2,
          v13,
          v10);
        *((_QWORD *)a2 + 3) = 0LL;
      }
    }
  }
  v14 = (VIDMM_PROCESS *)(296LL * (*(_DWORD *)(v5 + 68) & 0x3F));
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)((char *)v14
                              + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 16)
                                                      + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL))
                                          + 48LL)
                              + 224),
    -*(_QWORD *)(v5 + 8));
  *((_QWORD *)a2 + 2) = 0LL;
  VIDMM_PROCESS::SafeDetach(v14, &v21);
}
