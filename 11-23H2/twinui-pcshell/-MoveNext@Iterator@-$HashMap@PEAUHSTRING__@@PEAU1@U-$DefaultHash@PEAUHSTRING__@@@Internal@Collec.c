/*
 * XREFs of ?MoveNext@Iterator@?$HashMap@PEAUHSTRING__@@PEAU1@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@3456@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U83456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x18061F4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180046D70 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ?EnsureVersionMatches@Iterator@?$HashMap@PEAUHSTRING__@@PEAU1@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@3456@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U83456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJXZ @ 0x18061CAF8 (-EnsureVersionMatches@Iterator@-$HashMap@PEAUHSTRING__@@PEAU1@U-$DefaultHash@PEAUHSTRING__@@@Int.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Iterator::MoveNext(
        __int64 a1,
        bool *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  RTL_SRWLOCK *v9; // rcx
  int v11; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v12; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0;
  *a2 = 0;
  XWinRT::SerializingLockPolicy::Read(&v12, (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 64) + 160LL), &v11);
  v4 = v11;
  if ( v11 >= 0 )
  {
    v11 = Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Iterator::EnsureVersionMatches(a1);
    v4 = v11;
    if ( v11 >= 0 )
    {
      v5 = *(_QWORD *)(a1 + 72);
      if ( v5 )
      {
        v6 = *(_QWORD *)(v5 + 16);
        v7 = *(_QWORD *)(a1 + 64);
        if ( !v6 )
        {
          LODWORD(v8) = *(_DWORD *)(v5 + 24) % *(_DWORD *)(v7 + 96);
          do
          {
            v8 = (unsigned int)(v8 + 1);
            v6 = 0LL;
            if ( (unsigned int)v8 >= *(_DWORD *)(v7 + 96) )
              break;
            v6 = *(_QWORD *)(*(_QWORD *)(v7 + 80) + 8 * v8);
          }
          while ( !v6 );
        }
        v4 = v11;
        *(_QWORD *)(a1 + 72) = v6;
        *a2 = v6 != 0;
      }
      else
      {
        v4 = -2147483637;
        RoOriginateError(2147483659LL, 0LL);
      }
    }
  }
  if ( v12 )
  {
    v9 = v12 + 1;
    if ( LODWORD(v12->Ptr) == 1 )
      --LODWORD(v9->Ptr);
    else
      ReleaseSRWLockShared(v9);
  }
  return v4;
}
