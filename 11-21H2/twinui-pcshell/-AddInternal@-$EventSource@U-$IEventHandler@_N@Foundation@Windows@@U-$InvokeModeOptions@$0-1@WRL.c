/*
 * XREFs of ?AddInternal@?$EventSource@U?$IEventHandler@_N@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$IEventHandler@_N@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x1800A0BB0
 * Callers:
 *     ?add_OverlayDisplayFullscreenChanged@GamingOverlayExperienceManager@@UEAAJPEAU?$IEventHandler@_N@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1801786D0 (-add_OverlayDisplayFullscreenChanged@GamingOverlayExperienceManager@@UEAAJPEAU-$IEventHandler@_N.c)
 * Callees:
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x1800841FC (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18009FDA8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18009FEF8 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x1800A00EC (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EED70 (-InternalRelease@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<bool>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        __int64 a1,
        struct IUnknown *a2,
        void *a3,
        struct IUnknown **a4)
{
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  int v10; // ebx
  _QWORD *v11; // rax
  Microsoft::WRL::Details::EventTargetArray *v12; // rcx
  void **v14; // rsi
  struct IUnknown **i; // rbx
  RTL_SRWLOCK *v16; // [rsp+20h] [rbp-10h] BYREF
  RTL_SRWLOCK *v17; // [rsp+28h] [rbp-8h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v18; // [rsp+60h] [rbp+30h] BYREF
  __int64 v19; // [rsp+78h] [rbp+48h] BYREF

  *a4 = 0LL;
  v19 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v17, (RTL_SRWLOCK *)(a1 + 16));
  v8 = *(_QWORD **)a1;
  v18 = 0LL;
  if ( v8 )
    v9 = ((__int64)(v8[3] - v8[2]) >> 3) + 1;
  else
    v9 = 1LL;
  v16 = (RTL_SRWLOCK *)v9;
  v10 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
          &v18,
          (unsigned __int64 *)&v16);
  if ( v10 >= 0 )
  {
    v11 = *(_QWORD **)a1;
    if ( *(_QWORD *)a1 )
    {
      v14 = (void **)v11[4];
      for ( i = (struct IUnknown **)v11[2]; i != (struct IUnknown **)v11[3]; ++i )
      {
        Microsoft::WRL::Details::EventTargetArray::AddTail(v18, *i, *v14);
        v11 = *(_QWORD **)a1;
        ++v14;
      }
    }
    v12 = v18;
    *a4 = a2;
    Microsoft::WRL::Details::EventTargetArray::AddTail(v12, a2, a3);
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v16, (RTL_SRWLOCK *)(a1 + 8));
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v19, (char *)a1);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)a1, (char *)&v18);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v16);
    v10 = 0;
  }
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v18);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v17);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v19);
  return (unsigned int)v10;
}
