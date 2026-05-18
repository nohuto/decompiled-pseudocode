/*
 * XREFs of sub_18002CC9C @ 0x18002CC9C
 * Callers:
 *     sub_18002CE1C @ 0x18002CE1C (sub_18002CE1C.c)
 *     sub_18002CE90 @ 0x18002CE90 (sub_18002CE90.c)
 *     sub_18002D718 @ 0x18002D718 (sub_18002D718.c)
 *     sub_18002D784 @ 0x18002D784 (sub_18002D784.c)
 *     sub_18002D880 @ 0x18002D880 (sub_18002D880.c)
 *     sub_18002F3B0 @ 0x18002F3B0 (sub_18002F3B0.c)
 *     sub_18002FB30 @ 0x18002FB30 (sub_18002FB30.c)
 *     sub_18007FD3C @ 0x18007FD3C (sub_18007FD3C.c)
 *     sub_18007FDAC @ 0x18007FDAC (sub_18007FDAC.c)
 *     sub_18007FEF8 @ 0x18007FEF8 (sub_18007FEF8.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18002CCFC @ 0x18002CCFC (sub_18002CCFC.c)
 */

char **__fastcall sub_18002CC9C(char **a1, char **a2)
{
  char **v3; // rbx
  char **result; // rax

  if ( a1 != a2 )
  {
    v3 = a1 + 17;
    do
    {
      sub_18002CCFC(v3, v3, *((_QWORD *)*v3 + 1));
      sub_180010884(*v3, 0x58uLL);
      v3 += 19;
      result = v3 - 17;
    }
    while ( v3 - 17 != a2 );
  }
  return result;
}
