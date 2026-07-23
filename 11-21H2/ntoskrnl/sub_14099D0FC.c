/*
 * XREFs of sub_14099D0FC @ 0x14099D0FC
 * Callers:
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 *     sub_1407EE7A0 @ 0x1407EE7A0 (sub_1407EE7A0.c)
 *     sub_14098CBC0 @ 0x14098CBC0 (sub_14098CBC0.c)
 * Callees:
 *     sub_140369100 @ 0x140369100 (sub_140369100.c)
 *     sub_1405DC298 @ 0x1405DC298 (sub_1405DC298.c)
 */

void __fastcall sub_14099D0FC(unsigned __int64 a1, unsigned int a2)
{
  __int64 v2; // r8

  v2 = 0LL;
  if ( !byte_140C2330D && a1 >= MEMORY[0xFFFFF78000000014] && MEMORY[0xFFFFF78000000014] - a1 >= 0x10C388D000LL )
    v2 = a1;
  if ( qword_140C22708 != v2 )
  {
    qword_140C22708 = v2;
    if ( dword_140D05240 )
    {
      if ( byte_140C22731 && (sub_140369100(a2) || !*((_DWORD *)qword_140C231B8 + 22)) )
        sub_1405DC298();
    }
  }
}
