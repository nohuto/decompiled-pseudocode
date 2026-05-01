/*
 * XREFs of ?__scrt_throw_std_bad_array_new_length@@YAXXZ @ 0x1801C72B0
 * Callers:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0bad_array_new_length@std@@QEAA@XZ @ 0x180391574 (--0bad_array_new_length@std@@QEAA@XZ.c)
 */

void __noreturn __scrt_throw_std_bad_array_new_length(void)
{
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  std::bad_array_new_length::bad_array_new_length((std::bad_array_new_length *)pExceptionObject);
  throw (std::bad_array_new_length *)pExceptionObject;
}
