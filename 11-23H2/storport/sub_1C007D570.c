/*
 * XREFs of sub_1C007D570 @ 0x1C007D570
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C007A4E8 @ 0x1C007A4E8 (sub_1C007A4E8.c)
 *     sub_1C0081138 @ 0x1C0081138 (sub_1C0081138.c)
 *     sub_1C00811A0 @ 0x1C00811A0 (sub_1C00811A0.c)
 *     sub_1C0081208 @ 0x1C0081208 (sub_1C0081208.c)
 *     sub_1C0081248 @ 0x1C0081248 (sub_1C0081248.c)
 *     sub_1C00813B0 @ 0x1C00813B0 (sub_1C00813B0.c)
 *     sub_1C00815A8 @ 0x1C00815A8 (sub_1C00815A8.c)
 */

__int64 __fastcall sub_1C007D570(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 *a4)
{
  __int64 result; // rax
  unsigned int i; // edi
  char v9[24]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)v9 = 0x80200000000LL;
  sub_1C007A4E8(v9, 8u);
  result = sub_1C0081138(a3, 393216LL, v9);
  if ( (int)result >= 0 )
  {
    result = sub_1C00811A0(a3, 393217LL, *a4);
    if ( (int)result >= 0 )
    {
      result = sub_1C0081208(a3, 393218LL);
      if ( (int)result >= 0 )
      {
        for ( i = 0; i < *(_DWORD *)(a1 + 36); ++i )
        {
          if ( *(unsigned int *)(a1 + 40) >= 0x40uLL )
            result = sub_1C00813B0(a3);
          else
            result = sub_1C00815A8(a3);
          if ( (int)result < 0 )
            return result;
        }
        return sub_1C0081248(a3);
      }
    }
  }
  return result;
}
