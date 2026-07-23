/*
 * XREFs of sub_14091B784 @ 0x14091B784
 * Callers:
 *     sub_14091B730 @ 0x14091B730 (sub_14091B730.c)
 *     sub_14091B7D8 @ 0x14091B7D8 (sub_14091B7D8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14091B784(unsigned int *a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned int v5; // r8d
  unsigned int v6; // edx

  v4 = *a1;
  if ( a1[1] == (_DWORD)v4 )
  {
    return (unsigned int)-1073741670;
  }
  else
  {
    v5 = 0;
    v6 = 0;
    if ( (_DWORD)v4 )
    {
      while ( *(_QWORD *)(*((_QWORD *)a1 + 1) + 8LL * v6) != a2 )
      {
        if ( ++v6 >= (unsigned int)v4 )
          goto LABEL_6;
      }
      return (unsigned int)-1073740008;
    }
    else
    {
LABEL_6:
      *(_QWORD *)(*((_QWORD *)a1 + 1) + 8 * v4) = a2;
      ++*a1;
    }
  }
  return v5;
}
