/*
 * XREFs of EditionLLMouseButtonHook @ 0x1C00EA420
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C0053590 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C007EDA8 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C007F7CC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C007FBC0 (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     PhkFirstValid @ 0x1C00EA6F4 (PhkFirstValid.c)
 *     ?IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z @ 0x1C016A81A (-IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z.c)
 */

__int64 __fastcall EditionLLMouseButtonHook(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rcx
  BOOL v10; // esi
  struct tagHOOK *Valid; // r15
  bool v13; // dl
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // r13
  _QWORD *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // [rsp+30h] [rbp-58h]
  int v21; // [rsp+34h] [rbp-54h] BYREF
  __int64 *v22; // [rsp+38h] [rbp-50h] BYREF
  __int64 v23; // [rsp+40h] [rbp-48h]

  v20 = a3;
  if ( *(_DWORD *)(a1 + 92) == 2 )
    v7 = *(_QWORD *)(a1 + 80);
  else
    v7 = 0LL;
  if ( (unsigned __int8)IsInputThread(a1, a2, a3, a4) )
    v9 = gptiRit;
  else
    v9 = gptiCurrent;
  v10 = *(_DWORD *)(a2 + 12) & 1;
  Valid = (struct tagHOOK *)PhkFirstValid(v9, 14LL, v8);
  if ( !Valid )
    return 0LL;
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v22, "LowLevelMouseButtonHook", 0LL);
  v21 = 0;
  v13 = 0;
  v14 = *(_QWORD *)(gptiCurrent + 1368LL);
  v15 = *(_QWORD *)(gptiCurrent + 1376LL);
  v16 = *(_QWORD *)(gptiCurrent + 1360LL);
  *(_QWORD *)(gptiCurrent + 1376LL) = a2;
  v23 = v14;
  if ( v7 )
  {
    v17 = *(_QWORD **)(*(_QWORD *)(v7 + 16) + 424LL);
    if ( *v17 == gpepCSRSS )
    {
      *(_DWORD *)(gptiCurrent + 1372LL) = 0;
      *(_DWORD *)(gptiCurrent + 1368LL) = 0x2000;
    }
    else
    {
      *(_QWORD *)(gptiCurrent + 1368LL) = v17[110];
    }
    v13 = 1;
  }
  else
  {
    *(_DWORD *)(gptiCurrent + 1368LL) = -1;
    *(_DWORD *)(gptiCurrent + 1372LL) = -1;
  }
  if ( !v10 || *(_DWORD *)(a4 + 8) )
  {
    *(_DWORD *)(gptiCurrent + 1360LL) = -1;
    *(_DWORD *)(gptiCurrent + 1364LL) = -1;
  }
  else
  {
    *(_QWORD *)(gptiCurrent + 1360LL) = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 880LL);
  }
  v18 = xxxCallHook2(Valid, 0, v20, a2, &v21, v13);
  v19 = v23;
  *(_QWORD *)(gptiCurrent + 1360LL) = v16;
  *(_QWORD *)(gptiCurrent + 1368LL) = v19;
  *(_QWORD *)(gptiCurrent + 1376LL) = v15;
  if ( !v18 )
  {
    if ( !a5 || IsGpqForegroundAccessibleOnInputThread(v10, (const struct tagUIPI_INFO_INT *)a4) )
    {
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v22);
      return 0LL;
    }
    MSGLUA_GPQFOREGROUND();
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v22);
  return 1LL;
}
