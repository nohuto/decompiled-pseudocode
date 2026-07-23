/*
 * XREFs of sub_140822D70 @ 0x140822D70
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     sub_1403725A0 @ 0x1403725A0 (sub_1403725A0.c)
 *     PoRegisterPowerSettingCallback @ 0x140762500 (PoRegisterPowerSettingCallback.c)
 */

NTSTATUS sub_140822D70()
{
  int v1; // [rsp+40h] [rbp+8h] BYREF

  qword_140C1F360 = 0LL;
  v1 = 131080;
  sub_1403725A0((__int64)&unk_140C1F2A0, (__int64)sub_1405DC1D0, 0LL, (unsigned __int8 *)&v1, 2);
  stru_140C1F340.Parameter = 0LL;
  stru_140C1F340.List.Flink = 0LL;
  stru_140C1F340.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_14099CEC0;
  return PoRegisterPowerSettingCallback(0LL, &SettingGuid, (PPOWER_SETTING_CALLBACK)sub_1407EDC40, 0LL, 0LL);
}
