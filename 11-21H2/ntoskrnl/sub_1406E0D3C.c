/*
 * XREFs of sub_1406E0D3C @ 0x1406E0D3C
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_1406E0D3C(int a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  __int64 v4; // rsi
  unsigned int v5; // ebx
  char *v6; // rdi
  const void *v8; // r10
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // eax

  v4 = 0LL;
  v5 = 0;
  if ( a1 != 143 )
  {
    if ( a1 == 145 )
    {
      *a4 = 2;
      if ( a3 >= 2 )
      {
        *(_BYTE *)a2 = dword_140C5AFDC & 1;
        *(_BYTE *)(a2 + 1) = (dword_140C5AFDC & 8) != 0;
        return v5;
      }
      return (unsigned int)-1073741820;
    }
    if ( a1 != 171 )
    {
      if ( a1 != 179 )
        return (unsigned int)-1073741821;
      v8 = qword_140C1B560;
      if ( !qword_140C1B560 )
        return (unsigned int)-1058340858;
      v9 = dword_140C1B558;
      v10 = dword_140C1B558 + 4;
      *a4 = dword_140C1B558 + 4;
      if ( a3 >= v10 )
      {
        memmove((void *)(a2 + 4), v8, v9);
        return v5;
      }
      return (unsigned int)-1073741820;
    }
  }
  v6 = (char *)qword_140D01440;
  if ( !qword_140D01440 )
    return (unsigned int)-2143092730;
  if ( a1 == 171 )
  {
    *a4 = 28;
    v4 = a2;
    v11 = *((_DWORD *)v6 + 14) + 28;
  }
  else
  {
    v11 = 24;
  }
  *a4 = v11;
  if ( a3 < v11 )
    return (unsigned int)-1073741820;
  *(_OWORD *)a2 = *(_OWORD *)(v6 + 4);
  *(_DWORD *)(a2 + 16) = *((_DWORD *)v6 + 5);
  *(_DWORD *)(a2 + 20) = *((_DWORD *)v6 + 8);
  if ( a1 == 171 )
  {
    memmove((void *)(v4 + 28), v6 + 60, *((unsigned int *)v6 + 14));
    *(_DWORD *)(v4 + 24) = *((_DWORD *)v6 + 14);
  }
  return v5;
}
