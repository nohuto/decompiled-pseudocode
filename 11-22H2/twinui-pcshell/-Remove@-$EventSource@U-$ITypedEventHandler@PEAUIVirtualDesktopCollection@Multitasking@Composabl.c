/*
 * XREFs of ?Remove@?$EventSource@U?$ITypedEventHandler@PEAUIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopCollectionChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1800604F8
 * Callers:
 *     ?remove_VirtualDesktopCollectionChanged@VirtualDesktopCollection@@UEAAJUEventRegistrationToken@@@Z @ 0x1800604D0 (-remove_VirtualDesktopCollectionChanged@VirtualDesktopCollection@@UEAAJUEventRegistrationToken@@.c)
 *     ??$InvokeDelegates@V_lambda_2fe463ac7f24b5ecea945a8edfe2f491_@@U?$ITypedEventHandler@PEAUIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopCollectionChangedEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_2fe463ac7f24b5ecea945a8edfe2f491_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAUIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopCollectionChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x180544108 (--$InvokeDelegates@V_lambda_2fe463ac7f24b5ecea945a8edfe2f491_@@U-$ITypedEventHandler@PEAUIVirtua.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1800E15F0 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800E17D0 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x1800E3054 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x1800E34EC (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x180142034 (-InternalRelease@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
        __int64 *a1,
        struct IUnknown *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  struct IUnknown **v6; // rcx
  bool v7; // r15
  __int64 v8; // r12
  __int64 v9; // r12
  int v10; // r14d
  struct IUnknown **v11; // r14
  void **v12; // r13
  _BYTE v14[16]; // [rsp+20h] [rbp-10h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v15; // [rsp+70h] [rbp+40h] BYREF
  __int64 v16; // [rsp+80h] [rbp+50h] BYREF
  __int64 v17; // [rsp+88h] [rbp+58h] BYREF

  v4 = 0;
  v16 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(v14, a1 + 2);
  v5 = *a1;
  if ( *a1 )
  {
    v6 = *(struct IUnknown ***)(v5 + 16);
    v7 = 0;
    v8 = *(_QWORD *)(v5 + 24) - (_QWORD)v6;
    v15 = 0LL;
    v9 = (v8 >> 3) - 1;
    v17 = v9;
    if ( v9 )
    {
      v10 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
              &v15,
              &v17);
      if ( v10 < 0 )
      {
        Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v15);
        v4 = v10;
        goto LABEL_14;
      }
      v11 = *(struct IUnknown ***)(*a1 + 16);
      v12 = *(void ***)(*a1 + 32);
      if ( v11 == *(struct IUnknown ***)(*a1 + 24) )
        goto LABEL_13;
      do
      {
        if ( v7 || a2 != *v11 )
        {
          if ( !v9 )
            break;
          Microsoft::WRL::Details::EventTargetArray::AddTail(v15, *v11, *v12++);
          --v9;
        }
        else
        {
          v7 = 1;
        }
        ++v11;
      }
      while ( v11 != *(struct IUnknown ***)(*a1 + 24) );
    }
    else
    {
      v7 = *v6 == a2;
    }
    if ( v7 )
    {
      Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v17, a1 + 1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v16, a1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(a1, &v15);
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v17);
    }
LABEL_13:
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v15);
  }
LABEL_14:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)v14);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v16);
  return v4;
}
