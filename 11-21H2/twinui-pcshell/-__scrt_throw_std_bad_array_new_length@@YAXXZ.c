/*
 * XREFs of ?__scrt_throw_std_bad_array_new_length@@YAXXZ @ 0x180188D60
 * Callers:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??0bad_array_new_length@std@@QEAA@XZ @ 0x1802DF41C (--0bad_array_new_length@std@@QEAA@XZ.c)
 */

void __noreturn __scrt_throw_std_bad_array_new_length(void)
{
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  std::bad_array_new_length::bad_array_new_length((std::bad_array_new_length *)pExceptionObject);
  throw (std::bad_array_new_length *)pExceptionObject;
}
