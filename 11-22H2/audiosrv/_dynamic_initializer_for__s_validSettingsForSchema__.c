/*
 * XREFs of _dynamic_initializer_for__s_validSettingsForSchema__ @ 0x1800017A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$unordered_map@U_GUID@@W4ValidEffectPackConfigurationSettings@@U?$hash@U_GUID@@@std@@U?$equal_to@U_GUID@@@4@V?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@4@@std@@QEAA@V?$initializer_list@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@1@@Z @ 0x1800538C8 (--0-$unordered_map@U_GUID@@W4ValidEffectPackConfigurationSettings@@U-$hash@U_GUID@@@std@@U-$equa.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     atexit @ 0x180067008 (atexit.c)
 */

int __fastcall dynamic_initializer_for__s_validSettingsForSchema__(__int64 a1)
{
  _QWORD v2[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v3; // [rsp+30h] [rbp-38h] BYREF
  int v4; // [rsp+40h] [rbp-28h]
  __int128 v5; // [rsp+44h] [rbp-24h]
  int v6; // [rsp+54h] [rbp-14h]
  __int64 v7; // [rsp+58h] [rbp-10h] BYREF

  v4 = 12991;
  v2[0] = &v3;
  v6 = 15039;
  v2[1] = &v7;
  v3 = PKEY_FX_EffectPack_Schema_V1;
  v5 = PKEY_FX_EffectPack_Schema_Internal_V1;
  std::unordered_map<_GUID,enum ValidEffectPackConfigurationSettings>::unordered_map<_GUID,enum ValidEffectPackConfigurationSettings>(
    a1,
    v2);
  return atexit(dynamic_atexit_destructor_for__s_validSettingsForSchema__);
}
