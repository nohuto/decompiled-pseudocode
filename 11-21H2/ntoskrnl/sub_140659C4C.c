/*
 * XREFs of sub_140659C4C @ 0x140659C4C
 * Callers:
 *     sub_1406593C0 @ 0x1406593C0 (sub_1406593C0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140659640 @ 0x140659640 (sub_140659640.c)
 */

__int64 __fastcall sub_140659C4C(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned int a4, _QWORD *a5)
{
  unsigned __int64 v5; // rbx
  int v6; // eax
  int v8; // ecx
  __int128 *v9; // rdx
  _BYTE v10[128]; // [rsp+50h] [rbp-A8h] BYREF

  v5 = a4;
  if ( a3 && (v6 = sub_140659640((char *)(*(_QWORD *)(a1 + 384) + 40LL), v10, a3), v6 < 0) )
  {
    *a5 = (unsigned int)v6;
    return 0LL;
  }
  else
  {
    v8 = *((_DWORD *)KeGetCurrentThread() + 30) & 0x200000;
    if ( (v5 & 0x7000) != 0x1000 || (v9 = &xmmword_140D07100, !v8) )
      v9 = xmmword_140D06F80;
    return sub_14042A5E0(
             *(_QWORD *)&v9[2 * ((v5 >> 12) & 7)]
           + ((__int64)*(int *)(*(_QWORD *)&v9[2 * ((v5 >> 12) & 7)] + 4 * (v5 & 0xFFF)) >> 4),
             (unsigned int)v5);
  }
}
