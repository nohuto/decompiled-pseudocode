/*
 * XREFs of sub_140243D5C @ 0x140243D5C
 * Callers:
 *     sub_140243B10 @ 0x140243B10 (sub_140243B10.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140243D5C(__int64 a1)
{
  unsigned __int64 v1; // r9
  unsigned int v2; // edx
  unsigned int v4; // r8d
  signed __int64 v5; // rsi
  __int64 v6; // rbp
  unsigned int v7; // r10d
  unsigned __int64 *v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned int v10; // eax
  bool v11; // cf
  bool v12; // zf
  unsigned __int64 v13; // rdi
  __int64 result; // rax
  unsigned int v15; // r9d
  _QWORD *v16; // r11
  signed __int64 v17; // rcx

  v1 = 0LL;
  v2 = dword_140C47418;
  v4 = dword_140C4741C;
  v5 = 0LL;
  v6 = 0LL;
  if ( (dword_140C46D90 & 1) != 0 )
  {
    v7 = 10;
    v8 = (unsigned __int64 *)(a1 + 80);
    do
    {
      v9 = *v8;
      v10 = v7;
      v11 = *v8 < v1;
      v12 = *v8++ == v1;
      v13 = v9;
      if ( v11 || v12 )
      {
        v13 = v1;
        v10 = v2;
      }
      ++v7;
      v2 = v10;
      v1 = v13;
    }
    while ( v7 < 0x14 );
    if ( v13 < (unsigned int)dword_140C46FE0 )
      v2 = dword_140C47418;
  }
  result = (unsigned int)dword_140C46D90;
  v15 = 2;
  if ( (dword_140C46D90 & 2) != 0 && v2 > 2 )
  {
    v16 = (_QWORD *)(a1 + 16);
    do
    {
      v6 += *v16;
      result = v15;
      ++v16;
      v17 = v6 * (v15 - (unsigned __int64)v2);
      if ( v17 >= v5 )
        result = v4;
      ++v15;
      v4 = result;
      if ( v17 >= v5 )
        v17 = v5;
      v5 = v17;
    }
    while ( v15 < v2 );
  }
  if ( dword_140C47418 != v2 )
    dword_140C47418 = v2;
  if ( dword_140C4741C != v4 )
    dword_140C4741C = v4;
  return result;
}
