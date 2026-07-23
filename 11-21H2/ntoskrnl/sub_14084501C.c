/*
 * XREFs of sub_14084501C @ 0x14084501C
 * Callers:
 *     sub_1403CC5E8 @ 0x1403CC5E8 (sub_1403CC5E8.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14084501C(__int64 a1, unsigned __int16 *a2, __int64 a3, _DWORD *a4, _BYTE *a5)
{
  unsigned int v6; // edx
  unsigned int v8; // edi
  _WORD *Pool2; // rbx
  __int64 v10; // rax
  __int64 result; // rax

  v6 = *a2;
  v8 = (v6 >> 1) + 1;
  if ( a2[1] <= (unsigned __int16)v6 )
  {
    if ( a2[1] == (_WORD)v6 && v8 > 1 )
    {
      Pool2 = (_WORD *)*((_QWORD *)a2 + 1);
      if ( !Pool2[(v6 >> 1) - 1] )
      {
        v8 = v6 >> 1;
        goto LABEL_6;
      }
    }
  }
  else
  {
    Pool2 = (_WORD *)*((_QWORD *)a2 + 1);
    if ( !Pool2[v6 >> 1] )
    {
LABEL_6:
      *(_QWORD *)a1 = Pool2;
      *(_DWORD *)(a1 + 8) = 2 * v8;
      result = 0LL;
      *(_DWORD *)(a1 + 12) = 0;
      return result;
    }
  }
  v10 = (unsigned int)*a4;
  if ( (unsigned int)v10 + v8 < 0x400 )
  {
    Pool2 = (_WORD *)(a3 + 2 * v10);
    *a4 = v10 + v8;
LABEL_5:
    memmove(Pool2, *((const void **)a2 + 1), (unsigned __int16)v6);
    Pool2[v8 - 1] = 0;
    goto LABEL_6;
  }
  Pool2 = (_WORD *)ExAllocatePool2(256LL, 2LL * v8, 1799447891LL);
  if ( Pool2 )
  {
    *a5 = 1;
    LOWORD(v6) = *a2;
    goto LABEL_5;
  }
  return 3221225495LL;
}
