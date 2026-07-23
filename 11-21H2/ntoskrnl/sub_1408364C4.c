/*
 * XREFs of sub_1408364C4 @ 0x1408364C4
 * Callers:
 *     sub_140835844 @ 0x140835844 (sub_140835844.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlWriteRegistryValue @ 0x1406D76C0 (RtlWriteRegistryValue.c)
 *     sub_1406F1A04 @ 0x1406F1A04 (sub_1406F1A04.c)
 *     sub_140781F40 @ 0x140781F40 (sub_140781F40.c)
 */

NTSTATUS __fastcall sub_1408364C4(int a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax
  int v4; // ebx
  _QWORD v5[16]; // [rsp+30h] [rbp-29h] BYREF
  int ValueData; // [rsp+C0h] [rbp+67h] BYREF
  int v7; // [rsp+C8h] [rbp+6Fh] BYREF
  HANDLE Handle; // [rsp+D0h] [rbp+77h] BYREF

  ValueData = a1;
  Handle = 0LL;
  v7 = 0;
  result = sub_1406F1A04(1, (__int64)&Handle, a3);
  if ( result >= 0 )
  {
    memset(v5, 0, 0x70uLL);
    v5[3] = &v7;
    LODWORD(v5[1]) = 292;
    v5[2] = L"ActiveTimeBias";
    LODWORD(v5[4]) = 0x4000000;
    v4 = sub_140781F40(0x40000000, (const WCHAR *)Handle, (__int64)v5, 0LL);
    if ( v4 < 0 || v7 != ValueData )
      v4 = RtlWriteRegistryValue(0x40000000u, (PCWSTR)Handle, L"ActiveTimeBias", 4u, &ValueData, 4u);
    ZwClose(Handle);
    return v4;
  }
  return result;
}
