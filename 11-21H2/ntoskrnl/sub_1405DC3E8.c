/*
 * XREFs of sub_1405DC3E8 @ 0x1405DC3E8
 * Callers:
 *     sub_1405DC298 @ 0x1405DC298 (sub_1405DC298.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1405DC3E8(unsigned __int64 *a1, int *a2)
{
  unsigned __int64 v2; // r10
  char v3; // bl
  int v4; // r11d
  unsigned __int64 v5; // r9

  v2 = 0LL;
  v3 = 0;
  v4 = 0;
  v5 = 10000000LL * *((unsigned int *)qword_140C231B8 + 22);
  if ( dword_140C22710 )
  {
    v3 = 1;
    LOBYTE(v4) = dword_140C22710 != 1;
    v4 += 3;
  }
  else if ( qword_140C22708 > MEMORY[0xFFFFF78000000014] && dword_140D05240 == 1 )
  {
    if ( MEMORY[0xFFFFF78000000008] - qword_140C22738 <= 10000000 * (unsigned __int64)(unsigned int)dword_140D052C0 )
      v2 = 10000000LL * (unsigned int)dword_140D052C0 - (MEMORY[0xFFFFF78000000008] - qword_140C22738);
    if ( (__int64)(v2 + MEMORY[0xFFFFF78000000014]) < qword_140C22708
                                                    - 10000000 * ((unsigned int)dword_140D0523C + 60LL)
      && (!v2 || !v5 || v2 < v5) )
    {
      v3 = 1;
      v4 = 2;
    }
    v2 = -(__int64)v2;
  }
  if ( v5 && !v4 )
  {
    v3 = 1;
    v2 = -10000000LL * *((unsigned int *)qword_140C231B8 + 22);
    v4 = 1;
  }
  *a1 = v2;
  if ( a2 )
    *a2 = v4;
  return v3;
}
