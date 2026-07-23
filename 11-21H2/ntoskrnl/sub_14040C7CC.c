/*
 * XREFs of sub_14040C7CC @ 0x14040C7CC
 * Callers:
 *     sub_140401244 @ 0x140401244 (sub_140401244.c)
 *     sub_14040BDF0 @ 0x14040BDF0 (sub_14040BDF0.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     sub_1403FDDE8 @ 0x1403FDDE8 (sub_1403FDDE8.c)
 *     sub_14040B17C @ 0x14040B17C (sub_14040B17C.c)
 *     sub_14040B404 @ 0x14040B404 (sub_14040B404.c)
 *     sub_14040B65C @ 0x14040B65C (sub_14040B65C.c)
 *     sub_14056AF38 @ 0x14056AF38 (sub_14056AF38.c)
 *     sub_140656BC4 @ 0x140656BC4 (sub_140656BC4.c)
 */

void __fastcall __noreturn sub_14040C7CC(int *a1, __int64 a2, char a3, _DWORD *a4, __int64 a5)
{
  int v5; // r14d
  _DWORD *v6; // r12
  int v11; // edi
  BOOL v12; // ebx
  unsigned int v13; // ebx

  v5 = a1[1];
  v6 = a1 + 32;
  _misaligned_access();
  if ( (a3 & 3) == 1 )
    sub_14056AF38(1970172784LL);
  if ( (a3 & 1) != 0 )
    v11 = 0;
  else
    v11 = 2 - ((a3 & 2) != 0);
  v12 = (a3 & 4) == 0;
  if ( (unsigned int)a1[19] < 3 && (unsigned int)(v12 + v11) >= *v6 )
    sub_14056AF38(1919837272LL);
  sub_14040B65C((__int64)v6, v12 + v11, a4, v5);
  v13 = (unsigned int)(a1[19] + 7) >> 3;
  sub_1403FDDE8(a2 + v13, (v5 << 6) - v13);
  sub_140656BC4(a2, v13);
}
