/*
 * XREFs of __alloca_probe @ 0x1800E3900
 * Callers:
 *     sub_18000CDAC @ 0x18000CDAC (sub_18000CDAC.c)
 *     sub_18000CE34 @ 0x18000CE34 (sub_18000CE34.c)
 *     sub_18000D130 @ 0x18000D130 (sub_18000D130.c)
 *     sub_18000FE20 @ 0x18000FE20 (sub_18000FE20.c)
 *     sub_18001D9B8 @ 0x18001D9B8 (sub_18001D9B8.c)
 *     sub_18003ADE8 @ 0x18003ADE8 (sub_18003ADE8.c)
 *     sub_180063B2C @ 0x180063B2C (sub_180063B2C.c)
 *     sub_18007494C @ 0x18007494C (sub_18007494C.c)
 *     sub_180095580 @ 0x180095580 (sub_180095580.c)
 *     sub_18009564C @ 0x18009564C (sub_18009564C.c)
 *     sub_1800A7DC0 @ 0x1800A7DC0 (sub_1800A7DC0.c)
 *     sub_1800B1B34 @ 0x1800B1B34 (sub_1800B1B34.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall _alloca_probe()
{
  unsigned __int64 result; // rax
  char *v1; // r10
  char *StackLimit; // r11
  char v3; // [rsp+18h] [rbp+8h] BYREF

  v1 = &v3 - result;
  if ( (unsigned __int64)&v3 < result )
    v1 = 0LL;
  StackLimit = (char *)NtCurrentTeb()->NtTib.StackLimit;
  if ( v1 < StackLimit )
  {
    LOWORD(v1) = (unsigned __int16)v1 & 0xF000;
    do
    {
      StackLimit -= 4096;
      *StackLimit = 0;
    }
    while ( v1 != StackLimit );
  }
  return result;
}
