/*
 * XREFs of sub_180071A9C @ 0x180071A9C
 * Callers:
 *     sub_180071170 @ 0x180071170 (sub_180071170.c)
 *     sub_180071A9C @ 0x180071A9C (sub_180071A9C.c)
 *     sub_1800A47C0 @ 0x1800A47C0 (sub_1800A47C0.c)
 * Callees:
 *     sub_1800713E4 @ 0x1800713E4 (sub_1800713E4.c)
 *     sub_1800714EC @ 0x1800714EC (sub_1800714EC.c)
 *     sub_180071650 @ 0x180071650 (sub_180071650.c)
 *     sub_1800719CC @ 0x1800719CC (sub_1800719CC.c)
 *     sub_180071A9C @ 0x180071A9C (sub_180071A9C.c)
 */

__int64 *__fastcall sub_180071A9C(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        unsigned __int8 (__fastcall *a4)(__int64, __int64))
{
  __int64 *v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v10; // [rsp+28h] [rbp-10h]

  while ( (__int64)(((char *)a2 - (char *)a1) & 0xFFFFFFFFFFFFFFF0uLL) > 512 )
  {
    if ( a3 <= 0 )
    {
      sub_1800714EC((__int64)a1, (__int64)a2, (__int64)a4);
      return (__int64 *)sub_1800719CC(a1, (__int64)a2, a4);
    }
    sub_180071650(
      (unsigned __int64 *)&v9,
      (unsigned __int64)a1,
      (unsigned __int64)a2,
      (unsigned __int8 (__fastcall *)(unsigned __int64, unsigned __int64))a4);
    a3 = (a3 >> 2) + (a3 >> 1);
    if ( (__int64)(((char *)v9 - (char *)a1) & 0xFFFFFFFFFFFFFFF0uLL) >= (__int64)(((char *)a2 - (char *)v10) & 0xFFFFFFFFFFFFFFF0uLL) )
    {
      sub_180071A9C(v10, a2, a3, a4, (_DWORD)v9);
      a2 = v9;
    }
    else
    {
      sub_180071A9C(a1, v9, a3, a4, (_DWORD)v9);
      a1 = v10;
    }
  }
  return sub_1800713E4(a1, a2, (__int64 (__fastcall *)(__int64 *, __int64 *))a4);
}
