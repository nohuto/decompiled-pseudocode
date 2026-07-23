/*
 * XREFs of sub_140B01A8C @ 0x140B01A8C
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     sub_1403C0CB0 @ 0x1403C0CB0 (sub_1403C0CB0.c)
 *     ExSubscribeWnfStateChange @ 0x1406D1FA0 (ExSubscribeWnfStateChange.c)
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 *     sub_140B01A3C @ 0x140B01A3C (sub_140B01A3C.c)
 */

char sub_140B01A8C()
{
  NTSTATUS v0; // eax
  char v2; // [rsp+40h] [rbp+8h] BYREF

  sub_1403C0CB0(L"ChargerWeakDetectionThresholdPercent", (unsigned int *)&dword_140C09838, 1u, 1u, 0xAu, 100);
  dword_140C09838 *= 1000;
  sub_1403C0CB0(L"BatteryChargeTrajectoryThresholdPercent", (unsigned int *)&dword_140C09834, 1u, 1u, 0xAu, 100);
  dword_140C09834 *= 1000;
  v0 = EtwRegister(&stru_140011C00, (PETWENABLECALLBACK)sub_140994BB0, 0LL, &qword_140C21D58);
  if ( v0 >= 0 )
  {
    byte_140C5AE17 = 1;
    ExSubscribeWnfStateChange((int)&v2, (int)&qword_140011C10, 1, 0, (__int64)sub_140995780, 0LL);
    LOBYTE(v0) = sub_140B01A3C();
  }
  return v0;
}
