/*
 * XREFs of ??0ContextualProcessorBuffer@@IEAA@PEAVInputContext@@PEAUIInputBuffer@@@Z @ 0x180051D80
 * Callers:
 *     ?Create@ContextualProcessorBuffer@@SAJPEAVInputContext@@PEAUIInputBuffer@@PEAPEAV1@@Z @ 0x180037BD8 (-Create@ContextualProcessorBuffer@@SAJPEAVInputContext@@PEAUIInputBuffer@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180003198 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ??0?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@QEAA@XZ @ 0x180051E54 (--0-$unordered_map@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@U-$hash@K@std@@U-$equal_to@K@5@V-$a.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
ContextualProcessorBuffer *__fastcall ContextualProcessorBuffer::ContextualProcessorBuffer(
        ContextualProcessorBuffer *this,
        struct InputContext *a2,
        struct IInputBuffer *a3)
{
  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 8) = 1;
  *(_QWORD *)this = &ContextualProcessorBuffer::`vftable'{for `IDCompInputTarget'};
  *((_QWORD *)this + 1) = &ContextualProcessorBuffer::`vftable'{for `IFocusInputTarget'};
  *((_QWORD *)this + 2) = &ContextualProcessorBuffer::`vftable'{for `IContextualProcessorBufferTarget'};
  *((_QWORD *)this + 3) = &ContextualProcessorBuffer::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>((char *)this + 88);
  *((_QWORD *)this + 19) = a2;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)this + 19);
  *((_QWORD *)this + 20) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct IInputBuffer *))(*(_QWORD *)a3 + 8LL))(a3);
  return this;
}
