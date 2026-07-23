/*
 * XREFs of sub_14056C6B8 @ 0x14056C6B8
 * Callers:
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 * Callees:
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14054E6A4 @ 0x14054E6A4 (sub_14054E6A4.c)
 */

__int64 __fastcall sub_14056C6B8(
        ULONG_PTR a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        struct _MDL *a7,
        unsigned __int64 a8)
{
  unsigned int v12; // ebx
  _OWORD v14[3]; // [rsp+40h] [rbp-78h] BYREF

  memset(v14, 0, sizeof(v14));
  sub_14030D5C0(a1, 0LL, (__int64)v14, a4);
  v12 = sub_14054E6A4(a2, *(_QWORD *)(a1 + 992), a3, a4, a5, a6, a7, a8);
  sub_1402D0930((__int64)v14, 0LL);
  return v12;
}
