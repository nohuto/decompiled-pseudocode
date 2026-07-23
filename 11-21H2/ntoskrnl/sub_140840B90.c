/*
 * XREFs of sub_140840B90 @ 0x140840B90
 * Callers:
 *     sub_140840AEC @ 0x140840AEC (sub_140840AEC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140840B90(_QWORD *a1)
{
  __int64 v1; // rdx
  int v3; // r8d
  _QWORD *v4; // r11
  __int64 v5; // rcx

  v1 = 0LL;
  if ( a1 )
  {
    v3 = 0;
    if ( dword_140C18E80 )
    {
      while ( 1 )
      {
        v4 = (_QWORD *)qword_140C16E80[v3];
        v5 = *a1 - *v4;
        if ( *a1 == *v4 )
          v5 = a1[1] - v4[1];
        if ( !v5 )
          break;
        if ( ++v3 >= (unsigned int)dword_140C18E80 )
          return v1;
      }
      return qword_140C16E80[v3];
    }
  }
  return v1;
}
