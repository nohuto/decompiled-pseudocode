/*
 * XREFs of _GetLocaleHandleByType @ 0x18000D948
 * Callers:
 *     _Towlower @ 0x180005E6C (_Towlower.c)
 *     _Tolower @ 0x180005FCC (_Tolower.c)
 *     _Towupper @ 0x1800064B8 (_Towupper.c)
 *     _Toupper @ 0x18000E3D8 (_Toupper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLocaleHandleByType(unsigned int *a1)
{
  return *a1;
}
