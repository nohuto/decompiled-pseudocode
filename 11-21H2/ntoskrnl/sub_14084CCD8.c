/*
 * XREFs of sub_14084CCD8 @ 0x14084CCD8
 * Callers:
 *     sub_140B22004 @ 0x140B22004 (sub_140B22004.c)
 * Callees:
 *     sub_1403D064C @ 0x1403D064C (sub_1403D064C.c)
 *     sub_14084CD18 @ 0x14084CD18 (sub_14084CD18.c)
 *     sub_14084D204 @ 0x14084D204 (sub_14084D204.c)
 */

__int64 sub_14084CCD8()
{
  __int64 result; // rax
  unsigned int v1; // ebx

  unk_140D3CDE0 = 257;
  byte_140D3CA36 = 1;
  result = sub_14084D204();
  if ( (int)result >= 0 )
  {
    result = sub_14084CD18();
    v1 = result;
    if ( (int)result >= 0 )
    {
      sub_1403D064C();
      return v1;
    }
  }
  return result;
}
