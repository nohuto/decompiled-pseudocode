/*
 * XREFs of _alloca_probe @ 0x1800FEE40
 * Callers:
 *     sub_18000CDC0 @ 0x18000CDC0 (sub_18000CDC0.c)
 *     sub_18000D060 @ 0x18000D060 (sub_18000D060.c)
 *     sub_18000D318 @ 0x18000D318 (sub_18000D318.c)
 *     sub_180010510 @ 0x180010510 (sub_180010510.c)
 *     sub_18001F06C @ 0x18001F06C (sub_18001F06C.c)
 *     sub_18003F324 @ 0x18003F324 (sub_18003F324.c)
 *     sub_18004A774 @ 0x18004A774 (sub_18004A774.c)
 *     sub_18006C254 @ 0x18006C254 (sub_18006C254.c)
 *     sub_180080834 @ 0x180080834 (sub_180080834.c)
 *     sub_1800A573C @ 0x1800A573C (sub_1800A573C.c)
 *     sub_1800A585C @ 0x1800A585C (sub_1800A585C.c)
 *     sub_1800C530C @ 0x1800C530C (sub_1800C530C.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall alloca_probe()
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
