/*
 * XREFs of ?wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV?$heap_vector@Uwil_details_FeatureUsageSRUM@@@details_abi@wil@@@Z @ 0x180045858
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_5035b992506f4af81a770c5842624510_@@CA@PEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180023FA0 (-_lambda_invoker_cdecl_@_lambda_5035b992506f4af81a770c5842624510_@@CA@PEAU_TP_CALLBACK_INSTANCE@.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     wil_details_NtQueryWnfStateData @ 0x1800460CC (wil_details_NtQueryWnfStateData.c)
 *     wil_details_NtUpdateWnfStateData @ 0x180046160 (wil_details_NtUpdateWnfStateData.c)
 *     _alloca_probe @ 0x1800D4380 (_alloca_probe.c)
 */

__int64 __fastcall wil_details_WriteSRUMWnfUsageBuffer(__int64 *a1, int a2, int a3)
{
  unsigned int WnfStateData; // ebx
  unsigned int updated; // edi
  int v6; // esi
  unsigned int v7; // r9d
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned int v10; // r10d
  __int64 v11; // r11
  _DWORD *v12; // rdx
  _DWORD *i; // rcx
  int v15; // [rsp+20h] [rbp-E0h]
  unsigned int v16; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+44h] [rbp-BCh] BYREF
  _DWORD v18[1024]; // [rsp+50h] [rbp-B0h] BYREF

  WnfStateData = 0;
  updated = 0;
  if ( (unsigned __int64)(a1[1] - *a1) >= 0xC )
  {
    v6 = 0;
    do
    {
      v16 = 4096;
      WnfStateData = wil_details_NtQueryWnfStateData(
                       (unsigned int)&unk_180106FD8,
                       a2,
                       a3,
                       (unsigned int)&v17,
                       (__int64)v18,
                       (__int64)&v16);
      if ( !WnfStateData )
      {
        v7 = v16;
        v8 = *a1;
        if ( v16 != 12 * (v16 / 0xCuLL) )
          v7 = 0;
        v9 = a1[1];
        v16 = v7;
        v10 = v7 / 0xC;
        v11 = v8 + 12 * ((v9 - v8) / 0xCuLL);
        while ( v8 != v11 )
        {
          v12 = &v18[3 * v10];
          for ( i = v18; i != v12; i += 3 )
          {
            if ( *i == *(_DWORD *)v8 && *((_WORD *)i + 2) == *(_WORD *)(v8 + 4) )
            {
              i[2] += *(_DWORD *)(v8 + 8);
              v7 = v16;
              goto LABEL_15;
            }
          }
          if ( (unsigned __int64)v7 + 12 <= 0x1000 )
          {
            v7 += 12;
            *(_QWORD *)v12 = *(_QWORD *)v8;
            ++v10;
            v12[2] = *(_DWORD *)(v8 + 8);
            v16 = v7;
          }
LABEL_15:
          v8 += 12LL;
        }
        updated = wil_details_NtUpdateWnfStateData((unsigned int)&unk_180106FD8, (unsigned int)v18, v7, v7, v15, v17, 1);
      }
      ++v6;
    }
    while ( updated == -1073741823 && v6 < 100 && !WnfStateData );
  }
  if ( !WnfStateData )
    return updated;
  return WnfStateData;
}
