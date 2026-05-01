/*
 * XREFs of _IsNonwritableInCurrentImage @ 0x180007670
 * Callers:
 *     _CRT_INIT @ 0x180006DCC (_CRT_INIT.c)
 * Callees:
 *     _FindPESection @ 0x180007620 (_FindPESection.c)
 *     _ValidateImageBase @ 0x1800076D0 (_ValidateImageBase.c)
 */

__int64 __fastcall IsNonwritableInCurrentImage(__int64 a1)
{
  __int64 result; // rax

  result = ValidateImageBase(&_ImageBase);
  if ( (_DWORD)result )
  {
    result = FindPESection((__int64)&_ImageBase, a1 - (_QWORD)&_ImageBase);
    if ( result )
      return *(int *)(result + 36) >= 0;
  }
  return result;
}
