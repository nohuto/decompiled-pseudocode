/*
 * XREFs of sub_140B1A054 @ 0x140B1A054
 * Callers:
 *     sub_140B05E40 @ 0x140B05E40 (sub_140B05E40.c)
 * Callees:
 *     sub_14026A784 @ 0x14026A784 (sub_14026A784.c)
 *     sub_1402FDD20 @ 0x1402FDD20 (sub_1402FDD20.c)
 *     sub_1403CA414 @ 0x1403CA414 (sub_1403CA414.c)
 *     sub_14082BA68 @ 0x14082BA68 (sub_14082BA68.c)
 */

__int64 __fastcall sub_140B1A054(__int64 a1)
{
  __int64 *v1; // r14
  __int64 *i; // rsi
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rdi
  __int64 v6; // r12
  unsigned __int64 v7; // r15
  unsigned int v8; // eax
  __int64 v10; // rbx

  v1 = (__int64 *)(a1 + 16);
  for ( i = *(__int64 **)(a1 + 16); ; i = (__int64 *)*i )
  {
    if ( i == v1 )
    {
      dword_140D06880 |= 0x800u;
      return 1LL;
    }
    v3 = i[6];
    v4 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v5 = ((unsigned __int64)*((unsigned int *)i + 16) + 4095) >> 12;
    if ( !(unsigned int)sub_1402FDD20(v3) )
      break;
    if ( (dword_140D06880 & 0x8000) != 0 )
      sub_14082BA68((char *)v3);
    if ( (unsigned int)dword_140C4F478 >> 12 )
      sub_1403CA414(v4 + 8LL * (((_DWORD)v5 + 511) & 0xFFFFFE00), (unsigned int)dword_140C4F478 >> 12, 1);
LABEL_14:
    ;
  }
  v6 = sub_1403CA414(v4, (unsigned int)v5, 0);
  v7 = v4 + 8LL * (unsigned int)v5;
  v8 = (unsigned int)dword_140C4F478 >> 12;
  if ( (unsigned int)dword_140C4F478 >> 12 )
  {
    LODWORD(v5) = v8 + v5;
    v10 = v8;
    sub_1403CA414(v7, v8, 1);
    v7 += 8 * v10;
  }
  if ( (PVOID)v3 != qword_140D06988 && (PVOID)v3 != qword_140D068F0 && dword_140C4F404 )
  {
    LODWORD(v5) = dword_140C4F404 + v5;
    sub_1403CA414(v7, (unsigned int)dword_140C4F404, 0);
  }
  if ( !v6 )
  {
LABEL_11:
    if ( (PVOID)v3 != qword_140D06988 && (PVOID)v3 != qword_140D068F0 )
    {
      _InterlockedExchangeAdd(&dword_140C53550, v5);
      qword_140C53528 -= (unsigned int)v5;
    }
    goto LABEL_14;
  }
  if ( (int)sub_14026A784((__int64)&StartContext, v6, 0LL, 0) >= 0 )
  {
    qword_140C53528 += v6;
    goto LABEL_11;
  }
  return 0LL;
}
