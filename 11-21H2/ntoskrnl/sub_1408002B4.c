/*
 * XREFs of sub_1408002B4 @ 0x1408002B4
 * Callers:
 *     sub_140A4E3A0 @ 0x140A4E3A0 (sub_140A4E3A0.c)
 *     sub_140B2C124 @ 0x140B2C124 (sub_140B2C124.c)
 * Callees:
 *     ExSetFirmwareEnvironmentVariable @ 0x1409FB890 (ExSetFirmwareEnvironmentVariable.c)
 */

__int64 __fastcall sub_1408002B4(char a1)
{
  unsigned int v1; // edx
  __int64 result; // rax

  v1 = 0;
  if ( (dword_140C2238C || a1) && (dword_140C22274 & 2) == 0 )
  {
    v1 = ExSetFirmwareEnvironmentVariable((unsigned int)L"*,", (unsigned int)qword_14003AB00, 0, 0, 1);
    if ( v1 == -1073741568 )
      v1 = 0;
  }
  dword_140C2238C = 0;
  result = v1;
  dword_140C22398 = 0;
  _InterlockedExchange(&dword_140C22C9C, 0);
  return result;
}
