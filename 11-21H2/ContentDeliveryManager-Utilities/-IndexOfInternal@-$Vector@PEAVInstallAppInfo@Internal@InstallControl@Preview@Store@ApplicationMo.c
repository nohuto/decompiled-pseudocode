/*
 * XREFs of ?IndexOfInternal@?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@AEAAJPEAPEAUIInstallAppInfo@2InstallControl@Preview@Store@ApplicationModel@5@IPEAU62789ApplicationModel@5@PEAIPEAE@Z @ 0x18008CD4C
 * Callers:
 *     ?IndexOf@?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIInstallAppInfo@2InstallControl@Preview@Store@ApplicationModel@5@PEAIPEAE@Z @ 0x18008C920 (-IndexOf@-$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Wind.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::IndexOfInternal(
        __int64 a1,
        __int64 (__fastcall ****a2)(_QWORD, GUID *, __int64 *),
        unsigned int a3,
        __int64 (__fastcall ***a4)(_QWORD, GUID *, __int64 *),
        unsigned int *a5,
        _BYTE *a6)
{
  int v9; // ebx
  unsigned int v10; // edi
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rsi
  bool v12; // r12
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v17; // [rsp+20h] [rbp-10h] BYREF
  __int64 v18; // [rsp+60h] [rbp+30h] BYREF

  v18 = a1;
  v9 = 0;
  v10 = 0;
  if ( a3 )
  {
    while ( v9 >= 0 )
    {
      v11 = *a2;
      v12 = 0;
      if ( a4 == *a2 )
      {
        v9 = 0;
LABEL_23:
        *a6 = 1;
        *a5 = v10;
        return (unsigned int)v9;
      }
      if ( a4 && v11 )
      {
        v17 = 0LL;
        v18 = 0LL;
        v9 = (**a4)(a4, &GUID_00000000_0000_0000_c000_000000000046, &v17);
        if ( v9 < 0 )
          goto LABEL_11;
        v13 = v18;
        if ( v18 )
        {
          v18 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
        v9 = (**v11)(v11, &GUID_00000000_0000_0000_c000_000000000046, &v18);
        if ( v9 < 0 )
        {
LABEL_11:
          v14 = v18;
        }
        else
        {
          v14 = v18;
          v12 = v17 == v18;
        }
        if ( v14 )
        {
          v18 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
        v15 = v17;
        if ( v17 )
        {
          v17 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
        if ( v9 >= 0 && v12 )
          goto LABEL_23;
      }
      else
      {
        v9 = 0;
      }
      ++v10;
      ++a2;
      if ( v10 >= a3 )
        return (unsigned int)v9;
    }
  }
  return (unsigned int)v9;
}
