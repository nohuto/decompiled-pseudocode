/*
 * XREFs of ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180133A24
 * Callers:
 *     ?add_ClientWindowReadyForPresentationChanged@WindowWrapperBase@@UEAAJPEAU?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1801339E0 (-add_ClientWindowReadyForPresentationChanged@WindowWrapperBase@@UEAAJPEAU-$ITypedEventHandler@PE.c)
 *     ?add_ClientWindowReadyForPresentationChanged@UwpWindowWrapperBase@@UEAAJPEAU?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180418DB0 (-add_ClientWindowReadyForPresentationChanged@UwpWindowWrapperBase@@UEAAJPEAU-$ITypedEventHandler.c)
 * Callees:
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x1800841FC (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x1800A00EC (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EED70 (-InternalRelease@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EEE10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        RTL_SRWLOCK *a1,
        Microsoft::WRL::Details::EventTargetArray *a2,
        __int64 a3,
        Microsoft::WRL::Details::EventTargetArray **a4)
{
  __int64 v5; // r12
  RTL_SRWLOCK *v8; // r15
  __int64 v9; // rax
  int v10; // edi
  _QWORD *Ptr; // rax
  Microsoft::WRL::Details::EventTargetArray *v12; // rdi
  Microsoft::WRL::Details::EventTargetArray **v13; // r14
  Microsoft::WRL::Details::EventTargetArray *v14; // rax
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rcx
  void **v18; // r12
  struct IUnknown **i; // r14
  RTL_SRWLOCK *v20; // [rsp+20h] [rbp-10h] BYREF
  volatile signed __int32 *v21; // [rsp+28h] [rbp-8h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v22; // [rsp+70h] [rbp+40h] BYREF
  __int64 v23; // [rsp+80h] [rbp+50h]
  __int64 v24; // [rsp+88h] [rbp+58h] BYREF

  v23 = a3;
  v5 = a3;
  *a4 = 0LL;
  v21 = 0LL;
  v8 = a1 + 2;
  AcquireSRWLockExclusive(a1 + 2);
  v20 = v8;
  v22 = 0LL;
  if ( a1->Ptr )
    v9 = ((__int64)(*((_QWORD *)a1->Ptr + 3) - *((_QWORD *)a1->Ptr + 2)) >> 3) + 1;
  else
    v9 = 1LL;
  v24 = v9;
  v10 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
          &v22,
          (unsigned __int64 *)&v24);
  if ( v10 < 0 )
  {
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease((volatile signed __int32 **)&v22);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v20);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v21);
    return (unsigned int)v10;
  }
  else
  {
    Ptr = a1->Ptr;
    v12 = v22;
    if ( a1->Ptr )
    {
      v18 = (void **)Ptr[4];
      for ( i = (struct IUnknown **)Ptr[2]; i != (struct IUnknown **)Ptr[3]; ++i )
      {
        Microsoft::WRL::Details::EventTargetArray::AddTail(v12, *i, *v18++);
        Ptr = a1->Ptr;
      }
      v5 = v23;
    }
    *a4 = a2;
    v13 = (Microsoft::WRL::Details::EventTargetArray **)*((_QWORD *)v12 + 3);
    v14 = *v13;
    if ( *v13 != a2 )
    {
      if ( a2 )
      {
        (*(void (__fastcall **)(Microsoft::WRL::Details::EventTargetArray *))(*(_QWORD *)a2 + 8LL))(a2);
        v14 = *v13;
      }
      v22 = v14;
      *v13 = a2;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
    }
    *(_QWORD *)(*((_QWORD *)v12 + 4) + 8 * ((__int64)(*((_QWORD *)v12 + 3) - *((_QWORD *)v12 + 2)) >> 3)) = v5;
    *((_QWORD *)v12 + 3) += 8LL;
    AcquireSRWLockExclusive(a1 + 1);
    v15 = 0LL;
    if ( &v22 == (Microsoft::WRL::Details::EventTargetArray **)a1 )
    {
      v16 = (volatile signed __int32 *)a1->Ptr;
    }
    else
    {
      v15 = (volatile signed __int32 *)a1->Ptr;
      v16 = 0LL;
    }
    a1->Ptr = v12;
    if ( v16 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v16);
    if ( a1 != (RTL_SRWLOCK *)-8LL )
      ReleaseSRWLockExclusive(a1 + 1);
    if ( v8 )
      ReleaseSRWLockExclusive(v8);
    if ( v15 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v15);
    return 0LL;
  }
}
