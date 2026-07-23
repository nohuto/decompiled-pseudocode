/*
 * XREFs of HviIsHypervisorVendorMicrosoft @ 0x1403BF790
 * Callers:
 *     sub_14041900C @ 0x14041900C (sub_14041900C.c)
 *     sub_1405F2D28 @ 0x1405F2D28 (sub_1405F2D28.c)
 *     sub_140AFAD4C @ 0x140AFAD4C (sub_140AFAD4C.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1403C03A0 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

bool __fastcall HviIsHypervisorVendorMicrosoft(__int64 a1, __int64 a2)
{
  if ( !(unsigned __int8)HviIsAnyHypervisorPresent(a1, a2) )
    return 0;
  _RAX = 0x40000000LL;
  __asm { cpuid }
  if ( (_DWORD)_RBX != 1919117645 )
    return 0;
  return (_DWORD)_RCX == 1718580079 && (_DWORD)_RDX == 1984438388;
}
