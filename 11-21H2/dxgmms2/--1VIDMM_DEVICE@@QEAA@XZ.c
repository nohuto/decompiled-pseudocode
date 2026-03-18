/*
 * XREFs of ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1C0099084
 * Callers:
 *     ??_GVIDMM_DEVICE@@QEAAPEAXI@Z @ 0x1C001382C (--_GVIDMM_DEVICE@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000209C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000242C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00024A4 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??_EVIDMM_DEVICE_PAGING_QUEUE@@QEAAPEAXI@Z @ 0x1C0013F2C (--_EVIDMM_DEVICE_PAGING_QUEUE@@QEAAPEAXI@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0014F18 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C0098DD4 (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1C009935C (-DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ.c)
 *     ?Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C009A534 (-Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE::~VIDMM_DEVICE(VIDMM_DEVICE *this)
{
  unsigned int i; // ebx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  VIDMM_GLOBAL *v7; // rcx
  __int64 *v8; // rdx
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rcx
  VIDMM_DEVICE *v14; // rbx
  VIDMM_DEVICE **v15; // rdx
  VIDMM_DEVICE **v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  char *v19; // rdx
  unsigned int v20; // edi
  char *v21; // rcx
  __int64 v22; // rbx
  unsigned int j; // ebx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rax
  VIDMM_DEVICE_PAGING_QUEUE *v28; // rcx
  VIDMM_DEVICE_PAGING_QUEUE *v29; // rcx
  VIDMM_DEVICE_PAGING_QUEUE *v30; // rcx
  bool v31; // zf
  __int64 v32; // rbx
  char v33[8]; // [rsp+30h] [rbp-48h] BYREF
  DXGPUSHLOCK *v34; // [rsp+38h] [rbp-40h]
  int v35; // [rsp+40h] [rbp-38h]
  char v36[8]; // [rsp+48h] [rbp-30h] BYREF
  DXGPUSHLOCK *v37; // [rsp+50h] [rbp-28h]
  int v38; // [rsp+58h] [rbp-20h]

  for ( i = 0; i < *((_DWORD *)this + 17); ++i )
  {
    v3 = *((_QWORD *)this + 10);
    if ( v3 )
      VIDMM_PAGING_QUEUE::Flush((VIDMM_PAGING_QUEUE *)(v3 + 176LL * i));
    v4 = *((_QWORD *)this + 11);
    v5 = 176LL * i;
    if ( v4 )
      VIDMM_PAGING_QUEUE::Flush((VIDMM_PAGING_QUEUE *)(v5 + v4));
    v6 = *((_QWORD *)this + 12);
    if ( v6 )
      VIDMM_PAGING_QUEUE::Flush((VIDMM_PAGING_QUEUE *)(v6 + v5));
  }
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v33, (struct _KTHREAD **)(*(_QWORD *)this + 44480LL), 0);
  DXGPUSHLOCK::AcquireExclusive(v34);
  v35 = 2;
  if ( *((_QWORD *)this + 24) )
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v7, (struct _LIST_ENTRY *)this + 12);
  v8 = *(__int64 **)this;
  v9 = (_QWORD *)(*(_QWORD *)this + 44528LL);
  v10 = (_QWORD *)*v9;
  if ( (_QWORD *)*v9 != v9 )
  {
    do
    {
      if ( this == (VIDMM_DEVICE *)v10[7] )
        v10[7] = 0LL;
      v10 = (_QWORD *)*v10;
    }
    while ( v10 != v9 );
    v8 = *(__int64 **)this;
  }
  KeSetEvent(*(PRKEVENT *)(*v8 + 176), 0, 0);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
  v11 = **(_QWORD **)this;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v11 + 8) )
  {
    v12 = v11 + 144;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v11 + 144, 0LL);
    *(_QWORD *)(v11 + 152) = KeGetCurrentThread();
    v13 = v11 + 144;
    v14 = *(VIDMM_DEVICE **)(v11 + 16);
    *(_QWORD *)(v12 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v13, 0LL);
    KeLeaveCriticalRegion();
    if ( this == v14 )
    {
      v32 = **(_QWORD **)this;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v32 + 56, 0LL);
      *(_QWORD *)(v32 + 64) = 0LL;
      ExReleasePushLockExclusiveEx(v32 + 56, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v36, (struct _KTHREAD **)(*(_QWORD *)this + 44480LL), 0);
  DXGPUSHLOCK::AcquireExclusive(v37);
  v38 = 2;
  v15 = (VIDMM_DEVICE **)*((_QWORD *)this + 26);
  if ( v15[1] != (VIDMM_DEVICE *)((char *)this + 208)
    || (v16 = (VIDMM_DEVICE **)*((_QWORD *)this + 27), *v16 != (VIDMM_DEVICE *)((char *)this + 208)) )
  {
    __fastfail(3u);
  }
  *v16 = (VIDMM_DEVICE *)v15;
  v15[1] = (VIDMM_DEVICE *)v16;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v36);
  v19 = (char *)*((_QWORD *)this + 5);
  if ( v19 )
  {
    v20 = 0;
    if ( *((_DWORD *)this + 16) )
    {
      do
      {
        v21 = v19;
        v22 = 56LL * v20;
        if ( *(char **)&v19[v22 + 32] != &v19[v22 + 32] && g_IsInternalRelease )
        {
          WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
          v19 = (char *)*((_QWORD *)this + 5);
          v21 = v19;
        }
        if ( *(_DWORD *)&v21[56 * v20] && g_IsInternalRelease )
        {
          WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
          v19 = (char *)*((_QWORD *)this + 5);
          v21 = v19;
        }
        if ( *(_QWORD *)&v21[v22 + 8] && g_IsInternalRelease )
        {
          WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
          v19 = (char *)*((_QWORD *)this + 5);
          v21 = v19;
        }
        if ( *(_QWORD *)&v21[v22 + 16] && g_IsInternalRelease )
        {
          WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
          v19 = (char *)*((_QWORD *)this + 5);
          v21 = v19;
        }
        if ( *(_QWORD *)&v21[v22 + 24] && g_IsInternalRelease )
        {
          WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
          v19 = (char *)*((_QWORD *)this + 5);
          v21 = v19;
        }
        ++v20;
      }
      while ( v20 < *((_DWORD *)this + 16) );
      v19 = v21;
    }
    operator delete(v19);
  }
  for ( j = 0; j < *((_DWORD *)this + 17); ++j )
  {
    v24 = *((_QWORD *)this + 10);
    if ( v24 )
      VIDMM_DEVICE_PAGING_QUEUE::DestroyState((VIDMM_DEVICE_PAGING_QUEUE *)(v24 + 176LL * j));
    v25 = *((_QWORD *)this + 11);
    v26 = 176LL * j;
    if ( v25 )
      VIDMM_DEVICE_PAGING_QUEUE::DestroyState((VIDMM_DEVICE_PAGING_QUEUE *)(v26 + v25));
    v27 = *((_QWORD *)this + 12);
    if ( v27 )
      VIDMM_DEVICE_PAGING_QUEUE::DestroyState((VIDMM_DEVICE_PAGING_QUEUE *)(v27 + v26));
  }
  v28 = (VIDMM_DEVICE_PAGING_QUEUE *)*((_QWORD *)this + 10);
  if ( v28 )
    VIDMM_DEVICE_PAGING_QUEUE::`vector deleting destructor'(v28);
  v29 = (VIDMM_DEVICE_PAGING_QUEUE *)*((_QWORD *)this + 11);
  *((_QWORD *)this + 10) = 0LL;
  if ( v29 )
    VIDMM_DEVICE_PAGING_QUEUE::`vector deleting destructor'(v29);
  v30 = (VIDMM_DEVICE_PAGING_QUEUE *)*((_QWORD *)this + 12);
  *((_QWORD *)this + 11) = 0LL;
  if ( v30 )
    VIDMM_DEVICE_PAGING_QUEUE::`vector deleting destructor'(v30);
  v31 = (*((_BYTE *)this + 58) & 1) == 0;
  *((_QWORD *)this + 12) = 0LL;
  if ( !v31 )
    VIDMM_PROCESS::CloseAdapter(*((struct _KTHREAD ***)this + 1), *(struct VIDMM_GLOBAL **)this, v17, v18);
}
