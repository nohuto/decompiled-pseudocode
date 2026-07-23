/*
 * XREFs of sub_140B52168 @ 0x140B52168
 * Callers:
 *     sub_14081DB30 @ 0x14081DB30 (sub_14081DB30.c)
 * Callees:
 *     sub_1403B76EC @ 0x1403B76EC (sub_1403B76EC.c)
 */

unsigned __int64 __fastcall sub_140B52168(__int64 a1, unsigned int a2)
{
  unsigned __int64 result; // rax
  __int64 v4; // rdi
  char *i; // rcx
  unsigned int v6; // edx
  __int64 v7; // rcx
  unsigned int v8; // r8d
  _BYTE *v9; // r9
  unsigned int v10; // r8d
  _BYTE *v11; // r9
  unsigned int v12; // r8d
  _BYTE *v13; // r9

  result = (unsigned __int64)qword_140D690E0;
  v4 = *(_QWORD *)(a1 + 16) + 24512LL * a2;
  if ( qword_140D690E0[5 * a2 + 1] )
  {
    result = (unsigned int)sub_1403B76EC(qword_140D690E0[5 * a2]);
    *(_BYTE *)((unsigned int)result + v4 + 22825) = 2;
  }
  for ( i = (char *)qword_140C50710; *(_QWORD *)i != -1LL; i += 16 )
  {
    result = *((unsigned __int16 *)i + 5);
    if ( (_DWORD)result == a2 )
    {
      result = *((unsigned __int16 *)i + 6);
      if ( i[14] )
      {
        if ( *(_BYTE *)(result + v4 + 22825) != 2 )
          *(_BYTE *)(result + v4 + 22825) = 1;
      }
      else
      {
        *(_BYTE *)(result + v4 + 22825) = 2;
      }
    }
  }
  v6 = dword_140D05004;
  v7 = 0LL;
  v8 = 0;
  if ( dword_140D05004 )
  {
    v9 = (_BYTE *)(v4 + 22825);
    do
    {
      if ( *v9 == 2 )
      {
        *(_BYTE *)(v7 + v4 + 22817) = v8;
        *(_BYTE *)(v7 + v4 + 22821) = v8;
        v7 = (unsigned int)(v7 + 1);
      }
      ++v8;
      ++v9;
    }
    while ( v8 < v6 );
  }
  v10 = 0;
  if ( v6 )
  {
    v11 = (_BYTE *)(v4 + 22825);
    do
    {
      if ( *v11 == 1 )
      {
        *(_BYTE *)(v7 + v4 + 22817) = v10;
        *(_BYTE *)(v7 + v4 + 22821) = v10;
        v7 = (unsigned int)(v7 + 1);
      }
      ++v10;
      ++v11;
    }
    while ( v10 < v6 );
  }
  v12 = 0;
  if ( v6 )
  {
    v13 = (_BYTE *)(v4 + 22825);
    do
    {
      if ( !*v13 )
      {
        *(_BYTE *)(v7 + v4 + 22817) = v12;
        *(_BYTE *)(v7 + v4 + 22821) = v12;
        v7 = (unsigned int)(v7 + 1);
      }
      ++v12;
      ++v13;
    }
    while ( v12 < v6 );
  }
  return result;
}
