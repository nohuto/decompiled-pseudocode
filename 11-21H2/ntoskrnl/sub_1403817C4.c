/*
 * XREFs of sub_1403817C4 @ 0x1403817C4
 * Callers:
 *     sub_14037FDA0 @ 0x14037FDA0 (sub_14037FDA0.c)
 * Callees:
 *     sub_14023814C @ 0x14023814C (sub_14023814C.c)
 *     sub_14037F1D4 @ 0x14037F1D4 (sub_14037F1D4.c)
 *     sub_140382478 @ 0x140382478 (sub_140382478.c)
 *     sub_1403828A4 @ 0x1403828A4 (sub_1403828A4.c)
 */

__int64 __fastcall sub_1403817C4(__int64 a1, unsigned int a2, int a3, _QWORD *a4, int *a5)
{
  __int64 v7; // rdi
  int v9; // edx
  int v10; // r8d
  int v11; // edx
  __int64 result; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  v7 = a1 + 16 * (a2 + 78LL);
  v9 = *(_DWORD *)v7;
  if ( *(_DWORD *)v7 != -1 && (unsigned int)(a3 + *(_DWORD *)(v7 + 4)) <= *(_DWORD *)(a1 + 816) )
    goto LABEL_3;
  if ( *(_BYTE *)(a1 + 776) )
    goto LABEL_10;
  if ( v9 == -1 || (int)sub_14037F1D4(a1, v9) < 0 || (int)sub_1403828A4(a1, v7) < 0 )
  {
    if ( (int)sub_14023814C(a1, a2, 0xFFFFFFFF) < 0 )
      __int2c();
LABEL_10:
    while ( 1 )
    {
      v13 = sub_140382478(a1, a2);
      if ( !v13 )
        return 3221225599LL;
      v14 = (v13 - *(_QWORD *)(a1 + 1032)) >> 1;
      if ( (_DWORD)v14 == -1 )
        return 3221225599LL;
      result = sub_14023814C(a1, a2, v14);
      if ( (int)result >= 0 )
        goto LABEL_3;
      if ( (_DWORD)result != -1073741267 )
        return result;
    }
  }
  else
  {
LABEL_3:
    v10 = *(_DWORD *)(v7 + 4);
    v11 = *(_DWORD *)v7;
    *a4 = *(_QWORD *)(v7 + 8) + (unsigned int)(16 * v10);
    *a5 = v10 | (v11 << *(_DWORD *)(a1 + 812));
    return 0LL;
  }
}
