/*
 * XREFs of sub_1800DEEB0 @ 0x1800DEEB0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18001C3BC @ 0x18001C3BC (sub_18001C3BC.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall __noreturn sub_1800DEEB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  _QWORD pExceptionObject[4]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v7[4]; // [rsp+48h] [rbp-30h] BYREF

  pExceptionObject[1] = a3;
  pExceptionObject[3] = a4;
  v4 = 0LL;
  v5 = sub_18001C190();
  pExceptionObject[2] = v5;
  if ( v5 )
  {
    sub_180010DD0(v7, (__int64)"Serializing configuration to JSON string is not supported");
    v4 = sub_18001C3BC(v5, (const char *)v7, 0);
  }
  pExceptionObject[0] = v4;
  throw (Spectre::Utils::SpectreException **)pExceptionObject;
}
