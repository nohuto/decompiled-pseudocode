/*
 * XREFs of sub_14054A344 @ 0x14054A344
 * Callers:
 *     sub_1403DE4F0 @ 0x1403DE4F0 (sub_1403DE4F0.c)
 * Callees:
 *     PoRegisterPowerSettingCallback @ 0x140762500 (PoRegisterPowerSettingCallback.c)
 */

NTSTATUS sub_14054A344()
{
  NTSTATUS result; // eax
  LPCGUID *v1; // rbx
  __int64 v2; // rdi
  __int64 (**v3)[14]; // rbx
  __int64 v4; // rdi

  result = dword_140D06A28;
  if ( (dword_140D06A28 & 8) != 0 )
  {
    v1 = (LPCGUID *)&off_140B58050;
    v2 = 15LL;
    do
    {
      result = PoRegisterPowerSettingCallback(0LL, *v1, (PPOWER_SETTING_CALLBACK)Callback, (PVOID)*((int *)v1 + 2), 0LL);
      v1 += 2;
      --v2;
    }
    while ( v2 );
  }
  if ( (dword_140D06A28 & 0x408) != 0 )
  {
    v3 = &off_140B57EE0;
    v4 = 6LL;
    do
    {
      result = PoRegisterPowerSettingCallback(
                 0LL,
                 (LPCGUID)*v3,
                 (PPOWER_SETTING_CALLBACK)sub_14054A2E0,
                 (PVOID)*((int *)v3 + 2),
                 0LL);
      v3 += 2;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
