/*
 * XREFs of RtlCompareString @ 0x18008DC00
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x180083610 (RtlUpperChar.c)
 */

__int64 __fastcall RtlCompareString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  unsigned int v3; // esi
  unsigned int v4; // r12d
  __int64 v5; // rbp
  _BYTE *v6; // rbx
  _BYTE *v7; // rdi
  _BYTE *v8; // rbp
  int v10; // r15d
  int v11; // eax
  int v12; // ecx
  __int64 v13; // rdi

  v3 = *a1;
  v4 = *a2;
  v5 = *a1;
  v6 = (_BYTE *)*((_QWORD *)a1 + 1);
  v7 = (_BYTE *)*((_QWORD *)a2 + 1);
  if ( v3 > v4 )
    v5 = *a2;
  v8 = &v6[v5];
  if ( v6 >= v8 )
    return v3 - v4;
  if ( a3 )
  {
    while ( 1 )
    {
      if ( *v6 != *v7 )
      {
        v10 = (unsigned __int8)RtlUpperChar();
        LOBYTE(v11) = RtlUpperChar();
        if ( (_BYTE)v10 != (_BYTE)v11 )
          break;
      }
      ++v6;
      ++v7;
      if ( v6 >= v8 )
        return v3 - v4;
    }
    v11 = (unsigned __int8)v11;
    v12 = v10;
  }
  else
  {
    v13 = v7 - v6;
    while ( 1 )
    {
      v12 = (unsigned __int8)*v6;
      v11 = (unsigned __int8)v6[v13];
      if ( (_BYTE)v12 != (_BYTE)v11 )
        break;
      if ( ++v6 >= v8 )
        return v3 - v4;
    }
  }
  return (unsigned int)(v12 - v11);
}
