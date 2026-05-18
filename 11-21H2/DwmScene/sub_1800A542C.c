/*
 * XREFs of sub_1800A542C @ 0x1800A542C
 * Callers:
 *     sub_1800A542C @ 0x1800A542C (sub_1800A542C.c)
 *     sub_1800A585C @ 0x1800A585C (sub_1800A585C.c)
 * Callees:
 *     sub_1800A46AC @ 0x1800A46AC (sub_1800A46AC.c)
 *     sub_1800A4898 @ 0x1800A4898 (sub_1800A4898.c)
 *     sub_1800A5190 @ 0x1800A5190 (sub_1800A5190.c)
 *     sub_1800A542C @ 0x1800A542C (sub_1800A542C.c)
 */

void __fastcall sub_1800A542C(char *a1, float *a2, __int64 a3, int a4, __int64 a5, char a6)
{
  __int64 v9; // r14
  __int64 v10; // rdi
  int v11; // edx

  if ( a3 > 32 )
  {
    v9 = (unsigned __int64)a3 >> 1;
    v10 = a3 - ((unsigned __int64)a3 >> 1);
    v11 = (_DWORD)a1 + 16 * v10;
    if ( v10 > a5 )
    {
      sub_1800A542C((_DWORD)a1, v11, v10, a4, a5, a6);
      sub_1800A542C((_DWORD)a1 + 16 * v10, (_DWORD)a2, v9, a4, a5, a6);
    }
    else
    {
      sub_1800A4898(a1, v11, v10, a4);
      sub_1800A4898(&a1[16 * v10], (int)a2, v9, a4);
    }
    sub_1800A46AC((float *)a1, (float *)&a1[16 * v10], a2, v10, v9, a4, a5);
  }
  else
  {
    sub_1800A5190((float *)a1, a2);
  }
}
