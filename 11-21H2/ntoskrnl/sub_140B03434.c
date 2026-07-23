/*
 * XREFs of sub_140B03434 @ 0x140B03434
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     ExSubscribeWnfStateChange @ 0x1406D1FA0 (ExSubscribeWnfStateChange.c)
 *     PoRegisterPowerSettingCallback @ 0x140762500 (PoRegisterPowerSettingCallback.c)
 *     sub_1407EEF9C @ 0x1407EEF9C (sub_1407EEF9C.c)
 */

void __fastcall sub_140B03434(int a1)
{
  if ( a1 == 1 )
  {
    qword_140C1F5C8 = 0LL;
    qword_140C1F5C0 = 0LL;
    stru_140CF6020.Parameter = 0LL;
    stru_140CF6020.List.Flink = 0LL;
    stru_140CF6020.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1406D1E90;
    sub_1407EEF9C(1);
  }
  else if ( byte_140C5AC3C )
  {
    if ( a1 == 3 )
    {
      sub_1402D66A8((ULONG_PTR)&qword_140C1F5C0);
      PoRegisterPowerSettingCallback(0LL, &stru_140011F28, (PPOWER_SETTING_CALLBACK)sub_14099A000, 0LL, 0LL);
      PoRegisterPowerSettingCallback(0LL, &stru_1400131B8, (PPOWER_SETTING_CALLBACK)sub_14099A000, 0LL, 0LL);
      ExSubscribeWnfStateChange((int)&qword_140C1F5D0, (int)&stru_14000E628, 1, 0, (__int64)sub_14099A000, 0LL);
      sub_1402935D0((ULONG_PTR)&qword_140C1F5C0);
    }
  }
}
