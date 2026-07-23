/*
 * XREFs of sub_140B56A6C @ 0x140B56A6C
 * Callers:
 *     sub_140B568E8 @ 0x140B568E8 (sub_140B568E8.c)
 * Callees:
 *     sub_1403A8CB4 @ 0x1403A8CB4 (sub_1403A8CB4.c)
 *     sub_1403A9E4C @ 0x1403A9E4C (sub_1403A9E4C.c)
 *     sub_1403AA2B8 @ 0x1403AA2B8 (sub_1403AA2B8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140B56B94 @ 0x140B56B94 (sub_140B56B94.c)
 */

__int64 __fastcall sub_140B56A6C(__int64 a1, unsigned int a2, __int64 *a3)
{
  int v6; // ebx
  __int16 v7; // bp
  unsigned __int64 v8; // rcx
  unsigned int v9; // esi
  unsigned int v10; // eax
  __int64 v11; // rdi
  unsigned int v12; // r14d
  unsigned int v13; // ebp
  __int128 v15; // [rsp+20h] [rbp-58h] BYREF
  __int16 v16; // [rsp+30h] [rbp-48h]

  v16 = 0;
  v15 = 0LL;
  v6 = sub_1403A9E4C(a1, a2, 6u, &v15);
  if ( v6 >= 0 )
  {
    LOWORD(v15) = __ROR2__(v15, 8);
    v7 = __ROR2__(WORD2(v15), 8);
    WORD1(v15) = __ROR2__(WORD1(v15), 8);
    v8 = 18LL;
    v9 = WORD1(v15);
    if ( WORD1(v15) )
    {
      v10 = 12 * WORD1(v15) + 18;
      if ( v10 < 0x12 )
        return (unsigned int)-1073741675;
      v8 = v10;
      v6 = 0;
    }
    v11 = sub_1403AA2B8(v8);
    if ( v11 )
    {
      v12 = a2 + 6;
      *(_DWORD *)v11 = v15;
      *(_WORD *)(v11 + 4) = v7;
      v13 = 0;
      if ( v9 )
      {
        while ( 1 )
        {
          v6 = sub_140B56B94(a1, v12, v11 + 12LL * v13 + 6);
          if ( v6 < 0 )
            break;
          ++v13;
          v12 += 12;
          if ( v13 >= v9 )
            goto LABEL_9;
        }
        sub_1403A8CB4(v11);
      }
      else
      {
LABEL_9:
        *a3 = v11;
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v6;
}
