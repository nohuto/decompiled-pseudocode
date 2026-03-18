/*
 * XREFs of VidSchFlushDevice @ 0x1C0089F70
 * Callers:
 *     VidSchSuspendAdapter @ 0x1C0086510 (VidSchSuspendAdapter.c)
 *     VidSchTerminateDevice @ 0x1C00896D0 (VidSchTerminateDevice.c)
 *     ?WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0089F04 (-WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C00AEB20 (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 *     ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C00AEEF0 (-OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER.c)
 *     ?FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z @ 0x1C00E3164 (-FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z.c)
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x1C00019F0 (VidSchMarkDeviceAsError.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C0002538 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4.c)
 *     VidSchiInterlockedReadUlong @ 0x1C000258C (VidSchiInterlockedReadUlong.c)
 *     VidSchiClearFlipDevice @ 0x1C00025D8 (VidSchiClearFlipDevice.c)
 *     VidSchSuspendResumeDevice @ 0x1C0002D30 (VidSchSuspendResumeDevice.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199AC (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C001AC00 (memset.c)
 *     VidSchiWaitFlushCompletion @ 0x1C0087DCC (VidSchiWaitFlushCompletion.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C00ADDF0 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 */

__int64 __fastcall VidSchFlushDevice(__int64 a1, int *a2, unsigned int a3, __int64 a4)
{
  int v4; // ebx
  __int64 v5; // r15
  int v8; // esi
  __int64 v9; // r14
  __int64 v10; // rax
  VIDMM_DEVICE *v11; // rcx
  _DWORD *v12; // rcx
  __int64 result; // rax
  __int64 v14; // rcx
  union _LARGE_INTEGER v15; // [rsp+28h] [rbp-99h]
  _QWORD v16[20]; // [rsp+58h] [rbp-69h] BYREF
  char v17; // [rsp+140h] [rbp+7Fh]

  v17 = a4;
  v4 = 0;
  v5 = a3;
  if ( a1 && a2 )
  {
    v8 = *a2;
    if ( *a2 == 13 )
    {
      *(_DWORD *)(a1 + 1704) = 1;
      VidSchSuspendResumeDevice((struct _VIDSCH_DEVICE *)a1, 1, 0, 0);
      VidSchMarkDeviceAsError(a1, 14, 0LL);
      VidSchSuspendResumeDevice((struct _VIDSCH_DEVICE *)a1, 0, 0, 0);
    }
    v9 = *(_QWORD *)(a1 + 32);
    VidSchRundownUnorderedWaiter<_VIDSCH_DEVICE>(a1, v9, *a2, a4, v15);
    if ( (v8 & 1) != 0 )
    {
      v10 = *(_QWORD *)(a1 + 8);
      if ( v10 )
      {
        v11 = *(VIDMM_DEVICE **)(v10 + 792);
        if ( v11 )
          VIDMM_DEVICE::EnsureSchedulable(v11, 0);
      }
      memset(v16, 0, sizeof(v16));
      v12 = (_DWORD *)((-(__int64)(((*a2 - 3) & 0xFFFFFFFD) != 0) & 0xFFFFFFFFFFFFFFFCuLL) + a1 + 1584);
      if ( *v12 )
      {
        LODWORD(v16[4]) |= 0x10u;
        v16[5] = v12;
        LODWORD(v16[2]) = 1;
        LOBYTE(v16[19]) = v8 == 7;
        VidSchiWaitFlushCompletion(v9, (__int64)v16, 0x18u);
      }
      if ( *(_DWORD *)(a1 + 1572) )
      {
        memset(v16, 0, sizeof(v16));
        LODWORD(v16[4]) |= 0x10u;
        LODWORD(v16[2]) = 3;
        v16[5] = a1 + 1572;
        LOBYTE(v16[19]) = v8 == 7;
        VidSchiWaitFlushCompletion(v9, (__int64)v16, 0x17u);
      }
      if ( v8 != 5 )
      {
        if ( (_DWORD)v5 != -3 && (unsigned int)v5 >= *(_DWORD *)(v9 + 40) )
        {
          WdLogSingleEntry1(3LL, v5);
          LODWORD(v5) = -3;
        }
        VidSchiClearFlipDevice((struct _VIDSCH_GLOBAL *)v9, a1, 9, v5, v17);
        VidSchiInterlockedReadUlong((KSPIN_LOCK *)(v9 + 1728), (_DWORD *)(a1 + 1572));
      }
    }
    LOBYTE(v4) = v8 >= 11;
    result = 0LL;
    *(_DWORD *)(a1 + 1700) = v4;
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    DxgkLogInternalTriageEvent(v14, 0x40000LL);
    return 3221225485LL;
  }
  return result;
}
