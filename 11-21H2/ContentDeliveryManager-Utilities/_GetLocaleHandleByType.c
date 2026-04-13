/*
 * XREFs of _GetLocaleHandleByType @ 0x18000D254
 * Callers:
 *     _Towlower @ 0x1800057DC (_Towlower.c)
 *     _Tolower @ 0x18000593C (_Tolower.c)
 *     _Towupper @ 0x180005E24 (_Towupper.c)
 *     _Toupper @ 0x18000DCD4 (_Toupper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLocaleHandleByType(unsigned int *a1)
{
  return *a1;
}
