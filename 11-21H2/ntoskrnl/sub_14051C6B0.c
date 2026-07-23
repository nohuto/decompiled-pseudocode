/*
 * XREFs of sub_14051C6B0 @ 0x14051C6B0
 * Callers:
 *     sub_14051C8F0 @ 0x14051C8F0 (sub_14051C8F0.c)
 *     sub_14051CA0C @ 0x14051CA0C (sub_14051CA0C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14051C6B0(char a1, char a2, __int64 a3)
{
  unsigned int v3; // r10d
  int *v4; // r11
  int v5; // eax

  v3 = -1073741823;
  v4 = *(int **)(*(_QWORD *)&KeGetPcr()->HalReserved[6] + 32LL);
  if ( v4 )
  {
    v5 = *v4;
    if ( a1 )
    {
      v5 |= 9u;
      *v4 = v5;
    }
    if ( a2 )
    {
      v5 |= 5u;
      *((_QWORD *)v4 + 1) = a3;
      *v4 = v5;
    }
    v3 = 0;
    if ( (v5 & 0x10) != 0 && !a2 )
      return (unsigned int)-1073741823;
  }
  return v3;
}
