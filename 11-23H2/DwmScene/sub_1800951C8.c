/*
 * XREFs of sub_1800951C8 @ 0x1800951C8
 * Callers:
 *     sub_1800951C8 @ 0x1800951C8 (sub_1800951C8.c)
 *     sub_180095580 @ 0x180095580 (sub_180095580.c)
 * Callees:
 *     sub_180094540 @ 0x180094540 (sub_180094540.c)
 *     sub_1800946B8 @ 0x1800946B8 (sub_1800946B8.c)
 *     sub_180094F98 @ 0x180094F98 (sub_180094F98.c)
 *     sub_1800951C8 @ 0x1800951C8 (sub_1800951C8.c)
 */

void __fastcall sub_1800951C8(char *a1, float *a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rdx

  if ( a3 > 32 )
  {
    v9 = (unsigned __int64)a3 >> 1;
    v10 = a3 - ((unsigned __int64)a3 >> 1);
    v11 = (__int64)&a1[16 * v10];
    if ( v10 > a5 )
    {
      sub_1800951C8((_DWORD)a1, v11, v10, a4, a5, a6);
      sub_1800951C8((_DWORD)a1 + 16 * v10, (_DWORD)a2, v9, a4, a5, a6);
    }
    else
    {
      sub_1800946B8(a1, v11, v10, a4, a6);
      sub_1800946B8(&a1[16 * v10], (__int64)a2, v9, a4, a6);
    }
    sub_180094540((float *)a1, (float *)&a1[16 * v10], a2, v10, v9, a4, a5);
  }
  else
  {
    sub_180094F98(a1, (char *)a2);
  }
}
