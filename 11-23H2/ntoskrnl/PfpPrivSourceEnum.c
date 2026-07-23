/*
 * XREFs of PfpPrivSourceEnum @ 0x1407419A0
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x14075DB08 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     SmStoreExistsForProcess @ 0x140344D24 (SmStoreExistsForProcess.c)
 *     RtlStringCbCopyA @ 0x140348308 (RtlStringCbCopyA.c)
 *     MmGetNextSession @ 0x14035EE90 (MmGetNextSession.c)
 *     MiFillSessionWorkingSetEntry @ 0x1403678D0 (MiFillSessionWorkingSetEntry.c)
 *     MmQuerySystemMemoryInformation @ 0x1403688A8 (MmQuerySystemMemoryInformation.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14041B7B0 (ZwQuerySystemInformation.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x1406536D4 (MmQueryProcessWorkingSetSwapPages.c)
 *     PsQueryProcessAttributes @ 0x14071E014 (PsQueryProcessAttributes.c)
 *     ProbeForWrite @ 0x140729580 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 *     ExGetNextProcess @ 0x140742B68 (ExGetNextProcess.c)
 *     PsGetProcessDeepFreezeStats @ 0x140751A74 (PsGetProcessDeepFreezeStats.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1407A5DD0 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PfpPrivSourceAdd @ 0x1407C3498 (PfpPrivSourceAdd.c)
 *     SmProcessQueryStoreStats @ 0x1408A6BE4 (SmProcessQueryStoreStats.c)
 */

__int64 __fastcall PfpPrivSourceEnum(__int64 a1, KPROCESSOR_MODE a2, _DWORD *a3)
{
  __int64 *v5; // r15
  __int64 v6; // rsi
  unsigned __int64 v7; // r14
  _DWORD *v8; // rbx
  unsigned int v9; // eax
  void *i; // rcx
  __int64 NextSession; // rax
  void *j; // rcx
  __int64 NextProcess; // rax
  unsigned __int64 v14; // rcx
  unsigned int v15; // eax
  int v16; // ebx
  __int64 v17; // rax
  __int64 *k; // rcx
  int v19; // ebx
  unsigned __int64 v20; // rax
  bool v21; // al
  unsigned int v22; // ebx
  __int64 v24; // rax
  int IsAppContainerOrIdentifyLevelContext; // eax
  char v26; // [rsp+20h] [rbp-208h]
  char v27[3]; // [rsp+21h] [rbp-207h] BYREF
  int v28; // [rsp+24h] [rbp-204h]
  __int128 v29; // [rsp+28h] [rbp-200h] BYREF
  __int64 v30; // [rsp+38h] [rbp-1F0h]
  _QWORD v31[12]; // [rsp+40h] [rbp-1E8h] BYREF
  unsigned __int64 v32; // [rsp+A0h] [rbp-188h]
  _DWORD *v33; // [rsp+A8h] [rbp-180h]
  __int64 v34; // [rsp+B0h] [rbp-178h]
  _DWORD *v35; // [rsp+B8h] [rbp-170h]
  PVOID Object; // [rsp+C0h] [rbp-168h]
  _DWORD *v37; // [rsp+D0h] [rbp-158h]
  __int128 v38; // [rsp+D8h] [rbp-150h] BYREF
  __int128 v39; // [rsp+E8h] [rbp-140h]
  __int64 v40; // [rsp+F8h] [rbp-130h]
  __int128 v41; // [rsp+100h] [rbp-128h] BYREF
  __int128 v42; // [rsp+110h] [rbp-118h]
  __int128 v43; // [rsp+120h] [rbp-108h] BYREF
  _QWORD SystemInformation[8]; // [rsp+140h] [rbp-E8h] BYREF
  __int128 v45; // [rsp+180h] [rbp-A8h]

  v33 = a3;
  v34 = a1;
  v37 = a3;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  v43 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  LODWORD(v40) = 0;
  v26 = 0;
  v41 = 0LL;
  v42 = 0LL;
  v32 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v5 = 0LL;
  Object = 0LL;
  v6 = 0LL;
  LODWORD(v7) = 0;
  v8 = *(_DWORD **)(a1 + 16);
  v35 = v8;
  v9 = *(_DWORD *)(a1 + 24);
  if ( v9 < 0x10 )
  {
    v16 = -1073741789;
    goto LABEL_45;
  }
  if ( a2 )
    ProbeForWrite(v8, v9, 8u);
  v45 = *(_OWORD *)v8;
  v8[2] = 0;
  if ( (_DWORD)v45 != 8 || (DWORD1(v45) & 0xFFFFFFF8) != 0 || (BYTE4(v45) & 3) == 3 )
  {
    v16 = -1073741811;
    goto LABEL_45;
  }
  if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a2) )
  {
    IsAppContainerOrIdentifyLevelContext = SeIsAppContainerOrIdentifyLevelContext(0LL);
    v16 = IsAppContainerOrIdentifyLevelContext;
    if ( IsAppContainerOrIdentifyLevelContext == -1073741659 )
    {
      v26 = 1;
      goto LABEL_11;
    }
    if ( IsAppContainerOrIdentifyLevelContext < 0 )
      goto LABEL_45;
  }
  *((_QWORD *)&v29 + 1) = 1LL;
  for ( i = 0LL; ; i = (void *)NextSession )
  {
    NextSession = MmGetNextSession(i);
    v5 = (__int64 *)NextSession;
    if ( !NextSession )
      break;
    ++*((_QWORD *)&v29 + 1);
  }
