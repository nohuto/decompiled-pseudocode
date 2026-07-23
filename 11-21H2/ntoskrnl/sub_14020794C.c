/*
 * XREFs of sub_14020794C @ 0x14020794C
 * Callers:
 *     sub_1402075A4 @ 0x1402075A4 (sub_1402075A4.c)
 *     sub_1402077B0 @ 0x1402077B0 (sub_1402077B0.c)
 *     sub_14025D01C @ 0x14025D01C (sub_14025D01C.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14020794C(int a1, char a2, _DWORD *a3)
{
  int v5; // r9d
  unsigned int v6; // ecx
  __int64 *v7; // rbx
  __int64 *v8; // rdx
  int v9; // r10d
  int v10; // r11d
  unsigned int v11; // eax

  if ( a1 )
  {
    if ( a3 )
      v5 = a3[3];
    else
      v5 = dword_140C2B894;
    v6 = 10000;
  }
  else
  {
    if ( a3 )
      v5 = a3[4];
    else
      v5 = dword_140C2B86C;
    v6 = 9;
  }
  v7 = (__int64 *)(a3 + 20);
  if ( !a3 )
    v7 = &qword_140C2B880;
  v8 = (__int64 *)*v7;
  v9 = 0;
  v10 = 0;
  do
  {
    if ( (*((_DWORD *)v8 - 13) & 1) == a1 )
    {
      if ( !a2 && *((unsigned __int16 *)v8 - 28) == v5 )
        return 0;
      v11 = *((unsigned __int16 *)v8 - 28);
      ++v10;
      v9 += v11;
      if ( v11 >= v6 )
        v11 = v6;
      v6 = v11;
    }
    v8 = (__int64 *)*v8;
  }
  while ( v8 != v7 );
  if ( a1 )
  {
    if ( v10 )
    {
      if ( a3 )
        a3[3] = v6;
      else
        dword_140C2B894 = v6;
    }
    else if ( a3 )
    {
      a3[3] = 0;
    }
    else
    {
      dword_140C2B894 = 0;
    }
  }
  else if ( v10 )
  {
    if ( a3 )
    {
      a3[4] = v6;
      if ( a2 )
        a3[5] = v9;
    }
    else
    {
      dword_140C2B86C = v6;
      if ( a2 )
        dword_140C2B870 = v9;
    }
  }
  else if ( a3 )
  {
    a3[4] = 0;
    a3[5] = 0;
  }
  else
  {
    dword_140C2B86C = 0;
    dword_140C2B870 = 0;
  }
  return 1;
}
