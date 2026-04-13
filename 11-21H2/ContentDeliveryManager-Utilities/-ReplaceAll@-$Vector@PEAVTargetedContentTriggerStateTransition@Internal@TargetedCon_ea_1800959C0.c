/*
 * XREFs of ?ReplaceAll@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@@Z @ 0x1800959C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180027BD8 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18003F58C (-RaiseEvent@-$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@Internal@Collections@Foundation@Window.c)
 *     ??$Destroy@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@detail@1@@Z @ 0x180084ED4 (--$Destroy@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@I.c)
 *     ??$Construct@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@detail@1@PEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@Z @ 0x180091860 (--$Construct@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        __int64 *a3)
{
  int v3; // r13d
  unsigned int v4; // r12d
  __m128i *v7; // rax
  __m128i *v8; // rbx
  int v9; // edi
  __int64 v10; // rsi
  __m128i *v11; // rbp
  _DWORD *v12; // r14
  unsigned int v13; // eax
  __m128i *v14; // rax
  __int64 v15; // rbx
  char v17; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a2;
  if ( a2 )
  {
    v7 = (__m128i *)malloc(16LL * a2);
    v8 = v7;
    if ( !v7 )
      return (unsigned int)-2147024882;
    v10 = 0LL;
    v11 = v7;
    while ( 1 )
    {
      v9 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>(
             (__int64)v11[(unsigned int)v10].m128i_i64,
             *a3);
      if ( v9 < 0 )
        break;
      if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*v8, 8)) )
        ++v3;
      v10 = (unsigned int)(v10 + 1);
      ++a3;
      ++v8;
      if ( (unsigned int)v10 >= v4 )
        goto LABEL_11;
    }
  }
  else
  {
    LODWORD(v10) = 0;
    v11 = 0LL;
    v4 = 0;
LABEL_11:
    v12 = (_DWORD *)(a1 + 112);
    if ( *(_DWORD *)(a1 + 104) == 1 )
    {
      if ( !*v12 )
        *v12 = -268435456;
    }
    else
    {
      AcquireSRWLockExclusive((PSRWLOCK)(a1 + 112));
    }
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v17);
    v13 = *(_DWORD *)(a1 + 72);
    v9 = 0;
    ++*(_DWORD *)(a1 + 120);
    *(_DWORD *)(a1 + 72) = v10;
    v10 = v13;
    v14 = *(__m128i **)(a1 + 88);
    *(_QWORD *)(a1 + 88) = v11;
    v11 = v14;
    *(_DWORD *)(a1 + 76) = v4;
    *(_DWORD *)(a1 + 80) = v3;
    if ( a1 != -104 )
    {
      if ( *(_DWORD *)(a1 + 104) == 1 )
        *v12 += 0x10000000;
      else
        ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 112));
    }
  }
  if ( v11 )
  {
    if ( (_DWORD)v10 )
    {
      v15 = (__int64)v11;
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>(v15);
        v15 += 16LL;
        --v10;
      }
      while ( v10 );
    }
    free(v11);
  }
  if ( v9 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>::RaiseEvent();
  return (unsigned int)v9;
}
