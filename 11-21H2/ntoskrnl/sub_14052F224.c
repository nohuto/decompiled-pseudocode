/*
 * XREFs of sub_14052F224 @ 0x14052F224
 * Callers:
 *     sub_14052F89C @ 0x14052F89C (sub_14052F89C.c)
 *     sub_14052FEA0 @ 0x14052FEA0 (sub_14052FEA0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14052F378 @ 0x14052F378 (sub_14052F378.c)
 *     sub_14052F618 @ 0x14052F618 (sub_14052F618.c)
 */

__int64 __fastcall sub_14052F224(__int64 a1, unsigned __int16 a2, unsigned __int16 a3, __int64 a4, char a5)
{
  __int64 result; // rax
  __int64 v7; // rdx
  _QWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF

  v8[1] = 0LL;
  v8[0] = ((a3 | ((unsigned __int64)a2 << 16)) << 16) | 0x31;
  result = sub_14052F378(a1, v8, 1LL);
  if ( a5 )
    return sub_14052F618(a1, v7, 1LL);
  return result;
}
