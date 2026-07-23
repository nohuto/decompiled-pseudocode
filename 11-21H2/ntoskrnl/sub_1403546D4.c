/*
 * XREFs of sub_1403546D4 @ 0x1403546D4
 * Callers:
 *     sub_140353FB0 @ 0x140353FB0 (sub_140353FB0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1403546D4(__int64 a1)
{
  char v1; // dl

  v1 = 1;
  if ( byte_140D06A4F )
  {
    if ( qword_140C2B1B8 )
    {
      if ( (unsigned __int64)(qword_140C2B1A8 - qword_140C2B1B8) < 0x2710 )
        ++dword_140C2B1C4;
      qword_140C2B1B8 = 0LL;
    }
    if ( a1 - qword_140C2B1A8 < (unsigned __int64)DesiredTime )
    {
      if ( (unsigned int)dword_140C2B1C4 > 3 )
        return 0;
    }
    else
    {
      dword_140C2B1C4 = 0;
    }
  }
  return v1;
}
