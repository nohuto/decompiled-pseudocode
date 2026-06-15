/*
 * XREFs of ?GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEA_J@Z @ 0x18000E104
 * Callers:
 *     ?GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x18000E010 (-GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint.c)
 * Callees:
 *     ?GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18000E360 (-GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 */

__int64 __fastcall EffectPack::GetMinProcessingPeriodForExclusiveMode(
        EffectPack *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct tWAVEFORMATEX *a3,
        struct _GUID *a4,
        __int64 *a5)
{
  __int128 v5; // xmm0
  __int64 *v6; // rbx
  __int64 v8; // rax
  __int128 v10; // [rsp+50h] [rbp-18h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v11; // [rsp+78h] [rbp+10h] BYREF

  v11 = a2;
  v5 = (__int128)*a4;
  v6 = a5;
  *a5 = 30000LL;
  v10 = v5;
  if ( (int)EffectPack::GetSharedModeEnginePeriodicity(this, 0LL, a3, &v10, 0, 0LL, 0LL, &v11, 0LL) >= 0 )
  {
    v8 = (unsigned int)(int)((double)(int)v11 * 10000000.0 / (double)(int)a3->nSamplesPerSec + 0.5);
    if ( v8 >= *v6 )
      v8 = *v6;
    *v6 = v8;
  }
  return 0LL;
}
