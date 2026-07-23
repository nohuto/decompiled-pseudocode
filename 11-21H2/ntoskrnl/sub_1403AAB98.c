/*
 * XREFs of sub_1403AAB98 @ 0x1403AAB98
 * Callers:
 *     sub_1403AAB4C @ 0x1403AAB4C (sub_1403AAB4C.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_1403AAB98(__int64 a1, char a2, __int64 a3)
{
  unsigned __int64 v5; // rax
  unsigned int v6; // edi
  __int64 v7; // rbp

  LOBYTE(v5) = byte_140C549B0;
  if ( !byte_140C549B0 )
  {
    v5 = __readmsr(0x179u);
    byte_140C549B0 = v5;
  }
  if ( byte_140C549B0 )
  {
    v6 = 640;
    v7 = (unsigned __int8)byte_140C549B0;
    do
    {
      LOBYTE(v5) = sub_14042A5E0(a3, v6);
      if ( a2 )
      {
        LODWORD(v5) = sub_14042A5E0(a3, v6);
        if ( (v5 & 0x40000000) != 0 )
          LOBYTE(v5) = sub_14042A5E0(a3, v6);
      }
      ++v6;
      --v7;
    }
    while ( v7 );
  }
  return v5;
}
