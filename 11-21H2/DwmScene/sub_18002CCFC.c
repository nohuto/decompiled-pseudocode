/*
 * XREFs of sub_18002CCFC @ 0x18002CCFC
 * Callers:
 *     sub_18002CC9C @ 0x18002CC9C (sub_18002CC9C.c)
 *     sub_18002CCFC @ 0x18002CCFC (sub_18002CCFC.c)
 *     sub_18002D6DC @ 0x18002D6DC (sub_18002D6DC.c)
 *     sub_18002DA80 @ 0x18002DA80 (sub_18002DA80.c)
 *     sub_18002E0C0 @ 0x18002E0C0 (sub_18002E0C0.c)
 *     sub_18007FF80 @ 0x18007FF80 (sub_18007FF80.c)
 *     sub_1800800B0 @ 0x1800800B0 (sub_1800800B0.c)
 *     sub_1800B2C10 @ 0x1800B2C10 (sub_1800B2C10.c)
 *     sub_1800B3618 @ 0x1800B3618 (sub_1800B3618.c)
 *     sub_1800B37A4 @ 0x1800B37A4 (sub_1800B37A4.c)
 *     sub_1800B4D68 @ 0x1800B4D68 (sub_1800B4D68.c)
 *     sub_1800B4E58 @ 0x1800B4E58 (sub_1800B4E58.c)
 *     sub_1800B5738 @ 0x1800B5738 (sub_1800B5738.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18002CCFC @ 0x18002CCFC (sub_18002CCFC.c)
 */

__int64 __fastcall sub_18002CCFC(__int64 a1, __int64 a2, char *a3)
{
  char *i; // rdi
  char *v6; // rbx
  unsigned __int64 v7; // rdx
  __int64 result; // rax

  for ( i = a3; !i[25]; result = sub_180010884(v6, 0x58uLL) )
  {
    sub_18002CCFC(a1, a2, *((_QWORD *)i + 2));
    v6 = i;
    i = *(char **)i;
    v7 = *((_QWORD *)v6 + 7);
    if ( v7 >= 0x10 )
      sub_180010884(*((char **)v6 + 4), v7 + 1);
    *((_QWORD *)v6 + 6) = 0LL;
    *((_QWORD *)v6 + 7) = 15LL;
    v6[32] = 0;
  }
  return result;
}
