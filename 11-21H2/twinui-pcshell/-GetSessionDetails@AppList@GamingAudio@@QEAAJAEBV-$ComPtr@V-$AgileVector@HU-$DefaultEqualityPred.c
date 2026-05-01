/*
 * XREFs of ?GetSessionDetails@AppList@GamingAudio@@QEAAJAEBV?$ComPtr@V?$AgileVector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@AEBV?$ComPtr@V?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@Windows@@@45@0000@Z @ 0x18033F6E4
 * Callers:
 *     ?GetAudioActiveSessionDetails@GamingOverlayExperienceManager@@UEAAJPEAPEAU?$IVectorView@H@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAUHSTRING__@@@345@0000@Z @ 0x18032EF40 (-GetAudioActiveSessionDetails@GamingOverlayExperienceManager@@UEAAJPEAPEAU-$IVectorView@H@Collec.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18009EBB4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?InsertAtInternal@?$Vector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@U?$VectorOptions@H$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@AEAAJIH_N@Z @ 0x1803336C0 (-InsertAtInternal@-$Vector@HU-$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Window.c)
 *     ?InsertAtInternal@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUHSTRING__@@_N@Z @ 0x180333A00 (-InsertAtInternal@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@C.c)
 */

__int64 __fastcall GamingAudio::AppList::GetSessionDetails(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6,
        __int64 *a7)
{
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 *v13; // r14
  __int64 *v14; // r15
  __int64 *v15; // rbp
  int v16; // eax
  unsigned int v17; // ebx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 v24; // r9
  __int64 v25; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v27; // [rsp+60h] [rbp+8h] BYREF
  __int64 *v28; // [rsp+78h] [rbp+20h]

  v28 = a4;
  v7 = (struct _RTL_CRITICAL_SECTION *)(a1 + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 112));
  v11 = *(_QWORD *)(a1 + 160);
  v12 = *(_QWORD *)(a1 + 168);
  v27 = v7;
  if ( v11 == v12 )
  {
LABEL_11:
    v17 = 0;
  }
  else
  {
    v13 = a7;
    v14 = a6;
    v15 = a5;
    while ( *(_QWORD *)v11 )
    {
      v16 = Windows::Foundation::Collections::Internal::Vector<int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<int>,Windows::Foundation::Collections::Internal::VectorOptions<int,0,1,0>>::InsertAtInternal(
              *a2,
              0,
              *(_DWORD *)(*(_QWORD *)v11 + 48LL),
              1);
      v17 = v16;
      if ( v16 < 0 )
      {
        v24 = (unsigned int)v16;
        v25 = 549LL;
        goto LABEL_20;
      }
      v18 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::InsertAtInternal(
              *a3,
              0,
              *(HSTRING *)(*(_QWORD *)v11 + 56LL),
              1);
      v17 = v18;
      if ( v18 < 0 )
      {
        v24 = (unsigned int)v18;
        v25 = 550LL;
        goto LABEL_20;
      }
      v19 = Windows::Foundation::Collections::Internal::Vector<int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<int>,Windows::Foundation::Collections::Internal::VectorOptions<int,0,1,0>>::InsertAtInternal(
              *v28,
              0,
              (int)(float)((float)(*(float *)(*(_QWORD *)v11 + 64LL) * 100.0) + 0.5),
              1);
      v17 = v19;
      if ( v19 < 0 )
      {
        v24 = (unsigned int)v19;
        v25 = 551LL;
        goto LABEL_20;
      }
      v20 = Windows::Foundation::Collections::Internal::Vector<int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<int>,Windows::Foundation::Collections::Internal::VectorOptions<int,0,1,0>>::InsertAtInternal(
              *v15,
              0,
              *(_DWORD *)(*(_QWORD *)v11 + 68LL),
              1);
      v17 = v20;
      if ( v20 < 0 )
      {
        v24 = (unsigned int)v20;
        v25 = 552LL;
        goto LABEL_20;
      }
      v21 = Windows::Foundation::Collections::Internal::Vector<int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<int>,Windows::Foundation::Collections::Internal::VectorOptions<int,0,1,0>>::InsertAtInternal(
              *v14,
              0,
              *(_DWORD *)(*(_QWORD *)v11 + 72LL),
              1);
      v17 = v21;
      if ( v21 < 0 )
      {
        v24 = (unsigned int)v21;
        v25 = 553LL;
        goto LABEL_20;
      }
      v22 = Windows::Foundation::Collections::Internal::Vector<int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<int>,Windows::Foundation::Collections::Internal::VectorOptions<int,0,1,0>>::InsertAtInternal(
              *v13,
              0,
              *(_DWORD *)(*(_QWORD *)v11 + 76LL),
              1);
      v17 = v22;
      if ( v22 < 0 )
      {
        v24 = (unsigned int)v22;
        v25 = 554LL;
        goto LABEL_20;
      }
      v11 += 8LL;
      if ( v11 == v12 )
        goto LABEL_11;
    }
    v17 = -2147467261;
    v25 = 547LL;
    v24 = 2147500035LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
      (const char *)v24);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v27);
  return v17;
}
