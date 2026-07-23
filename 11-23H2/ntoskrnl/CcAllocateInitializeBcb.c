/*
 * XREFs of CcAllocateInitializeBcb @ 0x140207370
 * Callers:
 *     CcPinFileData @ 0x140263B20 (CcPinFileData.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140207480 (ExInitializeResourceLite.c)
 *     CcAdjustVacbLevelLockCount @ 0x1402075C0 (CcAdjustVacbLevelLockCount.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231280 (ExReleasePushLockEx.c)
 *     ExDisableResourceBoostLite @ 0x1403C3290 (ExDisableResourceBoostLite.c)
 *     ExAllocatePoolWithTag @ 0x140AAEC80 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall CcAllocateInitializeBcb(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  _QWORD *result; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // rax

  result = ExAllocatePoolWithTag((POOL_TYPE)1536, 0xC0uLL, 0x63426343u);
  v9 = result;
  if ( result )
  {
    *(_WORD *)result = 765;
    result[1] = *a3;
    *((_DWORD *)result + 1) = *a4;
    v10 = *(_QWORD *)a4 + *a3;
    ++*((_DWORD *)v9 + 16);
    v9[4] = v10;
    v9[22] = a1;
    ExInitializeResourceLite((PERESOURCE)(v9 + 9));
    ExAcquirePushLockExclusiveEx(a1 + 104, 0LL);
    v11 = *(_QWORD **)(a2 + 24);
    v12 = v9 + 2;
    if ( *v11 != a2 + 16 )
      __fastfail(3u);
    *v12 = a2 + 16;
    v9[3] = v11;
    *v11 = v12;
    *(_QWORD *)(a2 + 24) = v12;
    if ( *(__int64 *)(a1 + 32) > 0x2000000 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
      CcAdjustVacbLevelLockCount(a1, *a3, 1LL);
    ExReleasePushLockEx(a1 + 104, 0LL);
    if ( (*(_DWORD *)(a1 + 152) & 2) != 0 )
      ExDisableResourceBoostLite((PERESOURCE)(v9 + 9));
    return v9;
  }
  return result;
}
