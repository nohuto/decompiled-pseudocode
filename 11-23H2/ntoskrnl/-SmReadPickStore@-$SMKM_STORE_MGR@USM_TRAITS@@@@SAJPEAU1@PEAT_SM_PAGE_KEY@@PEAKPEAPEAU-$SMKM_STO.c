/*
 * XREFs of ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x1405C08F0
 * Callers:
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1404653A6 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3500 (KeQueryPerformanceCounter.c)
 *     SmKmStoreReferenceEx @ 0x1403453E8 (SmKmStoreReferenceEx.c)
 *     ?SmFeReadInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEA_K2@Z @ 0x1405BFF70 (-SmFeReadInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEA_K2@Z.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmReadPickStore(
        __int64 a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned __int64 *a4,
        _DWORD *a5)
{
  unsigned int v7; // ebx
  unsigned int v9; // esi
  __int64 v10; // r8
  unsigned __int64 v11; // rax
  _DWORD *v12; // rdx
  bool v13; // zf
  unsigned int v15; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v16[4]; // [rsp+38h] [rbp-20h] BYREF
  int v17; // [rsp+70h] [rbp+18h] BYREF

  v15 = *a3;
  v7 = 0;
  v16[0] = 0LL;
  v17 = 0;
  v9 = SMKM_STORE_MGR<SM_TRAITS>::SmFeReadInitiate(a1, a2, &v15, v16, &v17);
  if ( v9 != 1024 )
  {
    ++*(_DWORD *)(a1 + 1884);
    if ( v16[0] && v16[0] > *(_QWORD *)&KeQueryPerformanceCounter(0LL) + (unsigned __int64)*(unsigned int *)(a1 + 1880) )
      return (unsigned int)-1073741763;
    v11 = SmKmStoreReferenceEx(a1, v9, v10);
    if ( v11 )
    {
      v12 = a5;
      v13 = v17 == 0;
      *a4 = v11;
      *v12 = !v13;
      *a3 = v15;
      return v7;
    }
  }
  return (unsigned int)-1073741275;
}
