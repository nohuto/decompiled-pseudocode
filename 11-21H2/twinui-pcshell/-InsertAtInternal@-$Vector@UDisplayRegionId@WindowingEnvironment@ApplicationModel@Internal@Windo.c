/*
 * XREFs of ?InsertAtInternal@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEAAJIUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@_N@Z @ 0x180135B48
 * Callers:
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180094910 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     ?Append@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@@Z @ 0x1803E1480 (-Append@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDispl.c)
 *     ?InsertAt@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJIUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@@Z @ 0x1803E4C00 (-InsertAt@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDis.c)
 * Callees:
 *     memmove_s @ 0x1802DA9D4 (memmove_s.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1803916C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShe_ea_1803916C0.c)
 *     ??$InvokeAll@PEAU?$IObservableVector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@PEAVVectorChangedEventArgs@Internal@234@@?$EventSource@U?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$IObservableVector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@PEAVVectorChangedEventArgs@Internal@456@@Z @ 0x1803DC10C (--$InvokeAll@PEAU-$IObservableVector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Inte.c)
 *     ??$Make@VVectorChangedEventArgs@Internal@Collections@Foundation@Windows@@AEAW4CollectionChange@345@AEAI@Details@WRL@Microsoft@@YA?AV?$ComPtr@VVectorChangedEventArgs@Internal@Collections@Foundation@Windows@@@12@AEAW4CollectionChange@Collections@Foundation@Windows@@AEAI@Z @ 0x1803DC6A0 (--$Make@VVectorChangedEventArgs@Internal@Collections@Foundation@Windows@@AEAW4CollectionChange@3.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        int a3,
        char a4)
{
  _DWORD *v4; // rbx
  _DWORD *v5; // r14
  RTL_SRWLOCK *v6; // r12
  unsigned int v11; // r15d
  unsigned int v12; // eax
  int v13; // esi
  unsigned int v14; // r8d
  int v15; // r13d
  __int64 v16; // rcx
  unsigned int v17; // r13d
  void *v18; // rax
  unsigned int v19; // eax
  __int64 v21; // rbx
  int v22; // [rsp+20h] [rbp-38h] BYREF
  __int64 v23[6]; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v24; // [rsp+70h] [rbp+18h] BYREF

  v4 = (_DWORD *)(a1 + 120);
  v5 = 0LL;
  v6 = (RTL_SRWLOCK *)(a1 + 128);
  if ( *(_DWORD *)(a1 + 120) == 1 )
  {
    if ( !LODWORD(v6->Ptr) )
      LODWORD(v6->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 128));
  }
  v11 = *(_DWORD *)(a1 + 88);
  v12 = v11;
  if ( !a4 )
  {
    v11 = a2;
    if ( a2 > v12 )
    {
      v13 = -2147483637;
      goto LABEL_28;
    }
  }
  if ( v12 >= 0x7FFFFFFF )
  {
    v13 = -2147024882;
  }
  else
  {
    v5 = (_DWORD *)(a1 + 172);
    v13 = -2147483627;
    if ( *(_DWORD *)(a1 + 172) || (v13 = 0, *(int *)(a1 + 168) <= 0) )
    {
      v5 = 0LL;
      if ( v13 < 0 )
      {
LABEL_28:
        RoOriginateError((unsigned int)v13, 0LL);
        goto LABEL_18;
      }
    }
    else
    {
      *v5 = 1;
    }
    v14 = *(_DWORD *)(a1 + 92);
    if ( *(_DWORD *)(a1 + 88) + 1 <= v14 )
      goto LABEL_16;
    v15 = 1;
    v16 = *(_QWORD *)(a1 + 104);
    if ( v14 + 1 <= (v14 >> 1) + v14 )
      v15 = v14 >> 1;
    v13 = 0;
    v17 = v14 + v15;
    v18 = v16 ? (void *)_o_realloc(v16, 4LL * v17) : malloc(4LL * v17);
    if ( v18 )
    {
      *(_QWORD *)(a1 + 104) = v18;
      *(_DWORD *)(a1 + 92) = v17;
    }
    else
    {
      v13 = -2147024882;
    }
    if ( v13 >= 0 )
    {
LABEL_16:
      v19 = *(_DWORD *)(a1 + 88);
      if ( v11 >= v19
        || !memmove_s(
              (void *const)(*(_QWORD *)(a1 + 104) + 4LL * (v11 + 1)),
              4LL * (*(_DWORD *)(a1 + 92) - v11 - 1),
              (const void *const)(*(_QWORD *)(a1 + 104) + 4LL * v11),
              4LL * (v19 - v11)) )
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 104) + 4LL * v11) = a3;
        ++*(_DWORD *)(a1 + 88);
        ++*(_DWORD *)(a1 + 136);
        goto LABEL_18;
      }
      v13 = -2147418113;
      goto LABEL_28;
    }
  }
LABEL_18:
  if ( v4 )
  {
    if ( *v4 == 1 )
      LODWORD(v6->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v6);
  }
  if ( v13 >= 0 )
  {
    v13 = 0;
    v24 = v11;
    v22 = 1;
    if ( !v5 )
      return (unsigned int)v13;
    Microsoft::WRL::Details::Make<Windows::Foundation::Collections::Internal::VectorChangedEventArgs,enum Windows::Foundation::Collections::CollectionChange &,unsigned int &>(
      v23,
      &v22,
      &v24);
    v21 = v23[0];
    if ( v23[0] )
    {
      v13 = Microsoft::WRL::EventSource<Windows::Foundation::Collections::VectorChangedEventHandler<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Microsoft::WRL::InvokeModeOptions<-2>>::InvokeAll<Windows::Foundation::Collections::IObservableVector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId> *,Windows::Foundation::Collections::Internal::VectorChangedEventArgs *>(
              a1 + 144,
              a1 + 16,
              v23[0]);
      v23[0] = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::Release(v21);
    }
  }
  if ( v5 )
    *v5 = 0;
  return (unsigned int)v13;
}
