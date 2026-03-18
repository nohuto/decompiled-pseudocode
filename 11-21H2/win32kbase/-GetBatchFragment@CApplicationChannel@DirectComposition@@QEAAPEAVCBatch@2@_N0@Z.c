/*
 * XREFs of ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C0013148
 * Callers:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C000B6D8 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C0012424 (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C0012700 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 *     ?SubmitDwmBatch@CDwmChannel@DirectComposition@@QEAAX_KPEBUSynchronizationObject@2@@Z @ 0x1C0012F5C (-SubmitDwmBatch@CDwmChannel@DirectComposition@@QEAAX_KPEBUSynchronizationObject@2@@Z.c)
 * Callees:
 *     ?Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12@@Z @ 0x1C000D294 (-Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12.c)
 *     ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x1C000E3E0 (-CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z.c)
 *     ?BeginDynamicAllocation@CBatchSharedMemoryPool@DirectComposition@@QEAA_N_KPEA_K@Z @ 0x1C000E5B0 (-BeginDynamicAllocation@CBatchSharedMemoryPool@DirectComposition@@QEAA_N_KPEA_K@Z.c)
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C0013470 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 *     ?WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z @ 0x1C00B3D84 (-WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

struct DirectComposition::CBatch *__fastcall DirectComposition::CApplicationChannel::GetBatchFragment(
        DirectComposition::CApplicationChannel *this,
        char a2,
        char a3)
{
  struct DirectComposition::CBatch *v4; // rsi
  __int64 v5; // rcx
  char v6; // r13
  char v7; // r15
  PSLIST_ENTRY v8; // rax
  PSLIST_ENTRY v9; // rdi
  struct DirectComposition::CBatch *v10; // rax
  char *v11; // r14
  __int64 v12; // rax
  DirectComposition::CBatchSharedMemoryPool *v13; // rdi
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r13
  DirectComposition::CBatchSharedMemoryPool **v16; // rax
  __int64 v17; // rax
  struct _ERESOURCE *v18; // rdi
  unsigned __int64 v20; // rax
  DirectComposition::CBatchSharedMemoryPool *v21; // rax
  char v22; // r15
  int v23; // r14d
  DirectComposition::CBatchSharedMemoryPool *v24; // rcx
  unsigned __int64 v25[3]; // [rsp+20h] [rbp-18h] BYREF
  struct DirectComposition::CBatch *v26; // [rsp+80h] [rbp+48h] BYREF
  char v27; // [rsp+88h] [rbp+50h]
  char v28; // [rsp+90h] [rbp+58h]
  DirectComposition::CBatchSharedMemoryPool *v29; // [rsp+98h] [rbp+60h] BYREF

  v28 = a3;
  v27 = a2;
  v4 = 0LL;
  v5 = *((_QWORD *)this + 27);
  v6 = a3;
  v7 = a2;
  v26 = 0LL;
  KeResetEvent(*(PRKEVENT *)(v5 + 8));
  while ( 1 )
  {
    v8 = ExpInterlockedPopEntrySList((PSLIST_HEADER)this + 12);
    v9 = v8;
    if ( !v8 )
      break;
    --*((_DWORD *)this + 57);
    v20 = *((_QWORD *)&v8[4].Next + 1);
    if ( v20 > *((_QWORD *)this + 29) )
    {
      *((_BYTE *)this + 240) |= 2u;
      *((_QWORD *)this + 29) = v20;
    }
    v25[0] = LODWORD(v9[1].Next);
    v25[1] = *((_QWORD *)&v9[3].Next + 1);
    *((_OWORD *)this + (v25[0] & 0x3F) + 33) = *(_OWORD *)v25;
    DirectComposition::CBatch::Clear((DirectComposition::CBatch *)v9);
    v9->Next = (struct _SLIST_ENTRY *)*((_QWORD *)this + 23);
    *((_QWORD *)this + 23) = v9;
  }
  v10 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 21);
  if ( v10 )
  {
    *((_QWORD *)this + 21) = 0LL;
    v4 = v10;
LABEL_16:
    if ( v4 )
    {
      *(_QWORD *)v4 = 0LL;
      if ( v7 )
      {
        *((_DWORD *)v4 + 4) = ++*((_DWORD *)this + 94);
        ++*((_DWORD *)this + 57);
        *((_BYTE *)this + 240) |= 8u;
        v18 = (struct _ERESOURCE *)*((_QWORD *)this + 46);
        if ( v18 )
        {
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite(v18, 1u);
          if ( ++*((_DWORD *)this + 56) == 1 )
            KeResetEvent(*(PRKEVENT *)(*((_QWORD *)this + 45) + 8LL));
          ExReleaseResourceLite(*((PERESOURCE *)this + 46));
          KeLeaveCriticalRegion();
        }
      }
    }
  }
  else
  {
    v11 = (char *)this + 1624;
LABEL_5:
    v12 = (*(__int64 (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 64LL))(this);
    v25[0] = 0LL;
    v29 = 0LL;
    v13 = *(DirectComposition::CBatchSharedMemoryPool **)v11;
    v14 = v12 + 40;
    if ( *(char **)v11 == v11 )
      goto LABEL_26;
    while ( 1 )
    {
      if ( !*((_BYTE *)v13 + 64) )
      {
        v15 = *((_QWORD *)v13 + 5);
        if ( v14 <= 4096 - v15 )
          break;
      }
      v13 = *(DirectComposition::CBatchSharedMemoryPool **)v13;
      if ( v13 == (DirectComposition::CBatchSharedMemoryPool *)v11 )
      {
        v6 = v28;
LABEL_26:
        if ( (int)DirectComposition::CBatchSharedMemoryPool::Create(
                    (DirectComposition::CApplicationChannel *)((char *)this + 1624),
                    *((_BYTE *)this + 1648),
                    &v29) >= 0 )
        {
          v13 = v29;
          DirectComposition::CBatchSharedMemoryPool::BeginDynamicAllocation(v29, v14, v25);
          v21 = *(DirectComposition::CBatchSharedMemoryPool **)v11;
          if ( *(char **)(*(_QWORD *)v11 + 8LL) == v11 )
          {
            v15 = v25[0];
            goto LABEL_38;
          }
LABEL_48:
          __fastfail(3u);
        }
        if ( v6 )
        {
          DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(this, 0);
          goto LABEL_5;
        }
        return v4;
      }
    }
    *((_BYTE *)v13 + 64) = 1;
    v16 = (DirectComposition::CBatchSharedMemoryPool **)*((_QWORD *)v13 + 1);
    if ( v16 != (DirectComposition::CBatchSharedMemoryPool **)v11 )
    {
      v24 = *(DirectComposition::CBatchSharedMemoryPool **)v13;
      if ( *(DirectComposition::CBatchSharedMemoryPool **)(*(_QWORD *)v13 + 8LL) != v13 )
        goto LABEL_48;
      if ( *v16 != v13 )
        goto LABEL_48;
      *v16 = v24;
      *((_QWORD *)v24 + 1) = v16;
      v21 = *(DirectComposition::CBatchSharedMemoryPool **)v11;
      if ( *(char **)(*(_QWORD *)v11 + 8LL) != v11 )
        goto LABEL_48;
LABEL_38:
      *(_QWORD *)v13 = v21;
      *((_QWORD *)v13 + 1) = v11;
      *((_QWORD *)v21 + 1) = v13;
      *(_QWORD *)v11 = v13;
    }
    if ( v13 )
    {
      v17 = *((_QWORD *)v13 + 5);
      if ( (unsigned __int64)(4096 - v17) >= 0x28 )
        *((_QWORD *)v13 + 5) = v17 + 40;
      v4 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 23);
      if ( v4 )
      {
        *((_QWORD *)this + 23) = *(_QWORD *)v4;
      }
      else
      {
        v22 = v28;
        do
        {
          v23 = DirectComposition::CApplicationChannel::CreateBatch(this, &v26);
          if ( v23 < 0
            && *((int *)this + 57) > 0
            && DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(this, 0) )
          {
            v4 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 23);
            v23 = 0;
            v26 = v4;
            *((_QWORD *)this + 23) = *(_QWORD *)v4;
          }
          else
          {
            v4 = v26;
          }
        }
        while ( v22 && v23 < 0 );
      }
      v7 = v27;
      if ( v4 )
      {
        *((_QWORD *)v4 + 17) = v13;
        *((_QWORD *)v4 + 18) = v15;
      }
      else
      {
        *((_BYTE *)v13 + 64) = 0;
      }
      goto LABEL_16;
    }
  }
  return v4;
}
