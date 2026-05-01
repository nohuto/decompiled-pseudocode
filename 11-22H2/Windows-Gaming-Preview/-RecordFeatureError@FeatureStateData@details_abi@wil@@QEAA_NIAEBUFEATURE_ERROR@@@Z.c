/*
 * XREFs of ?RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z @ 0x18000688C
 * Callers:
 *     ?WilApiImpl_RecordFeatureError@details@wil@@YAXIPEBUFEATURE_ERROR@@@Z @ 0x180007730 (-WilApiImpl_RecordFeatureError@details@wil@@YAXIPEBUFEATURE_ERROR@@@Z.c)
 * Callees:
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180004C28 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180005480 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     ?Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z @ 0x180005D0C (-Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18004B4D0 (__security_check_cookie.c)
 */

bool __fastcall wil::details_abi::FeatureStateData::RecordFeatureError(
        PSRWLOCK SRWLock,
        int a2,
        const struct FEATURE_ERROR *a3)
{
  char *v6; // rdi
  char *v7; // rsi
  char *v8; // r14
  void *v9; // rbx
  unsigned __int64 v10; // rdx
  char v11; // al
  HANDLE ProcessHeap; // rax
  bool v14; // di
  HANDLE v15; // rax
  unsigned __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  int Buf1; // [rsp+38h] [rbp-C8h] BYREF
  char *v18; // [rsp+40h] [rbp-C0h] BYREF
  char *v19; // [rsp+48h] [rbp-B8h]
  char *v20; // [rsp+50h] [rbp-B0h]
  LPVOID lpMem; // [rsp+58h] [rbp-A8h]
  char v22[256]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v23[8]; // [rsp+160h] [rbp+60h] BYREF

  v6 = v22;
  v18 = v22;
  v7 = v22;
  v19 = v22;
  v8 = (char *)v23;
  v20 = (char *)v23;
  v9 = 0LL;
  lpMem = 0LL;
  v16 = 0LL;
  if ( !wil::details_abi::SerializedFailure::Serialize(a3, &v16, v22, 0x100uLL) )
  {
    v10 = v16;
    if ( v16 >= 0x100 )
    {
      if ( v16 < 0x200 )
        v10 = 512LL;
      v11 = wil::details_abi::heap_buffer::reserve((wil::details_abi::heap_buffer *)&v18, v10);
      v9 = lpMem;
      if ( !v11 )
        goto LABEL_8;
      v8 = v20;
      v7 = v19;
      v6 = v18;
    }
    if ( !wil::details_abi::SerializedFailure::Serialize(a3, &v16, v6, v8 - v6) )
    {
LABEL_8:
      if ( v9 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v9);
      }
      return 0;
    }
  }
  if ( &v6[v16] <= v8 )
    v7 = &v6[v16];
  AcquireSRWLockExclusive(SRWLock);
  Buf1 = a2;
  v14 = wil::details_abi::RawUsageIndex::RecordUsage(
          (wil::details_abi::RawUsageIndex *)&SRWLock[17],
          &Buf1,
          4uLL,
          v6,
          v7 - v6,
          1u);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v9 )
  {
    v15 = GetProcessHeap();
    HeapFree(v15, 0, v9);
  }
  return v14;
}
