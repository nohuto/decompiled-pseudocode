/*
 * XREFs of sub_1403D0428 @ 0x1403D0428
 * Callers:
 *     HalInitializeBios @ 0x1403D0150 (HalInitializeBios.c)
 * Callees:
 *     sub_1403D04EC @ 0x1403D04EC (sub_1403D04EC.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char __fastcall sub_1403D0428(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char result; // al

  memset(&unk_140C4C840, 0, 0x800uLL);
  qword_140C4C810 = 0LL;
  qword_140C4C838 = a2;
  qword_140C4C818 = a3;
  result = sub_1403D04EC();
  byte_140C4E841 = 1;
  qword_140C54B70 = a4;
  dword_140C54B68 = 0x2000;
  if ( qword_140C01C80 )
  {
    if ( !byte_140C54B60 )
    {
      byte_140C54B60 = 1;
      qword_140C4C828 = (__int64)sub_1403DDB70;
      qword_140C4C830 = (__int64)sub_14050BE70;
      result = dword_140C54BA0;
      byte_140C54B6D = -1;
      if ( dword_140C54BA0 )
      {
        if ( dword_140C54BA0 != 255 )
        {
          result = dword_140C54BA0 + 1;
          byte_140C54B6D = dword_140C54BA0 + 1;
        }
      }
    }
  }
  return result;
}
