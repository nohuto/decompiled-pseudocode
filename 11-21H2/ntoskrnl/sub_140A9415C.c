/*
 * XREFs of sub_140A9415C @ 0x140A9415C
 * Callers:
 *     sub_140A93398 @ 0x140A93398 (sub_140A93398.c)
 * Callees:
 *     sub_140A94560 @ 0x140A94560 (sub_140A94560.c)
 */

void __fastcall sub_140A9415C(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r11d
  _QWORD *v3; // r8
  __int64 i; // r9
  PVOID *v5; // rcx
  PVOID *j; // rax
  unsigned int v7; // edi
  int v8; // ebx

  v2 = 0;
  v3 = (_QWORD *)(a1 + 32);
  for ( i = a1; v2 < *(_DWORD *)(i + 24); ++v2 )
  {
    v5 = (PVOID *)xmmword_140C1B1F0;
LABEL_10:
    if ( v5 == &xmmword_140C1B1F0 )
    {
      if ( (unsigned int)sub_140A94560(&off_140D4F470, a2, v3, i) != 1
        && (unsigned int)sub_140A94560(&off_140D4E690, a2, v3, i) != 1
        && (unsigned int)sub_140A94560(&off_140D4E190, a2, v3, i) != 1 )
      {
        sub_140A94560(&off_140D50040, a2, v3, i);
      }
    }
    else
    {
      for ( j = (PVOID *)v5[3]; ; j = (PVOID *)*j )
      {
        if ( j == v5 + 3 )
        {
          v5 = (PVOID *)*v5;
          goto LABEL_10;
        }
        v7 = *((_DWORD *)j + 6);
        a2 = j + 4;
        v8 = 0;
        if ( v7 )
          break;
LABEL_7:
        ;
      }
      while ( *v3 != a2[1] )
      {
        a2 += 2;
        if ( ++v8 >= v7 )
          goto LABEL_7;
      }
      *v3 = *a2;
    }
    v3 += 2;
  }
}
