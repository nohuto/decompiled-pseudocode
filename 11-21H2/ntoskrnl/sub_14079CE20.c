/*
 * XREFs of sub_14079CE20 @ 0x14079CE20
 * Callers:
 *     sub_14079CC20 @ 0x14079CC20 (sub_14079CC20.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_14079CE20(
        ULONG_PTR BugCheckParameter3,
        unsigned int a2,
        int a3,
        _DWORD *a4,
        unsigned int *a5,
        __int64 *a6,
        _DWORD *a7)
{
  unsigned int *v7; // r10
  unsigned __int64 v8; // r11
  unsigned int v10; // eax
  __int64 result; // rax
  unsigned int v12; // ebx
  __int64 v13; // rax

  v7 = a4 + 8;
  v8 = (unsigned __int64)a4 + (unsigned int)a4[2];
  if ( (unsigned __int64)(a4 + 8) >= v8 )
    return 3221226021LL;
  while ( 1 )
  {
    v10 = *v7;
    if ( (*v7 & 0x80000000) == 0 )
      break;
    v10 = -v10;
LABEL_4:
    v7 = (unsigned int *)((char *)v7 + v10);
    if ( (unsigned __int64)v7 >= v8 )
      return 3221226021LL;
  }
  v12 = a4[1] + (_DWORD)v7 + (a3 << 31) - (_DWORD)a4;
  if ( a2 > v10 )
    goto LABEL_4;
  result = sub_14071F300(BugCheckParameter3, v12, 1);
  if ( (int)result >= 0 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v13 = sub_1406BF400(BugCheckParameter3, v12, a7);
    else
      v13 = sub_1407C9820(BugCheckParameter3);
    if ( v13 )
      v13 -= 4LL;
    *a6 = v13;
    result = 0LL;
    *a5 = v12;
  }
  return result;
}
