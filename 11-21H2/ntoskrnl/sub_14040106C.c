/*
 * XREFs of sub_14040106C @ 0x14040106C
 * Callers:
 *     sub_1403FF93C @ 0x1403FF93C (sub_1403FF93C.c)
 *     sub_140406D14 @ 0x140406D14 (sub_140406D14.c)
 *     sub_1404080D0 @ 0x1404080D0 (sub_1404080D0.c)
 *     sub_140408730 @ 0x140408730 (sub_140408730.c)
 *     sub_14040A480 @ 0x14040A480 (sub_14040A480.c)
 *     sub_140410C24 @ 0x140410C24 (sub_140410C24.c)
 *     sub_140410D50 @ 0x140410D50 (sub_140410D50.c)
 * Callees:
 *     sub_14040BCF0 @ 0x14040BCF0 (sub_14040BCF0.c)
 */

__int64 __fastcall sub_14040106C(int a1, _DWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  sub_14040BCF0(a1, (_DWORD)a2, a3, a4, a5);
  return (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64, __int64))((char *)off_140006960 + (*a2 & 0x380)))(
           a2,
           a3,
           a4,
           a5);
}
