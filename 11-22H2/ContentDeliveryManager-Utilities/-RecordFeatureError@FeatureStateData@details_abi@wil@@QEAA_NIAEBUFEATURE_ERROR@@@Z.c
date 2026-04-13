/*
 * XREFs of ?RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z @ 0x18003B404
 * Callers:
 *     ?RecordFeatureError@FeatureStateManager@details@wil@@QEAAXIAEBUFEATURE_ERROR@@@Z @ 0x18003B574 (-RecordFeatureError@FeatureStateManager@details@wil@@QEAAXIAEBUFEATURE_ERROR@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002C230 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x180032E00 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x18003BAB0 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     ?Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z @ 0x18003FA54 (-Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z.c)
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180043A8C (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 */

bool __fastcall wil::details_abi::FeatureStateData::RecordFeatureError(
        PSRWLOCK SRWLock,
        int a2,
        const struct FEATURE_ERROR *a3)
{
  _BYTE *v6; // rbx
  _BYTE *v7; // rsi
  _QWORD *v8; // r14
  wil::details *v9; // rdi
  void *v10; // rdx
  bool v11; // bl
  void *v12; // rdx
  unsigned __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  int v15; // [rsp+38h] [rbp-C8h] BYREF
  void *v16; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE *v17; // [rsp+48h] [rbp-B8h]
  _QWORD *v18; // [rsp+50h] [rbp-B0h]
  wil::details *v19; // [rsp+58h] [rbp-A8h]
  RTL_SRWLOCK *v20; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v21[256]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v22[8]; // [rsp+170h] [rbp+70h] BYREF

  v6 = v21;
  v16 = v21;
  v7 = v21;
  v17 = v21;
  v8 = v22;
  v18 = v22;
  v9 = 0LL;
  v19 = 0LL;
  v14 = 0LL;
  if ( wil::details_abi::SerializedFailure::Serialize(a3, &v14, v21, 0x100uLL) )
    goto LABEL_5;
  if ( wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)&v16, v14) )
  {
    v8 = v18;
    v6 = v16;
    if ( wil::details_abi::SerializedFailure::Serialize(a3, &v14, v16, (char *)v18 - (_BYTE *)v16) )
    {
      v9 = v19;
      v7 = v17;
LABEL_5:
      if ( &v6[v14] <= (_BYTE *)v8 )
        v7 = &v6[v14];
      AcquireSRWLockExclusive(SRWLock);
      v20 = SRWLock;
      v15 = a2;
      v11 = wil::details_abi::RawUsageIndex::RecordUsage(
              (wil::details_abi::RawUsageIndex *)&SRWLock[17],
              &v15,
              4uLL,
              v6,
              v7 - v6,
              1u);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v20);
      if ( v9 )
        wil::details::FreeProcessHeap(v9, v12);
      return v11;
    }
  }
  if ( v19 )
    wil::details::FreeProcessHeap(v19, v10);
  return 0;
}
