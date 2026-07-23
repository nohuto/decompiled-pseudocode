/*
 * XREFs of sub_14024501C @ 0x14024501C
 * Callers:
 *     sub_14033E970 @ 0x14033E970 (sub_14033E970.c)
 * Callees:
 *     sub_140274D80 @ 0x140274D80 (sub_140274D80.c)
 *     sub_1403171A0 @ 0x1403171A0 (sub_1403171A0.c)
 */

__int64 __fastcall sub_14024501C(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v6; // rdi
  __int64 result; // rax
  __int64 v8; // r9

  v6 = (__int64)((_QWORD)a2 << 25) >> 16;
  result = sub_140274D80(a1, v6);
  if ( a3 != (_BYTE)result && (unsigned __int8)result < 8u )
  {
    if ( a3 == 7 )
    {
LABEL_4:
      LOBYTE(v8) = a3;
      return sub_1403171A0(a1, v6, 1LL, v8);
    }
    if ( (_BYTE)result == 7 )
    {
      if ( !a3 )
        *a2 |= 0x20uLL;
      goto LABEL_4;
    }
  }
  return result;
}
