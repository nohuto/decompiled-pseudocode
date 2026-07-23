/*
 * XREFs of sub_1405D6D4C @ 0x1405D6D4C
 * Callers:
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 */

_BOOL8 sub_1405D6D4C()
{
  _QWORD v1[3]; // [rsp+20h] [rbp-18h] BYREF

  KeResetEvent(&stru_140C205C0);
  v1[0] = 0LL;
  v1[1] = -1LL;
  return KeSetTimer2((__int64)&unk_140C204E0, -10000000LL * (unsigned int)dword_140C0C808, 0LL, (__int64)v1);
}
