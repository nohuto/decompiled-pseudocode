/*
 * XREFs of StorpLogPerAdapterStatistics @ 0x1C001CC3C
 * Callers:
 *     StorpLogStatistics @ 0x1C001B410 (StorpLogStatistics.c)
 * Callees:
 *     RaidAcquireAdapterRemoveLock @ 0x1C0007534 (RaidAcquireAdapterRemoveLock.c)
 *     _tlgKeywordOn @ 0x1C0019F3C (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C001C770 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     StorpInitializeHierarchicalResetBuckets @ 0x1C001CD70 (StorpInitializeHierarchicalResetBuckets.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 */

void __fastcall StorpLogPerAdapterStatistics(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // [rsp+30h] [rbp-D0h] BYREF
  char v12; // [rsp+31h] [rbp-CFh] BYREF
  char v13; // [rsp+32h] [rbp-CEh] BYREF
  char v14; // [rsp+33h] [rbp-CDh] BYREF
  _BYTE v15[4]; // [rsp+34h] [rbp-CCh] BYREF
  int v16; // [rsp+38h] [rbp-C8h] BYREF
  int v17; // [rsp+3Ch] [rbp-C4h] BYREF
  int v18; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+44h] [rbp-BCh] BYREF
  int v20; // [rsp+48h] [rbp-B8h] BYREF
  int v21; // [rsp+4Ch] [rbp-B4h] BYREF
  int v22; // [rsp+50h] [rbp-B0h] BYREF
  int v23; // [rsp+54h] [rbp-ACh] BYREF
  int v24; // [rsp+58h] [rbp-A8h] BYREF
  int v25; // [rsp+5Ch] [rbp-A4h] BYREF
  _DWORD v26[4]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+70h] [rbp-90h] BYREF
  __int64 v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  int *v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  int *v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  int *v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  char *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  int *v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  int *v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  char *v42; // [rsp+100h] [rbp+0h]
  __int64 v43; // [rsp+108h] [rbp+8h]
  int *v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h]
  int *v46; // [rsp+120h] [rbp+20h]
  __int64 v47; // [rsp+128h] [rbp+28h]
  char *v48; // [rsp+130h] [rbp+30h]
  __int64 v49; // [rsp+138h] [rbp+38h]
  int *v50; // [rsp+140h] [rbp+40h]
  __int64 v51; // [rsp+148h] [rbp+48h]
  int *v52; // [rsp+150h] [rbp+50h]
  __int64 v53; // [rsp+158h] [rbp+58h]
  char *v54; // [rsp+160h] [rbp+60h]
  __int64 v55; // [rsp+168h] [rbp+68h]
  int *v56; // [rsp+170h] [rbp+70h]
  __int64 v57; // [rsp+178h] [rbp+78h]
  int *v58; // [rsp+180h] [rbp+80h]
  __int64 v59; // [rsp+188h] [rbp+88h]
  char *v60; // [rsp+190h] [rbp+90h]
  __int64 v61; // [rsp+198h] [rbp+98h]

  v2 = *(unsigned int *)(a1 + 5028);
  if ( ((_DWORD)v2
     || *(_DWORD *)(a1 + 5040)
     || *(_DWORD *)(a1 + 5052)
     || *(_DWORD *)(a1 + 5064)
     || *(_DWORD *)(a1 + 5076))
    && (unsigned int)dword_1C00920C8 > 5
    && tlgKeywordOn(v2, 0x400000000000LL) )
  {
    v29 = 16LL;
    v28 = a1 + 5000;
    v16 = *(_DWORD *)(a1 + 56);
    v30 = &v16;
    v32 = &v17;
    v18 = *(_DWORD *)(a1 + 5032);
    v34 = &v18;
    v11 = *(_BYTE *)(a1 + 5036);
    v36 = &v11;
    v19 = *(_DWORD *)(a1 + 5040);
    v38 = &v19;
    v20 = *(_DWORD *)(a1 + 5044);
    v40 = &v20;
    v12 = *(_BYTE *)(a1 + 5048);
    v42 = &v12;
    v21 = *(_DWORD *)(a1 + 5052);
    v44 = &v21;
    v22 = *(_DWORD *)(a1 + 5056);
    v46 = &v22;
    v13 = *(_BYTE *)(a1 + 5060);
    v48 = &v13;
    v23 = *(_DWORD *)(a1 + 5064);
    v50 = &v23;
    v24 = *(_DWORD *)(a1 + 5068);
    v52 = &v24;
    v14 = *(_BYTE *)(a1 + 5072);
    v54 = &v14;
    v25 = *(_DWORD *)(a1 + 5076);
    v56 = &v25;
    v26[0] = *(_DWORD *)(a1 + 5080);
    v58 = v26;
    v15[0] = *(_BYTE *)(a1 + 5084);
    v60 = v15;
    v31 = 4LL;
    v17 = v5;
    v33 = 4LL;
    v35 = 4LL;
    v37 = 1LL;
    v39 = 4LL;
    v41 = 4LL;
    v43 = 1LL;
    v45 = 4LL;
    v47 = 4LL;
    v49 = 1LL;
    v51 = 4LL;
    v53 = 4LL;
    v55 = 1LL;
    v57 = 4LL;
    v59 = 4LL;
    v61 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(v5, (unsigned __int8 *)dword_1C00856BE, v6, v7, 0x13u, &v27);
  }
  v3 = *(unsigned int *)(a1 + 5088);
  if ( ((_DWORD)v3
     || *(_DWORD *)(a1 + 5100)
     || *(_DWORD *)(a1 + 5112)
     || *(_DWORD *)(a1 + 5124)
     || *(_DWORD *)(a1 + 5136))
    && (unsigned int)dword_1C00920C8 > 5
    && tlgKeywordOn(v3, 0x400000000000LL) )
  {
    v29 = 16LL;
    v28 = a1 + 5000;
    v26[0] = *(_DWORD *)(a1 + 56);
    v30 = v26;
    v32 = &v25;
    v24 = *(_DWORD *)(a1 + 5092);
    v34 = &v24;
    v15[0] = *(_BYTE *)(a1 + 5096);
    v36 = v15;
    v23 = *(_DWORD *)(a1 + 5100);
    v38 = &v23;
    v22 = *(_DWORD *)(a1 + 5104);
    v40 = &v22;
    v14 = *(_BYTE *)(a1 + 5108);
    v42 = &v14;
    v21 = *(_DWORD *)(a1 + 5112);
    v44 = &v21;
    v20 = *(_DWORD *)(a1 + 5116);
    v46 = &v20;
    v13 = *(_BYTE *)(a1 + 5120);
    v48 = &v13;
    v19 = *(_DWORD *)(a1 + 5124);
    v50 = &v19;
    v18 = *(_DWORD *)(a1 + 5128);
    v52 = &v18;
    v12 = *(_BYTE *)(a1 + 5132);
    v54 = &v12;
    v17 = *(_DWORD *)(a1 + 5136);
    v56 = &v17;
    v16 = *(_DWORD *)(a1 + 5140);
    v58 = &v16;
    v11 = *(_BYTE *)(a1 + 5144);
    v60 = &v11;
    v31 = 4LL;
    v25 = v8;
    v33 = 4LL;
    v35 = 4LL;
    v37 = 1LL;
    v39 = 4LL;
    v41 = 4LL;
    v43 = 1LL;
    v45 = 4LL;
    v47 = 4LL;
    v49 = 1LL;
    v51 = 4LL;
    v53 = 4LL;
    v55 = 1LL;
    v57 = 4LL;
    v59 = 4LL;
    v61 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(v8, (unsigned __int8 *)dword_1C008663E, v9, v10, 0x13u, &v27);
  }
  StorpInitializeHierarchicalResetBuckets(a1);
  if ( !*(_BYTE *)(a1 + 5280) && (int)RaidAcquireAdapterRemoveLock(a1) >= 0 )
  {
    WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
    if ( WorkItem )
      IoQueueWorkItem(WorkItem, StorpAdapterTopologyWorkItemRoutine, NormalWorkQueue, WorkItem);
    else
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 296));
  }
}
