/*
 * XREFs of ?__scrt_throw_std_bad_array_new_length@@YAXXZ @ 0x140028DC8
 * Callers:
 *     ??2@YAPEAX_K@Z @ 0x1400280E4 (--2@YAPEAX_K@Z.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x140029240 (_CxxThrowException_0.c)
 *     ??0bad_array_new_length@std@@QEAA@XZ @ 0x140064C00 (--0bad_array_new_length@std@@QEAA@XZ.c)
 */

void __noreturn __scrt_throw_std_bad_array_new_length(void)
{
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  std::bad_array_new_length::bad_array_new_length((std::bad_array_new_length *)pExceptionObject);
  throw (std::bad_array_new_length *)pExceptionObject;
}
