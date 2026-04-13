/*
 * XREFs of ?GetMany@?$SimpleVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@V?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIInstallAppInfo@2InstallControl@Preview@Store@ApplicationModel@5@PEAI@Z @ 0x18008BB40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,XWinRT::IntVersionTag,0>::GetMany(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5)
{
  __int64 i; // r10
  int v8; // ebx
  _DWORD *v9; // r15
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 j; // rbx
  __int64 v14; // rcx

  for ( i = 0LL; (unsigned int)i < (unsigned int)a3; i = (unsigned int)(i + 1) )
    *(_QWORD *)(a4 + 8 * i) = 0LL;
  *a5 = 0;
  v8 = *(_DWORD *)(a1 + 48);
  v9 = *(_DWORD **)(a1 + 40);
  if ( v8 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 128LL))(*(_QWORD *)(a1 + 40));
    v8 = v10;
    if ( *(_DWORD *)(a1 + 52) != v9[22] )
    {
      *(_DWORD *)(a1 + 48) = -2147483636;
      if ( v10 < 0 )
      {
        RoTransformError((unsigned int)v10, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL, v11, v12);
        for ( j = 0LL; (unsigned int)j < *a5; j = (unsigned int)(j + 1) )
        {
          v14 = *(_QWORD *)(a4 + 8 * j);
          if ( v14 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
          *(_QWORD *)(a4 + 8 * j) = 0LL;
        }
        *a5 = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v8, 0LL, a3, a4);
  }
  return (unsigned int)v8;
}
