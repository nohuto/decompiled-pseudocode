/*
 * XREFs of ?AddInternal@?$EventSource@U?$IEventHandler@PEAVSharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$IEventHandler@PEAVSharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x1800A5590
 * Callers:
 *     ?AddDeviceRemovedHandler@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAJPEAUIUnknown@@PEAU?$IEventHandler@PEAVSharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x1800A54F0 (-AddDeviceRemovedHandler@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAJPEAUIUnknown@.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180065240 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x180065400 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180065564 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007F5A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x1800A2728 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::UI::Composition::Internal::SharedD3DDeviceRemovedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::AddInternal(
        __int64 a1,
        struct IUnknown *a2,
        void *a3,
        struct IUnknown **a4)
{
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  volatile int *v10; // rdx
  int v11; // edi
  _QWORD *v13; // rax
  void **v14; // rsi
  struct IUnknown **i; // rdi
  Microsoft::WRL::Details::EventTargetArray *v16; // rcx
  volatile int *v17; // rdx
  __int64 v18; // [rsp+20h] [rbp-10h] BYREF
  PSRWLOCK v19; // [rsp+28h] [rbp-8h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v20; // [rsp+60h] [rbp+30h] BYREF
  PSRWLOCK SRWLock; // [rsp+78h] [rbp+48h] BYREF

  *a4 = 0LL;
  v18 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive((RTL_SRWLOCK *)(a1 + 16), &SRWLock);
  v8 = *(_QWORD **)a1;
  v20 = 0LL;
  if ( v8 )
    v9 = ((__int64)(v8[3] - v8[2]) >> 3) + 1;
  else
    v9 = 1LL;
  v19 = (PSRWLOCK)v9;
  v11 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
          &v20,
          (unsigned __int64 *)&v19);
  if ( v11 >= 0 )
  {
    v13 = *(_QWORD **)a1;
    if ( *(_QWORD *)a1 )
    {
      v14 = (void **)v13[4];
      for ( i = (struct IUnknown **)v13[2]; i != (struct IUnknown **)v13[3]; ++i )
      {
        Microsoft::WRL::Details::EventTargetArray::AddTail(v20, *i, *v14);
        v13 = *(_QWORD **)a1;
        ++v14;
      }
    }
    v16 = v20;
    *a4 = a2;
    Microsoft::WRL::Details::EventTargetArray::AddTail(v16, a2, a3);
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive((RTL_SRWLOCK *)(a1 + 8), &v19);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v18, (char *)a1);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)a1, (char *)&v20);
    if ( v19 )
      ReleaseSRWLockExclusive(v19);
    if ( v20 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        (__int64)v20,
        v17);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    if ( v18 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v18, v17);
    return 0LL;
  }
  else
  {
    if ( v20 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        (__int64)v20,
        v10);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    return (unsigned int)v11;
  }
}
