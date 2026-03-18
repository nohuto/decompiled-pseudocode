/*
 * XREFs of ?SubmitDwmBatch@CDwmChannel@DirectComposition@@QEAAX_KPEBUSynchronizationObject@2@@Z @ 0x1C0012F5C
 * Callers:
 *     NtDCompositionSubmitDWMBatch @ 0x1C0012DC0 (NtDCompositionSubmitDWMBatch.c)
 * Callees:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C0013148 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C0080AA4 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 *     ?SetSynchronizationObject@CBatch@DirectComposition@@QEAAXPEBUSynchronizationObject@2@@Z @ 0x1C0081EA0 (-SetSynchronizationObject@CBatch@DirectComposition@@QEAAXPEBUSynchronizationObject@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CDwmChannel::SubmitDwmBatch(
        DirectComposition::CDwmChannel *this,
        __int64 a2,
        const struct DirectComposition::SynchronizationObject *a3)
{
  struct DirectComposition::CBatch *BatchFragment; // rsi
  _QWORD *v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  _QWORD *v11; // rcx
  char v12; // cl
  struct _ERESOURCE *v13; // rbx
  struct _ERESOURCE *v14; // rbx
  __int64 v15; // rdi
  struct _ERESOURCE *v16; // rbx
  struct DirectComposition::CBatch *v17; // rax
  union _SLIST_HEADER *v18; // rbx
  struct _ERESOURCE *v19; // rcx
  char v20; // al
  struct DirectComposition::CBatch *v21; // rbx

  BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(this, 1, 1);
  v7 = 0LL;
  *((_BYTE *)BatchFragment + 32) ^= (*((_BYTE *)BatchFragment + 32) ^ ~(*((_BYTE *)this + 48) >> 1)) & 1;
  *((_BYTE *)this + 48) |= 2u;
  v8 = *((_QWORD *)BatchFragment + 17);
  *((_DWORD *)BatchFragment + 5) = 8;
  v9 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(4096 - v9) >= 8 )
  {
    v10 = *(_QWORD *)(v8 + 56);
    *(_QWORD *)(v8 + 40) = v9 + 8;
    v11 = (_QWORD *)(v9 + v10);
    if ( v11 )
    {
      *((_QWORD *)BatchFragment + 19) += 8LL;
      v7 = v11;
    }
  }
  *v7 = a2;
  *(_BYTE *)(*((_QWORD *)BatchFragment + 17) + 64LL) = 0;
  v12 = *((_BYTE *)this + 240);
  if ( (v12 & 0x10) != 0 )
  {
    v20 = *((_BYTE *)BatchFragment + 32) | 8;
    *((_BYTE *)BatchFragment + 32) = v20;
    if ( (v12 & 0x20) != 0 )
      *((_BYTE *)BatchFragment + 32) = v20 | 0x10;
    *((_BYTE *)this + 240) &= 0xCFu;
  }
  *((_QWORD *)BatchFragment + 8) = 0LL;
  v13 = *(struct _ERESOURCE **)(*((_QWORD *)this + 5) + 8LL);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v13, 1u);
  if ( a3 && !*((_BYTE *)a3 + 33) )
    DirectComposition::CBatch::SetSynchronizationObject(BatchFragment, a3);
  v14 = (struct _ERESOURCE *)*((_QWORD *)this + 46);
  if ( v14 )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v14, 1u);
  }
  if ( *((int *)this + 6) <= 0
    && (v15 = *((_QWORD *)this + 5),
        v16 = *(struct _ERESOURCE **)(v15 + 8),
        KeEnterCriticalRegion(),
        ExAcquireResourceSharedLite(v16, 1u),
        LODWORD(v16) = *(_DWORD *)(v15 + 148),
        ExReleaseResourceLite(*(PERESOURCE *)(v15 + 8)),
        KeLeaveCriticalRegion(),
        (_DWORD)v16) )
  {
    v17 = *(struct DirectComposition::CBatch **)BatchFragment;
    v18 = (union _SLIST_HEADER *)*((_QWORD *)this + 5);
    *((_QWORD *)BatchFragment + 3) = *(_QWORD *)BatchFragment;
    if ( v17 )
      *((_QWORD *)v17 + 3) = BatchFragment;
    ExpInterlockedPushEntrySList(v18 + 6, (PSLIST_ENTRY)BatchFragment);
    KeSetEvent(*(PRKEVENT *)(v18[5].Alignment + 8), 1, 0);
  }
  else
  {
    if ( (*((_BYTE *)BatchFragment + 32) & 1) != 0 )
      *((_BYTE *)this + 48) &= ~2u;
    do
    {
      v21 = *(struct DirectComposition::CBatch **)BatchFragment;
      *(_QWORD *)BatchFragment = 0LL;
      DirectComposition::CBatch::ReturnToApplication(BatchFragment, 0);
      BatchFragment = v21;
    }
    while ( v21 );
    (*(void (__fastcall **)(DirectComposition::CDwmChannel *))(*(_QWORD *)this + 16LL))(this);
  }
  v19 = (struct _ERESOURCE *)*((_QWORD *)this + 46);
  if ( v19 )
  {
    ExReleaseResourceLite(v19);
    KeLeaveCriticalRegion();
  }
  ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 8LL));
  KeLeaveCriticalRegion();
}
