/*
 * XREFs of ?RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z @ 0x1802D816C
 * Callers:
 *     ?RecordFeatureError@FeatureStateManager@details@wil@@QEAAXIAEBUFEATURE_ERROR@@@Z @ 0x1802D82D4 (-RecordFeatureError@FeatureStateManager@details@wil@@QEAAXIAEBUFEATURE_ERROR@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x1800F77F0 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x1801802F4 (-MemoryFree@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x1802D8668 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     ?Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z @ 0x1802D9068 (-Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z.c)
 */

bool __fastcall wil::details_abi::FeatureStateData::RecordFeatureError(
        RTL_SRWLOCK *this,
        int a2,
        const struct FEATURE_ERROR *a3)
{
  _BYTE *v6; // rbx
  _BYTE *v7; // rsi
  _QWORD *v8; // r14
  void *v9; // rdi
  bool v10; // bl
  unsigned __int64 v12; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+38h] [rbp-C8h] BYREF
  void *v14; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE *v15; // [rsp+48h] [rbp-B8h]
  _QWORD *v16; // [rsp+50h] [rbp-B0h]
  void *v17; // [rsp+58h] [rbp-A8h]
  RTL_SRWLOCK *v18[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v19[256]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v20[8]; // [rsp+170h] [rbp+70h] BYREF

  v6 = v19;
  v14 = v19;
  v7 = v19;
  v15 = v19;
  v8 = v20;
  v16 = v20;
  v9 = 0LL;
  v17 = 0LL;
  v12 = 0LL;
  if ( wil::details_abi::SerializedFailure::Serialize(a3, &v12, v19, 0x100uLL) )
    goto LABEL_5;
  if ( wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)&v14, v12) )
  {
    v8 = v16;
    v6 = v14;
    if ( wil::details_abi::SerializedFailure::Serialize(a3, &v12, v14, (char *)v16 - (_BYTE *)v14) )
    {
      v9 = v17;
      v7 = v15;
LABEL_5:
      if ( &v6[v12] <= (_BYTE *)v8 )
        v7 = &v6[v12];
      wil::AcquireSRWLockExclusive(v18, this);
      v13 = a2;
      v10 = wil::details_abi::RawUsageIndex::RecordUsage(
              (wil::details_abi::RawUsageIndex *)&this[17],
              &v13,
              4uLL,
              v6,
              v7 - v6,
              1u);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(v18);
      if ( v9 )
        MemoryFree(v9);
      return v10;
    }
  }
  if ( v17 )
    MemoryFree(v17);
  return 0;
}
