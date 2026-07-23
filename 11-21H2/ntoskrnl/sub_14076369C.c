/*
 * XREFs of sub_14076369C @ 0x14076369C
 * Callers:
 *     RtlValidAcl @ 0x1407B4A50 (RtlValidAcl.c)
 * Callees:
 *     sub_14076370C @ 0x14076370C (sub_14076370C.c)
 */

bool __fastcall sub_14076369C(__int64 a1)
{
  unsigned __int64 v1; // rdx
  int v2; // eax
  bool result; // al

  result = 0;
  if ( a1 )
  {
    v1 = *(unsigned __int16 *)(a1 + 2);
    if ( ((v1 + 3) & 0xFFFFFFFFFFFFFFFCuLL) == v1 && (unsigned int)v1 >= 0x10 && *(_BYTE *)(a1 + 8) == 1 )
    {
      v2 = *(unsigned __int8 *)(a1 + 9);
      if ( (unsigned __int8)v2 <= 0xFu
        && v1 >= (unsigned __int64)(unsigned int)(4 * v2 + 16) + 20
        && (unsigned __int8)sub_14076370C(a1 + 8 + (unsigned int)(4 * v2 + 8), (unsigned int)(v1 - (4 * v2 + 8) - 8)) )
      {
        return 1;
      }
    }
  }
  return result;
}
