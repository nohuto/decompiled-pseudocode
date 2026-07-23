/*
 * XREFs of sub_1406289C8 @ 0x1406289C8
 * Callers:
 *     sub_140628A6C @ 0x140628A6C (sub_140628A6C.c)
 * Callees:
 *     sub_1403D981C @ 0x1403D981C (sub_1403D981C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407DE98C @ 0x1407DE98C (sub_1407DE98C.c)
 */

__int64 sub_1406289C8()
{
  __int64 result; // rax

  if ( byte_140C1A8A0 )
  {
    qword_140C1A800 = *(_QWORD *)(*(_QWORD *)qword_140C51F48 + 16896LL);
    return 0LL;
  }
  else
  {
    result = sub_1403D981C((_SLIST_HEADER **)&qword_140C1A820, 1);
    if ( (int)result >= 0 )
    {
      if ( qword_140C1A820 )
      {
        memset(&unk_140D019A8, 0, 0xF0uLL);
        dword_140D019AC = -1;
        dword_140D019B0 = -1;
        result = sub_1407DE98C(&qword_140C1A820, &unk_140D019A8);
        if ( (int)result >= 0 )
          qword_140C1A800 = qword_140D019E0;
      }
      else
      {
        return 3221225506LL;
      }
    }
  }
  return result;
}
