/*
 * XREFs of ?PostHitTestProcessing@MPCMouseProcessor@@EEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801F56F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FC64 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800D57C0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 */

void __fastcall MPCMouseProcessor::PostHitTestProcessing(
        MPCMouseProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct LegacyInputInfo *a3)
{
  struct MPCHolographicInputManager *Instance; // rax
  _OWORD *v6; // rax
  __int64 v7; // rdx
  _OWORD *v8; // rcx
  __int128 v9; // xmm1

  if ( MPCInputProviderBase::IsPrimary((unsigned __int64)this) && *((_DWORD *)this + 1333) )
  {
    Instance = MPCHolographicInputManager::GetInstance();
    v6 = (_OWORD *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)Instance + 418) + 248LL))(*((_QWORD *)Instance + 418));
    v7 = 3LL;
    v8 = (_OWORD *)((char *)a3 + 240);
    do
    {
      *v8 = *v6;
      v8[1] = v6[1];
      v8[2] = v6[2];
      v8[3] = v6[3];
      v8[4] = v6[4];
      v8[5] = v6[5];
      v8[6] = v6[6];
      v8 += 8;
      v9 = v6[7];
      v6 += 8;
      *(v8 - 1) = v9;
      --v7;
    }
    while ( v7 );
    *v8 = *v6;
    v8[1] = v6[1];
    *((_DWORD *)this + 1333) = 0;
  }
}
