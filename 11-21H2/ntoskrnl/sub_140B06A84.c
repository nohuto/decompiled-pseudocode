/*
 * XREFs of sub_140B06A84 @ 0x140B06A84
 * Callers:
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 * Callees:
 *     sub_14026B32C @ 0x14026B32C (sub_14026B32C.c)
 *     sub_14026CF08 @ 0x14026CF08 (sub_14026CF08.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 *     sub_1403C289C @ 0x1403C289C (sub_1403C289C.c)
 *     sub_1407F35F8 @ 0x1407F35F8 (sub_1407F35F8.c)
 *     sub_14082B1B4 @ 0x14082B1B4 (sub_14082B1B4.c)
 *     sub_140B04AE0 @ 0x140B04AE0 (sub_140B04AE0.c)
 */

__int64 sub_140B06A84()
{
  __int64 v0; // rbp
  char *v1; // rbx
  char *v2; // rax
  unsigned int v3; // esi
  __int64 v4; // rdi
  __int64 *v5; // rax
  __int64 v6; // r8

  v0 = qword_140C54090;
  v1 = sub_14026DFC0(3);
  if ( !(unsigned int)sub_1407F35F8(&StartContext, (__int64)v1, 5, 0LL) )
    return 0LL;
  v2 = sub_14026DFC0(4);
  if ( !(unsigned int)sub_1407F35F8(&StartContext, (__int64)v2, 6, 0LL) )
    return 0LL;
  *((_QWORD *)KeGetCurrentPrcb() + 4406) = -1LL;
  v3 = ((dword_140D051BC & 2) << 8) | 0x101;
  v4 = v0 + ((0x800000 - (v3 + (sub_140363220(1) & 0x3FFF))) << 21);
  qword_140C51928 = v4;
  if ( !(unsigned int)sub_140B04AE0((__int64)&qword_140C534C0, 9, v4 + 0x100000, 9, v0, 0x100000000000uLL, 1u) )
    return 0LL;
  dword_140C534D8 |= 1u;
  qword_140C53508 = qword_140C52F28;
  v1[184] = v1[184] & 0xF8 | 5;
  if ( (dword_140D051BC & 2) != 0 && !(unsigned int)sub_14082B1B4(&qword_140C52F18, v4 + 537919488, 0x200000000LL, 9) )
    dword_140D051BC &= ~2u;
  v5 = sub_14026CF08(9);
  if ( (unsigned int)sub_1403C289C(v5, v0, 0x100000000000uLL)
    && (sub_14026B32C(v3, 13LL, v6),
        dword_140D06880 |= 0x80000000,
        qword_140C53058 = 0LL,
        (qword_140C53078 = sub_1403095B0((__int64)&qword_140C534C0, 1u)) != 0) )
  {
    return 1LL;
  }
  else
  {
    return 0LL;
  }
}
