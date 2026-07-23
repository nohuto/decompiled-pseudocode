/*
 * XREFs of sub_140A958B4 @ 0x140A958B4
 * Callers:
 *     sub_140A949D0 @ 0x140A949D0 (sub_140A949D0.c)
 *     sub_140A94A30 @ 0x140A94A30 (sub_140A94A30.c)
 *     sub_140A94AD0 @ 0x140A94AD0 (sub_140A94AD0.c)
 *     sub_140A94CE0 @ 0x140A94CE0 (sub_140A94CE0.c)
 *     sub_140A94D20 @ 0x140A94D20 (sub_140A94D20.c)
 *     sub_140A94D60 @ 0x140A94D60 (sub_140A94D60.c)
 *     sub_140A94DA0 @ 0x140A94DA0 (sub_140A94DA0.c)
 *     sub_140A94E00 @ 0x140A94E00 (sub_140A94E00.c)
 *     sub_140A94E50 @ 0x140A94E50 (sub_140A94E50.c)
 *     sub_140A94EA0 @ 0x140A94EA0 (sub_140A94EA0.c)
 *     sub_140A94EF0 @ 0x140A94EF0 (sub_140A94EF0.c)
 *     sub_140A94F40 @ 0x140A94F40 (sub_140A94F40.c)
 *     sub_140A94FD0 @ 0x140A94FD0 (sub_140A94FD0.c)
 *     sub_140A950D0 @ 0x140A950D0 (sub_140A950D0.c)
 *     sub_140A951A0 @ 0x140A951A0 (sub_140A951A0.c)
 *     sub_140A952B0 @ 0x140A952B0 (sub_140A952B0.c)
 *     sub_140A952F0 @ 0x140A952F0 (sub_140A952F0.c)
 *     sub_140A95340 @ 0x140A95340 (sub_140A95340.c)
 *     sub_140A95390 @ 0x140A95390 (sub_140A95390.c)
 *     sub_140A953E0 @ 0x140A953E0 (sub_140A953E0.c)
 *     sub_140A955B0 @ 0x140A955B0 (sub_140A955B0.c)
 *     sub_140A95790 @ 0x140A95790 (sub_140A95790.c)
 * Callees:
 *     sub_140A95904 @ 0x140A95904 (sub_140A95904.c)
 *     sub_140A9598C @ 0x140A9598C (sub_140A9598C.c)
 */

__int64 __fastcall sub_140A958B4(ULONG_PTR *a1, ULONG_PTR a2)
{
  __int64 result; // rax

  if ( a1 )
  {
    sub_140A9598C((ULONG_PTR)a1, a2);
    sub_140A95904(a1[2], a2);
    sub_140A9598C(a1[4], a2);
    return sub_140A9598C(a1[5], a2);
  }
  return result;
}
