/*
 * XREFs of sub_140807718 @ 0x140807718
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     sub_14098C390 @ 0x14098C390 (sub_14098C390.c)
 *     sub_14098FDE4 @ 0x14098FDE4 (sub_14098FDE4.c)
 *     sub_14098FFD0 @ 0x14098FFD0 (sub_14098FFD0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140807718(unsigned int *a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C5AD78 )
  {
    LOBYTE(a2) = *((_BYTE *)a1 + 4);
    return sub_14042A5E0(*a1, a2);
  }
  return result;
}
