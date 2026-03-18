/*
 * XREFs of ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z @ 0x1C007F5A4
 * Callers:
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C007F4F8 (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x1C003260C (McTemplateK0qxxx_EtwWriteTransfer.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C007F760 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C008108C (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C008110C (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKK@Z @ 0x1C0081428 (-VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKK@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_RANGE::Commit(VIDMM_RECYCLE_RANGE *this, __int64 a2, unsigned __int8 *a3)
{
  __int64 v3; // rdx
  VIDMM_RECYCLE_HEAP_MGR *v6; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v7; // rbx
  __int64 v8; // rdx
  void *v9; // r8
  int v10; // edx
  unsigned int v11; // r9d
  int v12; // eax
  __int64 v13; // r8
  unsigned int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  __int64 v23; // rcx
  unsigned __int64 v24; // [rsp+70h] [rbp+8h] BYREF
  void *v25; // [rsp+88h] [rbp+20h] BYREF

  v3 = *((int *)this + 16);
  if ( (_DWORD)v3 )
  {
    if ( (_DWORD)v3 == 4 )
    {
      v6 = *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)this + 9) + 32LL);
      v7 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v6 + 1);
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v6, this);
      VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(v7, this);
      if ( dword_1C006E450 && *((_DWORD *)this + 20) <= 1u )
      {
        if ( g_IsInternalRelease )
          WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      }
      v8 = 3LL;
      goto LABEL_22;
    }
    if ( (_DWORD)v3 != 5 )
    {
      WdLogSingleEntry5(0LL, 270LL, 52LL, 0LL, v3, 0LL);
LABEL_23:
      v19 = *((_DWORD *)this + 20);
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            if ( v21 != 1 )
              return 0LL;
          }
          else
          {
            *((_DWORD *)this + 20) = 3;
          }
          *((_BYTE *)this + 84) = *a3;
          return 0LL;
        }
      }
      else
      {
        *((_DWORD *)this + 20) = 1;
      }
      *((_BYTE *)this + 84) = 0;
      return 0LL;
    }
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce((VIDMM_RECYCLE_HEAP_MGR *)(unsigned int)(v3 - 4), this);
    goto LABEL_8;
  }
  v9 = (void *)*((_QWORD *)this + 4);
  v24 = *((_QWORD *)this + 5) - (_QWORD)v9;
  v10 = **(_DWORD **)(*((_QWORD *)this + 9) + 32LL);
  if ( (unsigned int)(v10 - 9) <= 1 || (unsigned int)(v10 - 3) <= 3 )
  {
LABEL_8:
    if ( dword_1C006E450 && !*((_DWORD *)this + 20) && g_IsInternalRelease )
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
LABEL_21:
    v8 = 1LL;
LABEL_22:
    VIDMM_RECYCLE_RANGE::Transition(this, v8);
    goto LABEL_23;
  }
  if ( v10 == 2 || (v11 = 1028, v10 == 8) )
    v11 = 4;
  v25 = v9;
  v12 = VidMmAllocateVirtualMemory(&v25, &v24, 0x1000u, v11);
  v14 = v12;
  if ( v12 >= 0 )
  {
    if ( dword_1C006E450 && *((_DWORD *)this + 20) && g_IsInternalRelease )
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    if ( bTracingEnabled )
    {
      v15 = *((_QWORD *)this + 9);
      v16 = *(_QWORD *)(v15 + 32);
      v17 = (unsigned int)(*(_DWORD *)v16 - 3) <= 3 ? *(_QWORD *)(v15 + 56) : *((_QWORD *)this + 4);
      v18 = *(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL);
      if ( (byte_1C006E941 & 8) != 0 )
        McTemplateK0qxxx_EtwWriteTransfer(
          v18,
          &EventCreateProcessAllocationDetails,
          v13,
          *(_DWORD *)(v18 + 8),
          (char)this,
          v24,
          v17);
    }
    goto LABEL_21;
  }
  _InterlockedIncrement(&dword_1C006E810);
  WdLogSingleEntry1(6LL, v12);
  DxgkLogInternalTriageEvent(v23, 262145LL);
  return v14;
}
