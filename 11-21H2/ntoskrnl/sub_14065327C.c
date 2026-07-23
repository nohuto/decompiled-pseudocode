/*
 * XREFs of sub_14065327C @ 0x14065327C
 * Callers:
 *     sub_140652E20 @ 0x140652E20 (sub_140652E20.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140652F10 @ 0x140652F10 (sub_140652F10.c)
 *     sub_14065383C @ 0x14065383C (sub_14065383C.c)
 */

__int64 __fastcall sub_14065327C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  LARGE_INTEGER v6; // rcx
  unsigned __int16 v7; // ax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 result; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+20h] [rbp-248h] BYREF
  unsigned __int16 v12[264]; // [rsp+30h] [rbp-238h] BYREF

  memset(&v12[2], 0, 0x202uLL);
  v5 = (unsigned int)dword_140C10CE0;
  PerformanceFrequency.QuadPart = 0LL;
  v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v7 = *(_WORD *)(a2 + 1) + 2;
  v8 = v6.QuadPart + v5 * (PerformanceFrequency.QuadPart / 1000000);
  v12[0] = v7;
  if ( v7 > 0x100u )
    return 3221225495LL;
  memmove((char *)&v12[2] + 1, (const void *)(a2 + 3), v7);
  v12[1] = 256;
  result = sub_140652F10(v9, v12, v8);
  if ( !(_DWORD)result )
    return sub_14065383C(a3, v12);
  return result;
}
