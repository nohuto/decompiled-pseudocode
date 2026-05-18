/*
 * XREFs of sub_1800F9880 @ 0x1800F9880
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18001D8E4 @ 0x18001D8E4 (sub_18001D8E4.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall __noreturn sub_1800F9880(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  _QWORD pExceptionObject[3]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v6[4]; // [rsp+40h] [rbp-38h] BYREF

  pExceptionObject[2] = a3;
  v3 = 0LL;
  v4 = sub_18001D684();
  pExceptionObject[1] = v4;
  if ( v4 )
  {
    sub_1800113D0(v6, "Serializing configuration to JSON string is not supported");
    v3 = sub_18001D8E4(v4, (const char *)v6, 0);
  }
  pExceptionObject[0] = v3;
  throw (Spectre::Utils::SpectreException **)pExceptionObject;
}
