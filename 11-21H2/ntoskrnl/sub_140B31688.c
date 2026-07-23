/*
 * XREFs of sub_140B31688 @ 0x140B31688
 * Callers:
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x1406D1FA0 (ExSubscribeWnfStateChange.c)
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     PoRegisterPowerSettingCallback @ 0x140762500 (PoRegisterPowerSettingCallback.c)
 */

void sub_140B31688()
{
  char v0; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  if ( byte_140D06888 && (int)sub_14074F950(0x42u, 0LL, 0, (LUID)&v0, 1) >= 0 )
  {
    if ( v0 )
    {
      ExSubscribeWnfStateChange((int)&unk_140C48788, (int)&qword_1400377F8, 1, 0, (__int64)sub_140933280, 0LL);
      PoRegisterPowerSettingCallback(0LL, &stru_1400131B8, (PPOWER_SETTING_CALLBACK)sub_1409331A0, 0LL, 0LL);
      PoRegisterPowerSettingCallback(0LL, &stru_140011C18, (PPOWER_SETTING_CALLBACK)sub_1409331A0, 0LL, 0LL);
    }
  }
}