LABEL_11:
  for ( j = 0LL; ; j = (void *)NextProcess )
  {
    NextProcess = ExGetNextProcess(j);
    v6 = NextProcess;
    if ( !NextProcess )
      break;
    ++*((_QWORD *)&v29 + 1);
  }
  if ( *((_QWORD *)&v29 + 1) > 0xFFFFFFFFuLL || (v14 = 96LL * *((_QWORD *)&v29 + 1) + 16, v14 > 0xFFFFFFFF) )
  {
    v16 = -1073741670;
    goto LABEL_45;
  }
  LODWORD(v7) = 96 * DWORD2(v29) + 16;
  v15 = *(_DWORD *)(v34 + 24);
  if ( (unsigned int)v14 > v15 )
  {
    v16 = -1073741789;
    goto LABEL_45;
  }
  HIDWORD(v30) = (v15 - 16) / 0x60;
  *(_QWORD *)&v29 = v35;
  if ( !v26 )
  {
    memset(v31, 0, sizeof(v31));
    HIDWORD(v31[0]) = -1;
    v31[3] = 0xFFFFFFFFLL;
    RtlStringCbCopyA((NTSTRSAFE_PSTR)&v31[6] + 4, 0x10uLL, "KernelSpace");
    v16 = ZwQuerySystemInformation(SystemPagedPoolInformationEx, SystemInformation, 0x40u, 0LL);
    if ( v16 < 0 )
      goto LABEL_45;
    v16 = MmQuerySystemMemoryInformation(&v43);
    if ( v16 < 0 )
      goto LABEL_45;
    v31[4] = SystemInformation[0] >> 12;
    v17 = v43;
    if ( (unsigned __int64)v43 <= SystemInformation[0] >> 12 )
      v17 = SystemInformation[0] >> 12;
    v31[5] = v17;
    v16 = PfpPrivSourceAdd(&v29, v31);
    if ( v16 < 0 )
      goto LABEL_45;
    for ( k = 0LL; ; k = v5 )
    {
      v5 = (__int64 *)MmGetNextSession(k);
      if ( !v5 )
        break;
      memset(v31, 0, sizeof(v31));
      LODWORD(v31[0]) = 1;
      HIDWORD(v31[0]) = MmGetSessionIdEx((__int64)v5);
      v31[3] = HIDWORD(v31[0]);
      MiFillSessionWorkingSetEntry((__int64)&v38, v5[171]);
      v31[4] = v40;
      v31[10] = *((_QWORD *)&v38 + 1);
      v31[9] = *((_QWORD *)&v39 + 1);
      v31[5] = v39;
      RtlStringCbCopyA((NTSTRSAFE_PSTR)&v31[6] + 4, 0x10uLL, "Session");
      v16 = PfpPrivSourceAdd(&v29, v31);
      if ( v16 < 0 )
        goto LABEL_45;
    }
  }
  v6 = ExGetNextProcess(0LL);
  if ( v6 )
  {
    v19 = BYTE4(v45) & 4;
    v28 = v19;
    do
    {
      memset(v31, 0, sizeof(v31));
      if ( !v19 || (*(_DWORD *)(v6 + 2172) & 1) == 0 )
      {
        LODWORD(v31[0]) = 2;
        HIDWORD(v31[0]) = *(_DWORD *)(v6 + 1088);
        LODWORD(v31[1]) = *(_DWORD *)(v6 + 1524);
        v31[2] = (*(_QWORD *)(v6 + 1088) ^ *(_QWORD *)(v6 + 1128)) & 0x1FFFFFFFFFFFFFFFLL;
        v31[3] = HIDWORD(v31[0]);
        v31[4] = *(_QWORD *)(v6 + 1816);
        if ( v31[4] > *(_QWORD *)(v6 + 1808) )
          v31[10] = v31[4];
        else
          v31[10] = *(_QWORD *)(v6 + 1808);
        v20 = *(_QWORD *)(v6 + 1272);
        v31[5] = v20;
        if ( v20 <= v31[4] )
          v20 = v31[4];
        v31[5] = v20;
        LODWORD(v31[6]) = MmGetSessionIdEx(v6);
        v27[0] = 0;
        PsQueryProcessAttributes(v6, (__int64)v27, 0LL);
        v21 = SmStoreExistsForProcess(v6);
        v22 = HIDWORD(v31[11]) & 0xFFFFFFE6 | v27[0] & 1 | (8 * v21) & 0xEF | (*(_QWORD *)(v6 + 2288) != 0LL ? 0x10 : 0);
        HIDWORD(v31[11]) = v22;
        PsGetProcessDeepFreezeStats(v6, &v41);
        if ( *((_QWORD *)&v42 + 1) )
        {
          v22 |= 2u;
          HIDWORD(v31[11]) = v22;
          LODWORD(v31[11]) = *((_QWORD *)&v42 + 1) / 0x2710uLL;
        }
        if ( *(_BYTE *)(v6 + 1850) == 2 )
          HIDWORD(v31[11]) = v22 | 4;
        RtlStringCbCopyA((NTSTRSAFE_PSTR)&v31[6] + 4, 0x10uLL, (NTSTRSAFE_PCSTR)(v6 + 1448));
        if ( (BYTE4(v45) & 1) != 0 )
        {
          MmQueryProcessWorkingSetSwapPages(v6, &v31[9]);
        }
        else if ( (BYTE4(v45) & 2) != 0 && (int)SmProcessQueryStoreStats((struct _EPROCESS *)v6) >= 0 )
        {
          v31[9] = v32 >> 12;
        }
        v16 = PfpPrivSourceAdd(&v29, v31);
        if ( v16 < 0 )
          goto LABEL_45;
        v19 = v28;
      }
      v6 = ExGetNextProcess((PVOID)v6);
    }
    while ( v6 );
  }
  LODWORD(v7) = 96 * v30 + 16;
  v16 = 0;
LABEL_45:
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( v6 )
    ObfDereferenceObjectWithTag((PVOID)v6, 0x6E457350u);
  if ( v16 == -1073741789 )
  {
    v24 = *((_QWORD *)&v29 + 1);
    if ( (unsigned __int64)(unsigned int)(v30 + 1) > *((_QWORD *)&v29 + 1) )
      v24 = (unsigned int)(v30 + 1);
    v7 = 96 * v24 + 16;
    if ( v7 > 0xFFFFFFFF )
    {
      LODWORD(v7) = 0;
      v16 = -1073741670;
    }
  }
  *v33 = v7;
  return (unsigned int)v16;
}
