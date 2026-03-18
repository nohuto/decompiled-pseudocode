/*
 * XREFs of ?ReferenceAllocationForTokenSubmission@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A94F0
 * Callers:
 *     VidMmReferenceAllocationForTokenSubmission @ 0x1C001A7B0 (VidMmReferenceAllocationForTokenSubmission.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ReferenceAllocationForTokenSubmission(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        __int64 **a3,
        __int64 ***a4)
{
  __int64 v5; // rdi
  __int64 v6; // rcx
  struct VIDMM_DEVICE *v7; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx

  *a4 = 0LL;
  v5 = **a3;
  if ( *(_BYTE *)(v5 + 81) )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(this, a2, a3, a4);
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9, v11, v12) + 24) = v5;
    }
    return 3223191814LL;
  }
  else
  {
    v6 = *(unsigned int *)(*(_QWORD *)(v5 + 528) + 12LL);
    if ( (_DWORD)v6 )
    {
      if ( a2 && (v7 = (struct VIDMM_DEVICE *)a3[1], v7 != a2) )
      {
        WdLogSingleEntry3(1LL, a2, a3, v7);
        DxgkLogInternalTriageEvent(v17, 0x40000LL);
        return 3223191829LL;
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)a3 + 26);
        *a4 = a3;
        return 0LL;
      }
    }
    else
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v6, a2, a3, a4);
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v14, v13, v15, v16) + 24) = v5;
      }
      return 3223191812LL;
    }
  }
}
