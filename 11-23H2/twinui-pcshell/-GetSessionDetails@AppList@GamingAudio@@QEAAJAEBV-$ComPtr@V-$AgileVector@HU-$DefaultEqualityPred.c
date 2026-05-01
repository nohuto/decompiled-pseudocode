/*
 * XREFs of ?GetSessionDetails@AppList@GamingAudio@@QEAAJAEBV?$ComPtr@V?$AgileVector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@AEBV?$ComPtr@V?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@Windows@@@45@0000@Z @ 0x18040D32C
 * Callers:
 *     ?GetAudioActiveSessionDetails@GamingOverlayExperienceManager@@UEAAJPEAPEAU?$IVectorView@H@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAUHSTRING__@@@345@0000@Z @ 0x1803FC200 (-GetAudioActiveSessionDetails@GamingOverlayExperienceManager@@UEAAJPEAPEAU-$IVectorView@H@Collec.c)
 * Callees:
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InsertAtInternal@?$Vector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@U?$VectorOptions@H$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@AEAAJIH_N@Z @ 0x180400DB0 (-InsertAtInternal@-$Vector@HU-$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Window.c)
 *     ?InsertAtInternal@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUHSTRING__@@_N@Z @ 0x1804010E8 (-InsertAtInternal@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@C.c)
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
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 *v12; // r14
  __int64 *v13; // r15
  __int64 *v14; // rbp
  int v15; // eax
  unsigned int v16; // ebx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 v23; // r9
  __int64 v24; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp+8h] BYREF
  __int64 *v27; // [rsp+78h] [rbp+20h]

  v27 = a4;
  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 112));
  v10 = *(_QWORD *)(a1 + 160);
  v11 = *(_QWORD *)(a1 + 168);
  if ( v10 == v11 )
  {
LABEL_11:
    v16 = 0;
  }
  else
  {
    v12 = a7;
    v13 = a6;
    v14 = a5;
    while ( *(_QWORD *)v10 )
    {
      v15 = Windows::Foundation::Collections::Internal::Vector<int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<int>,Windows::Foundation::Collections::Internal::VectorOptions<int,0,1,0>>::InsertAtInternal(
              *a2,
              0,
              *(_DWORD *)(*(_QWORD *)v10 + 48LL),
              1);
      v16 = v15;
      if ( v15 < 0 )
      {
        v23 = (unsigned int)v15;
        v24 = 549LL;
        goto LABEL_22;
      }
      v17 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::InsertAtInternal(
              *a3,
              0,
              *(HSTRING *)(*(_QWORD *)v10 + 56LL),
              1);
      v16 = v17;
      if ( v17 < 0 )
      {
        v23 = (unsigned int)v17;
        v24 = 550LL;
        goto LABEL_22;
      }
      v18 = Windows::Foundation::Collections::Internal::Vector<int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<int>,Windows::Foundation::Collections::Internal::VectorOptions<int,0,1,0>>::InsertAtInternal(
              *v27,
              0,
              (int)(float)((float)(*(float *)(*(_QWORD *)v10 + 64LL) * 100.0) + 0.5),
              1);
      v16 = v18;
      if ( v18 < 0 )
      {
        v23 = (unsigned int)v18;
        v24 = 551LL;
        goto LABEL_22;
      }
      v19 = Windows::Foundation::Collections::Internal::Vector<int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<int>,Windows::Foundation::Collections::Internal::VectorOptions<int,0,1,0>>::InsertAtInternal(
              *v14,
              0,
              *(_DWORD *)(*(_QWORD *)v10 + 68LL),
              1);
      v16 = v19;
      if ( v19 < 0 )
      {
        v23 = (unsigned int)v19;
        v24 = 552LL;
        goto LABEL_22;
      }
      v20 = Windows::Foundation::Collections::Internal::Vector<int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<int>,Windows::Foundation::Collections::Internal::VectorOptions<int,0,1,0>>::InsertAtInternal(
              *v13,
              0,
              *(_DWORD *)(*(_QWORD *)v10 + 72LL),
              1);
      v16 = v20;
      if ( v20 < 0 )
      {
        v23 = (unsigned int)v20;
        v24 = 553LL;
        goto LABEL_22;
      }
      v21 = Windows::Foundation::Collections::Internal::Vector<int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<int>,Windows::Foundation::Collections::Internal::VectorOptions<int,0,1,0>>::InsertAtInternal(
              *v12,
              0,
              *(_DWORD *)(*(_QWORD *)v10 + 76LL),
              1);
      v16 = v21;
      if ( v21 < 0 )
      {
        v23 = (unsigned int)v21;
        v24 = 554LL;
        goto LABEL_22;
      }
      v10 += 8LL;
      if ( v10 == v11 )
        goto LABEL_11;
    }
    v16 = -2147467261;
    v24 = 547LL;
    v23 = 2147500035LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
      (const char *)v23);
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v16;
}
