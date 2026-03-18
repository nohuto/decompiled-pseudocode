/*
 * XREFs of ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1C008890C
 * Callers:
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0089AE0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C009BAE4 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00A6BA8 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00D931C (-QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?AppendReadyPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z @ 0x1C0089250 (-AppendReadyPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C00932B0 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?GetNewPacket@VIDMM_PAGING_QUEUE@@QEAAPEAUVIDMM_PAGING_QUEUE_PACKET@@XZ @ 0x1C00E15E8 (-GetNewPacket@VIDMM_PAGING_QUEUE@@QEAAPEAUVIDMM_PAGING_QUEUE_PACKET@@XZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueueSystemCommandAndWaitInternal(
        VIDMM_GLOBAL *this,
        struct _VIDMM_SYSTEM_COMMAND *a2,
        struct VIDMM_PAGING_QUEUE *a3,
        struct _VIDSCH_SYNC_OBJECT *a4,
        bool a5)
{
  __int64 v6; // rbx
  struct VIDMM_PAGING_QUEUE **v10; // rdi
  struct VIDMM_PAGING_QUEUE *v11; // r13
  struct VIDMM_PAGING_QUEUE **NewPacket; // rbx
  struct VIDMM_PAGING_QUEUE *v13; // rax
  __int64 v14; // rcx
  char v15; // di
  bool v16; // si
  unsigned __int64 v18; // [rsp+40h] [rbp-30h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v19; // [rsp+48h] [rbp-28h] BYREF
  PVOID Object; // [rsp+50h] [rbp-20h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v22; // [rsp+B0h] [rbp+40h] BYREF

  v22 = 0;
  v6 = *((_QWORD *)a3 + 10);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v6 + 144, 0LL);
  v10 = (struct VIDMM_PAGING_QUEUE **)((char *)a3 + 16);
  *(_QWORD *)(v6 + 152) = KeGetCurrentThread();
  v11 = (struct VIDMM_PAGING_QUEUE *)*((_QWORD *)a3 + 13);
  *((_QWORD *)a3 + 13) = (char *)v11 + 1;
  NewPacket = (struct VIDMM_PAGING_QUEUE **)*((_QWORD *)a3 + 2);
  if ( NewPacket[1] != (struct VIDMM_PAGING_QUEUE *)((char *)a3 + 16)
    || (v13 = *NewPacket, *((struct VIDMM_PAGING_QUEUE ***)*NewPacket + 1) != NewPacket) )
  {
    __fastfail(3u);
  }
  *v10 = v13;
  *((_QWORD *)v13 + 1) = v10;
  v14 = *((_QWORD *)a3 + 10) + 144LL;
  *(_QWORD *)(v14 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v14, 0LL);
  KeLeaveCriticalRegion();
  if ( NewPacket == v10 )
  {
    NewPacket = (struct VIDMM_PAGING_QUEUE **)operator new(160LL, 0x38346956u, 256LL);
    if ( !NewPacket )
    {
      NewPacket = 0LL;
      goto LABEL_6;
    }
  }
  else
  {
    memset(NewPacket, 0, 0xA0uLL);
  }
  NewPacket[5] = v11;
LABEL_6:
  if ( !a4 || *(_DWORD *)a2 == 118 )
  {
    v15 = 0;
  }
  else
  {
    v15 = 1;
    if ( !NewPacket )
    {
      v18 = *((_QWORD *)a3 + 12);
      v19 = a4;
      VIDMM_GLOBAL::WaitForFences(this, &v19, &v18, 1u, 0LL);
      NewPacket = (struct VIDMM_PAGING_QUEUE **)VIDMM_PAGING_QUEUE::GetNewPacket(a3);
    }
  }
  *((_BYTE *)NewPacket + 24) = 0;
  *((_BYTE *)NewPacket + 25) = v15;
  v18 = 0LL;
  *((_OWORD *)NewPacket + 3) = *(_OWORD *)a2;
  *((_OWORD *)NewPacket + 4) = *((_OWORD *)a2 + 1);
  *((_OWORD *)NewPacket + 5) = *((_OWORD *)a2 + 2);
  *((_OWORD *)NewPacket + 6) = *((_OWORD *)a2 + 3);
  *((_OWORD *)NewPacket + 7) = *((_OWORD *)a2 + 4);
  NewPacket[16] = (struct VIDMM_PAGING_QUEUE *)*((_QWORD *)a2 + 10);
  memset(&Event, 0, sizeof(Event));
  if ( !v15 )
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    NewPacket[7] = (struct VIDMM_PAGING_QUEUE *)&Event;
  }
  v16 = a5;
  if ( a5 )
  {
    v22 = -1073741776;
    NewPacket[10] = (struct VIDMM_PAGING_QUEUE *)&v22;
  }
  VIDMM_PAGING_QUEUE::AppendReadyPacket(a3, (struct VIDMM_PAGING_QUEUE_PACKET *)NewPacket, &v18);
  if ( v16 )
  {
    if ( v15 )
    {
      v19 = (struct _VIDSCH_SYNC_OBJECT *)v18;
      Object = a4;
      VIDMM_GLOBAL::WaitForFences(this, (struct _VIDSCH_SYNC_OBJECT **)&Object, (const unsigned __int64 *)&v19, 1u, 0LL);
    }
    else
    {
      Object = &Event;
      KeWaitForMultipleObjects(1u, &Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
    }
  }
  return v22;
}
