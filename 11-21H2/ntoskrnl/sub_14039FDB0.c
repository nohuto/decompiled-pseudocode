/*
 * XREFs of sub_14039FDB0 @ 0x14039FDB0
 * Callers:
 *     sub_14023CC50 @ 0x14023CC50 (sub_14023CC50.c)
 *     sub_14025592C @ 0x14025592C (sub_14025592C.c)
 *     sub_14026C644 @ 0x14026C644 (sub_14026C644.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1402E7D60 @ 0x1402E7D60 (sub_1402E7D60.c)
 *     sub_140322F10 @ 0x140322F10 (sub_140322F10.c)
 *     sub_1403AD16C @ 0x1403AD16C (sub_1403AD16C.c)
 *     sub_140581D58 @ 0x140581D58 (sub_140581D58.c)
 *     sub_140582320 @ 0x140582320 (sub_140582320.c)
 *     sub_140B4B89C @ 0x140B4B89C (sub_140B4B89C.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14054EBEC @ 0x14054EBEC (sub_14054EBEC.c)
 *     sub_14054EC88 @ 0x14054EC88 (sub_14054EC88.c)
 */

__int64 __fastcall sub_14039FDB0(__int64 a1, __int128 *a2, __int16 a3)
{
  char v3; // bl
  __int16 v6; // dx
  __int128 v7; // xmm0
  __int64 result; // rax
  _OWORD v9[7]; // [rsp+20h] [rbp-39h] BYREF

  v3 = a3;
  if ( (a3 & 0x100) != 0 )
  {
    memset(v9, 0, 0x68uLL);
    v6 = 245;
    goto LABEL_4;
  }
  if ( (a3 & 0x400) != 0 )
  {
    memset(v9, 0, 0x68uLL);
    v6 = 246;
LABEL_4:
    v7 = *a2;
    *((_QWORD *)&v9[0] + 1) = a1;
    v9[1] = v7;
    return sub_140358A20(2u, v6, 0, (__int64)v9);
  }
  if ( (a3 & 6) == 0 )
  {
    memset(v9, 0, 0x68uLL);
    v6 = 243;
    goto LABEL_4;
  }
  result = 0LL;
  if ( (a3 & 2) == 0 || (result = sub_14054EBEC(a1, a2, a3 & 0x800), (int)result >= 0) )
  {
    if ( (v3 & 4) != 0 )
      return sub_14054EC88(a1, a2);
  }
  return result;
}
