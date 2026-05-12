/*
 * XREFs of sub_1C0074A08 @ 0x1C0074A08
 * Callers:
 *     sub_1C004EDF0 @ 0x1C004EDF0 (sub_1C004EDF0.c)
 *     sub_1C004F2C0 @ 0x1C004F2C0 (sub_1C004F2C0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_1C0074A08(__int64 a1)
{
  __int64 v1; // rax
  NTSTATUS result; // eax
  _DWORD InputBuffer[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+38h] [rbp-20h]
  int v6; // [rsp+40h] [rbp-18h]
  int v7; // [rsp+44h] [rbp-14h]

  v1 = *(_QWORD *)(a1 + 8);
  InputBuffer[1] = 0;
  v7 = 0;
  InputBuffer[0] = 58;
  v5 = v1;
  v6 = 64;
  result = ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x18u, 0LL, 0);
  if ( result >= 0 )
    *(_BYTE *)(a1 + 451) |= 4u;
  return result;
}
