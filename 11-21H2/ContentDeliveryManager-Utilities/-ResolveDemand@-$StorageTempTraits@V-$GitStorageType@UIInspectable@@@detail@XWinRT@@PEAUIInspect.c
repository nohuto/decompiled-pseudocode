/*
 * XREFs of ?ResolveDemand@?$StorageTempTraits@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@PEAUIInspectable@@V123@U?$DefaultLifetimeTraits@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@@XWinRT@@SAJPEAV?$GitStorageType@UIInspectable@@@detail@2@PEAPEAUIInspectable@@@Z @ 0x1800E2338
 * Callers:
 *     ?GetAt@?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIInspectable@@@Z @ 0x1800DE1E0 (-GetAt@-$Vector@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collec.c)
 *     ?GetMany@?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIInspectable@@PEAI@Z @ 0x1800DEC70 (-GetMany@-$Vector@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Coll.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::StorageTempTraits<XWinRT::detail::GitStorageType<IInspectable>,IInspectable *,XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>>::ResolveDemand(
        __int64 a1,
        volatile signed __int32 **a2)
{
  int v3; // esi
  volatile signed __int32 *v4; // r11
  volatile signed __int32 *v5; // rdi

  *a2 = 0LL;
  v3 = 0;
  v4 = *(volatile signed __int32 **)a1;
  if ( *(_BYTE *)(a1 + 8) )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, volatile signed __int32 **))(*(_QWORD *)qword_1801AF3F0
                                                                                        + 40LL))(
           qword_1801AF3F0,
           *((unsigned int *)v4 + 1),
           &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
           a2);
    if ( v3 >= 0 )
    {
      v5 = *(volatile signed __int32 **)a1;
      if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 0xFFFFFFFF) == 1 && v5 )
      {
        if ( *((_DWORD *)v5 + 1) )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1801AF3F0 + 32LL))(qword_1801AF3F0);
        operator delete((void *)v5);
      }
      *(_BYTE *)(a1 + 8) = 0;
      *(_QWORD *)a1 = 0LL;
    }
  }
  else
  {
    *a2 = v4;
    *(_QWORD *)a1 = 0LL;
  }
  return (unsigned int)v3;
}
