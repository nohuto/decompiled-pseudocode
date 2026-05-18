/*
 * XREFs of sub_18003AAE0 @ 0x18003AAE0
 * Callers:
 *     sub_18003AAE0 @ 0x18003AAE0 (sub_18003AAE0.c)
 *     sub_18003ADE8 @ 0x18003ADE8 (sub_18003ADE8.c)
 *     sub_180063B2C @ 0x180063B2C (sub_180063B2C.c)
 * Callees:
 *     sub_180039E78 @ 0x180039E78 (sub_180039E78.c)
 *     sub_180039FF4 @ 0x180039FF4 (sub_180039FF4.c)
 *     sub_18003A7E4 @ 0x18003A7E4 (sub_18003A7E4.c)
 *     sub_18003AAE0 @ 0x18003AAE0 (sub_18003AAE0.c)
 */

void __fastcall sub_18003AAE0(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 (__fastcall *a6)(__int64, __int64))
{
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rdx

  if ( a3 > 32 )
  {
    v9 = (unsigned __int64)a3 >> 1;
    v10 = a3 - ((unsigned __int64)a3 >> 1);
    v11 = (__int64)&a1[2 * v10];
    if ( v10 > a5 )
    {
      sub_18003AAE0((_DWORD)a1, v11, v10, a4, a5, (__int64)a6);
      sub_18003AAE0((_DWORD)a1 + 16 * v10, (_DWORD)a2, v9, a4, a5, (__int64)a6);
    }
    else
    {
      sub_180039FF4((__int64)a1, v11, v10, a4, (__int64)a6);
      sub_180039FF4((__int64)&a1[2 * v10], (__int64)a2, v9, a4, (__int64)a6);
    }
    sub_180039E78((__int64)a1, (__int64)&a1[2 * v10], (__int64)a2, v10, v9, a4, a5, a6);
  }
  else
  {
    sub_18003A7E4(a1, a2, (__int64 (__fastcall *)(__int64 *, __int64 *))a6);
  }
}
