/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x1403C03A0
 * Callers:
 *     sub_14038D164 @ 0x14038D164 (sub_14038D164.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x1403BF790 (HviIsHypervisorVendorMicrosoft.c)
 *     sub_1403BFE70 @ 0x1403BFE70 (sub_1403BFE70.c)
 *     sub_1403C0360 @ 0x1403C0360 (sub_1403C0360.c)
 *     sub_1403DF080 @ 0x1403DF080 (sub_1403DF080.c)
 *     sub_140418BD8 @ 0x140418BD8 (sub_140418BD8.c)
 *     sub_14057132C @ 0x14057132C (sub_14057132C.c)
 *     sub_140647B74 @ 0x140647B74 (sub_140647B74.c)
 *     sub_140824AA0 @ 0x140824AA0 (sub_140824AA0.c)
 *     sub_140A56CDC @ 0x140A56CDC (sub_140A56CDC.c)
 *     sub_140A9E12C @ 0x140A9E12C (sub_140A9E12C.c)
 *     sub_140B02040 @ 0x140B02040 (sub_140B02040.c)
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 *     sub_140B03800 @ 0x140B03800 (sub_140B03800.c)
 *     sub_140B24E48 @ 0x140B24E48 (sub_140B24E48.c)
 *     sub_140B30458 @ 0x140B30458 (sub_140B30458.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

bool HviIsAnyHypervisorPresent()
{
  char v1; // r8

  _RAX = 1LL;
  v1 = 0;
  __asm { cpuid }
  if ( (int)_RCX < 0 )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
    return (_DWORD)_RAX != 1986945624;
  }
  return v1;
}
