/*
 * XREFs of ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@2345@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x18009F894
 * Callers:
 *     ?add_VisibilityChanged@CControlCenterExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1800A0970 (-add_VisibilityChanged@CControlCenterExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEAUIBaseE.c)
 *     ?add_VisibilityChanged@CActionCenterExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1800A0B70 (-add_VisibilityChanged@CActionCenterExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEAUIBaseEx.c)
 *     ?add_VisibilityChanged@CToastCenterExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180180BC0 (-add_VisibilityChanged@CToastCenterExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEAUIBaseExp.c)
 * Callees:
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x1800841FC (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x1800A00EC (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x1800A024C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EED70 (-InternalRelease@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::AddInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // rbx
  Microsoft::WRL::Details::EventTargetArray *v9; // rcx
  __int64 v10; // rcx
  int v11; // ebx
  Microsoft::WRL::Details::EventTargetArray *v12; // rax
  Microsoft::WRL::Details::EventTargetArray *v13; // rsi
  Microsoft::WRL::Details::EventTargetArray *v14; // rax
  Microsoft::WRL::Details::EventTargetArray *v15; // rax
  void **v17; // r14
  struct IUnknown **i; // rbx
  __int64 v19; // [rsp+20h] [rbp-20h] BYREF
  __int64 v20; // [rsp+28h] [rbp-18h] BYREF
  __int64 v21; // [rsp+30h] [rbp-10h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v22; // [rsp+80h] [rbp+40h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v23; // [rsp+98h] [rbp+58h] BYREF

  *a4 = 0LL;
  v4 = a1 + 16;
  v23 = 0LL;
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 16));
  v9 = *(Microsoft::WRL::Details::EventTargetArray **)a1;
  v22 = 0LL;
  v21 = v4;
  if ( v9 )
    v10 = ((__int64)(*((_QWORD *)v9 + 3) - *((_QWORD *)v9 + 2)) >> 3) + 1;
  else
    v10 = 1LL;
  v19 = v10;
  v11 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
          &v22,
          (unsigned __int64 *)&v19);
  if ( v11 >= 0 )
  {
    v12 = *(Microsoft::WRL::Details::EventTargetArray **)a1;
    v13 = v22;
    if ( *(_QWORD *)a1 )
    {
      v17 = (void **)*((_QWORD *)v12 + 4);
      for ( i = (struct IUnknown **)*((_QWORD *)v12 + 2); i != *((struct IUnknown ***)v12 + 3); ++i )
      {
        Microsoft::WRL::Details::EventTargetArray::AddTail(v13, *i, *v17);
        v12 = *(Microsoft::WRL::Details::EventTargetArray **)a1;
        ++v17;
      }
    }
    *a4 = a2;
    Microsoft::WRL::ComPtr<IUnknown>::operator=(*((_QWORD *)v13 + 3), a2);
    *(_QWORD *)(*((_QWORD *)v13 + 4) + 8 * ((__int64)(*((_QWORD *)v13 + 3) - *((_QWORD *)v13 + 2)) >> 3)) = a3;
    *((_QWORD *)v13 + 3) += 8LL;
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
    v14 = 0LL;
    v20 = a1 + 8;
    if ( &v22 != (Microsoft::WRL::Details::EventTargetArray **)a1 )
    {
      v14 = *(Microsoft::WRL::Details::EventTargetArray **)a1;
      *(_QWORD *)a1 = 0LL;
    }
    v22 = 0LL;
    v23 = v14;
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v22);
    v15 = *(Microsoft::WRL::Details::EventTargetArray **)a1;
    v22 = 0LL;
    v19 = (__int64)v15;
    *(_QWORD *)a1 = v13;
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v19);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v20);
    v11 = 0;
  }
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v22);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v21);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v23);
  return (unsigned int)v11;
}
