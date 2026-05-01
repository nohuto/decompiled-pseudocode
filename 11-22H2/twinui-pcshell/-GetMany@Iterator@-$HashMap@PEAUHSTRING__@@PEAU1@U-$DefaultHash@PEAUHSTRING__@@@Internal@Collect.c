/*
 * XREFs of ?GetMany@Iterator@?$HashMap@PEAUHSTRING__@@PEAU1@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@3456@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U83456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIQEAPEAU?$IKeyValuePair@PEAUHSTRING__@@PEAU1@@456@PEAI@Z @ 0x18061DE70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180046D70 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureVersionMatches@Iterator@?$HashMap@PEAUHSTRING__@@PEAU1@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@3456@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U83456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJXZ @ 0x18061CAF8 (-EnsureVersionMatches@Iterator@-$HashMap@PEAUHSTRING__@@PEAU1@U-$DefaultHash@PEAUHSTRING__@@@Int.c)
 *     ?InternalRelease@?$ComPtr@V?$SimpleKeyValuePair@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U23456@$00@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18061EE24 (-InternalRelease@-$ComPtr@V-$SimpleKeyValuePair@PEAUHSTRING__@@PEAU1@U-$DefaultLifetimeTraits@PE.c)
 *     ?Make@?$SimpleKeyValuePair@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U23456@$00@Internal@Collections@Foundation@Windows@@SAJAEBQEAUHSTRING__@@0PEAPEAV12345@@Z @ 0x18061F3BC (-Make@-$SimpleKeyValuePair@PEAUHSTRING__@@PEAU1@U-$DefaultLifetimeTraits@PEAUHSTRING__@@@Interna.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Iterator::GetMany(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int *a4)
{
  _QWORD *v4; // r12
  unsigned int v5; // ebx
  unsigned int v7; // r14d
  __int64 v8; // rdi
  unsigned int v9; // r13d
  int v10; // esi
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rbx
  RTL_SRWLOCK *v15; // rcx
  __int64 v17; // [rsp+20h] [rbp-20h] BYREF
  __int64 v18; // [rsp+28h] [rbp-18h] BYREF
  RTL_SRWLOCK *v19; // [rsp+30h] [rbp-10h] BYREF
  int v20; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v21; // [rsp+88h] [rbp+48h]
  unsigned int *v22; // [rsp+98h] [rbp+58h]

  v22 = a4;
  v21 = a2;
  v4 = a3;
  v5 = a2;
  v20 = 0;
  v7 = 0;
  *a4 = 0;
  if ( a2 )
    memset_0(a3, 0, 8LL * a2);
  XWinRT::SerializingLockPolicy::Read(&v19, (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 64) + 160LL), &v20);
  if ( v20 >= 0 )
    v20 = Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Iterator::EnsureVersionMatches(a1);
  v8 = *(_QWORD *)(a1 + 72);
  v9 = 0;
  v10 = v20;
  if ( v20 >= 0 )
  {
    while ( v9 < v5 )
    {
      if ( v10 >= 0 )
      {
        if ( !v8 )
          break;
        v17 = 0LL;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1>>::InternalRelease(&v17);
        v10 = Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1>::Make(
                v8,
                v8 + 8,
                &v17);
        v20 = v10;
        if ( v10 >= 0 )
        {
          v11 = v17;
          if ( v17 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
          v18 = 0LL;
          v4[v9] = v11;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
          v12 = *(_QWORD *)(a1 + 64);
          if ( *(_QWORD *)(v8 + 16) )
          {
            v8 = *(_QWORD *)(v8 + 16);
          }
          else
          {
            LODWORD(v13) = *(_DWORD *)(v8 + 24) % *(_DWORD *)(v12 + 96);
            do
            {
              v13 = (unsigned int)(v13 + 1);
              v8 = 0LL;
              if ( (unsigned int)v13 >= *(_DWORD *)(v12 + 96) )
                break;
              v8 = *(_QWORD *)(*(_QWORD *)(v12 + 80) + 8 * v13);
            }
            while ( !v8 );
          }
          ++v7;
          if ( !v8 )
          {
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1>>::InternalRelease(&v17);
            break;
          }
          v5 = v21;
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1>>::InternalRelease(&v17);
      }
      ++v9;
      if ( v10 < 0 )
        break;
    }
    if ( v10 < 0 )
    {
      if ( v7 )
      {
        v14 = v7;
        do
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 16LL))(*v4);
          *v4++ = 0LL;
          --v14;
        }
        while ( v14 );
      }
    }
    else
    {
      *(_QWORD *)(a1 + 72) = v8;
      *v22 = v7;
    }
  }
  if ( v19 )
  {
    v15 = v19 + 1;
    if ( LODWORD(v19->Ptr) == 1 )
      --LODWORD(v15->Ptr);
    else
      ReleaseSRWLockShared(v15);
  }
  return (unsigned int)v10;
}
