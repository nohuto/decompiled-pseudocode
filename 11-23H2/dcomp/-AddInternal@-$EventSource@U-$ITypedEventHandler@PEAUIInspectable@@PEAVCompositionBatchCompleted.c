/*
 * XREFs of ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchCompletedEventArgs@Composition@UI@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchCompletedEventArgs@Composition@UI@Windows@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x18002DAE8
 * Callers:
 *     ?add_Completed@CompositionBatch@Composition@UI@Windows@@QEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchCompletedEventArgs@Composition@UI@Windows@@@Foundation@4@PEAUEventRegistrationToken@@@Z @ 0x1800115CC (-add_Completed@CompositionBatch@Composition@UI@Windows@@QEAAJPEAU-$ITypedEventHandler@PEAUIInspe.c)
 *     ?add_Completed@Api@CompositionScopedBatch@Composition@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchCompletedEventArgs@Composition@UI@Windows@@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x18002D810 (-add_Completed@Api@CompositionScopedBatch@Composition@UI@Windows@@UEAAJPEAU-$ITypedEventHandler@.c)
 * Callees:
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x18002DDD0 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180065564 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007F5A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A1FE0 (--1-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::UI::Composition::CompositionBatchCompletedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        RTL_SRWLOCK *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  RTL_SRWLOCK *v4; // r14
  unsigned __int64 v9; // rdi
  HANDLE ProcessHeap; // rax
  _DWORD *v11; // rax
  _DWORD *v12; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v13; // rcx
  int v14; // edi
  __int64 v15; // r8
  signed __int32 v16; // eax
  __int64 v17; // rdx
  _QWORD *Ptr; // rax
  __int64 *v19; // rdi
  __int64 v20; // rcx
  PVOID v21; // rdi
  PVOID v22; // rcx
  void **v24; // r15
  struct IUnknown **i; // rdi
  _QWORD v26[9]; // [rsp+20h] [rbp-48h] BYREF
  _DWORD *v27; // [rsp+70h] [rbp+8h] BYREF
  _DWORD *v28; // [rsp+88h] [rbp+20h] BYREF

  v4 = a1 + 2;
  *a4 = 0LL;
  v26[0] = 0LL;
  AcquireSRWLockExclusive(a1 + 2);
  if ( a1->Ptr )
    v9 = ((__int64)(*((_QWORD *)a1->Ptr + 3) - *((_QWORD *)a1->Ptr + 2)) >> 3) + 1;
  else
    v9 = 1LL;
  ProcessHeap = GetProcessHeap();
  v11 = HeapAlloc(ProcessHeap, 0, 0x28uLL);
  v27 = v11;
  v12 = v11;
  if ( v11 )
  {
    v13 = Microsoft::WRL::Details::ModuleBase::module_;
    v11[3] = 1;
    *(_QWORD *)v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
    if ( v13 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v13 + 8LL))(v13);
    *((_QWORD *)v12 + 2) = 0LL;
    *(_QWORD *)v12 = &Microsoft::WRL::Details::EventTargetArray::`vftable';
    *((_QWORD *)v12 + 3) = 0LL;
    *((_QWORD *)v12 + 4) = 0LL;
    v28 = v12;
    v27 = 0LL;
    v14 = Microsoft::WRL::Details::EventTargetArray::RuntimeClassInitialize(
            (Microsoft::WRL::Details::EventTargetArray *)v12,
            v9);
    if ( v14 >= 0 )
    {
      v15 = 0x7FFFFFFFLL;
      do
        v16 = v12[3];
      while ( v16 != 0x7FFFFFFF && v16 != _InterlockedCompareExchange(v12 + 3, v16 + 1, v16) );
      do
        v17 = (unsigned int)v12[3];
      while ( (_DWORD)v17 != 0x7FFFFFFF && (_DWORD)v17 != _InterlockedCompareExchange(v12 + 3, v17 - 1, v17) );
      if ( (_DWORD)v17 == 1 )
      {
        (*(void (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)v12 + 24LL))(v12, 1LL, 0x7FFFFFFFLL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
      Ptr = a1->Ptr;
      if ( a1->Ptr )
      {
        v24 = (void **)Ptr[4];
        for ( i = (struct IUnknown **)Ptr[2]; i != (struct IUnknown **)Ptr[3]; ++i )
        {
          Microsoft::WRL::Details::EventTargetArray::AddTail((Microsoft::WRL::Details::EventTargetArray *)v12, *i, *v24);
          Ptr = a1->Ptr;
          ++v24;
        }
      }
      *a4 = a2;
      v19 = (__int64 *)*((_QWORD *)v12 + 3);
      if ( *v19 != a2 )
      {
        if ( a2 )
          (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 8LL))(a2, v17, v15);
        v20 = *v19;
        *v19 = a2;
        if ( v20 )
          (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v20 + 16LL))(v20, v17, v15);
      }
      *(_QWORD *)(*((_QWORD *)v12 + 4) + 8 * ((__int64)(*((_QWORD *)v12 + 3) - *((_QWORD *)v12 + 2)) >> 3)) = a3;
      *((_QWORD *)v12 + 3) += 8LL;
      AcquireSRWLockExclusive(a1 + 1);
      v21 = 0LL;
      if ( v26 != (_QWORD *)a1 )
      {
        v21 = a1->Ptr;
        a1->Ptr = 0LL;
      }
      v22 = a1->Ptr;
      a1->Ptr = v12;
      if ( v22 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v22);
      if ( a1 != (RTL_SRWLOCK *)-8LL )
        ReleaseSRWLockExclusive(a1 + 1);
      if ( v4 )
        ReleaseSRWLockExclusive(v4);
      if ( v21 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v21);
      return 0LL;
    }
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::~ComPtr<Microsoft::WRL::Details::EventTargetArray>(&v28);
  }
  else
  {
    v14 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v27);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::~ComPtr<Microsoft::WRL::Details::EventTargetArray>(v26);
  return (unsigned int)v14;
}
