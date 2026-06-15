/*
 * XREFs of ?RuntimeClassInitialize@CEndpointCharacteristicsCache@@QEAAJPEAUIPolicyConfigInternal@@PEAVEffectPackConfigurationManager@@PEAUIEndpointResourceManagerProvider@@PEBU_tlgProvider_t@@@Z @ 0x180064134
 * Callers:
 *     ??$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@AEAPEAUIPolicyConfigInternal@@AEAPEAVEffectPackConfigurationManager@@AEAPEAUIEndpointResourceManagerProvider@@AEAPEBU_tlgProvider_t@@@Details@WRL@Microsoft@@YAJPEAPEAUIEndpointCharacteristicsCache@@AEAPEAUIPolicyConfigInternal@@AEAPEAVEffectPackConfigurationManager@@AEAPEAUIEndpointResourceManagerProvider@@AEAPEBU_tlgProvider_t@@@Z @ 0x180063EF8 (--$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@AEAPEAUIPol.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristicsCache::RuntimeClassInitialize(
        CEndpointCharacteristicsCache *this,
        struct IPolicyConfigInternal *a2,
        struct EffectPackConfigurationManager *a3,
        struct IEndpointResourceManagerProvider *a4,
        const struct _tlgProvider_t *pvData)
{
  __int64 v8; // rdi
  int v9; // ebx
  __int64 v10; // rdi
  __int64 v11; // rdi
  DWORD pcbData; // [rsp+60h] [rbp+8h] BYREF

  v8 = g_policyConfigInternal;
  g_policyConfigInternal = (__int64)a2;
  v9 = 0;
  if ( a2 )
    (*(void (__fastcall **)(struct IPolicyConfigInternal *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v10 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = a4;
  if ( a4 )
    (*(void (__fastcall **)(struct IEndpointResourceManagerProvider *))(*(_QWORD *)a4 + 8LL))(a4);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  *((_QWORD *)this + 14) = pvData;
  v11 = g_effectPackConfigurationManager;
  g_effectPackConfigurationManager = (__int64)a3;
  if ( a3 )
    (*(void (__fastcall **)(struct EffectPackConfigurationManager *))(*(_QWORD *)a3 + 8LL))(a3);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  pcbData = 4;
  LODWORD(pvData) = 0;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"GlobalDisableThirdPartyEnhancements",
          0x18u,
          0LL,
          &pvData,
          &pcbData)
    && (_DWORD)pvData )
  {
    v9 = 1;
  }
  g_bIsGlobalDisableThirdPartyEnhancements = v9;
  return 0LL;
}
