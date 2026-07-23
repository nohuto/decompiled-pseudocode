/*
 * XREFs of sub_1402255A0 @ 0x1402255A0
 * Callers:
 *     <none>
 * Callees:
 *     KeIsSubsetAffinityEx @ 0x14020EF50 (KeIsSubsetAffinityEx.c)
 *     sub_14022560C @ 0x14022560C (sub_14022560C.c)
 */

char sub_1402255A0()
{
  __int64 k; // rbx
  __int64 i; // rbx
  __int64 j; // rbx

  if ( dword_140D06AB8 )
  {
    for ( i = qword_140D06970; (__int64 *)i != &qword_140D06970; i = *(_QWORD *)i )
    {
      if ( *(_BYTE *)(i + 989) && !(unsigned int)KeIsSubsetAffinityEx(i + 24, (__int64)&dword_140C0D000) )
      {
        for ( j = qword_140D06970; (__int64 *)j != &qword_140D06970; j = *(_QWORD *)j )
        {
          if ( !(unsigned int)KeIsSubsetAffinityEx(j + 24, (__int64)&dword_140C0D000) )
            *(_BYTE *)(j + 989) = 1;
        }
        break;
      }
    }
  }
  for ( k = qword_140D06970; (__int64 *)k != &qword_140D06970; k = *(_QWORD *)k )
  {
    if ( *(_BYTE *)(k + 989) )
    {
      if ( (unsigned __int8)sub_14022560C(k) )
        *(_BYTE *)(k + 990) = 1;
      *(_BYTE *)(k + 989) = 0;
    }
  }
  return 1;
}
