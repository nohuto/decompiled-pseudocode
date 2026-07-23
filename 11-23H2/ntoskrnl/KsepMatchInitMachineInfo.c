/*
 * XREFs of KsepMatchInitMachineInfo @ 0x140B6137C
 * Callers:
 *     KseInitialize @ 0x140B495CC (KseInitialize.c)
 * Callees:
 *     KsepLogError @ 0x14020A5AC (KsepLogError.c)
 *     KsepDebugPrint @ 0x1405811C4 (KsepDebugPrint.c)
 *     KsepMatchInitCpuInfo @ 0x140B6144C (KsepMatchInitCpuInfo.c)
 *     KsepMatchInitAcpiOemInfo @ 0x140B614DC (KsepMatchInitAcpiOemInfo.c)
 *     KsepMatchInitBiosInfo @ 0x140B6162C (KsepMatchInitBiosInfo.c)
 */

__int64 KsepMatchInitMachineInfo()
{
  int matched; // ebx
  int v1; // ebx
  int v2; // eax
  int v3; // ebx
  __int64 v4; // rcx
  char v5; // al
  char v7; // al
  __int64 v8; // rcx
  char v9; // al
  __int64 v10; // rcx

  matched = KsepMatchInitAcpiOemInfo();
  if ( matched < 0 )
  {
    v7 = KsepDebugFlag;
    v8 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v8 + 1] = matched;
    KsepHistoryErrors[2 * v8] = 655516;
    if ( (v7 & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: KsepMatchInitAcpiOemInfo failed [0x%08x]\n", matched);
    KsepLogError(0LL, (__int64)"KSE: KsepMatchInitAcpiOemInfo failed [0x%08x]\n", matched);
  }
  v1 = KsepMatchInitCpuInfo();
  if ( v1 < 0 )
  {
    v9 = KsepDebugFlag;
    v10 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v10 + 1] = v1;
    KsepHistoryErrors[2 * v10] = 655522;
    if ( (v9 & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: KsepMatchInitCpuInfo failed\n [0x%08x]\n", v1);
    KsepLogError(0LL, (__int64)"KSE: KsepMatchInitCpuInfo failed\n [0x%08x]\n", v1);
  }
  v2 = KsepMatchInitBiosInfo();
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v4 + 1] = v2;
    v5 = KsepDebugFlag;
    KsepHistoryErrors[2 * v4] = 655528;
    if ( (v5 & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: KsepMatchInitBiosInfo failed [0x%08x]\n", v3);
    KsepLogError(0LL, (__int64)"KSE: KsepMatchInitBiosInfo failed [0x%08x]\n", v3);
  }
  KsepMatchMachineInfo = (__int64)&xmmword_140C70C68;
  qword_140C40C48 = (__int64)&xmmword_140C70CA0;
  qword_140C40C50 = (__int64)&xmmword_140C70CD8;
  qword_140C40C58 = (__int64)&xmmword_140C70D10;
  return 0LL;
}
