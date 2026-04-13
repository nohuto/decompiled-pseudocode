/*
 * XREFs of ?ReplaceAll@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$DefaultVectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@@Z @ 0x180095830
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180027BD8 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18003F58C (-RaiseEvent@-$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@Internal@Collections@Foundation@Window.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int64 v9; // r14
  int v10; // ebp
  _QWORD *v11; // r15
  int v12; // r12d
  __int64 v13; // rcx
  _DWORD *v14; // rdi
  __int64 v15; // r14
  _QWORD *v16; // rbp
  _QWORD *v17; // rbx
  __int64 v18; // rdi
  char v19; // [rsp+78h] [rbp+20h] BYREF

  v3 = a2;
  if ( a2 )
  {
    v6 = malloc(8LL * a2);
    v7 = v6;
    if ( !v6 )
      return 2147942414LL;
    v9 = a3 - (_QWORD)v6;
    v10 = v3;
    v11 = v6;
    v12 = v3;
    do
    {
      v13 = *(_QWORD *)((char *)v7 + v9);
      *v7 = v13;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      ++v7;
      --v3;
    }
    while ( v3 );
  }
  else
  {
    v10 = 0;
    v11 = 0LL;
    v12 = 0;
  }
  v14 = (_DWORD *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( !*v14 )
      *v14 = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 80));
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v19);
  v15 = *(unsigned int *)(a1 + 40);
  *(_DWORD *)(a1 + 48) = 0;
  ++*(_DWORD *)(a1 + 88);
  *(_DWORD *)(a1 + 40) = v10;
  v16 = *(_QWORD **)(a1 + 56);
  *(_QWORD *)(a1 + 56) = v11;
  *(_DWORD *)(a1 + 44) = v12;
  if ( a1 != -72 )
  {
    if ( *(_DWORD *)(a1 + 72) == 1 )
      *v14 += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 80));
  }
  if ( v16 )
  {
    if ( (_DWORD)v15 )
    {
      v17 = v16;
      v18 = v15;
      do
      {
        if ( *v17 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v17 + 16LL))(*v17);
          *v17 = 0LL;
        }
        ++v17;
        --v18;
      }
      while ( v18 );
    }
    free(v16);
  }
  return Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>::RaiseEvent();
}
