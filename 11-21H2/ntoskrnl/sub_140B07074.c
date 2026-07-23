/*
 * XREFs of sub_140B07074 @ 0x140B07074
 * Callers:
 *     sub_140B04F8C @ 0x140B04F8C (sub_140B04F8C.c)
 * Callees:
 *     sub_1402FDD20 @ 0x1402FDD20 (sub_1402FDD20.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     sub_1403C3548 @ 0x1403C3548 (sub_1403C3548.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140B07074(__int64 a1)
{
  unsigned int v1; // esi
  __int64 *v2; // r14
  __int64 *v3; // rbx
  unsigned __int64 v4; // rbp
  char *v5; // rdi
  __int64 v6; // rcx
  int v7; // eax
  _QWORD v9[14]; // [rsp+40h] [rbp-98h] BYREF

  v1 = ((unsigned int)dword_140C4F478 >> 12) + ((dword_140C4F478 & 0xFFF) != 0);
  if ( (xmmword_140D06920 & 0x40000000000LL) != 0 )
  {
    v2 = (__int64 *)(a1 + 16);
    v3 = *(__int64 **)(a1 + 16);
    v4 = (unsigned __int64)sub_1404192C0 & -(__int64)((xmmword_140D06920 & 0x20000000000LL) != 0);
    while ( v3 != v2 )
    {
      v5 = (char *)v3[6];
      if ( v5 != qword_140D068F0 && v5 != qword_140D06988 && !(unsigned int)sub_1402FDD20(v3[6]) )
      {
        if ( (xmmword_140D06920 & 0x20000000000LL) != 0 )
          v6 = v3[6] + *((_DWORD *)v3 + 16) + (v1 << 12);
        else
          v6 = 0LL;
        if ( (dword_140D06880 & 0x8000) != 0 )
        {
          memset(v9, 0, 0x68uLL);
          v9[1] = v5;
          v7 = sub_140358A20(2u, 222, 0, (__int64)v9);
        }
        else
        {
          v7 = sub_1403C3548(
                 v5,
                 (__int64)v5,
                 *((_DWORD *)v3 + 16),
                 v4,
                 v6,
                 (__int64)qword_140C4F420,
                 0,
                 (xmmword_140D06920 & 0x20000000000LL) == 0);
        }
        if ( v7 >= 0 )
          *((_DWORD *)v3 + 26) |= 0x80u;
      }
      v3 = (__int64 *)*v3;
    }
  }
  return 0LL;
}
