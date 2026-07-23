/*
 * XREFs of sub_14084A4C4 @ 0x14084A4C4
 * Callers:
 *     sub_140849E68 @ 0x140849E68 (sub_140849E68.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14084A4C4(_DWORD *a1)
{
  char v1; // r9
  __int64 v3; // r11
  int *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ecx
  _DWORD *v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  char result; // al

  v1 = 0;
  if ( *a1 >= 9u )
    *a1 = 0;
  v3 = 6LL;
  v4 = a1 + 1;
  v5 = 6LL;
  do
  {
    v6 = 2LL;
    do
    {
      if ( *v4 >= 5 )
        *v4 = 0;
      ++v4;
      --v6;
    }
    while ( v6 );
    --v5;
  }
  while ( v5 );
  v7 = a1[15];
  if ( (v7 & 0xFFFFFFC0) != 0 )
  {
    a1[15] = 0;
    v7 = 0;
  }
  if ( dword_140D05184 != *a1 || dword_140D050F8 != a1[13] || dword_140D05058 != v7 || dword_140D05188 != a1[14] )
  {
    dword_140D05184 = *a1;
    v1 = 1;
    dword_140D050F8 = a1[13];
    dword_140D05058 = a1[15];
    dword_140D05188 = a1[14];
    dword_140D05308 = dword_140D05188 * *(_DWORD *)(qword_140D088C0[0] + 68);
  }
  v8 = &unk_140D05420;
  do
  {
    v9 = 2LL;
    do
    {
      v10 = *(_DWORD *)((char *)v8 + (char *)a1 - (char *)&unk_140D05420 + 4);
      if ( *v8 != v10 )
      {
        v1 = 1;
        *v8 = v10;
      }
      ++v8;
      --v9;
    }
    while ( v9 );
    --v3;
  }
  while ( v3 );
  result = v1;
  dword_140D06AA0 = a1[16];
  return result;
}
