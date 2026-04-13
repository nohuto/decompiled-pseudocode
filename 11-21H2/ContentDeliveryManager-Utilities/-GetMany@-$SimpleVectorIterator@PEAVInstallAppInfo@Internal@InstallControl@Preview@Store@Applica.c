/*
 * XREFs of ?GetMany@?$SimpleVectorIterator@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@V?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIInstallAppInfo@2InstallControl@Preview@Store@ApplicationModel@5@PEAI@Z @ 0x18008B820
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,XWinRT::IntVersionTag,0>::GetMany(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 i; // rcx
  int v8; // ebx
  _DWORD *v9; // r12
  unsigned __int32 v10; // r14d
  __int64 v11; // r8
  __int64 v12; // r9
  _DWORD *v13; // rax
  __int64 k; // rbx
  __int64 v15; // rcx
  bool v16; // zf
  signed __int32 v17; // eax
  _DWORD *v18; // rax
  __int64 j; // rbx
  __int64 v20; // rcx

  *a4 = 0;
  for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(i + 1) )
    *(_QWORD *)(a3 + 8 * i) = 0LL;
  v8 = *(_DWORD *)(a1 + 48);
  v9 = *(_DWORD **)(a1 + 32);
  if ( v8 >= 0 )
  {
    v10 = *(_DWORD *)(a1 + 40);
    if ( *(_BYTE *)(a1 + 56) )
    {
      v8 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD, _QWORD, __int64, _DWORD *))(*(_QWORD *)v9 + 128LL))(
             v9,
             v10,
             a2,
             a3,
             a4);
      if ( v8 >= 0 )
        *(_DWORD *)(a1 + 40) = v10 + *a4;
    }
    else
    {
      while ( 1 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _DWORD *))(**(_QWORD **)(a1 + 32) + 128LL))(
               *(_QWORD *)(a1 + 32),
               v10,
               a2,
               a3,
               a4);
        if ( v8 < 0 )
          break;
        v17 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 40), v10 + *a4, v10);
        v16 = v10 == v17;
        v10 = v17;
        if ( v16 )
          break;
        v18 = a4;
        for ( j = 0LL; (unsigned int)j < *a4; v18 = a4 )
        {
          v20 = *(_QWORD *)(a3 + 8 * j);
          if ( v20 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
          *(_QWORD *)(a3 + 8 * j) = 0LL;
          j = (unsigned int)(j + 1);
        }
        *v18 = 0;
      }
    }
    if ( *(_DWORD *)(a1 + 52) != v9[22] )
    {
      *(_DWORD *)(a1 + 48) = -2147483636;
      if ( v8 < 0 )
      {
        RoTransformError((unsigned int)v8, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL, v11, v12);
        v13 = a4;
        for ( k = 0LL; (unsigned int)k < *a4; v13 = a4 )
        {
          v15 = *(_QWORD *)(a3 + 8 * k);
          if ( v15 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
          *(_QWORD *)(a3 + 8 * k) = 0LL;
          k = (unsigned int)(k + 1);
        }
        *v13 = 0;
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
