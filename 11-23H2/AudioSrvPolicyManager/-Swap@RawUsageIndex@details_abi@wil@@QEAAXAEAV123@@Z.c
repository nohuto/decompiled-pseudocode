/*
 * XREFs of ?Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z @ 0x1800373B4
 * Callers:
 *     ?RetrieveUsageUnderLock@FeatureStateData@details_abi@wil@@AEAAXAEAUUsageIndexes@23@@Z @ 0x180036A38 (-RetrieveUsageUnderLock@FeatureStateData@details_abi@wil@@AEAAXAEAUUsageIndexes@23@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000D330 (--3@YAXPEAX@Z.c)
 *     ??0heap_buffer@details_abi@wil@@QEAA@$$QEAU012@@Z @ 0x180033CD8 (--0heap_buffer@details_abi@wil@@QEAA@$$QEAU012@@Z.c)
 *     ??4?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x180034348 (--4-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

void __fastcall wil::details_abi::RawUsageIndex::Swap(
        wil::details_abi::RawUsageIndex *this,
        struct wil::details_abi::RawUsageIndex *a2)
{
  __int64 v4; // xmm1_8
  char v5; // cl
  char v6; // cl
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  void *v9; // [rsp+38h] [rbp-10h] BYREF

  wil::details_abi::heap_buffer::heap_buffer((__int64)&v7, (__int64)this + 24);
  *(_OWORD *)((char *)this + 24) = *(_OWORD *)((char *)a2 + 24);
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 5);
  wistd::unique_ptr<void,wil::process_heap_deleter>::operator=((void **)this + 6, (void **)a2 + 6);
  v4 = v8;
  *(_OWORD *)((char *)a2 + 24) = v7;
  *((_QWORD *)a2 + 5) = v4;
  wistd::unique_ptr<void,wil::process_heap_deleter>::operator=((void **)a2 + 6, &v9);
  if ( v9 )
    operator delete(v9);
  v5 = *((_BYTE *)this + 56);
  *((_BYTE *)this + 56) = *((_BYTE *)a2 + 56);
  *((_BYTE *)a2 + 56) = v5;
  v6 = *((_BYTE *)this + 57);
  *((_BYTE *)this + 57) = *((_BYTE *)a2 + 57);
  *((_BYTE *)a2 + 57) = v6;
}
