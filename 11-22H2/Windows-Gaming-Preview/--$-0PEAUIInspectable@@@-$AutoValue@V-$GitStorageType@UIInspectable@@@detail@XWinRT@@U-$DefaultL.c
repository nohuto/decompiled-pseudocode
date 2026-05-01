/*
 * XREFs of ??$?0PEAUIInspectable@@@?$AutoValue@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@@XWinRT@@QEAA@AEBQEAUIInspectable@@PEAJ@Z @ 0x1800359A0
 * Callers:
 *     ?Insert@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAUIInspectable@@PEAE@Z @ 0x180032410 (-Insert@-$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultHash@PEAUHSTRING__@@@Internal@Colle.c)
 * Callees:
 *     ?Acquire@Git@Details@Internal@Windows@@QEAAJXZ @ 0x18001353C (-Acquire@Git@Details@Internal@Windows@@QEAAJXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004BB68 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004BBD0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XWinRT::AutoValue<XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>>::AutoValue<XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>>(
        __int64 a1,
        __int64 *a2,
        int *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rcx
  _DWORD *v7; // rax
  Windows::Internal::Details::Git *v8; // rcx
  _DWORD *v9; // rbx
  int v10; // ebp
  __int64 v11; // rcx
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF

  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 8) = 0;
  v5 = *a2;
  if ( *a2 )
  {
    v13 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v5)(v5, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90, &v13) < 0 )
    {
      v7 = operator new(8uLL, (const struct std::nothrow_t *)&std::nothrow);
      v9 = v7;
      if ( v7 )
      {
        *v7 = 1;
        v7[1] = 0;
        v10 = Windows::Internal::Details::Git::Acquire(v8);
        if ( v10 < 0
          || (v10 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, _DWORD *))(*(_QWORD *)qword_180064E90 + 24LL))(
                      qword_180064E90,
                      v5,
                      &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                      v9 + 1),
              v10 < 0) )
        {
          if ( _InterlockedExchangeAdd(v9, 0xFFFFFFFF) == 1 )
          {
            if ( v9[1] )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_180064E90 + 32LL))(qword_180064E90);
            operator delete(v9, 8uLL);
          }
        }
        else
        {
          *(_QWORD *)a1 = v9;
          *(_BYTE *)(a1 + 8) = 1;
        }
      }
      else
      {
        v10 = -2147024882;
      }
      v11 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      *a3 = v10;
      if ( v10 < 0 )
      {
        *(_QWORD *)a1 = 0LL;
        *(_BYTE *)(a1 + 8) = 0;
      }
    }
    else
    {
      *(_BYTE *)(a1 + 8) = 0;
      *(_QWORD *)a1 = v5;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      v6 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      *a3 = 0;
    }
  }
  else
  {
    *a3 = 0;
  }
  return a1;
}
