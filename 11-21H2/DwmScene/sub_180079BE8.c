/*
 * XREFs of sub_180079BE8 @ 0x180079BE8
 * Callers:
 *     sub_18002C244 @ 0x18002C244 (sub_18002C244.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_18004DBD8 @ 0x18004DBD8 (sub_18004DBD8.c)
 *     sub_1800510D0 @ 0x1800510D0 (sub_1800510D0.c)
 *     sub_180099288 @ 0x180099288 (sub_180099288.c)
 *     sub_1800E3D8C @ 0x1800E3D8C (sub_1800E3D8C.c)
 *     sub_1800E51F0 @ 0x1800E51F0 (sub_1800E51F0.c)
 *     sub_1800E5DE4 @ 0x1800E5DE4 (sub_1800E5DE4.c)
 *     sub_1800EB468 @ 0x1800EB468 (sub_1800EB468.c)
 *     sub_1800F110C @ 0x1800F110C (sub_1800F110C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18001D984 @ 0x18001D984 (sub_18001D984.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180079BE8(_QWORD *a1, __int64 a2, __int64 a3, int a4, const char *a5, char a6)
{
  unsigned __int64 v8; // rdx

  sub_18001D984((__int64)a1, a4, a5, a6);
  *a1 = &Spectre::Engine::EngineException::`vftable';
  v8 = *(_QWORD *)(a2 + 24);
  if ( v8 >= 0x10 )
    sub_180010884(*(char **)a2, v8 + 1);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  return a1;
}
