/*
 * XREFs of sub_14052CE20 @ 0x14052CE20
 * Callers:
 *     sub_140521F54 @ 0x140521F54 (sub_140521F54.c)
 *     sub_140522138 @ 0x140522138 (sub_140522138.c)
 *     sub_1405221D0 @ 0x1405221D0 (sub_1405221D0.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14052CA64 @ 0x14052CA64 (sub_14052CA64.c)
 */

__int64 __fastcall sub_14052CE20(_BYTE *a1, char a2, char a3, __int64 a4, int a5, int a6, char a7)
{
  char v7; // di
  __int64 result; // rax
  __int64 v13; // rdx
  unsigned __int8 v14; // r8

  v7 = 0;
  if ( !a1 )
    return 3221225485LL;
  memset(a1, 0, 0x40uLL);
  v14 = 3;
  if ( !a7 )
    v14 = *(_BYTE *)(a4 + 3);
  LOBYTE(v13) = *(_BYTE *)a4;
  result = sub_14052CA64(*(_QWORD *)(a4 + 4), v13, v14, (__int64)(a1 + 8));
  if ( (int)result >= 0 )
  {
    *a1 = a2;
    a1[1] = a3;
    if ( a7 )
    {
      a1[48] = 32;
    }
    else
    {
      a1[48] = *(_BYTE *)(a4 + 1);
      v7 = *(_BYTE *)(a4 + 2);
    }
    a1[49] = v7;
    *((_DWORD *)a1 + 13) = a5;
    *((_DWORD *)a1 + 14) = a6;
    return 0LL;
  }
  return result;
}
