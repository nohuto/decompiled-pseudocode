/*
 * XREFs of sub_14080A3F8 @ 0x14080A3F8
 * Callers:
 *     sub_14039A210 @ 0x14039A210 (sub_14039A210.c)
 *     sub_14098CA3C @ 0x14098CA3C (sub_14098CA3C.c)
 *     sub_140B3116C @ 0x140B3116C (sub_140B3116C.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_14080A3F8(_DWORD *a1)
{
  if ( a1 )
  {
    if ( dword_140C5AE1C )
    {
      switch ( dword_140C5AE1C )
      {
        case 1:
          *a1 = 2;
          break;
        case 2:
          *a1 = 3;
          break;
        case 3:
          *a1 = 4;
          break;
        case 6:
          *a1 = 1;
          break;
        case 7:
          *a1 = 5;
          break;
      }
    }
    else
    {
      *a1 = 0;
    }
  }
  return dword_140C5AE20 == 2;
}
