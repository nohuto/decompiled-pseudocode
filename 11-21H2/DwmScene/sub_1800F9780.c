/*
 * XREFs of sub_1800F9780 @ 0x1800F9780
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18001D8E4 @ 0x18001D8E4 (sub_18001D8E4.c)
 */

// Hidden C++ exception states: #wind=3
void __noreturn sub_1800F9780()
{
  __int64 v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rdi
  _QWORD pExceptionObject[2]; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v4[4]; // [rsp+38h] [rbp-30h] BYREF

  v0 = 0LL;
  v1 = sub_18001D684();
  try
  {
    v2 = v1;
    pExceptionObject[1] = v1;
    if ( v1 )
    {
      sub_1800113D0(v4, "Parsing configuration from JSON string is not supported");
      v0 = sub_18001D8E4(v2, (const char *)v4, 0);
    }
    pExceptionObject[0] = v0;
    throw (Spectre::Utils::SpectreException **)pExceptionObject;
  }
  catch ( ... )
  {
    sub_18001F2B4(&stru_1801EA608, 3, "Failed to deserialise the JSON configuration. Check the configuration format.");
    throw;
  }
}
