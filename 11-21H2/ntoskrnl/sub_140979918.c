/*
 * XREFs of sub_140979918 @ 0x140979918
 * Callers:
 *     sub_14097AD20 @ 0x14097AD20 (sub_14097AD20.c)
 * Callees:
 *     sub_14032E700 @ 0x14032E700 (sub_14032E700.c)
 *     sub_1407BC0B0 @ 0x1407BC0B0 (sub_1407BC0B0.c)
 *     sub_140978F40 @ 0x140978F40 (sub_140978F40.c)
 *     sub_140979A34 @ 0x140979A34 (sub_140979A34.c)
 *     sub_140979D48 @ 0x140979D48 (sub_140979D48.c)
 */

__int64 __fastcall sub_140979918(
        int a1,
        unsigned __int64 *a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        int a8,
        __int64 a9)
{
  int v11; // eax
  char *v12; // rbx
  int v13; // edi
  int v14; // eax
  PVOID P[3]; // [rsp+30h] [rbp-18h] BYREF

  P[0] = 0LL;
  v11 = sub_140978F40(a6, a4, *a2, a3, (__int64 *)P);
  v12 = (char *)P[0];
  v13 = v11;
  if ( v11 >= 0 )
  {
    *a2 = (*((unsigned int *)P[0] + 6) | ((unsigned __int64)*((unsigned __int8 *)P[0] + 32) << 32)) << 12;
    if ( (unsigned int)(a6 - 16) <= 1 )
    {
      *((_QWORD *)v12 + 11) = v12 + 80;
      *((_QWORD *)v12 + 10) = v12 + 80;
      v14 = sub_140979D48(a1, (_DWORD)v12, a6, a7, a8);
    }
    else
    {
      if ( a8 != 4096 )
      {
        v13 = -1073741811;
        goto LABEL_8;
      }
      v14 = sub_140979A34(a1, (_DWORD)v12, a5, a7, a9);
    }
    v13 = v14;
  }
LABEL_8:
  if ( v12 )
  {
    if ( v13 >= 0 )
      sub_14032E700(v12);
    else
      sub_1407BC0B0((unsigned __int8 *)v12, 0LL, 0);
  }
  return (unsigned int)v13;
}
