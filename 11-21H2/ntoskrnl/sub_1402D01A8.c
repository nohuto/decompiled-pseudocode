/*
 * XREFs of sub_1402D01A8 @ 0x1402D01A8
 * Callers:
 *     sub_140227360 @ 0x140227360 (sub_140227360.c)
 *     sub_140330730 @ 0x140330730 (sub_140330730.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_1402CFEB0 @ 0x1402CFEB0 (sub_1402CFEB0.c)
 *     sub_1402D03D0 @ 0x1402D03D0 (sub_1402D03D0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 */

__int64 __fastcall sub_1402D01A8(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  __int64 v6; // r9
  unsigned __int64 v9; // rcx
  int v10; // esi
  __int64 v11; // rax
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = (__int64)(a2 << 25) >> 16;
  if ( sub_1402CFEB0(v5) <= 0x7FFFFFFEFFFFLL )
    return (*(_DWORD *)(sub_1402D03D0((__int64)((v5 << 25) - v6) >> 16) + 16) & 0x3FF0000) == 0;
  v12 = sub_140317A10(v2);
  v9 = 48 * (((unsigned __int64)sub_140317A10(&v12) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( (*(_BYTE *)(v4 + 184) & 7) == 1 && v2 >= 0xFFFFF6FB7DBED000uLL && v2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    if ( (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 2 )
    {
      if ( (*(_DWORD *)a1 & 4) != 0 )
        sub_14031DE00(v4, v2, 0LL);
      else
        v2 = 0LL;
      v10 = 1;
      while ( 1 )
      {
        v11 = sub_140317A10(v5);
        if ( v11 )
        {
          if ( (v11 & 1) == 0 )
            break;
        }
        v5 += 8LL;
        if ( (v5 & 0xFFF) == 0 )
          goto LABEL_20;
      }
      v10 = 0;
LABEL_20:
      if ( v2 )
        sub_14020D8D0(v4, v2);
      if ( v10 )
        return 1LL;
    }
    return 0LL;
  }
  return (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1;
}
