/*
 * XREFs of sub_1405F91C4 @ 0x1405F91C4
 * Callers:
 *     sub_1405FA3A4 @ 0x1405FA3A4 (sub_1405FA3A4.c)
 * Callees:
 *     sub_140261818 @ 0x140261818 (sub_140261818.c)
 *     sub_1405FB2F0 @ 0x1405FB2F0 (sub_1405FB2F0.c)
 */

__int64 __fastcall sub_1405F91C4(__int64 a1)
{
  ULONGLONG *v2; // rax
  unsigned int v3; // ebx
  int v4; // ebp
  __int64 v6; // rdi
  __int64 v7; // rax
  char v8; // cl

  v2 = sub_140261818(3);
  v3 = 0;
  v4 = (int)v2;
  if ( v2 )
  {
    LODWORD(v6) = -1;
    while ( 1 )
    {
      v6 = (unsigned int)(v6 + 1);
      if ( (_DWORD)v6 == *(_DWORD *)(a1 + 788) )
        break;
      if ( (*(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * v6) & 0x1FFF) != 0 )
      {
        v7 = *(_QWORD *)(a1 + 1048);
        if ( v7 )
          v8 = *(_BYTE *)(v7 + v6);
        else
          v8 = 0;
        sub_1405FB2F0(v4, 10, a1, v6, 0, *(_BYTE *)(*(_QWORD *)(a1 + 1032) + 2 * v6), v8);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v3;
}
