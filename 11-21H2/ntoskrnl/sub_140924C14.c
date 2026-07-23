/*
 * XREFs of sub_140924C14 @ 0x140924C14
 * Callers:
 *     sub_14091ADA0 @ 0x14091ADA0 (sub_14091ADA0.c)
 * Callees:
 *     sub_140924D00 @ 0x140924D00 (sub_140924D00.c)
 *     sub_140924E08 @ 0x140924E08 (sub_140924E08.c)
 *     sub_140AB41B0 @ 0x140AB41B0 (sub_140AB41B0.c)
 */

__int64 __fastcall sub_140924C14(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        ULONG_PTR BugCheckParameter2,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rsi
  int v11; // r13d
  __int64 v13; // rdx
  _DWORD *v14; // r8
  int v15; // edx
  __int64 result; // rax

  v9 = 0LL;
  v11 = a2;
  if ( *(_DWORD *)(a4 + 60) )
  {
    while ( 1 )
    {
      v13 = 24LL * *(unsigned int *)(a4 + 4 * v9 + 52);
      v14 = (_DWORD *)(a4 + 4 + v13);
      v15 = v11 + v13;
      result = (*v14 & 2) != 0
             ? sub_140924E08((_DWORD)a1, v15, (_DWORD)v14, BugCheckParameter2, a7, a8, a9)
             : sub_140924D00((int)a1, v15, (int)v14, a4, BugCheckParameter2, a9);
      if ( (int)result < 0 )
        break;
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= *(_DWORD *)(a4 + 60) )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    a1[1] = *(_DWORD *)(a4 + 80);
    a1[2] = *(_DWORD *)(a4 + 80);
    a1[127] = sub_140AB41B0(a1, a2, a3);
    return 1073741833LL;
  }
  return result;
}
