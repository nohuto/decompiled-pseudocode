/*
 * XREFs of sub_1C00811A0 @ 0x1C00811A0
 * Callers:
 *     sub_1C007B3C0 @ 0x1C007B3C0 (sub_1C007B3C0.c)
 *     sub_1C007B420 @ 0x1C007B420 (sub_1C007B420.c)
 *     sub_1C007B470 @ 0x1C007B470 (sub_1C007B470.c)
 *     sub_1C007B510 @ 0x1C007B510 (sub_1C007B510.c)
 *     sub_1C007C8A0 @ 0x1C007C8A0 (sub_1C007C8A0.c)
 *     sub_1C007D570 @ 0x1C007D570 (sub_1C007D570.c)
 * Callees:
 *     sub_1C00810F0 @ 0x1C00810F0 (sub_1C00810F0.c)
 *     sub_1C00813B0 @ 0x1C00813B0 (sub_1C00813B0.c)
 *     sub_1C00815A8 @ 0x1C00815A8 (sub_1C00815A8.c)
 */

__int64 __fastcall sub_1C00811A0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rcx

  result = sub_1C00810F0(a1, a2);
  if ( (int)result >= 0 )
  {
    if ( a3 >= 0x40 )
      result = sub_1C00813B0(a1);
    else
      result = sub_1C00815A8(a1);
    if ( (int)result >= 0 )
    {
      v6 = *(unsigned int *)(a1 + 12);
      if ( (unsigned int)(v6 + 1) <= *(_DWORD *)(a1 + 8) )
      {
        *(_BYTE *)(v6 + *(_QWORD *)a1) = -13;
        ++*(_DWORD *)(a1 + 12);
        return 0LL;
      }
      else
      {
        return 3221225507LL;
      }
    }
  }
  return result;
}
