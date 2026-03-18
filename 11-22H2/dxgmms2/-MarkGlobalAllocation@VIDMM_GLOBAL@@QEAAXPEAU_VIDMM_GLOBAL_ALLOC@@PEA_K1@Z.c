/*
 * XREFs of ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C008EC7C
 * Callers:
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C008D110 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E11B4 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00FDFE4 (-OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x1C00FFB58 (-TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005BC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006770 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C009B88C (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 */

void __fastcall VIDMM_GLOBAL::MarkGlobalAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  struct _KTHREAD **v4; // r15
  _QWORD **v7; // r14
  __int64 v8; // rcx
  _QWORD *v9; // rdi
  _QWORD *v10; // rsi
  _QWORD **v11; // rsi
  _QWORD *v12; // rbx
  struct VIDMM_ALLOC *v13; // rbp
  struct _KTHREAD **v15; // [rsp+78h] [rbp+10h]

  v4 = (struct _KTHREAD **)((char *)a2 + 296);
  v15 = (struct _KTHREAD **)((char *)a2 + 296);
  v7 = (_QWORD **)((char *)a2 + 272);
  DXGFASTMUTEX::Acquire((struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296));
  v9 = *v7;
  if ( *v7 != v7 )
  {
    do
    {
      v10 = v9;
      v9 = (_QWORD *)*v9;
      v11 = (_QWORD **)(v10 - 2);
      v12 = *v11;
      while ( v12 != v11 )
      {
        v13 = (struct VIDMM_ALLOC *)(v12 - 5);
        v12 = (_QWORD *)*v12;
        if ( (*((_BYTE *)v13 + 28) & 3) == 2 )
        {
          if ( g_IsInternalReleaseOrDbg )
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v8) + 24) = v13;
          VIDMM_GLOBAL::NotifyAllocationEviction(this, v13, 0, a3, a4);
        }
      }
    }
    while ( v9 != v7 );
    v4 = v15;
  }
  DXGFASTMUTEX::Release(v4);
}
