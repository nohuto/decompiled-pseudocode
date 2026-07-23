/*
 * XREFs of sub_14038D0F4 @ 0x14038D0F4
 * Callers:
 *     sub_140A4B5A0 @ 0x140A4B5A0 (sub_140A4B5A0.c)
 *     sub_140A687F0 @ 0x140A687F0 (sub_140A687F0.c)
 * Callees:
 *     sub_14038D164 @ 0x14038D164 (sub_14038D164.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140577C84 @ 0x140577C84 (sub_140577C84.c)
 *     sub_140A4DC5C @ 0x140A4DC5C (sub_140A4DC5C.c)
 *     sub_140A53954 @ 0x140A53954 (sub_140A53954.c)
 */

__int64 __fastcall sub_14038D0F4(__int64 a1)
{
  unsigned __int64 v8; // rax

  sub_140A53954();
  if ( dword_140D06A2C )
    sub_140577C84();
  _RAX = 2147483649LL;
  __asm { cpuid }
  if ( (_RDX & 0x2000000) != 0 )
  {
    v8 = __readmsr(0xC0000080) | 0x4000;
    _RDX = HIDWORD(v8);
    __writemsr(0xC0000080, v8);
  }
  sub_140A4DC5C(a1, _RDX);
  return sub_14038D164();
}
