/*
 * XREFs of ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1405C02B0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     SmKmStoreReferenceEx @ 0x1403453E8 (SmKmStoreReferenceEx.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140345424 (SmKmStoreRefFromStoreIndex.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x1405C1CE8 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     SmQuerySystemInformation @ 0x1405CE010 (SmQuerySystemInformation.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogWorker(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // r8
  unsigned __int64 v5; // rcx
  unsigned int v6; // edi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx
  struct _EX_RUNDOWN_REF *v10; // rax
  unsigned __int64 v12; // [rsp+20h] [rbp-68h] BYREF
  _OWORD v13[3]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v14; // [rsp+58h] [rbp-30h]

  v2 = a1 - 1816;
  memset(v13, 0, sizeof(v13));
  v14 = 0LL;
  if ( (int)SmQuerySystemInformation(a1 - 1816, a2, v13) >= 0 )
  {
    v5 = 128000LL;
    v6 = 0;
    if ( *(_QWORD *)&v13[0] <= 0x51400000uLL )
      v5 = 15360LL;
    v7 = 3 * (*(_QWORD *)&v13[0] / 0x14000uLL);
    if ( v7 >= v5 )
      v7 = v5;
    v12 = v7;
    do
    {
      v8 = SmKmStoreReferenceEx(v2, v6, v4);
      v9 = v8;
      if ( v8 )
      {
        if ( *(_BYTE *)(v8 + 6023) != 1 )
          SMKM_STORE<SM_TRAITS>::SmStPrioritizeRegionsStore(v8, &v12);
        v10 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(v2, *(_DWORD *)(v9 + 6016) & 0x3FF);
        ExReleaseRundownProtection_0(v10 + 1);
      }
      ++v6;
    }
    while ( v6 < 0x400 );
  }
  _InterlockedExchange64((volatile __int64 *)(a1 + 24), 0LL);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v2 + 1864))(v2, 0LL, 9LL);
}
