/*
 * XREFs of __IsNonwritableInCurrentImage @ 0x10007030
 * Callers:
 *     __CRT_INIT@12 @ 0x10006818 (__CRT_INIT@12.c)
 * Callees:
 *     __FindPESection @ 0x10006FE0 (__FindPESection.c)
 *     __ValidateImageBase @ 0x10007100 (__ValidateImageBase.c)
 */

BOOL __cdecl _IsNonwritableInCurrentImage(int a1)
{
  int PESection; // eax

  return _ValidateImageBase(&_ImageBase)
      && (PESection = _FindPESection((int)&_ImageBase, a1 - (_DWORD)&_ImageBase)) != 0
      && *(int *)(PESection + 36) >= 0;
}
