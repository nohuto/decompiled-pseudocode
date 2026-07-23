/*
 * XREFs of sub_140B1D878 @ 0x140B1D878
 * Callers:
 *     sub_140A5A5D0 @ 0x140A5A5D0 (sub_140A5A5D0.c)
 * Callees:
 *     sub_1403CE1A4 @ 0x1403CE1A4 (sub_1403CE1A4.c)
 *     sub_1403CE2B4 @ 0x1403CE2B4 (sub_1403CE2B4.c)
 *     sub_140B1D9DC @ 0x140B1D9DC (sub_140B1D9DC.c)
 *     sub_140B1DB9C @ 0x140B1DB9C (sub_140B1DB9C.c)
 *     sub_140B1DD34 @ 0x140B1DD34 (sub_140B1DD34.c)
 *     sub_140B1DEB4 @ 0x140B1DEB4 (sub_140B1DEB4.c)
 */

__int64 sub_140B1D878()
{
  __int64 result; // rax

  dword_140C09788 = dword_140D050F0;
  result = sub_140B1D9DC(&unk_140C4DE80, qword_140C4DF40, (unsigned int)dword_140C4DF38, 0LL);
  if ( (int)result >= 0 )
  {
    qword_140C4DF08 = 0xFFFFFFLL;
    dword_140C4DF14 = 2;
    result = sub_140B1D9DC(&unk_140C4E040, qword_140C4E100, (unsigned int)dword_140C4E0F8, 0LL);
    if ( (int)result >= 0 )
    {
      qword_140C4E0C8 = 0xFFFFFFLL;
      dword_140C4E0D4 = 3;
      result = sub_140B1D9DC(&unk_140C4DF60, qword_140C4E020, (unsigned int)dword_140C4E018, 0LL);
      if ( (int)result >= 0 )
      {
        dword_140C4DFF4 = 2;
        result = sub_140B1D9DC(&unk_140C4E120, qword_140C4E1E0, (unsigned int)dword_140C4E1D8, 0LL);
        if ( (int)result >= 0 )
        {
          dword_140C4E1B4 = 3;
          result = sub_140B1DEB4();
          if ( (int)result >= 0 )
          {
            result = sub_140B1DD34();
            if ( (int)result >= 0 )
            {
              result = sub_1403CE2B4();
              if ( (int)result >= 0 )
              {
                result = sub_1403CE1A4(0LL, 0x200000uLL);
                if ( (int)result >= 0 )
                {
                  result = sub_1403CE1A4(0xFEE00000uLL, 0x100000uLL);
                  if ( (int)result >= 0 )
                    return sub_140B1DB9C();
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
