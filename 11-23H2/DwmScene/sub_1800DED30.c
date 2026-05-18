/*
 * XREFs of sub_1800DED30 @ 0x1800DED30
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18001C3BC @ 0x18001C3BC (sub_18001C3BC.c)
 */

// Hidden C++ exception states: #wind=3
void __noreturn sub_1800DED30()
{
  __int64 v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rdi
  _QWORD pExceptionObject[2]; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v4[4]; // [rsp+38h] [rbp-30h] BYREF

  v0 = 0LL;
  v1 = sub_18001C190();
  try
  {
    v2 = v1;
    pExceptionObject[1] = v1;
    if ( v1 )
    {
      sub_180010DD0(v4, (__int64)"Parsing configuration from JSON string is not supported");
      v0 = sub_18001C3BC(v2, (const char *)v4, 0);
    }
    pExceptionObject[0] = v0;
    throw (Spectre::Utils::SpectreException **)pExceptionObject;
  }
  catch ( ... )
  {
    sub_18001DB68(&stru_1801C8608, 3, "Failed to deserialise the JSON configuration. Check the configuration format.");
    throw;
  }
}
