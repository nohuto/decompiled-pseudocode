/*
 * XREFs of sub_1800952C0 @ 0x1800952C0
 * Callers:
 *     sub_1800952C0 @ 0x1800952C0 (sub_1800952C0.c)
 *     sub_18009564C @ 0x18009564C (sub_18009564C.c)
 * Callees:
 *     sub_1800945B8 @ 0x1800945B8 (sub_1800945B8.c)
 *     sub_1800947A0 @ 0x1800947A0 (sub_1800947A0.c)
 *     sub_180095024 @ 0x180095024 (sub_180095024.c)
 *     sub_1800952C0 @ 0x1800952C0 (sub_1800952C0.c)
 */

void __fastcall sub_1800952C0(char *a1, float *a2, __int64 a3, __int64 a4, __int64 a5, char a6)
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
      sub_1800952C0((_DWORD)a1, v11, v10, a4, a5, a6);
      sub_1800952C0((_DWORD)a1 + 16 * v10, (_DWORD)a2, v9, a4, a5, a6);
    }
    else
    {
      sub_1800947A0(a1, v11, v10, a4, a6);
      sub_1800947A0(&a1[16 * v10], (__int64)a2, v9, a4, a6);
    }
    sub_1800945B8((float *)a1, (float *)&a1[16 * v10], a2, v10, v9, a4, a5);
  }
  else
  {
    sub_180095024(a1, (char *)a2);
  }
}
