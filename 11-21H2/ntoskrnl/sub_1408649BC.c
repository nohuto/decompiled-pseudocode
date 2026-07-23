/*
 * XREFs of sub_1408649BC @ 0x1408649BC
 * Callers:
 *     sub_14075E568 @ 0x14075E568 (sub_14075E568.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x14041BE20 (ZwQuerySystemInformation.c)
 */

bool sub_1408649BC()
{
  char v0; // bl
  __int64 SystemInformation; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  SystemInformation = 8LL;
  if ( ZwQuerySystemInformation(SystemCodeIntegrityInformation, &SystemInformation, 8u, 0LL) >= 0 )
    return (SystemInformation & 0x40000000000LL) != 0;
  return v0;
}
