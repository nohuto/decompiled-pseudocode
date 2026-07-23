/*
 * XREFs of sub_140B25464 @ 0x140B25464
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     PoRegisterPowerSettingCallback @ 0x140762500 (PoRegisterPowerSettingCallback.c)
 *     sub_140B25540 @ 0x140B25540 (sub_140B25540.c)
 */

NTSTATUS sub_140B25464()
{
  PPOWER_SETTING_CALLBACK *v0; // rbx
  __int64 v1; // rdi
  char *v2; // rbx
  __int64 v3; // rsi
  NTSTATUS result; // eax

  v0 = (PPOWER_SETTING_CALLBACK *)&off_140B58370;
  v1 = 60LL;
  do
  {
    PoRegisterPowerSettingCallback(0LL, (LPCGUID)*v0, v0[1], 0LL, 0LL);
    v0 += 2;
    --v1;
  }
  while ( v1 );
  sub_140B25540();
  v2 = 0LL;
  v3 = 4LL;
  do
  {
    PoRegisterPowerSettingCallback(
      0LL,
      *(LPCGUID *)((char *)&off_1400098E8 + v1),
      (PPOWER_SETTING_CALLBACK)sub_1408556C0,
      v2,
      0LL);
    PoRegisterPowerSettingCallback(
      0LL,
      *(LPCGUID *)((char *)&off_1400098A8 + v1),
      (PPOWER_SETTING_CALLBACK)sub_1408556C0,
      v2,
      0LL);
    result = PoRegisterPowerSettingCallback(
               0LL,
               *(LPCGUID *)((char *)off_1400098C8 + v1),
               (PPOWER_SETTING_CALLBACK)sub_1408556C0,
               v2++,
               0LL);
    v1 += 8LL;
    --v3;
  }
  while ( v3 );
  return result;
}
