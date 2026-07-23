/*
 * XREFs of sub_140A6BEC8 @ 0x140A6BEC8
 * Callers:
 *     sub_1407FE8C0 @ 0x1407FE8C0 (sub_1407FE8C0.c)
 *     sub_140A4B974 @ 0x140A4B974 (sub_140A4B974.c)
 * Callees:
 *     HalSetEnvironmentVariableEx @ 0x140508800 (HalSetEnvironmentVariableEx.c)
 *     sub_14054F250 @ 0x14054F250 (sub_14054F250.c)
 *     ExSetFirmwareEnvironmentVariable @ 0x1409FB890 (ExSetFirmwareEnvironmentVariable.c)
 */

__int64 __fastcall sub_140A6BEC8(char a1)
{
  char v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1;
  if ( !byte_140C22260 )
    return ExSetFirmwareEnvironmentVariable((__int64)L"*,", (int)qword_14003AB00, (__int64)&v2, 1, 1);
  if ( byte_140C1F618 )
    return sub_14054F250((char *)L"SystemSleepCheckpoint", (__int128 *)qword_14003AB00, &v2, 1u, 1);
  return HalSetEnvironmentVariableEx(L"SystemSleepCheckpoint", (int)qword_14003AB00, (__int64)&v2, 1, 1);
}
