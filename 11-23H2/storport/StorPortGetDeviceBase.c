/*
 * XREFs of StorPortGetDeviceBase @ 0x1C0046480
 * Callers:
 *     sub_1C00B2240 @ 0x1C00B2240 (sub_1C00B2240.c)
 * Callees:
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     sub_1C004AAEC @ 0x1C004AAEC (sub_1C004AAEC.c)
 *     sub_1C0050358 @ 0x1C0050358 (sub_1C0050358.c)
 *     sub_1C00582F8 @ 0x1C00582F8 (sub_1C00582F8.c)
 */

__int64 __fastcall StorPortGetDeviceBase(__int64 a1, __int64 a2, int a3, int a4, unsigned int a5, char a6)
{
  _DWORD *v8; // rax
  int v9; // r9d
  int v10; // r10d
  _DWORD *v11; // rsi
  int v12; // r8d
  const char *v13; // rax
  __int64 v15; // rax
  __int64 v16; // rdi

  v8 = sub_1C000E2EC(a1);
  v11 = v8;
  if ( !v8 )
    return 0LL;
  if ( (int)sub_1C0050358((int)v8 + 320, v10, a3, v9, a5) < 0 )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 8) != 0
      && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      v13 = "Io";
      if ( !a6 )
        v13 = "Memory";
      sub_1C004AAEC(off_1C0093070->AttachedDevice, (unsigned int)"Memory", v12, a4, (__int64)v13);
    }
    return 0LL;
  }
  if ( a6 )
    return 0LL;
  v15 = MmMapIoSpaceEx(0LL, a5, 516LL);
  v16 = v15;
  if ( v15 && (int)sub_1C00582F8((int)v11 + 832, a4, v15, a5, a3, *((_QWORD *)v11 + 1)) < 0 )
    return 0LL;
  return v16;
}
