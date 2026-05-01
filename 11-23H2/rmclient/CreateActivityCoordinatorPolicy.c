/*
 * XREFs of CreateActivityCoordinatorPolicy @ 0x180015E90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800065B0 @ 0x1800065B0 (sub_1800065B0.c)
 */

__int64 __fastcall CreateActivityCoordinatorPolicy(unsigned int a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  _QWORD *v5; // rax

  v2 = 0;
  v3 = (int)a1;
  *a2 = 0LL;
  if ( a1 > 3 )
  {
    return (unsigned int)-2147024809;
  }
  else
  {
    v5 = sub_1800065B0(0x1CuLL);
    if ( v5 )
    {
      *(_OWORD *)v5 = *(_OWORD *)((char *)&unk_1800321D0 + 28 * v3);
      v5[2] = *(_QWORD *)((char *)&unk_1800321D0 + 28 * v3 + 16);
      *((_DWORD *)v5 + 6) = *((_DWORD *)&unk_1800321D0 + 7 * v3 + 6);
      *a2 = v5;
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  return v2;
}
