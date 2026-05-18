/*
 * XREFs of sub_1800A5334 @ 0x1800A5334
 * Callers:
 *     sub_1800A5334 @ 0x1800A5334 (sub_1800A5334.c)
 *     sub_1800A573C @ 0x1800A573C (sub_1800A573C.c)
 * Callees:
 *     sub_1800A4630 @ 0x1800A4630 (sub_1800A4630.c)
 *     sub_1800A47AC @ 0x1800A47AC (sub_1800A47AC.c)
 *     sub_1800A5104 @ 0x1800A5104 (sub_1800A5104.c)
 *     sub_1800A5334 @ 0x1800A5334 (sub_1800A5334.c)
 */

void __fastcall sub_1800A5334(char *a1, float *a2, __int64 a3, int a4, __int64 a5, char a6)
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
      sub_1800A5334((_DWORD)a1, v11, v10, a4, a5, a6);
      sub_1800A5334((_DWORD)a1 + 16 * v10, (_DWORD)a2, v9, a4, a5, a6);
    }
    else
    {
      sub_1800A47AC(a1, v11, v10, a4);
      sub_1800A47AC(&a1[16 * v10], (int)a2, v9, a4);
    }
    sub_1800A4630((float *)a1, (float *)&a1[16 * v10], a2, v10, v9, a4, a5);
  }
  else
  {
    sub_1800A5104((float *)a1, a2);
  }
}
