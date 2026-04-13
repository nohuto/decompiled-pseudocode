/*
 * XREFs of ?GetMany@?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIInstallAppInfo@2InstallControl@Preview@Store@ApplicationModel@5@PEAI@Z @ 0x18008BFF0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800221C0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18002245D (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::GetMany(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _QWORD *a4,
        unsigned int *a5)
{
  _QWORD *v5; // r15
  size_t v6; // r14
  unsigned int v8; // esi
  RTL_SRWLOCK *v9; // r12
  int v10; // edi
  unsigned int v11; // edi
  _QWORD *v12; // rbp
  unsigned int v13; // r12d
  __int64 v14; // rcx
  unsigned int v15; // ebp
  _QWORD *v16; // r12
  unsigned int v17; // r15d
  __int64 v18; // rcx
  unsigned int i; // ecx
  __int64 v20; // rbx
  void *v22; // [rsp+20h] [rbp-58h]
  unsigned int v23; // [rsp+80h] [rbp+8h]
  unsigned int v25; // [rsp+90h] [rbp+18h]

  v5 = a4;
  v6 = (unsigned int)a3;
  v8 = 0;
  v23 = 0;
  v25 = 0;
  if ( (_DWORD)a3 )
    memset_0(a4, 0, 8LL * (unsigned int)a3);
  *a5 = 0;
  v22 = 0LL;
  v9 = (RTL_SRWLOCK *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( SLODWORD(v9->Ptr) >= 0 )
      ++LODWORD(v9->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 80));
  }
  v10 = 0;
  if ( *(_DWORD *)(a1 + 48) )
  {
    v22 = operator new[](v6, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v22 )
    {
      v10 = -2147024882;
LABEL_12:
      RoOriginateError((unsigned int)v10, 0LL, a3, a4);
      goto LABEL_29;
    }
  }
  v25 = *(_DWORD *)(a1 + 40);
  if ( a2 > v25 )
  {
    v10 = -2147483637;
    goto LABEL_12;
  }
  if ( *(_DWORD *)(a1 + 48) )
  {
    if ( (_DWORD)v6 )
    {
      v11 = a2;
      v12 = v5;
      v13 = *(_DWORD *)(a1 + 40);
      do
      {
        if ( v11 >= v13 )
          break;
        v14 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * v11);
        *v12 = v14;
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
        ++v23;
        ++v11;
        ++v12;
      }
      while ( v23 < (unsigned int)v6 );
      v9 = (RTL_SRWLOCK *)(a1 + 80);
    }
    v10 = 0;
  }
  else if ( (_DWORD)v6 )
  {
    v15 = a2;
    v16 = v5;
    v17 = *(_DWORD *)(a1 + 40);
    do
    {
      v10 = 0;
      if ( v15 >= v17 )
        break;
      v18 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * v15);
      *v16 = v18;
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
      ++v8;
      ++v15;
      ++v16;
    }
    while ( v8 < (unsigned int)v6 );
    v5 = a4;
    v9 = (RTL_SRWLOCK *)(a1 + 80);
  }
LABEL_29:
  if ( a1 != -72 )
  {
    if ( *(_DWORD *)(a1 + 72) == 1 )
      --LODWORD(v9->Ptr);
    else
      ReleaseSRWLockShared(v9);
  }
  if ( v10 < 0 )
  {
    if ( v8 )
    {
      v20 = v8;
      do
      {
        if ( *v5 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 16LL))(*v5);
          *v5 = 0LL;
        }
        ++v5;
        --v20;
      }
      while ( v20 );
    }
  }
  else
  {
    if ( v23 )
    {
      for ( i = 0; i < (unsigned int)v6; ++i )
      {
        if ( i + a2 >= v25 )
          break;
        v10 = 0;
        ++v8;
      }
    }
    *a5 = v8;
  }
  operator delete[](v22);
  return (unsigned int)v10;
}
