/*
 * XREFs of sub_140B5678C @ 0x140B5678C
 * Callers:
 *     sub_140B565BC @ 0x140B565BC (sub_140B565BC.c)
 * Callees:
 *     sub_1403A8CB4 @ 0x1403A8CB4 (sub_1403A8CB4.c)
 *     sub_1403A9E4C @ 0x1403A9E4C (sub_1403A9E4C.c)
 *     sub_1403AA2B8 @ 0x1403AA2B8 (sub_1403AA2B8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140B5678C(__int64 a1, unsigned int a2, _QWORD *a3)
{
  int v5; // ebx
  unsigned __int16 v6; // di
  unsigned __int64 v7; // rcx
  unsigned int v8; // eax
  _DWORD *v9; // rsi
  unsigned int v10; // ebp
  unsigned int v11; // r12d
  unsigned int v12; // r15d
  unsigned int *v13; // rdi
  __int64 v16; // [rsp+28h] [rbp-50h] BYREF
  int v17; // [rsp+30h] [rbp-48h]

  v16 = 0LL;
  v17 = 0;
  v5 = sub_1403A9E4C(a1, a2, 4u, &v16);
  if ( v5 >= 0 )
  {
    v6 = __ROR2__(WORD1(v16), 8);
    LOWORD(v16) = __ROR2__(v16, 8);
    WORD1(v16) = v6;
    if ( (_WORD)v16 )
    {
      return (unsigned int)-1073741701;
    }
    else
    {
      v7 = 12LL;
      if ( v6 )
      {
        v8 = 8 * v6 + 4;
        if ( v8 < 0xC )
          return (unsigned int)-1073741675;
        v7 = v8;
        v5 = 0;
      }
      v9 = (_DWORD *)sub_1403AA2B8(v7);
      if ( v9 )
      {
        v10 = a2 + 4;
        v11 = v6;
        v12 = 0;
        *v9 = v16;
        if ( v6 )
        {
          v13 = v9 + 2;
          while ( 1 )
          {
            v5 = sub_1403A9E4C(a1, v10, 8u, v13 - 1);
            if ( v5 < 0 )
              break;
            ++v12;
            v10 += 8;
            *((_WORD *)v13 - 2) = __ROR2__(*((_WORD *)v13 - 2), 8);
            v5 = 0;
            *((_WORD *)v13 - 1) = __ROR2__(*((_WORD *)v13 - 1), 8);
            *v13 = _byteswap_ulong(*v13);
            v13 += 2;
            if ( v12 >= v11 )
              goto LABEL_11;
          }
          sub_1403A8CB4((__int64)v9);
        }
        else
        {
LABEL_11:
          *a3 = v9;
        }
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return (unsigned int)v5;
}
