/*
 * XREFs of sub_1403DBC0C @ 0x1403DBC0C
 * Callers:
 *     sub_1403DBBB0 @ 0x1403DBBB0 (sub_1403DBBB0.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1403DBC0C(__int64 a1, unsigned int a2, _DWORD *a3, int *a4)
{
  int v4; // edi
  __int64 v7; // rcx
  int *v8; // r8
  _DWORD *v9; // rdx
  int v10; // eax
  __int64 result; // rax

  v4 = 190;
  if ( a2 < 0xBE )
  {
    if ( a2 >= 4 )
    {
      *a3 = 190;
      v4 = 4;
    }
    result = 3221225507LL;
  }
  else
  {
    memset(a3, 0, 0xBEuLL);
    v7 = 4LL;
    v8 = &dword_1400095AC;
    a3[4] = 4;
    v9 = a3 + 11;
    do
    {
      *(_OWORD *)(v9 - 5) = *(_OWORD *)*(_QWORD *)(v8 - 3);
      v10 = *v8;
      v8 += 4;
      *(v9 - 1) = v10;
      *v9 = *(v8 - 5);
      v9[1] = 152;
      v9 += 8;
      --v7;
    }
    while ( v7 );
    *((_WORD *)a3 + 76) = 36;
    *(_OWORD *)((char *)a3 + 154) = xmmword_14043C6F0;
    *(_OWORD *)((char *)a3 + 170) = xmmword_14043C700;
    *(_DWORD *)((char *)a3 + 186) = 82;
    result = 0LL;
    *a3 = 190;
  }
  *a4 = v4;
  return result;
}
