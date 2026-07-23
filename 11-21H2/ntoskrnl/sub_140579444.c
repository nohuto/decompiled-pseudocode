/*
 * XREFs of sub_140579444 @ 0x140579444
 * Callers:
 *     sub_1405788B0 @ 0x1405788B0 (sub_1405788B0.c)
 * Callees:
 *     <none>
 */

bool sub_140579444()
{
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v1; // al

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = *((_BYTE *)CurrentPrcb + 32);
  return v1 < 2u
      && (v1 != 1 || *((_BYTE *)CurrentPrcb + 13242))
      && (_DWORD)KiBugCheckData != 127
      && (_DWORD)KiBugCheckData != 251
      && (_DWORD)KiBugCheckData != 265
      && (_DWORD)KiBugCheckData != 273
      && (_DWORD)KiBugCheckData != 313
      && (_DWORD)KiBugCheckData != 395
      && (_DWORD)KiBugCheckData != 456
      && (_DWORD)KiBugCheckData != 131073;
}
