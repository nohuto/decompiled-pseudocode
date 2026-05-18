/*
 * XREFs of sub_18001D9B8 @ 0x18001D9B8
 * Callers:
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000C1E8 @ 0x18000C1E8 (sub_18000C1E8.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001CF30 @ 0x18001CF30 (sub_18001CF30.c)
 *     sub_18001D3C8 @ 0x18001D3C8 (sub_18001D3C8.c)
 *     sub_18001D574 @ 0x18001D574 (sub_18001D574.c)
 *     sub_18001D72C @ 0x18001D72C (sub_18001D72C.c)
 *     sub_18001D748 @ 0x18001D748 (sub_18001D748.c)
 *     sub_18001D840 @ 0x18001D840 (sub_18001D840.c)
 *     sub_18001FB80 @ 0x18001FB80 (sub_18001FB80.c)
 *     __alloca_probe @ 0x1800E3900 (__alloca_probe.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_18001D9B8(__int64 a1, int a2)
{
  int v4; // r14d
  int v5; // r13d
  int v6; // r12d
  _QWORD v7[4]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v8[5]; // [rsp+68h] [rbp-98h] BYREF
  CHAR OutputString[2112]; // [rsp+90h] [rbp-70h] BYREF

  if ( (int)sub_18001D3C8() <= 0 )
  {
    v4 = *(_DWORD *)(a1 + 8);
    v5 = *(_DWORD *)(a1 + 4);
    v6 = *(_DWORD *)a1;
    sub_18000C1E8();
    GetCurrentThreadId();
    sub_18001D574(a1, v7);
    sub_18001D72C(a2);
    sub_18001D748(v8);
    sub_18001CF30();
    sub_180011B24((__int64)v8);
    sub_180011B24((__int64)v7);
    if ( a2 >= v5 )
    {
      sub_180010DD0(v8, (__int64)OutputString);
      sub_180010DD0(v7, *(_QWORD *)(a1 + 16));
      sub_18001D840((__int64)v7, a2, (__int64)v8);
      sub_180011B24((__int64)v7);
      sub_180011B24((__int64)v8);
    }
    if ( a2 >= v4 )
      sub_18001FB80(OutputString);
    OutputDebugStringA(OutputString);
    if ( a2 >= v6 )
    {
      if ( !IsDebuggerPresent() )
        __fastfail(7u);
      __debugbreak();
    }
  }
}
