/*
 * XREFs of ?IndexOf@?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIInstallAppInfo@2InstallControl@Preview@Store@ApplicationModel@5@PEAIPEAE@Z @ 0x18008C920
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800221C0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IndexOfInternal@?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@AEAAJPEAPEAUIInstallAppInfo@2InstallControl@Preview@Store@ApplicationModel@5@IPEAU62789ApplicationModel@5@PEAIPEAE@Z @ 0x18008CD4C (-IndexOfInternal@-$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationMo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::IndexOf(
        __int64 a1,
        int a2,
        _DWORD *a3,
        _BYTE *a4)
{
  __int64 v5; // r15
  _QWORD *v7; // r12
  unsigned int v8; // ebp
  _DWORD *v9; // rbx
  RTL_SRWLOCK *v10; // r14
  int v11; // edi
  __int64 v12; // rcx
  size_t v13; // rax
  __int64 v14; // r15
  _QWORD *v15; // rbx
  __int64 v16; // rsi
  int v18; // [rsp+78h] [rbp+10h]

  v18 = a2;
  v5 = (__int64)a3;
  *a3 = 0;
  *a4 = 0;
  v7 = 0LL;
  v8 = 0;
  v9 = (_DWORD *)(a1 + 72);
  v10 = (RTL_SRWLOCK *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( SLODWORD(v10->Ptr) >= 0 )
      ++LODWORD(v10->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 80));
    a2 = v18;
  }
  v11 = 0;
  if ( *(_DWORD *)(a1 + 48) )
  {
    v13 = 8LL * *(unsigned int *)(a1 + 40);
    if ( !is_mul_ok(*(unsigned int *)(a1 + 40), 8uLL) )
      v13 = -1LL;
    v7 = operator new[](v13, (const struct std::nothrow_t *)&std::nothrow);
    if ( v7 )
    {
      v14 = 0LL;
      if ( *(_DWORD *)(a1 + 40) )
      {
        v11 = 0;
        do
        {
          v12 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v14);
          v7[v14] = v12;
          if ( v12 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
          ++v8;
          v14 = (unsigned int)(v14 + 1);
        }
        while ( (unsigned int)v14 < *(_DWORD *)(a1 + 40) );
      }
      v5 = (__int64)a3;
    }
    else
    {
      v11 = -2147024882;
    }
  }
  else
  {
    v11 = Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::IndexOfInternal(
            a1,
            *(_QWORD *)(a1 + 56),
            *(_DWORD *)(a1 + 40),
            a2,
            v5,
            (__int64)a4);
  }
  if ( v9 )
  {
    if ( *v9 == 1 )
      --LODWORD(v10->Ptr);
    else
      ReleaseSRWLockShared(v10);
  }
  if ( v11 < 0 )
  {
    if ( !v8 )
      goto LABEL_29;
  }
  else
  {
    if ( !v8 )
      goto LABEL_29;
    v11 = Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::IndexOfInternal(
            v12,
            (_DWORD)v7,
            v8,
            v18,
            v5,
            (__int64)a4);
  }
  v15 = v7;
  v16 = v8;
  do
  {
    if ( *v15 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v15 + 16LL))(*v15);
      *v15 = 0LL;
    }
    ++v15;
    --v16;
  }
  while ( v16 );
LABEL_29:
  operator delete[](v7);
  return (unsigned int)v11;
}
