/*
 * XREFs of sub_140229100 @ 0x140229100
 * Callers:
 *     sub_140228170 @ 0x140228170 (sub_140228170.c)
 *     sub_140228CD0 @ 0x140228CD0 (sub_140228CD0.c)
 *     sub_1403146E0 @ 0x1403146E0 (sub_1403146E0.c)
 *     sub_140330730 @ 0x140330730 (sub_140330730.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_1402292C0 @ 0x1402292C0 (sub_1402292C0.c)
 *     sub_1402294C4 @ 0x1402294C4 (sub_1402294C4.c)
 *     sub_1402CFEB0 @ 0x1402CFEB0 (sub_1402CFEB0.c)
 *     sub_1402D03D0 @ 0x1402D03D0 (sub_1402D03D0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     RtlCompareMemoryUlong @ 0x14042A260 (RtlCompareMemoryUlong.c)
 */

__int64 __fastcall sub_140229100(__int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rax

  sub_14031DE00(a1, a2, 0LL);
  if ( (unsigned __int64)sub_1402CFEB0(a2) > 0x7FFFFFFEFFFFLL )
  {
    v9 = *(_QWORD *)(48 * (((unsigned __int64)sub_140317A10(a2) >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFE8LL);
    if ( (*(_BYTE *)(a1 + 184) & 7) != 1 || a2 < 0xFFFFF6FB7DBED000uLL || (v10 = 2LL, a2 > 0xFFFFF6FB7DBEDFFFuLL) )
      v10 = 1LL;
    if ( (unsigned __int16)v9 == v10 )
    {
      v11 = a2 << 25;
      if ( (a4 & 1) == 0 || RtlCompareMemoryUlong((PVOID)(v11 >> 16), 0x1000uLL, 0) == 4096 )
      {
        if ( (a4 & 2) == 0 )
          goto LABEL_3;
        v12 = v11 >> 16;
        while ( 1 )
        {
          v13 = sub_140317A10(v12);
          if ( (unsigned int)sub_1402294C4(v13) )
            break;
          v12 += 8LL;
          if ( (v12 & 0xFFF) == 0 )
            goto LABEL_3;
        }
      }
    }
  }
  else if ( (*(_DWORD *)(sub_1402D03D0((__int64)(a2 << 25) >> 16 << 25 >> 16) + 16) & 0x3FF0000) == 0 )
  {
LABEL_3:
    sub_1402292C0(a1, a2, a3, 0LL);
    return 1LL;
  }
  sub_14020D8D0(a1, a2);
  return 0LL;
}
