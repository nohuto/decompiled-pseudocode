/*
 * XREFs of ?RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z @ 0x18000670C
 * Callers:
 *     ?WilApiImpl_RecordFeatureError@details@wil@@YAXIPEBUFEATURE_ERROR@@@Z @ 0x180007500 (-WilApiImpl_RecordFeatureError@details@wil@@YAXIPEBUFEATURE_ERROR@@@Z.c)
 * Callees:
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180004B44 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180005300 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     ?Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z @ 0x180005B64 (-Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18004A5E0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall wil::details_abi::FeatureStateData::RecordFeatureError(
        PSRWLOCK SRWLock,
        int a2,
        const struct FEATURE_ERROR *a3)
{
  char *v6; // rdi
  char *v7; // rsi
  char *v8; // r14
  void *v9; // rbx
  bool v10; // di
  HANDLE ProcessHeap; // rax
  void *v13; // rbx
  HANDLE v14; // rax
  unsigned __int64 v15; // [rsp+30h] [rbp-D0h] BYREF
  int Buf1; // [rsp+38h] [rbp-C8h] BYREF
  void *v17; // [rsp+40h] [rbp-C0h] BYREF
  char *v18; // [rsp+48h] [rbp-B8h]
  char *v19; // [rsp+50h] [rbp-B0h]
  LPVOID lpMem; // [rsp+58h] [rbp-A8h]
  char v21[256]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v22[8]; // [rsp+160h] [rbp+60h] BYREF

  v6 = v21;
  v17 = v21;
  v7 = v21;
  v18 = v21;
  v8 = (char *)v22;
  v19 = (char *)v22;
  v9 = 0LL;
  lpMem = 0LL;
  v15 = 0LL;
  if ( wil::details_abi::SerializedFailure::Serialize(a3, &v15, v21, 0x100uLL) )
    goto LABEL_5;
  if ( wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)&v17, v15) )
  {
    v8 = v19;
    v6 = (char *)v17;
    if ( wil::details_abi::SerializedFailure::Serialize(a3, &v15, (char *)v17, v19 - (_BYTE *)v17) )
    {
      v9 = lpMem;
      v7 = v18;
LABEL_5:
      if ( &v6[v15] <= v8 )
        v7 = &v6[v15];
      AcquireSRWLockExclusive(SRWLock);
      Buf1 = a2;
      v10 = wil::details_abi::RawUsageIndex::RecordUsage(
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
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v9);
      }
      return v10;
    }
  }
  v13 = lpMem;
  if ( lpMem )
  {
    v14 = GetProcessHeap();
    HeapFree(v14, 0, v13);
  }
  return 0;
}
