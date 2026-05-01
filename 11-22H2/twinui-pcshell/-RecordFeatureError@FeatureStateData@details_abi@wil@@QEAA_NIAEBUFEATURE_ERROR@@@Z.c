/*
 * XREFs of ?RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z @ 0x18038E6D4
 * Callers:
 *     ?RecordFeatureError@FeatureStateManager@details@wil@@QEAAXIAEBUFEATURE_ERROR@@@Z @ 0x18038E84C (-RecordFeatureError@FeatureStateManager@details@wil@@QEAAXIAEBUFEATURE_ERROR@@@Z.c)
 * Callees:
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x1800D223C (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x1801A2020 (-MemoryFree@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x18038EB18 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     ?Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z @ 0x18038F480 (-Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z.c)
 */

bool __fastcall wil::details_abi::FeatureStateData::RecordFeatureError(
        PSRWLOCK SRWLock,
        int a2,
        const struct FEATURE_ERROR *a3)
{
  _BYTE *v6; // rdi
  _BYTE *v7; // rsi
  _QWORD *v8; // r14
  void *v9; // rbx
  bool v10; // di
  unsigned __int64 v12; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+38h] [rbp-C8h] BYREF
  void *v14; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE *v15; // [rsp+48h] [rbp-B8h]
  _QWORD *v16; // [rsp+50h] [rbp-B0h]
  void *v17; // [rsp+58h] [rbp-A8h]
  _BYTE v18[256]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v19[8]; // [rsp+160h] [rbp+60h] BYREF

  v6 = v18;
  v14 = v18;
  v7 = v18;
  v15 = v18;
  v8 = v19;
  v16 = v19;
  v9 = 0LL;
  v17 = 0LL;
  v12 = 0LL;
  if ( wil::details_abi::SerializedFailure::Serialize(a3, &v12, v18, 0x100uLL) )
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
      AcquireSRWLockExclusive(SRWLock);
      v13 = a2;
      v10 = wil::details_abi::RawUsageIndex::RecordUsage(
              (wil::details_abi::RawUsageIndex *)&SRWLock[17],
              &v13,
              4uLL,
              v6,
              v7 - v6,
              1u);
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
      if ( v9 )
        MemoryFree(v9);
      return v10;
    }
  }
  if ( v17 )
    MemoryFree(v17);
  return 0;
}
