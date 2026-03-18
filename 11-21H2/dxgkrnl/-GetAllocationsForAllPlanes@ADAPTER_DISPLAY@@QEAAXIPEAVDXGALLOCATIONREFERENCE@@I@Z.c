/*
 * XREFs of ?GetAllocationsForAllPlanes@ADAPTER_DISPLAY@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0195B48
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0196940 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C01959C8 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z @ 0x1C0195D10 (-IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::GetAllocationsForAllPlanes(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        struct _EX_RUNDOWN_REF **a3,
        unsigned int a4)
{
  __int64 v4; // rbx
  __int64 v8; // rbx
  unsigned int v9; // edi
  int *v10; // r15
  struct _EX_RUNDOWN_REF *v11; // rsi
  __int64 v12; // r13
  __int64 v13; // rdx
  DXGFASTMUTEX *v14; // [rsp+50h] [rbp-10h]
  char v15; // [rsp+58h] [rbp-8h]
  struct _EX_RUNDOWN_REF *v16; // [rsp+90h] [rbp+30h] BYREF

  v4 = a2;
  v14 = (ADAPTER_DISPLAY *)((char *)this + 608);
  v15 = 0;
  if ( this == (ADAPTER_DISPLAY *)-608LL )
  {
    WdLogSingleEntry1(1LL, 573LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 573LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((struct _KTHREAD **)v14 + 3) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 580LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 580LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::Acquire(v14);
  v15 = 1;
  v8 = *((_QWORD *)this + 16) + 4000 * v4;
  if ( *(struct _KTHREAD **)(*(_QWORD *)(v8 + 8) + 632LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 9420LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9420LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v9 = 0;
  if ( *(_DWORD *)(v8 + 3760) < a4 )
    a4 = *(_DWORD *)(v8 + 3760);
  if ( a4 )
  {
    v16 = 0LL;
    v10 = (int *)(v8 + 1144);
    do
    {
      v11 = 0LL;
      if ( v9 < *(_DWORD *)(v8 + 3760) )
      {
        v12 = 168LL * v9;
        if ( !IsDisplayPlaneConfigQueueEmpty((struct _DISPLAY_PLANE_CONFIG_QUEUE *)(v12 + v8 + 1144)) )
        {
          v13 = v12 + 80LL * *v10 + v8 + 1152;
          if ( v13 )
          {
            if ( (*(_DWORD *)(v13 + 8) & 1) != 0 )
            {
              v11 = *(struct _EX_RUNDOWN_REF **)v13;
              if ( *(_QWORD *)v13 )
                DxgkReferenceDxgAllocation(*(struct _EX_RUNDOWN_REF **)v13);
            }
          }
        }
      }
      if ( *a3 )
        ExReleaseRundownProtection(*a3 + 11);
      *a3 = v11;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v16);
      ++v9;
      v10 += 42;
      ++a3;
    }
    while ( v9 < a4 );
  }
  if ( v15 )
  {
    v15 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v14);
  }
}
